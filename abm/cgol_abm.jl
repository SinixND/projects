#= HEADER =#

using Pkg
Pkg.activate(".")
Pkg.instantiate()

using Agents

#= INPUT =#

#include("settings.jl")
bsr = 30 #boardsize rows
bsc = 12 #boardsize columns
ldens = .66 #life density as decimal (< 1)
ltime = 100 #lifetime in ticks
fps = 1 #frames per second

#= PREFACE =#

#debugger
function dbg(dbg_bp, args...)
	println("### STRT DBG BP # \"", dbg_bp, "\" ###")
	println(args)
	println("### FNSH DBG BP # \"", dbg_bp, "\" ###")
	readline()
end

#verbose msg
function vbs(msg::String)
    println("MSG: \"", msg, "\"")
end

#= MAIN =#

#make agent
#=
mutable struct agent <: AbstractAgent
	id::Int
	pos::Dims{2}
    status::Bool
end
=#
@agent agent GridAgent{2} begin
    status::Bool
end

#make space
dims = (bsr, bsc)
space = GridSpace(dims; periodic = true, metric = :chebyshev)

#define rules: D(eath), R(eproduce), O(verpopulated)
rules = Dict(:D => 1, :R => 3, :O => 4)

#make model
model = ABM(agent, space)

#populate space
function fill_void(agent, model, ldens)
	#agent id
	idn = 1 
	for x in 1:dims[1], y in 1:dims[2]
		#implement_life_density
		if rand(0:.0001:1) <= ldens 
			add_agent_pos!(agent(idn, (x, y), true), model)
		else
			add_agent_pos!(agent(idn, (x, y), false), model)
		end
        idn += 1
	end
end

#define step
function agent_step!(agent, model)
	caca::Int8 = 0 #count_adjacent_cells_alive
	for ac in nearby_agents(agent, model)
		if ac.status == true
			caca += 1
		end
	end
    if caca <= rules[:D] || caca >= rules[:O]
		agent.status = false
	elseif caca == :R
		agent.status = true
	end
end

step!(model, agent_step!,ltime)

#=

using InteractiveDynamics 
using CairoMakie
CairoMakie.activate!()
  
groupcolor(a) = a.status == true ? :white : :black 
groupmarker(a) = :rect 
figure, _ = abmplot(model; ac = groupcolor, am = groupmarker, as = 10) 
figure # returning the figure displays it 
 
model = initialize(); 
abmvideo( 
     "game_of_life.mp4", model, agent_step!; 
     ac = groupcolor, am = groupmarker, as = 10, 
     framerate = 4, frames = 20, 
     title = "Conways Game of Life" 
 ) 

=#


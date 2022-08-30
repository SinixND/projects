#= HEADER =#

using Pkg
Pkg.activate(".")
Pkg.instantiate()

using Agents, AgentsPlots

#= INPUT =#

#include("settings.jl")
bsc = 12 #boardsize columns
bsr = 30 #boardsize rows
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
mutable struct Cell <: AbstractAgent
	id::Int
	pos::Dims{2}
    status::Bool
end

#make space
dims = (bsc, bsr)
Void = GridSpace(dims; periodic = true, moore = true)

#define properties: D(eath), R(eproduce), O(verpopulated)
Rules = Dict(:D => 1, :R => 3, :O => 4)

#make model
CGoL = ABM(Cell, Void; Rules)

#define step
function model_step!(Cell, CGoL)
	caca::Int8 = 0 #count_adjacent_cells_alive
	for ac in nearby_agents(Cell, CGoL)
		if ac.status == true
			caca += 1
		end
	end
	if caca <= :D || caca >= :O
		Cell.status = false
	elseif caca == :R
		Cell.status = true
	end
end

#populate space
function fill_void(Cell, CGoL, ldens)
	#agent id
	idn = 1 
	for x in 1:dims[1], y in 1:dims[2]
		#implement_life_density
		if rand(0:.0001:1) <= ldens 
			add_agent_pos!(Cell(idn, (x, y), true), CGoL)
		else
			add_agent_pos!(Cell(idn, (x, y), false), CGoL)
		end
        idn += 1
	end
end

step!(CGoL, model_step!,ltime)

#=
#define color (ac) depending on status
ac(x) = x.status == true ? :black : :white
anim = @animate for i in 0:ltime
    i > 0 && step!(CGoL, dummystep, model_step!, 1)
	#as (size) dynamicly?
    p1 = plotabm(CGoL; ac = ac, as = 3, am = :square, showaxis = false)
end

gif(anim, "game_of_life.gif", fps = 5)

using Pkg
Pkg.activate(".")
Pkg.instantiate()

using GLMakie

#Plot with (maybe have to remove '"')
p = scatter 

include("plot_$p.jl")

bsr = 100 #boardsize rows
bsc = 100 #boardsize columns
ldens = .5 #life density as decimal (< 1)
ltime = 1000 #lifetime in ticks
fps = 10 #frames per second

#DEBUGGER
function dbg(dbg_bp, args...)
	println("#### STRT DBG BP # \"", dbg_bp, "\" ####")
	println(args)
	println("#### FNSH DBG BP # \"", dbg_bp, "\" ####")
	readline()
end

#VERBOSEMSG
function vbs(msg::String)
    println("MSG: \"", msg, "\"")
end

#populate_board
function populate_board(board, ldens)
    for n in 1:size(board)[1], m in 1:size(board)[2]
        #implement_life_density
        if rand(0:.0001:1) <= ldens 
			board[n, m] = Cell(3, 0, false)
        else
			board[n, m] = Cell(0, 0, false)
		end
    end
end

#initialize_visualizer
function initialize_visualizer(board)::Array
    #vbs("initialize_visualizer")
    #make_visualizer
    visualizer = Array{Char}(undef, size(board)[1], size(board)[2])
    return visualizer
end

#refresh_visualizer
function refresh_visualizer(board, visualizer)
    #vbs("refresh_visualizer")
    for n in 1:size(board)[1], m in 1:size(board)[2]
		if board[n, m].status == 3
            visualizer[n, m] = 'O'
        elseif board[n, m].status == 2
            visualizer[n, m] = 'o'
		elseif board[n, m].status == 1
			visualizer[n, m] = '.'
		else
			visualizer[n, m] = ' '
        end
    end
    show(stdout, "text/plain", visualizer)
end

#check_neighbour_valid
function check_neighbour_valid(n, limit)
    #vbs("check_neighbour_valid")
    if n == 0
       return limit
   elseif n == limit + 1
       return 1
   else
       return n
   end
end
   
#count_alive_neighbours
function count_alive_neighbours(n, m, board)
    #vbs("count_alive_neighbours")
    board[n, m].cnt_nghbr = 0
    for dn in [-1, 0, 1], dm in [-1, 0, 1]
        if dn == 0 && dm == 0
            #donothing
        else
			#dbg("old cnt_nghbr", board[n, m].cnt_nghbr)
			if board[check_neighbour_valid(n+dn, size(board)[1]), check_neighbour_valid(m+dm, size(board)[2])].status > 2
				board[n, m].cnt_nghbr = board[n, m].cnt_nghbr+1 
				#dbg("new cnt_nghbr", board[n, m].cnt_nghbr)
			else
				#donothing
			end
		end
    end
   board
end

#check_board
function check_board(board)
    #vbs("check_board")
    for n in 1:size(board)[1], m in 1:size(board)[2]
        count_alive_neighbours(n, m, board)
        #dbg("board[n, m].cnt_nghbr", n, m, board[n, m].cnt_nghbr)
        if board[n, m].cnt_nghbr == 2 
            if board[n, m].status < 3 && board[n, m].status > 0
                board[n, m].evo = board[n, m].status - 1
            else
                board[n, m].evo = board[n, m].status
            end
        elseif board[n, m].cnt_nghbr == 3
			board[n, m].evo = 3
		elseif board[n, m].status > 0
			board[n, m].evo = board[n, m].status - 1
		else
			board[n, m].evo = 0
        end
        #dbg("From status -> evo", board[n, m].status, " -> ", board[n, m].evo)
    end
end

#update_cells
function update_cells(board)
    #vbs("update_cells")
    for n in 1:size(board)[1], m in 1:size(board)[2]
        board[n, m].status = board[n, m].evo
    end
end

#= main =#
#make_type_cell
mutable struct Cell
	status::Int8 
    cnt_nghbr::Int8
	evo::Int8
end

#initialize_board
#vbs("initialize_board")
board = Array{Cell}(undef, bsr, bsc)

scr_res = Makie.primary_resolution()
fig = Figure(resolution = (floor(scr_res[2]), floor(scr_res[2])), backgroundcolor = :black)
plt = Axis(fig[1, 1], aspect = 1, backgroundcolor = :black)
resize_to_layout!(fig) 
display(fig) 

##visualizer = initialize_visualizer(board)

populate_board(board, ldens)
plot_elements!(board, fig, plt)
##refresh_visualizer(board, visualizer)

for i in 1:ltime
    plt.title = "Day $i"
	sleep(1/fps)
	check_board(board)
	update_cells(board)
	plot_elements!(board, fig, plt)
	##refresh_visualizer(board, visualizer)
end

exit()

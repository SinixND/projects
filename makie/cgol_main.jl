include("cgol_settings.jl")
include("cgol_functions.jl")

using Pkg
Pkg.activate(".")
Pkg.instantiate()

using GLMakie

bsr = 30 #boardsize rows
bsc = 12 #boardsize columns
ldens = .5 #life density as decimal (< 1)
ltime = 100 #lifetime in ticks
fps = 1 #frames per second

#DEBUGGER
function dbg(dbg_bp, args...)
	println("### STRT DBG BP # \"", dbg_bp, "\" ###")
	println(args)
	println("### FNSH DBG BP # \"", dbg_bp, "\" ###")
	readline()
end

#VERBOSEMSG
function vbs(msg::String)
    println("MSG: \"", msg, "\"")
end

#make_type_cell
mutable struct Cell
    status::Bool
    cnt_nghbr::Int8
    evo::Bool
end

#initialize_board
#vbs("initialize_board")
board = Array{Cell}(undef, bsr, bsc)

#populate_board
function populate_board(board, ldens)
    for n in 1:size(board)[1], m in 1:size(board)[2]
        #implement_life_density
        if rand(0:.0001:1) <= ldens 
            board[n, m] = Cell(true, 0, false)
        else
            board[n, m] = Cell(false, 0, false)
        end
    end
end

#dev_populate_board
function dev_populate_board(bsr, bsc, ldens, board)
    for n in 1:bsr, m in 1:bsc
		board[n, m] = Cell(false, 0, false)
    end
	#middles
	#=
	board[3, 3].status = true
	board[3, 8].status = true
	board[8, 3].status = true
	board[8, 8].status = true
	=#
	#1
	board[3, 2].status = true
	#2
	board[3, 7].status = true
	board[3, 9].status = true
	#3
	board[8, 2].status = true
	board[8, 4].status = true
	board[7, 3].status = true
	#4
	board[8, 7].status = true
	board[8, 9].status = true
	board[7, 8].status = true
	board[9, 8].status = true
end

#initialize_visualizer
function initialize_visualizer(bsr, bsc)::Array
    #vbs("initialize_visualizer")
    #make_visualizer
    visualizer = Array{Char}(undef, bsr, bsc)
    return visualizer
end

#refresh_visualizer
function refresh_visualizer(bsr, bsc, board, visualizer)
    #vbs("refresh_visualizer")
    for n in 1:bsr, m in 1:bsc
        if board[n, m].status == true
            visualizer[n, m] = 'X' 
        else
            visualizer[n, m] = ' '
        end
    end
    show(stdout, "text/plain", visualizer)
end

#initialize_plot
function initialize_plot(board)
	screen_resolution = Makie.primary_resolution()
	plot = Figure(resolution = (/board(size)[1],/board(size)[2]),figure_padding = 1, backgroundcolor = :black);
    return plot
end

#check_valid_neighbours
function check_valid_neighbours(n, limit)
    #vbs("check_valid_neighbours")
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
            if board[check_valid_neighbours(n+dn, size(board)[1]), check_valid_neighbours(m+dm, size(board)[2])].status == true
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
        count_alive_neighbours(n, m, board, size(board)[1], size(board)[2])
        #dbg("board[n, m].cnt_nghbr", n, m, board[n, m].cnt_nghbr)
        if board[n, m].cnt_nghbr == 2
            board[n, m].evo = board[n, m].status
        elseif board[n, m].cnt_nghbr == 3
            board[n, m].evo = true
        else
            board[n, m].evo = false
        end
        #dbg("From status -> evo", board[n, m].status, " -> ", board[n, m].evo)
    end
    #board
end

#update_cells
function update_cells(board)
    #vbs("update_cells")
    for n in 1:size(board)[1], m in 1:size(board)[2]
        board[n, m].status = board[n, m].evo
    end
end

#plot_element
function plot_element!(board, plot)
    #vbs("plot_element!")
    for n in 1:size(board)[1], m in 1:size(board)[2]
        if board[n, m].status == true
            scatter()
        else
            scatter()
        end
    end
    show(stdout, "text/plain", plot)
end

#main
populate_board(board, ldens)
check_valid_neighbour(n, limit)
count_alive_neighbours(n, m, board)
board_step!(board)
#initialize_plot()
#board_step!()

#=
plot = initialize_plot(bsr, bsc)
sleep(1/fps)
=#
exit()


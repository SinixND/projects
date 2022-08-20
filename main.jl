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

#get_settings
#include("settings.jl")
bsr = 10 #boardsize rows
bsc = 10 #boardsize columns
ldens = .4 #life density as decimal (< 1)
ltime = 100 #lifetime in ticks
stime = 1.0 #sleeptime (+executiontime == lifetime)

#make_type_cell
mutable struct Cell
    status::Bool
    cnt_nghbr::Int8
    evo::Bool
end

#initialize_board
function initialize_board(bsr, bsc)::Array
    #vbs("initialize_board")
    #make_board
    board = Array{Cell}(undef, bsr, bsc)
    return board
end

#populate_board
function populate_board(bsr, bsc, ldens, board)
    #vbs("populate_board")
    for n in 1:bsr, m in 1:bsc
        #implement_life_density
        if rand(0:.0001:1) <= ldens 
            board[n, m] = Cell(true, 0, false)
        else
            board[n, m] = Cell(false, 0, false)
        end
    end
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
    visualizer
end

#check_values
function check_values(x, limit)
    #vbs("check_values")
    if x == 0
       return limit
   elseif x == limit + 1
       return 1
   else
       return x
   end
end
   
#check_neighbours
function check_neighbours(n, m, board, bsr, bsc)
    #vbs("check_neighbours")
    board[n, m].cnt_nghbr = 0
    for dn in [-1, 0, 1], dm in [-1, 0, 1]
        if dn == 0 && dm == 0
            #donothing
        end
        #dbg("old cnt_nghbr", board[n, m].cnt_nghbr)
        if board[check_values(n+dn, bsr), check_values(m+dm, bsc)].status == true
            board[n, m].cnt_nghbr = board[n, m].cnt_nghbr+1 
            #dbg("new cnt_nghbr", board[n, m].cnt_nghbr)
        else
            #donothing
        end
    end
   board
end

#check_board
function check_board(bsr, bsc, board)
    #vbs("check_board")
    for n in 1:bsr, m in 1:bsc
		check_neighbours(n, m, board, bsr, bsc)
        dbg("board[n, m].cnt_nghbr", board[n, m].cnt_nghbr)
        if board[n, m].cnt_nghbr == 2
            board[n,m].evo = board[n,m].status
        elseif board[n, m].cnt_nghbr == 3
            board[n,m].evo = true
        else
            board[n, m].evo = false
        end
        dbg("From status -> evo", board[n, m].status, " -> ", board[n, m].evo)
    end
    board
end

#update_cells
function update_cells(bsr, bsc, board)
    vbs("update_cells")
    for n in 1:bsr, m in 1:bsc
        if board[n, m].evo == true
            board[n, m].status = true
        else
            board[n, m].status = false
        end
    end
end

#main
board = initialize_board(bsr, bsc)

populate_board(bsr, bsc, ldens, board)

visualizer = initialize_visualizer(bsr, bsc)

#start simulation
for tick in 1:ltime
    #check cells < check neighbours < check nghbr-status |> set cells evo
    check_board(bsr, bsc, board)
    #set cells status according to evo
    update_cells(bsr, bsc, board)
    #update visualizer matrix
    refresh_visualizer(bsr, bsc, board, visualizer)
    #stop for stime to "see" simulation
    sleep(stime)
end

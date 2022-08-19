#get_settings
#include("settings.jl")

bsize_n = 10 #boardsize rows
bsize_m = 10 #boardsize columns
ldens = .5 #life density as decimal (< 1)
ltime = 100 #lifetime in ticks
stime = 1.0 #sleeptime (+executiontime == lifetime)

#make_type_cell
mutable struct Cell
    status::Bool
    cnt_nghbr::Int8
    evo::Bool
end

#make_board
board = Array{Cell}(undef,bsize_n,bsize_m)

#make_display
display = Array{Char}(undef,bsize_n,bsize_m)

#populate_board
function populate_board()
    for n in 1:bsize_n, m in 1:bsize_m
        #implement_life_density
        if rand(0:.0001:1) <= ldens 
            board[n,m] = Cell(true, 0, false)
        else
            board[n,m] = Cell(false, 0, false)
        end
    end
end

#refresh_display
function refresh_display()
    for n in 1:bsize_n, m in 1:bsize_m
        if board[n,m].status == true
            display[n,m] = 'X' 
        else
            display[n,m] = ' '
        end
    end
    display
end

#check_values
function check_values(x,limit)
    if x == 0
       return limit
   elseif x == limit + 1
       return 1
   else
       return x
   end
end
   
#check_neighbours
function check_neighbours(n,m)
    board[n,m].cnt_nghbr = 0
    for dn in [-1, 0, 1], dm in [-1, 0, 1]
        if board[check_values(n+dn,bsize_n),check_values(m+dm,bsize_m)].status == true
            board[n,m].cnt_nghbr += board[n,m].cnt_nghbr 
        else
            #donothing
        end
    end
    board
end

#check_board
function check_board()
    for n in 1:bsize_n, m in 1:bsize_m
        check_neighbours(n,m)
        if board[n,m].cnt_nghbr == 2
            #donothing
        elseif board[n,m].cnt_nghbr == 3
            board[n,m].evo = true
        else
            board[n,m].evo = false
        end
    end
    board
end

#update_cells
function update_cells()
    for n in 1:bsize_n, m in 1:bsize_m
        if board[n,m].evo == true
            board[n,m].status = true
        else
            board[n,m].status = false
        end
    end
end

#main
populate_board()
#start simulation
for tick in 1:ltime
    #check cells < check neighbours < check nghbr-status |> set cells evo
    check_board()
    #set cells status according to evo
    update_cells()
    #update display matrix
    refresh_display()
    #stop for stime to "see" simulation
    sleep(stime)
end

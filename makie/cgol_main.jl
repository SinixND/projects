include("cgol_settings.jl")
include("cgol_functions.jl")

using Pkg
Pkg.activate(".")
Pkg.instantiate()

using GLMakie

#make_type_cell
mutable struct Cell
    status::Bool
    cnt_nghbr::Int8
    evo::Bool
end

#initialize_board
#vbs("initialize_board")
board = Array{Cell}(undef, bsr, bsc)

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


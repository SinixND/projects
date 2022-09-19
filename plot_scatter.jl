#plot_elements (make plot array?)
function plot_elements!(board, fig, plt)
    #vbs("plot_elements!")
	tpl3 = Tuple{Int, Int}[]
	tpl2 = Tuple{Int, Int}[]
	tpl1 = Tuple{Int, Int}[]
    for n in 1:size(board)[1], m in 1:size(board)[2]
        #dbg("DBG - status =", board[n, m].status)
        if board[n, m].status == 3
			append!(tpl3, [(m, n)])
        elseif board[n, m].status == 2
			append!(tpl2, [(m, n)])
        elseif board[n, m].status == 1
			append!(tpl1, [(m, n)])
        else
            #donothing
        end
    end
    empty!(plt)
    scatter!(plt, tpl3, color = :white)
	scatter!(plt, tpl2, color = :grey)
	scatter!(plt, tpl1, color = :darkgrey)
end


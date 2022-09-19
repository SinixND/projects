
#initialize_figure
function initialize_figure(board, fig, plt)
	scr_res = Makie.primary_resolution()
    fig = Figure(resolution = (floor(scr_res[1]*.75), floor(scr_res[2]*.75)), backgroundcolor = :black);
    plt = Axis(fig[1, 1])
    if size(board)[1] > size(board)[2]
        limits!(plt, 0, size(board)[1], 0, size(board)[1])
    else
        limits!(plt, 0, size(board)[2], 0, size(board)[2])
    end
    return fig
end


#plot_elements (make plot array?)
function plot_elements!(board, fig, plt)
    #vbs("plot_elements!")
	tpl3 = Tuple{Int8, Int8}[]
	tpl2 = Tuple{Int8, Int8}[]
	tpl1 = Tuple{Int8, Int8}[]
    for n in 1:size(board)[1], m in 1:size(board)[2]
        if board[n, m].status == 3
			append!(tpl3, [(m, n)])
        elseif board[n, m].status == 2
			append!(tpl2, [(m, n)])
        elseif board[n, m].status == 1
			append!(tpl1, [(m, n)])
        end
    end
    empty!(plt)
	scatter!(plt, tpl3, color = :darkgreen)
	scatter!(plt, tpl2, color = :green)
	scatter!(plt, tpl1, color = :lightgreen)
end


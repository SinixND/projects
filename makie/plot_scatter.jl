
#initialize_figure
function initialize_figure(board, fig, plt)
	screen_resolution = Makie.primary_resolution()
	fig = Figure(resolution = (floor(screen_resolution[1]*.75), floor(screen_resolution[2]*.75)), backgroundcolor = :black);
    plt = Axis(fig[1, 1])
    return fig
end


#plot_elements (make plot array?)
function plot_elements!(board, fig, plt)
    #vbs("plot_elements!")
	screen_resolution = Makie.primary_resolution()
	tpl = Tuple{Int8, Int8}[]
    for n in 1:size(board)[1], m in 1:size(board)[2]
        if board[n, m].status == true
			append!(tpl, [(m, n)])
        end
    end
	scatter!(tpl, color = :green)
end


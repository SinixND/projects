
#initialize_figure
function initialize_figure(board, fig, plt)
	screen_resolution = Makie.primary_resolution()
	fig = Figure();
    plt = Axis(fig[1, 1])
    return fig
end


#plot_elements
function plot_elements!(board, fig, plt)
	screen_resolution = Makie.primary_resolution()
    for n in 1:size(board)[1], m in 1:size(board)[2]
        if board[n, m].status == true
            #plot
        else
            #plot
        end
    end
end


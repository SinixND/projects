
#initialize_figure
function initialize_figure(board, fig, plt)
	screen_resolution = Makie.primary_resolution()
	fig = Figure();
	rects = fig[1:rows, 1:cols] = [
		Box(fig, color = :black)]
	fig
    return fig
end

#Boxcolor: RGB{Float64}(0.0, 1.0, 0.0)

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


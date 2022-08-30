for n in rows, m in cols
	if board[n,m].status == true
		draw Rectangle{
			width: floor(window.width/cols)
			height: floor(window.height/rows)
			posx: m*width-width
			posy: n*height-height
			alpha: dependent of state?


save("figure.png", f)

 
using ElectronDisplay
ElectronDisplay.CONFIG.single_window = true

using Plots

@userplot CirclePlot
@recipe function f(cp::CirclePlot)
	x, y, i = cp.args
	n = length(x)
	inds = circshift(1:n, 1 - i)
	linewidth --> range(0, 10, length = n)
	seriesalpha --> range(0, 1, length = n)
	aspect_ratio --> 1
	label --> false
	x[inds], y[inds]
end

n = 500
t = range(0, 2*pi, length = n)
x = sin.(t)
y = cos.(t)

anim = @animate for i in 1:n
	circleplot(x, y, i)
end

gif(anim, "animation.gif", fps = 15)




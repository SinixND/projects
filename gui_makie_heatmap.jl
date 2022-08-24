using CairoMakie

#x-axis
xs = [1, 2, 3, 1, 2, 3, 1, 2, 3]
#y-axis
ys = [1, 1, 1, 2, 2, 2, 3, 3, 3]
#field-color
zs = [1, 2, 3, 4, 5, 6, 7, 8, NaN]

heatmap(xs, ys, zs)

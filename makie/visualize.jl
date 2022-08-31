using GLMakie

#=

#create Observable object
o = Observable(1)

#create a listener
l1 = on(o) do val
   println("Observable now has value $val")
end

#update observable o with empty []
o[] = 2

=#

f = Figure()
ax = Axis(f[1, 1])
x = range(0, 10, length=100)
y = sin.(x)
scatter!(ax, x, y)
f


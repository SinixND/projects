using CairoMakie, SparseArrays

N = 100 # dimension of the sparse matrix
p = 0.1 # independent probability that an entry is zero

A = sprand(N, N, p)

f, ax, plt = spy(A, markersize = 4, marker = :circle, framecolor = :lightgrey)

hidedecorations!(ax) # remove axis labeling
ax.title = "Visualization of a random sparse matrix"

f


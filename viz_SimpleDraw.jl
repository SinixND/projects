import SimpleDraw as SD

#create a canvvs (could be AbstractMatrix)
image = falses(10, 10) #height, width

#create the shape
shape = SD.line(SD.Point(2,3), SD.Point(9,8))

#draw boolean img with color "true"
color = true

#draw shape on img
SD.draw!(image, shape, color)

#print boolean image using Unicode characters
SD.visualize(image)

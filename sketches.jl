for n in rows, m in cols
	if board[n,m].status == true
		draw Rectangle{
			width: floor(window.width/cols)
			height: floor(window.height/rows)
			posx: m*width-width
			posy: n*height-height
			alpha: dependent of state?
 

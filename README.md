display()
-draws all objects as defined in allObjects
-than draw the currentShape

keyPressed(key,x,y)
-if key=L|S|P
  -clear currentShape vertices set currentShape mode|letter to L|S|P
-if C
  -switch to terminal and enter r,g,b values
  -change currentColor to r,g,b and add to allObjects
-if Q
  -switch to terminal and enter function name
  -generate the opengl equivalent code for allObjects
  -create file with function name and write opengl code to it

mouse(button,state,x,y)
-if leftClick
  -add vertex position(x,y) to currentShape vertices set
-if rightClick
  -copy currentShape to allObjects
  -clear currentShape vertices


Objects
-------

allObjects
  shapeOrColor int array
    -if 0 , refer shape array for next command
    -if 1 , refer color array for next command
  shapeOrColorIndex int
    -points to number of objects defined
  shapeArray shape array
    -defines all shapes except current shape which is added on mouse right click
  shapeArrayIndex int
    -points to last shape object added to shape array
  colorArray color array
    -defines all color transformations to color which is added through command 'C'
  colorArrayIndex int
    -points to last color object added to color array

shape     instances:currentShape,shapeArray
  shapeMode = 'L'|'S'|'P'
    -stands for Lineloop,lineStrip,Polygon
  vertices vertex array
    -stores all vertices in the respective shape
  verticesIndex
    -points to last vertices added

color     instances:colorArray
  r,g,b float
    -represents each color red,green,blue

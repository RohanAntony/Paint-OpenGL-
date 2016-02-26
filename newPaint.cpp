#include <iostream>
#include <GL/glut.h>

using namespace std;

#include "Terminal.h"
#include "Monitor.h"
#include "Shape.h"
#include "AllObjects.h"


int main(int argc,char** argv){
  terminal.getNewColor();
  monitor.display();
  monitor.keyPressed('c',10,20);
  monitor.mouseClick(1,1,10,20);
  currentShape.setShapeType(GL_POLYGON);
  currentShape.addVertex(0.95,0.88);
  currentShape.addVertex(0.10,0.80);
  currentShape.addVertex(0.45,0.50);
  currentShape.removeVertex(10);
  return 0;
}

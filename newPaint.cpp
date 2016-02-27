#include <iostream>
#include <GL/glut.h>

using namespace std;

#include "Shape.h"
#include "Color.h"
#include "Terminal.h"
#include "Monitor.h"
#include "AllObjects.h"


int main(int argc,char** argv){
  terminal.getNewColor();
  monitor.display();
  monitor.keyPressed('c',10,20);
  monitor.mouseClick(1,1,10,20);
  allObjects.addNewColor(currentColor);
  allObjects.addNewShape(currentShape);
  cout<<allObjects.getNextObjectType(0)<<endl;
  cout<<allObjects.getNextObjectType(1)<<endl;
  return 0;
}

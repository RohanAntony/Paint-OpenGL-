#include <iostream>

using namespace std;

#include "Terminal.h"
#include "Monitor.h"



int main(int argc,char** argv){
  terminal.getNewColor();
  monitor.display();
  monitor.keyPressed('c',10,20);
  monitor.mouseClick(1,1,10,20);
  return 0;
}

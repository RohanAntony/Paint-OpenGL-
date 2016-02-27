class Monitor{
  public:
    void display(void);//use on glutDisplayFunc()
    void keyPressed(unsigned char,int,int);//use on glutKeyboardFunc()
    void mouseClick(int,int,int,int);//use on glutMouseFunc()
}monitor;

void Monitor::display(void){
  cout<<"Calling display function."<<endl;
  currentShape.removeVertex(10);
}

void Monitor::keyPressed(unsigned char key,int x,int y){
  cout<<"Calling keyPressed function."<<endl;
  currentShape.setShapeType(GL_POLYGON);
  /*
    L - set shape to line Loop
    S - set shape to line Strips
    P - set shape to polygons
    Z - perform undo or remove Vertex
    Q - perform save and quit operation
  */
}

void Monitor::mouseClick(int button,int state,int x,int y){
  cout<<"Calling mouseClick function"<<endl;
  currentShape.addVertex(0.95,0.88);
  currentShape.addVertex(0.10,0.80);
  currentShape.addVertex(0.45,0.50);
}

class Monitor{
  public:
    void display(void);//use on glutDisplayFunc()
    void keyPressed(unsigned char,int,int);//use on glutKeyboardFunc()
    void mouseClick(int,int,int,int);//use on glutMouseFunc()
}monitor;

void Monitor::display(void){
  cout<<"Calling display function."<<endl;
}

void Monitor::keyPressed(unsigned char key,int x,int y){
  cout<<"Calling keyPressed function."<<endl;
}

void Monitor::mouseClick(int button,int state,int x,int y){
  cout<<"Calling mouseClick function"<<endl;
}

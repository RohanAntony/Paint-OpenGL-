class Terminal{
  private:
    float getValue(string,float,float);
  public:
    void getNewColor();
}terminal;

//private functions
float Terminal::getValue(string content,float minValue,float maxValue){
  float temp;
  do{
    cout<<content;
    cin>>temp;
  }while(temp<minValue || temp>maxValue);
  return temp;
}

//public function
//to be called when command 'C' is clicked
void Terminal::getNewColor(){
  float r,g,b;
  r = getValue("Enter red value:",0.0,1.0);
  g = getValue("Enter green value:",0.0,1.0);
  b = getValue("Enter blue value:",0.0,1.0);
  currentColor.setColor(r,g,b);
}

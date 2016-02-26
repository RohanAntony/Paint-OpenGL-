class Terminal{
  private:
    float getValue(char*,float,float);
  public:
    void getNewColor();
}terminal;

//private functions
float Terminal::getValue(char* content,float minValue,float maxValue){
  float temp;
  do{
    std::cout<<content;
    std::cin>>temp;
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
}

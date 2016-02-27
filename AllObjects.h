#define MAX_OBJECTS 2000
#define MAX_SHAPES 1200
#define MAX_COLORS 800
#define NEW_COLOR 0
#define NEW_SHAPE 1

class AllObjects{
  private:
    int shapeOrColor[MAX_OBJECTS];
    int shapeOrColorIndex;
    Shape allShapes[MAX_SHAPES];
    int allShapesIndex;
    Color allColors[MAX_COLORS];
    int allColorsIndex;
  public:
    void addNewShape(Shape);
    void addNewColor(Color);
    int getNextObjectType(int); //returns shapeOrColor[parameter]
    // Shape getShapeObject(int);
    // Color getColorObject(int);
}allObjects;

void AllObjects::addNewShape(Shape newShape){
  if(allShapesIndex < MAX_SHAPES){
    shapeOrColor[shapeOrColorIndex] = NEW_SHAPE;
    shapeOrColorIndex++;
    allShapes[allShapesIndex] = newShape;
    allShapesIndex++;
  }
}

void AllObjects::addNewColor(Color newColor){
  if(allColorsIndex < MAX_COLORS){
    shapeOrColor[shapeOrColorIndex] = NEW_COLOR;
    shapeOrColorIndex++;
    allColors[allColorsIndex] = newColor;
    allColorsIndex++;
  }
}

int AllObjects::getNextObjectType(int nextObjectType){
  if(nextObjectType < shapeOrColorIndex){
    return shapeOrColor[nextObjectType];
  }else{
    return -1;
  }
}

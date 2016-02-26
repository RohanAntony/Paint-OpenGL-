#define MAXIMUM_VERTICES_PER_SHAPE 2

struct Vertex{
  float x,y;
};

class Shape{
  private:
    GLenum shapeType;
    Vertex vertices[MAXIMUM_VERTICES_PER_SHAPE];
    int verticesIndex;
  public:
    void setShapeType(GLenum shapeTypeV){
      shapeType = shapeTypeV;
      cout<<"Changed shape."<<endl;
    }
    void addVertex(float x, float y){
      if(verticesIndex<MAXIMUM_VERTICES_PER_SHAPE){
        vertices[verticesIndex].x = x;
        vertices[verticesIndex].y = y;
        verticesIndex++;
        cout<<"vertex was added."<<endl;
      }else{
        cout<<"Vertex buffer full."<<endl;
      }
   }
   void removeVertex(int n=1){
     if(n<=verticesIndex){
       verticesIndex-=n;
       cout<<"vertex was deleted."<<endl;
     }else{
       verticesIndex=0;
       cout<<"cannot delete any more vertex"<<endl;
     }
   }
}currentShape;

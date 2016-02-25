#include <stdio.h>
#include <string.h>
#include <GL/glut.h>

#define NUMBER_OF_SHAPES 3
#define NUMBER_OF_VERTICES 6

struct shapeType{
  char shapeName[20];
  char shapeLetter[2];
  GLenum shapeMode;
};

void myInit(shapeType[]); //initialises the shapes array
int indexMode(char,char[]);
int setShape(char);
void display(void);
void keypress(unsigned char,int,int);

shapeType shapes[NUMBER_OF_SHAPES];
shapeType stateObject;

int main(int argc,char **argv){
  myInit(shapes);
  glutInitDisplayMode(GLUT_SINGLE);
  glutInitWindowSize(1000,600);  //set width and height
  glutInitWindowPosition(0,0);  //set left and right position of window
  glutInit(&argc,argv);
  glutCreateWindow("Paint program");
  gluOrtho2D(-1000,1000,-600,600);
  glutDisplayFunc(display);
  glutKeyboardFunc(keypress);

  glutMainLoop();

  return 0;
}

void keypress(unsigned char key,int x,int y){
  setShape(key);
  glutPostRedisplay();
}

void display(void){
  glClearColor(1.0f,1.0f,1.0f,1.0f);
  glClear(GL_COLOR_BUFFER_BIT);
  glLoadIdentity();
  glColor3f(1.0f,0.2f,0.2f);
  glBegin(stateObject.shapeMode);
  for(int i=0;i<NUMBER_OF_VERTICES;i++){
    glVertex2f((rand()%100)/100.0,(rand()%100)/100.0);
  }
  glEnd();
  glFlush();
}

void myInit(shapeType shapes[]){
  strcpy(shapes[0].shapeName,"Polygon");
  shapes[0].shapeLetter[0] = 'P';
  shapes[0].shapeLetter[1] = 'p';
  shapes[0].shapeMode = GL_POLYGON;
  strcpy(shapes[1].shapeName,"Line Strips");
  shapes[1].shapeLetter[0] = 'S';
  shapes[1].shapeLetter[1] = 's';
  shapes[1].shapeMode = GL_LINE_STRIP;
  strcpy(shapes[2].shapeName,"Line Loop");
  shapes[2].shapeLetter[0] = 'L';
  shapes[2].shapeLetter[1] = 'l';
  shapes[2].shapeMode = GL_LINE_LOOP;
}

int indexMode(char inputLetter,shapeType shapes[]){
  int returnValue = 0;
  while(returnValue < NUMBER_OF_SHAPES){
    if(inputLetter == shapes[returnValue].shapeLetter[0] || inputLetter == shapes[returnValue].shapeLetter[1])
      break;
    else
      returnValue++;
  }
  if(returnValue < NUMBER_OF_SHAPES)
    return returnValue;
  else
    return -1;
}

int setShape(char shapeMode){
  int _index = 0;
  _index = indexMode(shapeMode,shapes);
  if(_index >= 0){
    stateObject = shapes[_index];
    printf("Current shapeMode:%s\n",shapes[_index].shapeName);
  }else{
    printf("Current shapeMode:Undefined\n");
  }
  return 0;
}

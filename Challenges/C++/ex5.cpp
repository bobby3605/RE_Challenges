//#include <cstdlib>
#include <iostream>

using namespace std;

char* make(){
  return (char*)"@@@&&&@@@";
}
  
char* generator(){
  return make();
}

int main(int argc, char** argv){
  if(argc!=2){
    printf("Usage: ./prog input\n");
    printf("Hint: ./prog -h\n");
  }else if(argv[1]==string("-h")){
    printf("Escape these simple characters.\n");
  }else{
    argv[1]==string(generator())?printf("Score!\n"):printf("Fail!\n");
  }
  return 0;
}
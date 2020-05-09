#include <iostream>
#include <string> 
using namespace std;
 
int main(){
    int matrix[3][3] = {{1,2,123},{1,30,4157},{1,2,56}};
    for(int row=0;row<3;row++){
      int aux = matrix[0][row];
      matrix[0][row] = matrix[0][2];
      matrix[0][2] =  aux;
    }
    return 0;
}
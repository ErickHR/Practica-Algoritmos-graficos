class Main {
  public static void main(String[] args) {
    int[][] matrix = {
      {0,0,1,0,0,0,0,0,0,0},
      {1,0,1,0,1,0,0,0,0,0},
      {0,0,1,0,1,0,0,0,0,0},
      {0,0,1,0,1,0,0,0,0,0},
      {0,0,1,0,1,0,0,0,0,1},
      {0,0,1,0,1,0,0,0,0,0},
      {0,0,1,0,1,0,0,0,0,0},
      {0,0,1,0,1,0,0,0,0,0},
      {0,0,1,0,1,0,0,0,0,0},
      {0,0,1,0,0,0,0,0,0,0}
    };
  }
  public static void getBordeSuperior(int[][] matrix){
      for(int column=0;column<matrix[0].length;column++){
        if(matrix[0][column]==1){

          System.out.println("posicion : ["+0+"]["+"["+column+"]"+" = "+1);
        }
      }
  }
  public static void getBordeInferior(int[][] matrix){
    for(int column=0;column<matrix[0].length;column++){
        if(matrix[matrix[0].length-1][column]==1){

          System.out.println("posicion : ["+0+"]["+"["+column+"]"+" = "+1);
        }
      }

  }
  public static void getBordeIzquierdo(int[][] matrix){
      for(int row=0;row<matrix[0].length;row++){
        if(matrix[row][0]==1){

          System.out.println("posicion : ["+row+"]["+"["+0+"]"+" = "+1);
        }
      }
  }
  public static void getBordeDerecho(int[][] matrix){
    for(int row=0;row<matrix[0].length;row++){
        if(matrix[row][matrix[0].length-1]==1){
	  System.out.println("posicion : ["+row+"]["+"["+matrix[0].length-1+"]"+" = "+1);
        }
      }
  }
}
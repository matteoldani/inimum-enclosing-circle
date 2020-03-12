#include <stdio.h>
#include <stdlib.h>

#define MAX_CASE 500

int main(int argc, char const *argv[]) {

  FILE *f;
  int n;
  int[MAX_CASE][2] points; //x, y
  int i, j;

  char[] path = "test.txt";

  if((f = fopen(path, "r")) == NULL){
    printf("Errore apertura file");
    exit(1);
  }

  //leggo numero di test case
  fscanf(f, "%d", &n);

  for(i=0;i<n;i++){
    fscanf(f, "%d %d", &points[i][0] points[i][1]);
  }

  //debug mostra matrice
  for ( i = 0; i < n; i++) {
    for ( j = 0; j < 2; j++) {
      printf("%d %d\n", points[i][j] points[i][j] );
    }
  }

  

  return 0;
}

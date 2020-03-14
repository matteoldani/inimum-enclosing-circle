#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {

  FILE *f;
  int n;
  double x, y;

  f = fopen(argv[1], "w");



  do{
    printf("Inserire il numero di punti da generare\n");
    scanf("%d", &n);
  }while(n<=0);
  fprintf(f, "%d\n", n);
  for(int i=0; i<n; i++){
    x = rand() % 1000;
    y = rand() % 1000;
    fprintf(f, "%lf %lf\n", x, y);
  }



  return 0;
}

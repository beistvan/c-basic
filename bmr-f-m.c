#include <stdio.h>

int main(void){

  int age, height, weight;
  double bov;
  char gen;

  scanf("%c %d %d %d", &gen, &age, &height, &weight);

  if ((gen != 'f') && (gen != 'm')) {
      printf("ERROR!\n");
      return 0;
  }

  switch (gen) {
    case 'm':
      bov = 10*weight + 6.25*height - 5*age + 5;
      break;
    case 'f':
      bov = 10*weight + 6.25*height - 5*age - 161;
      break;
  }

  printf("|  BMR  |\n");
  printf("|%7.2lf|\n", bov);

  return 0;
}

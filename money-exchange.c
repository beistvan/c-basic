#include <stdio.h>
int main(void){
  int money;
  double kurs, dollars;
  scanf("%d %lf", &money, &kurs);
  dollars = money * kurs;
  printf("%.13lf\n", dollars);
  return 0;
}

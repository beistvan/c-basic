#include <stdio.h>

int main() {
  int age;
  scanf("%d", &age);
    
  if (age < 7) {
      printf("preschool");
  } else if (age < 19) {
      printf("pupil");
  } else if (age < 60) {
      printf("worker");
  } else {
      printf("rentner");
  }
    
  return 0;
}

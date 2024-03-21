#include <stdio.h>

int main() {
    char city1[50], city2[50];
    gets(city1); gets(city2);
    printf("%s", city1[strlen(city1) - 1] == city2[0] + 32 || city2[strlen(city2) - 1] == city1[0] + 32 ? "yes" : "no");
    return 0;
}

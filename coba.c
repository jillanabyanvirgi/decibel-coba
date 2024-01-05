#include <stdio.h>

int main(){
    int x = 6;
    int y, p;

    printf("Enter a number : ");
    scanf("%d", &y);
    printf("Enter a number 2 : ");
    scanf("%d", &p);

    int result = x * y / p;
    printf("Value of multiply : %d", result);
}
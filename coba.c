#include <stdio.h>

int main(){
    int x = 6;
    int y;

    printf("Enter a number : ");
    scanf("%d", &y);

    int result = x * y;
    printf("Value of multiply : %d", result);
}
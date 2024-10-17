#include <stdio.h>

void product(int a, int b, int *target){
    *target = a * b;
    return;
}

int main(){
    int a, b, result;

    a = 5;
    b= 9;

    product(a, b, &result);
    printf("%d\n", result);

    return 0;
}
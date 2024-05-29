#include<stdio.h>

int sumEquation (int n,int b) {
    int sum = 1;
    printf("power value");
    scanf("%d",&n);
    printf("base value");
    scanf("%d",&b);

    for(int i=1;i<=n;i++){
        sum = sum*b;
    }
    return sum;
}

int main() {
    printf("the sum : %d\n",sumEquation(1,2));
    return 0;
}

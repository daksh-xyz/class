#include<stdio.h>
void main(){
    long long int n=20, prod = n;
    while(n>1){
        prod = prod*(n-1);
        n--;
    }
    printf("%lld",prod);
}
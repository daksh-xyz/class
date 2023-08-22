#include<stdio.h>
void main(){
    int t1=0, t2=1, sum=0,i;
    printf("%d %d", t1, t2);
    for(i=2; i<10; i++){
        sum = t1 + t2;
        printf(" %d", sum);
        t1 = t2;
        t2 = sum;
    }
}

#include<stdio.h>
#include<string.h>
void main(){
    char mains[150], sub[50];
    int lmain, lsub;
    printf("Enter main string: ");
    gets(mains);
    lmain = strlen(mains);
    printf("Enter string to be removed: ");
    gets(sub);
    lsub = strlen(sub);
    for(int i=0; i<lmain-lsub; i++){
        int j;
        for(j=0; j<lsub; j++){
            if(mains[i+j]!=sub[j]){
                break;
            }
        }
        if(j==lsub){
            for(int k = i; k<lmain-lsub;k++){
                mains[k] = mains[k+lsub];
            }
            lmain-= lsub;
            i--;
        }
    }
    mains[lmain] = '\0';
    printf("%s", mains);
}
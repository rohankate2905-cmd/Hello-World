//NAME:KATE ROHAN VISHNU 
//PRN:2503033111372040
//TITLE:PATTERN PRINTING 2




#include<stdio.h>
int main(){
    int i, j;
    for(i=1; i<=3; i++){
        for(j=1; j<=i; j++){
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}

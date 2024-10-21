/*  5  5  5  5  5
    4  4  4  4  4
    3  3  3  3  3  
    2  2  2  2  2  */


#include<stdio.h>

int main(){
    int r, c, nr, nc;
    
    scanf("%d %d", &nr, &nc);
    
    for(r=nr; r>=1; r--){
        for(c=1; c<=nc; c++){
            printf("%d",r);
        }
        printf("\n");
    }
    
}
/* Write C program to print given pattern.

5  4  3  2  1
5  4  3  2  1
5  4  3  2  1
5  4  3  2  1
5  4  3  2  1  */

#include<stdio.h>

int main(){
    int r, c, nr, nc,a;
    
    scanf("%d %d", &nr, &nc);
    
    for(r=nr; r>=1; r--){
        a=nr;
        for(c=1; c<=nc; c++){
            printf("%d",a--);
        }
        a=0;
        printf("\n");
    }
    
}
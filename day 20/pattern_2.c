/*1  1  1  1  1
 2  2  2  2  2
 3  3  3  3  3
 4  4  4  4  4 */

 #include<stdio.h>

int main(){
    int r, c, nr, nc;
    
    scanf("%d %d", &nr, &nc);
    
    for(r=1; r<=nr; r++){
        for(c=1; c<=nc; c++){
            printf("%d",r);
        }
        printf("\n");
    }
    
}
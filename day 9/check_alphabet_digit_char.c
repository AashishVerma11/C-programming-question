#include<stdio.h>

int main(){
    char ch;

    printf("Enter a charcter: \n");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
        printf("%c is an alphabet\n",ch);
    }else if(ch>='0' && ch<='9'){
        printf("%c is digit\n",ch);
    }else{
        printf("%c is a special character symbol", ch);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    
    char str[100];
    
    printf("Enter a string: ");
    scanf("%[^\n]s",str);
    
    
    int length = 0;

    for (int i = 0; str[length] != '\0'; i++)
    {
        length++;
    };
    
    printf("The count of alphabet is : %d",length);

    return 0;
}

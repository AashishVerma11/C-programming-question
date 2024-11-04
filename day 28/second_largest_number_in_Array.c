#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

     for(int i=n-1;i>=0 ;i--)
     {
      if(a[i]<a[n-1])
      {
          printf("%d",a[i]);break;
      }
    
}
    return 0;
}

進階題2:讀入整數反敘列印
#include <stdio.h>
int main()
{
        int n=0,a[90];
        for(int i=1;i<=90;i++)
        {
                scanf("%d",&(a[i]));
                if(a[i]==0) break;
                else n=n+1;
        }
        for(int k=n;k>0;k--){
                printf("%d ",a[k]);
                }
                printf("\n");
}
```
```C

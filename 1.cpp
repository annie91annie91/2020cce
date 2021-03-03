進階題1:分式化簡
#include <stdio.h>
int main()
{
        int m,n;
        scanf("%d%d",&m,&n);
        for(int i=m;i>=1;i--){
        if(m%i==0 && n%i==0){
        m=m/i;
        n=n/i;
        }

}
 printf("%d %d\n",m,n);
}

```C
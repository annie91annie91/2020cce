# 2020cce

### 我的第一份作業

```C
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

```
```C
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
進階題3:A的B次方函數
#include <stdio.h>
int MYPOWER(int x,int y)
{
        int ans=1;
        if(x>=1 && x<=9)
        {
                for(int i=1;i<=y;i++)
                {
                        ans*=x;
                }
        }
        return ans;
}
int main(void)
{
        int a,b;
        scanf("%d%d",&a,&b);
        printf("[%d]",MYPOWER(a,b));
        return 0;
}
```
```C
進階題4:漸增數列相加
#include <stdio.h>
int main()
{
        int a,n=0;
        scanf("%d",&a);
        for(int i=2;i<=a;i++){
                int j,z;
                j=i-1;
                z=j*i;
                n=n+z;
        }
        printf("%d\n",n);
}

```
```C
基礎題1:找零錢
#include <stdio.h>
int main()
{
        int a,n=0;
        scanf("%d",&a);
        for(int i=2;i<=a;i++){
                int j,z;
                j=i-1;
                z=j*i;
                n=n+z;
        }
        printf("%d\n",n);
}
```
```C
基礎題2:因數個數
#include <stdio.h>
int main()
{
        int a;
        scanf("%d",&a);
        int k=0;
        for(int i=1;i<=a;i++)
        {
                if(a%i==0){ k++;}
        }       
        printf("%d\n",k);
}


```
```C
基礎題3:找倍數
#include <stdio.h>
int main()
{
        int a,k=0;
        for(int i=1;i<=10;i++){
        scanf("%d",&a);
        if(a%3==0){ k++;}
        }
        printf("%d\n",k);

}

```
```C
基礎題4:整數轉換為等級
#include <stdio.h>
int main()
{
        int a;
        scanf("%d",&a);

        if(a>=90)printf("A\n");
        else if(a>=80)printf("B\n");
        else if(a>=60)printf("C\n");
        else if(a<60)printf("F\n");
}
```
##9
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
int main()
{
    int *p=&a[2];
    *p=222;

    p=p+2;
    *p=666;
}
```
##10
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll()
{
    for(int i=0;i<5;i++){
        printf("%d",a[i]);
    }
    printf("\n");
}

int main()
{
    int *p=&a[2];
    *p=222;
        printAll();
    p=p+2;
    *p=666;
        printAll();
    p--;
    *p=555;
        printAll();
}
```
##11
```c
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll()
{
    for(int i=0;i<10;i++){
        printf("%d",a[i]);
    }
    printf("\n");
}

int main()
{
    int *p=&a[2];
    *p=200;
        printAll();
    int *p2=p+4;
    *p=666;
        printAll();
    p--;
    *p=555;
        printAll();
        return 0;
}
```
##12
```c
#include <stdio.h>
#include <stdlib.h>
int a[10];
int main()
{
    int b[10];
    int *p=(int*)malloc(sizeof(int)*10);
    return 0;
}
```

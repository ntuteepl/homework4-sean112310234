#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,i,c;
scanf("%d",&a);
int b[a];
for(i=0;i<a;i++){
scanf("%d/n",&b[i]);
}
for(i=0;i<a;i++)
{
for(c=2;b[i]>c&&b[i]%c!=0;++c);
{
 if(b[i]==c)  {
    printf("YES " );
   }
else{
    printf("NO " );
   }
  }
 }
}


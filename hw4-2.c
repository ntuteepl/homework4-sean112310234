#include <stdio.h>
int main(){ 
    int ac,pa,n;
    int a[6][3]=
    {
        {123,456,9000},
        {456,789,5000},
        {789,888,6000},
        {336,558,10000},
        {775,666,12000},
        {566,221,7000}
    };
    scanf("%d",&n);
    for(int b=0;b<n;b++)
    {
    scanf("%d %d",&ac,&pa);
      for(int c=0;c<6;c++){ 
       if(ac==a[c][0]&&pa==a[c][1])
       {
        printf("%d", a[c][2]);
        break;
       }
        else{ printf("error");
       }
       break;
    }
}
}

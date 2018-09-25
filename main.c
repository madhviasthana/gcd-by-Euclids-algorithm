#include <stdio.h>
#include <stdlib.h>

int main()
{ int a,b,temp=0,g=0;
    printf("numbers\n");
    scanf("%d %d",&a,&b);
    if(a<b&&a>0&&b>0){
     temp=a;
     a=b;
     b=temp;}
     else
     {
         if(a<0){

            a=-a;
         }
          if(b<0){

            b=-b;
         }

    temp=a;
    a=b;

    b=temp;

     }
     while(!(b==0)){

        g=a%b;
        a=b;
        b=g;
     }


printf("%d",a);
    return 0;
}

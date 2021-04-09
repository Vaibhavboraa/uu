#include<stdio.h>
#include<math.h>
float f(float n)
{
    float x;
    x=(n*n*n)-4*n-9;
    return x;
}
int main()
{
    float a,b,c,temp,p;
    int i,t,flag=0;
    while(1)
    {
         printf("Enter the initial approximation:");
         scanf("%f%f",&a,&b);
         if(f(a)*f(b)>0)
         {
             printf("Try again!\n");
         }
         else if(f(a)*f(b)==0)
         {
             if(f(a)==0)
             {
                 printf("%f is the root",a);
                 return 0;
             }
             else
             {
                 printf("%f is the root",b);
                 return 0;
             }
         }
         else if(f(a)*f(b)<0)
         {
             printf("Right Intervals !!\n");
             printf("Enter the number of iterations:");
             scanf("%d",&t);
             printf("Enter the precision:");
             scanf("%f",&p);
              c=(a+b)/2.0;
             for(i=1;i<=t;i++)
             {
                  temp=c;
                  if(f(a)*f(c)<0)
                  {
                      b=c;
                  }
                  else
                  {
                      a=c;
                  }
                  c=(a+b)/2.0;
                  printf("The root at %d iteration is %f \n",i,temp);
                  if(fabs(c-temp)<=p)
                  {
                      flag=1;
                      break;
                  }
             }
           break;
         }
    }
    if(flag==1)
    printf("The root is %f found at %d iteration ",c,i);
    else if(flag==0)
        printf("The root does not exist in the given iterations\n");
return 0;
}

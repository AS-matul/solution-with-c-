#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int xor (int x, int y);
int and(int x,int y);
int or(int x, int y);
int cal_max(int x[],int y);
int main() {
    int n, k, matul;
    int i,j=0,m=0,o=0,a,b,c;
    int xor_max[1000];
    int and_max[1000];
    int or_max[1000];
    scanf("%d %d", &n, &k);
    for(i=1;i<n;i++){
        matul=xor(i,i+1);
        if(matul<k){
            xor_max[j]=matul;
            j++;
        }
        matul=and(i,i+1);
         if(matul<k){
            and_max[m]=matul;
            m++;
        }
        matul=or(i,i+1);
         if(matul<k){
            or_max[o]=matul;
            o++;
        }

    }
    a=cal_max(and_max,m-1);
    b=cal_max(or_max,o-1);
    c=cal_max(xor_max,j-1);
     printf("%d\n",a);
      printf("%d\n",b);
       printf("%d\n",c);
    return 0;
}
int xor (int x, int y)
{
    return x ^ y;
}
int and(int x,int y)
{
    return x & y;
}
int or(int x, int y)
{
    return x | y;
}
int cal_max(int x[],int y)
{
   int maximum = x[0];
   int c;
   int size=y;

  for (c = 1; c < size; c++)
  {
    if (x[c] > maximum)
    {
       maximum  = x[c];

    }
  }
  return maximum;
}

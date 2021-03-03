#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int i,j,k;
int main()
{
    long long unsigned int n,aa,bb,cc,x,y,z,t;
    scanf("%llu",&n);
    long long unsigned int tests[n][4];
    for(i=0;i<n;i++)
    {
        scanf("%llu %llu %llu %llu",&tests[i][0],&tests[i][1],&tests[i][2],&tests[i][3]);
    }
for(i=0;i<n;i++)
{

    t=tests[i][0];
    aa=tests[i][0]/tests[i][1];

    bb=tests[i][0]/tests[i][2];

    cc=tests[i][0]/tests[i][3];
if(tests[i][0]%tests[i][1]==0)
    x= (aa)*tests[i][1]-t;
else
    x= (aa+1)*tests[i][1]-t;

if(tests[i][0]%tests[i][2]==0)
    y= (bb)*tests[i][2]-t;
else
    y= (bb+1)*tests[i][2]-t;
if(tests[i][0]%tests[i][3]==0)
    z=(cc)*tests[i][3]-t;
else
    z=(cc+1)*tests[i][3]-t;

    if(y<x)
        x=y;
    if(z<x)
        x=z;
    printf("%llu\n",x);



    }

    return 0;
}






#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double A[10],r,c,B[10],d;
    int n,i;
    printf("Give radius of a circle and the number of points\n");
    scanf("%lf %d",&r,&n);
    for(i=0;i<n;i++)
    {
        printf("Give coordinates for point %d\n",i+1);
        scanf("%lf %lf",&c,&d);
        A[i]=c;
        B[i]=d;
        if( sqrt(A[i]*A[i]+B[i]*B[i])<=r)
            printf("The point is inside of the circle\n");
        else
            printf("The point is outside of the circle\n");
    }
    return 0;
}

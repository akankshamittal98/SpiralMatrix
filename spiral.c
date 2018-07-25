#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=0,j;
    int a[n][n];
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           scanf("%d",&a[i][j]);
       }
    }
    int t=0,b=n-1,l=0,r=n-1;
     do
    {
        if(l<=r&&t<=b)
        {for(i=l;i<=r;i++)
        {
            printf("%d ",a[t][i]);
        }
        t++;}
        else break;
        if(l<=r&&t<=b){
        for(i=t;i<=b;i++)
        {
            printf("%d ",a[i][r]);
        }
        r--;}
        else break;
        if(l<=r&&t<=b){
        for(i=r;i>=l;i--)
        {
            printf("%d ",a[b][i]);
        }
        b--;}
        else break;
        if(l<=r&&t<=b){
        for(i=b;i>=t;i--)
        {
            printf("%d ",a[i][l]);
        }
        l++;}
        else break;
    } while(t<=b&&l<=r);
}

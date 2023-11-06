#include<stdio.h>
int main(void)
{int a,b;
scanf("%d %d",&a,&b);
int c1=a%10;
int c2=b%10;
int d1=(a/10)%10;
int d2=(b/10)%10;
int e1=(a/100)%10;
int e2=(b/100)%10;
int f1=(a/1000)%10;
int f2=(b/1000)%10;
int g1=(a/10000)%10;
int g2=(b/10000)%10;
int h1=(a/100000)%10;
int h2=(b/100000)%10;
int i1=(a/1000000)%10;
int i2=(b/1000000)%10;
int j1=(a/10000000)%10;
int j2=(b/10000000)%10;
int k1=(a/100000000)%10;
int k2=(b/100000000)%10;
int l1=(a/1000000000)%10;
int l2=(b/1000000000)%10;
int ans=c1*c2+d1*d2+e1*e2+f1*f2+g1*g2+h1*h2+i1*i2+j1*j2+k1*k2+l1*l2;
printf("%d",ans);
return 0;
}
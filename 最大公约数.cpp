#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    return b ? gcd(b,a % b):a;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        printf("%d\n",gcd(n,m));
    }
    return 0;
}

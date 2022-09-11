#include<iostream>
#include<algorithm>
using namespace std;
const int N= 1000010;

int primes[N], cnt;
bool st[N];
void get_primes(int n){
    for(int i=2;i<=n;i++){
        if(!st[i]){
            primes[cnt++]=i;
            for(int j=i;j<=n;j+=i) st[j]=true;//可以用质数就把所有的合数都筛掉；
        }
    }
}

int main()
{
     int n;
    cin >> n;

    get_primes(n);

    cout << cnt << endl;

    return 0;
}

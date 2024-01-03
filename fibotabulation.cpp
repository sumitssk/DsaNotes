#include <iostream>
using namespace std;

long long Nthfibbonaci(int n)
{
    long long fib[n+1];
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<=n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    return fib[n];
}

int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<Nthfibbonaci(n)<<endl;
    return 0;

}
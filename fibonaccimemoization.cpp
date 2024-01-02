#include <iostream>

using namespace std;

long long findNthFibonacci(int number, long long int dp[])
    {
        // Your Code Here
        if(dp[number]==0 && number!=0)
        {
            long long int res;
            if(number<=1)
            {
                res=number;
            }
            else
            {
                res=findNthFibonacci(number-1,dp)+findNthFibonacci(number-2,dp);
            }
            dp[number]=res;
        }
        return dp[number];
    }

int main()
{
    int t;
    cout<<"enter t:";
    cin>>t;
    long long int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    while(t--)
    {
        int n;
        cin>>n;
        
        cout<<findNthFibonacci(n)<<"\n";
    }
    

}
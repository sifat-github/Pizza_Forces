#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    long long int n;
    long long int ans;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        if(n<=6)
        {
            ans=15;
        }else
        {
        if(n%2!=0)
            n++;
            ans = (n*5)/2;
        }
        cout<<ans<<endl;
    }
}

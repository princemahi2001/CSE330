#include <iostream>
using namespace std;
bool isPrime(long long n)
{
    if(n==1)
    return true;
    for(long long i=2;i*i<=n;i++)
        if(n%i==0)
        return false;
    return true;
}
int main() {
	long long T;
	cin>>T;
	while(T--)
	{
		long long num;
	    cin >> num;
        if(num!=1 && isPrime(num+1))
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
    
}

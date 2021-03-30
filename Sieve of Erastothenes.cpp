#include<iostream>
#include<conio.h>
#include<bits.h>

using namespace std;

void SieveofEratosthenes(int n)
{
	long long sum =0;
	bool prime[n+1];
	memset(prime,true,sizeof(prime));
	
	for(int p=2; p*p<=n;p++)
	{
		if(prime[p]==true)
		{
			for(int i=p*p;i<=n;i+=p)
			{
				prime[i] = false;
			}
		}
	}
	for(int p=2;p<=n;p++)
		{
			if(prime[p])
			{
				//cout<<p<<" ";
				sum += p;	
			}
		}
		cout<<"The sum of all primes below "<<n<<" is "<<sum;
}


int main()
{
	int prime[100],n;
	cout<<"Enter a number "<<endl;
	cin>>n;
	
//	cout<<"The prime numbers below the given numbers are "<<endl;
		SieveofEratosthenes(n);
	return 0;
}

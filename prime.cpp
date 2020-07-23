#include<iostream>
using namespace std;
int prime(int n);
int main()
{
int n,i,f=0;
cout<<"Enter a positive integer:";
cin>>n;
for(i=2;i<=n/2;i++)
{
if(prime(i)==1)
{
	if(prime(n-i)==1)
{
cout<<n<<"="<<i<<"+"<<n-i<<"\n";
f=1;	
} 
}
}
if(f==0)
cout<<"Not a sum of prime numbers",n;
return 0;
}
int prime(int n)
{
int i,p=1;
for(i=2;i<=n/2;i++)
{
 if(n%i==0)
 p=0;
break;
}
}


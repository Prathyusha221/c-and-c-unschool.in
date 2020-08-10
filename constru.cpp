#include<bits/stdc++.h>
using namespace std;
class calculator
{
	int a,b;
	public:
		calculator(int x,int y)
		{
			a=x;
			b=y;
		}
		void sum()
		{
			cout<<a+b<<endl;
		}
		void diff()
		{
			cout<<a-b<<endl;
		}
		void multi()
		{
			cout<<a*b<<endl;
		}
		void divi()
		{
			cout<<a/b<<endl;
		}
		void modu()
		{
			cout<<a%b<<endl;
		}
	~calculator()
	{
	}
   
};
int main()
{
	while(1)
	{
	char s;
	cout<<"enter operator\n";
	cin>>s;
	cout<<"enter two numbers: \n";
    int a,b;
    cin>>a>>b;
    calculator o(a,b);
    if(s=='+')
    o.sum();
    else if(s=='-')
    o.diff();
    else if(s=='*')
    o.multi();
    else if(s=='/')
    o.divi();
    else if(s=='%')
    o.modu();
    cout<<"WANT TO PERFORM ANOTHER OPERATION?"<<endl;
    string p;
    cin>>p;
    if(p=="No")
      {
	  o.~calculator();
	  cout<<"Destructor called"<<endl;
	  break;
       }
    }
    return 0;
}

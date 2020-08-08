#include<iostream>
using namespace std;
class A
{
    public:
      void fun();
};
void A::fun()
{
    char s[80];
    cin>>s;
    cout<<"String: "<<s<<endl;
    int i=0,vcnt=0,ccnt=0;
    while(s[i]!='\0')
    {
        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u'))
        {
            vcnt++;
        }
        else if((s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U'))
        {
            vcnt++;
        }
        else if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
        {
            ccnt++;
        } 
        i++;
    }
    cout<<"Vowels: "<<vcnt;
    cout<<"\nConsonants: "<<ccnt;
}
int main()
{
    A a;
    a.fun();
    return 0;
}
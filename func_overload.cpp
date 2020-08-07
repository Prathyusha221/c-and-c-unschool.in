#include<iostream>
using namespace std;

void area(int r)
  {
        cout<<"area of the circle is "<<3.14*r*r;
  }
void area(int l,int b)
  {
        cout<<"area of the rectangle is"<<l*b;
  }
void area(float t,int d,int e)
  {
        cout<<"area of the triangle is"<<t*d*e;
  }

int main()
{
  int r,l,b,d,e;
  cout<<"select the shape: \n1. circle\n2. rectangle\n3. triangle\n";
  int s;
  cin>>s;
  switch(s)
  {
          case 1: 
             cout<<"enter the radius: \n";
             cin>>r;
             area(r);
             break;
          case 2:
             cout<<"enter the length and breadth of the rectangle: \n";
             cin>>l>>b;
             area(l,b);
             break;
          case 3:
             cout<<"enter the sides of the triangle: \n";
             cin>>d>>e;
             area(0.5,d,e);
             break;
          default:
             cout<<"invalid entry\n";          
  }
  return 0;
}

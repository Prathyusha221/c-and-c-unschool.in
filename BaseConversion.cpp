#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int actual_num(int n,int b){
    int num=0,i=0;
    while(n!=0){
        int a;
        a=n%10;
        num+=a*pow(b,i);
        n=n/10;
        i++;
    }
    return num;
}
void new_number(int n,int b){
    int high_n=0;
    while (pow(b,high_n)<n)
    {
        if(pow(b,high_n+1)>n){
            break;
        }
        high_n++;
    }
    int i=high_n;
    while(i>=0){
        
        cout<<int(n/pow(b,i));
        n=n%int(pow(b,i));
        i--;
    }
}
void base_conversion(){
    int n1,n2,b1,b2,num;
    cout<<"Input number to be converted: ";
    cin>>n1;
    cout<<"\n\nWhat is the base of this number? : ";
    cin>>b1;
    cout<<"Enter the base of new integer : ";
    cin>>b2;
    if(b1!=10){
        num=actual_num(n1,b1);
    }
    else{
        num=n1;
    }
    cout<<"\nThe conversion of "<<n1<<" from base "<<b1<<" to base "<<b2<<" reads as : ";
    new_number(num,b2);
}

int main(){
    base_conversion();
    
    int response;
    cout<<"\n\tWould you like to run the conversion process again?(1 = Yes, 2 = No): ";
    cin>>response;
    if(response==1){
        main();
    }
    return 0;
}
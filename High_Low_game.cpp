#include<bits/stdc++.h>
using namespace std;

int main(){
    srand(time(0));
    int a,i=5,num;
    a=rand()%50+1;
    cout<<"Welcome to the game of Higher or Lower\n";
    cout<<"In this game you need to guess a number between 1 and 50.\n";
    cout<<"But you will only get 5 turns to reach towards the correct number\nChoose a number: ";
    
    while(i>0){
        cin>>num;
        if(i==1){
            if(num!=a){
                cout<<"\nComputer won";
            }
        }
        i--;
        if(num==a){
            cout<<"\n\nYou won";
            break;
        }
        else if(num>a){
            cout<<"\n\nYour guess is higher than right number, Turns left: "<<i;
            cout<<"\nTry again, entering a number lower than previous: ";
        }
        else if(num<a){
            cout<<"\n\nYour guess is lower than right number, Turns left: "<<i;
            cout<<"\nTry again, entering a number higher than previous: ";
        }
        
    }
    return 0;
}
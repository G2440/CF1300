//Quasi Binary

#include<iostream>
#define ulli unsigned long long int 
using namespace std;

bool check(ulli p);

int main(){
    
    ulli x;
    cin>>x;
    
    if(check(x)){
        cout<<1<<endl;
        cout<<x<<endl;
    }
    else{
    ulli ans1 = 0;
    ulli temp = x;
    int length =0;
    while(temp){
        length++;
        temp/=10;
    }
    if(length==1){
        cout<<x<<endl;
        for(int i =1 ; i<=x;i++)
        cout<<1<<" ";
    }
    else{
    return 0;
}

bool check(ulli p){
    while(p){
        int temp = p%10;
        if(temp!=0 && temp!=1)
        return false;
        p/=10;
    }
return true;
}
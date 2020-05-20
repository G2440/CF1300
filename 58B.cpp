//Coins
#include<iostream>
#define ulli unsigned long long int 
using namespace std;


int arr[1000005] = {0};
int main(){

    ulli x;
    cin>>x; 
    ulli y = x;
    for(int i = x;i>=1;i--){
        if(y%i==0){
           arr[i]++;
           y = i;
        }
    }
    for(int i =1000001 ; i>=1;i--)
    if(arr[i] != 0)
    cout<<i<<" ";
    return 0;
}
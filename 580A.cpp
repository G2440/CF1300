//Kefa and First Steps

#include<iostream>
#define ulli unsigned long long int
using namespace std;

int main(){
    
    ulli x;
    cin>>x;
    ulli arr[x];
    for(int i =0 ; i<x;i++)
    cin>>arr[i];
    ulli current_count =0;
    ulli count =0;
    ulli max = arr[0]; 
    for(int i =0 ; i< x ;i++){
        if(max <= arr[i]){
            max = arr[i];
            current_count++;
        }
        else{
            max = arr[i];
            if(current_count>count)
            count = current_count;
            current_count = 1;
        }
    }
    if(current_count>count)
    count = current_count;

    cout<<count<<endl;

    return 0;
}
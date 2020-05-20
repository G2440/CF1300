//Young Explorers

#include<iostream>
#include<bits/stdc++.h>
#define ulli unsigned long long int
using namespace std;

int main(){

    ulli x;
    cin>>x;
    while(x){
        ulli b;
        cin>>b;
        ulli arr[b];
        ulli hash[200001] = {0};
        for(int i =0 ; i< b;i++){
        cin>>arr[i];
        hash[arr[i]]++;
        }
        ulli sum=0,slack=0;  
        for(ulli i =1;i<200001;i++ ){
            if(hash[i] !=0){
                if(hash[i]%i==0){
                    ulli temp = hash[i] / i;
                    sum +=temp; 
                }
                else{
                    hash[i] = hash[i]+slack;
                    if(hash[i]%i==0){
                    ulli temp = hash[i] /i;
                    sum +=temp;
                    }
                    else{
                        slack = hash[i] % i;
                        hash[i] -=slack;
                        sum += hash[i]/i;
                    }
                }
            }
        }
        cout<<sum<<endl;

    x--;
        
    }

    return 0;
}
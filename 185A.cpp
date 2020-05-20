//Plant
#include<iostream>
#include<cmath>
#define ulli unsigned long long int
using namespace std;

int main(){
    
    ulli n;
    cin>>n;
    ulli p = n;
    ulli sum = 0;

    ulli start =2;
    ulli temp=start;
    while(p>1){
        start+=temp;
        temp = start;
        p--;
    }
     
    for(ulli i = 1;i<=start;i++)
    sum += i;
    
    if(n==0)
    cout<<1<<endl;
    else
    cout<<(sum%1000000007)<<endl;

    return 0;
}
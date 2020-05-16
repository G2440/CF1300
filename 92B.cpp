//CF1300--:> Binary Number
#include<iostream>
#include<string>
#include<cmath>
#define ulli long double
using namespace std;

int main(){

    string x;
    cin>>x;
    int len = x.length()-1;
    int p = len;
    int num=0;
    int i =0; 
    while(i<=len){
        if(x[i] == '1'){
        num += (int)pow(2,p);
        }
        p--;
        i++;
    }

    int count =0;
    while(num!=1){
        if(num%2!=0)
        num++;
        else
        num = num/2;
        count++;
    }
    cout<<count<<endl;
    

    return 0;
}
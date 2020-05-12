//Alice, Bob and Candies

#include<iostream>
using namespace std;

int main(){

    int cases;
    cin>>cases;
    while(cases--){
        int test;
        cin>>test;
        int arr[test];
        for(int i =0 ;i< test; i++)
        cin>>arr[i];
        int ansA = 0, ansB=0;
        int Acan=0,Bcan=0;
        int count =0;
        int i = 0;
        int j = test-1;
        while(i<=j){
            if(count%2==0){
                int sumA=0;
                while(i<=j and sumA <= Bcan)
                sumA+=arr[i++];
                ansA +=sumA;
                Acan = sumA;
            }
            else{
                int sumB = 0;
                while(i<=j and sumB <=Acan)
                sumB += arr[j--];
                ansB += sumB;
                Bcan = sumB;
            }
            count++;
        }
       
       cout<<count<<" "<<ansA<<" "<<ansB<<endl;
    }

    return 0;
}
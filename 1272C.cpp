// Yet Another Broken Keyboard
#include<iostream>
#include<string>
#define ulli unsigned long long int 
using namespace std;

int main(){

   ulli x,y;
   cin>>x>>y;
   string j;
   cin>>j;
   int alpha[26] = {0};
   while(y--){
   char c;
   cin>>c;
   alpha[c-'a']++;
   }
   ulli len=0;
   ulli sub=0;
   for(ulli i =0 ; j[i] !=0;i++){
       if(alpha[j[i] - 'a'])
       len++;
       else{
           sub += (len*(len+1))/2;
           len =0; 
       }
   }
    if(len)
    sub += (len*(len+1))/2;
    
    cout<<sub<<endl;
    
   return 0;
}
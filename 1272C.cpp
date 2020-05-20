// Yet Another Broken Keyboard
#include<iostream>
#include<string>
using namespace std;

int main(){

   int x,y;
   cin>>x>>y;
   string j;
   cin>>j;
   int alpha[26] = {0};
   while(y--){
   char c;
   cin>>c;
   alpha[c-'a']++;
   }
   int len=0;
   int sub=0;
   for(int i =0 ; j[i] !=0;i++){
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
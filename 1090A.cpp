//CODEFORCES Company Merging
#include <iostream>
#include <cmath>
#define ulli long long int
using namespace std;
int main(){
   ulli x;
   ulli sum =0;
   cin>>x;
   ulli flag =0;
   ulli max=0;
   ulli num=0;
   ulli num1=0;
   ulli max1=0;
   while(x--){
       ulli y;
       cin>>y;
       ulli arr[y];
       for(ulli i =0 ; i<y;i++)
       cin>>arr[i];
       if(flag == 0){
       for(ulli i =0 ; i< y;i++)
       if(max< arr[i])
       max = arr[i];
       flag =1;
       num = y;
       }
       else{
           max1 =0;
           num1 = y;
           for(ulli i =0 ; i< y;i++)
           if(max1 < arr[i])
           max1 = arr[i];
           ulli temp = abs(max - max1);
           if(max>max1)
           sum += num1 * temp;
           else
           sum += num * temp;
           if(max <max1)
           max = max1;
           num += y;
       }
   }
   cout<<sum<<endl;
   return 0;
}

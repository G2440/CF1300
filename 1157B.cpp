//Long Number 
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int n{0};
    cin>>n;
    string s;
    cin>>s;
    vector<int> vec(10);
    vec[0]=0;
    for(int i=1;i<10;i++){
        cin>>vec[i];
    }
    int j=0;
    for(j=0;j<n;j++){
       if(vec[(int)(s[j]-'0')]>(s[j]-'0')){
       break;
    }}
    for(int i=j;i<n;i++){
        if(vec[(int)(s[i]-'0')]>=(s[i]-'0')){
            s[i]=(char)(vec[(int)(s[i]-'0')]+'0');
        }else
        break;
    }
    cout<<s<<endl;
    
    
    
    
    
    
    return 0;
}
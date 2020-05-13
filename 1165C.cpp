//Good String
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int x;
    cin>>x;
    string p;
    cin>>p;
    string result;

    for(int i =0 ; p[i] !='\0';i++){
        if(result.size()%2==0 || result.back() != p[i])
        result+=p[i];
    } 
    if(result.size()%2!=0)
    result.pop_back();
    cout<<x-result.length()<<endl;
    cout<<result<<endl;


    return 0;
}
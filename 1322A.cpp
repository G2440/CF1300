    //Unusual Competitions
    #include<iostream>
    #include<string>
    using namespace std;

    int main(){
        
        int x;
        cin>>x;

        string arr;
        cin>>arr;
        int current =0, ans =0;
        for(int i =0 ; arr[i] !='\0' ;i++){
            if(arr[i] == '('){
                if(current <0)
                ans++;
                current++;
            }
            else{
                current--;
                if(current<0)
                ans++;
            }
        }
        if(current)
        cout<<-1<<endl;
        else 
        cout<<ans<<endl;

        return 0;
    }
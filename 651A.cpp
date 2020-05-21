//JoyStick
#include<iostream>
using namespace std;

int main(){
    
    int x,y;
    cin>>x>>y;
    
    int in_charge=0;
    int minutes=0;
    int game =0;

    if(x >=2 || y>=2){

    (x>=y) ? in_charge=y : in_charge=x;
    (x>=y) ? game=x : game=y;
     

    while( game>1 && in_charge>0 ){
        in_charge++;
        game-=2;
        minutes++;
        if(game<=2){
            int temp = in_charge;
            in_charge = game;
            game = temp; 
        }

    }  
    cout<<minutes<<endl;
    }
    else 
    cout<<0<<endl;

    return 0;
}
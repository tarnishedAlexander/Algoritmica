#include <iostream>
#include <stdio.h>
#include <math.h>
#define input freopen("on.txt", "r", stdin)

using namespace std;

int main(){
    input;
    int g;
    int s;
    int c;
    cin>>g>>s>>c;
    g = g*3;
    s = s*2; 

    int sum= g+s+c;

    if(sum > 1){
        if(sum>7){
            cout<<"Province";

        }else if (sum > 4){
            cout<<"Duchy";
        }else if(sum > 1) {
            cout<<"State";
        }
        cout<<" or ";
    }

  
        if (sum > 5){
        cout<<"Gold";
    }else if(sum > 2){
        cout<<"Silver";
    }else{
        cout<<"Copper";
    }
    

   return 0;
}
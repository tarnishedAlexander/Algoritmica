#include <iostream>
#include <stdio.h>
#include <math.h>
#define input freopen("on.txt", "r", stdin)

using namespace std;

int main(){
    input;
    int initial, gift;
    int count = 0;
    while(cin>>initial, initial != 0){
        int sum=0;
        count++;
        for(int i =0; i < initial; i++){
        cin>>gift;
        if(gift>0){
            sum++;
        }else{
            sum--;
        }
        }
        cout<<"Case ";
        cout<<count<<": ";
        cout<<sum<<'\n';    
    }
   return 0;
}
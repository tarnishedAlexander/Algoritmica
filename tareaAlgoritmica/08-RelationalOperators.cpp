#include <iostream>
#include <stdio.h>
#include <math.h>
#define input freopen("on.txt", "r", stdin)

using namespace std;

int main(){
    input;
    double  a, b;
    int t;
    cin>>t;
   while (t--)
   {
    cin>>a>>b;
    if(a<b){
        cout<<"<"<<'\n';

    }else if (a > b){
        cout<<">"<<'\n';

    }else{
        cout<<"="<<'\n';
  
    }
   }
   return 0;
   
}
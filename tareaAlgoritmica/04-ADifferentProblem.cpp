#include <iostream>
#include <stdio.h>
#include <math.h>
#define input freopen("on.txt", "r", stdin)

using namespace std;

int main(){
    input;
    long long a;
    long long b;
   while (cin>>a>>b)
   {
    if(a<b){
        cout<<b-a<<'\n';
    } else{
        cout<<a-b<<'\n';
    }

   }
   
}
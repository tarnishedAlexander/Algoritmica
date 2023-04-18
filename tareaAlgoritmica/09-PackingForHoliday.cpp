#include <iostream>
#include <stdio.h>
#include <math.h>
#define input freopen("on.txt", "r", stdin)

using namespace std;

int main(){
    input;
    double  l, w, h;
    int t;
    int count=0;
    cin>>t;
   while (t--)
   {
    cin>>l>>w>>h;
    count++;
    if(l<=20 && w<=20 &&h<=20 ){

        cout<<"Case: ";
        cout<<count;
        cout<<" good"<<'\n';

    }else {
        cout<<"Case: ";
        cout<<count;
        cout<<" bad"<<'\n';

    }
   }
   return 0;
   
}
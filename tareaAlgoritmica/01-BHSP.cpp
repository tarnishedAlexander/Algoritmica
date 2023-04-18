#include <iostream>
#include <stdio.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdin)
using namespace std;

int main(){
    input;
    

    int v,t;
    while (cin>>v>>t) 
    {
        cout<<2*v*t<<'\n';
    }
    return 0;
}
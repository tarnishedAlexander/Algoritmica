#include <iostream>
#include <stdio.h>
#include <math.h>
#define input freopen("on.txt", "r", stdin)

using namespace std;

int main(){
    input;
    double  n, y;
    double result = 0;
    int t;
    cin>>t;
   while (t--)
   {
    cin>>n>>y;
    result += n*y;
   }
   cout<<result<<'\n';
   return 0;
   
}
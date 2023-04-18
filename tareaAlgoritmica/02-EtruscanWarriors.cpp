#include <iostream>
#include <stdio.h>
#include <math.h>
#define input freopen("on.txt", "r", stdin)
#define output freopen("out.txt", "w", stdin)
using namespace std;

int main(){
    input;
    int contador;
    long warriors;
    int result;
   
   cin>>contador;
   while (contador--)
   {
    cin>>warriors;

    result = ((-1+sqrt(1+8*warriors))/2); 

        cout<<result<<'\n';
   }
   
   return 0;
} 
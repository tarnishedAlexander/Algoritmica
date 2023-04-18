#include <iostream>
#include <stdio.h>
#include <math.h>
#define input freopen("on.txt", "r", stdin)

using namespace std;

int main(){
    input;
    int cases;
    int n;
    int run;
    int max;
    int count = 0;
    cin>>cases;
   while (cases--)
   {
    max=0;
    count++;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>run;
        if(run>max){
            max=run;
        }
    }
    cout<<"Case ";
    cout<<count<<":";
    cout<<max<<'\n';
   }
   return 0;
   
}
#include <iostream>
#include <stdio.h>
#include <math.h>
#define input freopen("on.txt", "r", stdin)

using namespace std;

int main(){
    input;
    int people ;
    int chicken;
   while (cin>>people>>chicken)
   {
    if(people < chicken){
        cout<<"Dr. Chaz will have ";
        cout<< chicken-people;
        cout<< " pieces of chicken left over!"<<'\n';

    } else{

        cout<<"Dr. Chaz needs ";
        cout<< people-chicken ;
        cout<< " more pieces of chicken!"<<'\n';

    }

   }
   return 0;
}
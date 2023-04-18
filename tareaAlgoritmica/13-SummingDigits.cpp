#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include<cstdio>
#define input freopen("on.txt", "r", stdin)

using namespace std;


#include<cstdio>
 
int n;
 
int recurse(int n) {
    input;
    int sum = 0;
    while(n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum / 10 == 0? sum : recurse(sum);
}
 
int main() {
    
        while(cin>>n){
            if(n == 0){
            cout<<recurse(n);
            }else{
                recurse(n);
            }
    }
}
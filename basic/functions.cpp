#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d){
    int maxVal = 0;
    int arr[] = {a, b, c,d};
    for(int i =0; i<sizeof(arr) / sizeof(int);i++){
        if(arr[i]>= maxVal){
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
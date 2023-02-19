#include <iostream>
#include <cstdio>
using namespace std;


void checkEven(int n){
    if(n% 2 ==0){
            cout<< "even"<<"\n";
        }else{
            cout<< "odd"<<"\n";
    }
}

void printNumber(int n){
    const char* name[9] = {"one", "two","three","four","five","six","seven","eight","nine"};
    for (int i = 1; i <= 9; i++){
        if(i == n){
            std::cout << name[i-1] << "\n";
        }
    }
   
        
}

void checkNumber(int n, int m){
    for(int i =n; i<=m;i++){
        if(i<=9){
            printNumber(i);
        }else{
            checkEven(i);
        }
    }
}


int main() {
    // Complete the code.
    int n, m;
    cin >>n>>m;
    checkNumber(n,m);
    
    
    
    return 0;
}

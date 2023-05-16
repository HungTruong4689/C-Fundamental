#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    string c = a+b;
    cout<<c<<endl;

    //get the size of a strinb
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout<<a<<" "<<b<<endl;
    return 0;
}
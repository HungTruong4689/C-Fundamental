#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

void printNumber(int n){
    const char* name[9] = {"one", "two","three","four","five","six","seven","eight","nine"};
    for (int i = 1; i <= 9; i++){
        if(i == n){
            std::cout << name[i-1] << "\n";
        }
    }
    
        
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    if(n<=9){
        printNumber(n);
        
    }else{
        cout<<"Greater than 9"<<endl;
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

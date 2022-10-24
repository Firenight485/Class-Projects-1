#include<iostream>
#include<string>
using std::string;
#include<regex>


int main() {
    string t;
    string i;
    int counter;

    std::cin >> t;
    if (t.length() != 9) {
        std::cout << "i";
    }else if(t.length() == 9) {
        for (int i = 0; i < 9; ++i) {
            if (t[i] >= '0' && t[i] <= '9') {
                counter++;
            } else {
                t = i;
            }
        } 
    }
    
}
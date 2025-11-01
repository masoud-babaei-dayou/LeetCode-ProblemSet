#include <iostream>
#include <string>
#include <numeric>

using namespace std;


string gcdOfStrings(string str1, string str2) {


    if((str1 + str2 != str2 + str1)){
        return "";
    }
    int g = gcd((int)str1.size(),(int)str2.size());
    return str1.substr(0,g);
}


int main() {
    string word1 = "ababab";
    string word2 = "ab";
    cout << gcdOfStrings(word1, word2);
    return 0;
}
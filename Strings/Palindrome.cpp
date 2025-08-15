#include<iostream>
#include <cstring>
using namespace std;

    bool isPalindrome(string s){
        int start = 0;
        int end = s.length() - 1;

        while(start <= end){
            if(s[start] != s[end]){
                return false;
            }
            else{
                start++; end--;
            }
        }
        return true;
    }

int main(){
    char name[20] = "noonnoon";

    if(isPalindrome(name)){
        cout << "This is a Palindrome String." <<endl; 
    }
    else{
        cout << "This is not a Palindrome String." <<endl; 
    }

    return 0;
}
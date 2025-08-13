#include<iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char name[]){
    int start = 0;
    int end = strlen(name) - 1;

    bool verdict = false;

    while(start <= end){
        if(name[start++] == name[end--]){
            verdict = true;
        }
    }
    return verdict;
}

int main(){
    char name[20] = "noon";

    if(isPalindrome(name)){
        cout << "This is a Palindrome String." <<endl; 
    }
    else{
        cout << "This is not a Palindrome String." <<endl; 
    }

    return 0;
}
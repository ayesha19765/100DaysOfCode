// Date:03-01-2023
// ❤️ Happy Coding :) ❤️ 
// ❤️ Ayesha ❤️ 
#include <iostream>
bool areAnagram(string &str1, string &str2){
    if(str1.size() != str2.size()) return false;
    int arr[256] = {0};
    for(int i = 0; i < str1.size(); i++){
        arr[str1[i]]++;
        arr[str2[i]]--;
    }
    for(int i = 0; i < 256; i++){
        if(arr[i]) return false;
    }
    return true;
}
using namespace std;

int main()
{
    
    return 0;
}

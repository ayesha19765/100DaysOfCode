// Date:04-12-2023
// ❤️ Happy Coding :) ❤️
// ❤️ Ayesha ❤️
#include <iostream>
using namespace std;
// https://www.codingninjas.com/studio/problems/893000?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
int 
(string str)
{
    int n = str.size();
    int start = 0, prev = n - 1, end = n - 1;
    while (start < end)
    {
        if (str[start] == str[end])
        {
            start++, end--;
        }
        else
        {
            start = 0, end = prev - 1;
            prev = end;
        }
    }
    return (str[prev] == str[0]) ? n - (prev + 1) : n - 1;
}

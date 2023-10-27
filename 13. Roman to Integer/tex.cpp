// class Solution {
// public:
//     int romanToInt(string s) {
//         std::unordered_map<char,int>romanMap{
//             {'I',1},
//             {'V',5},
//             {'X',10},
//             {'L',50},
//             {'C',100},
//             {'D',500},
//             {'M',1000},
//         };
//         int sum = 0;
//         for(int i = 0; i < s.length(); i++)
//         {
//             int tym = romanMap[s[i]];
//             if(i < s.length() - 1 && tym < romanMap[s[i + 1]])
//             {
//                 sum -= tym;
//             }else{
//                 sum += tym;
//             }
//         }
//         return sum;
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int romanToInt(string s) {
    unordered_map<char,int>romanMap{
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
    };
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int tym =  romanMap[s[i]] ;
        if(i < s.length() -1 && tym < romanMap[s[i + 1]])
        {
            sum -= tym;
        }else{
            sum += tym;
        }

    }
    return sum;
}
int main()
{
    string s;
    cin >> s;
    int tym = romanToInt(s);
    cout << tym; 
    return 0;
}

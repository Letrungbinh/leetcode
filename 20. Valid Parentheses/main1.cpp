// class Solution {
// public:
//     bool isValid(string s) {
//    stack<char> sum;
//    for(auto i:s)
//    {
//        if(i == '(' || i == '[' || i == '{'){
//            sum.push(i);
//        }
//        else{
//            if(sum.empty() || (sum.top()=='(' && i != ')') || (sum.top()=='[' && i != ']') || (sum.top()=='{' && i != '}'))
//            {
//                return false;
//            }else{
//                sum.pop();
//            }
//        }
//    }
//    return sum.empty();
//     }
// };
#include <iostream>
#include <stack>
#include <string>
using namespace std;
 bool isValid(string s) {
   stack <char> sum;
   for(auto i:s)
   {
       if(i == '(' || i == '[' || i == '{'){
           sum.push(i);
       }
       else{
           if(sum.empty() || (sum.top()=='(' && i != ')') || (sum.top()=='[' && i != ']') || (sum.top()=='{' && i != '}'))
           {
               return false;
           }else{
               sum.pop();
           }
       }
   }
   return sum.empty();
    }
    int main(){
        string s;
        cin >> s;
        if(isValid(s)){
            cout << true;
        }else{
            cout << false;
        }
        return 0;
    }
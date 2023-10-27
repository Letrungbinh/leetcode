// class Solution {
// public:
//     bool isPalindrome(int x) {
//       int sum = 0;
//       int temp = x;
//       if(x < 0){
//           return false;
//       }  
//       while(x > 0)
//       {
//           int siu = temp % 10; 
//           sum = sum * 10 + siu;
//           x /= 10;
//       }
//       return sum;
//     }
//
#include <iostream>
using namespace std;

    bool isPalindrome(int x) {
      int sum = 0;
      int temp = x;
      if(x < 0){
          return false;
      }  
      while(x > 0)
      {
          int siu = temp % 10; 
          sum = sum * 10 + siu;
          x /= 10;
      }
      return sum;}
      int main(){
        int x;
        cin >> x;
        if(isPalindrome(x))
        {
            cout << true;
        }else{
            cout << false;
        }
        return 0;
      }


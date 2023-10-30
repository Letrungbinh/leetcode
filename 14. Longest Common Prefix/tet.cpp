// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//     string str = strs[0];
//         string fin = "";
//         for(int i = 0; i < str.size(); i++)
//         {
//              char sum = str[i];
//             for(int j = 1; j < strs.size(); j++)
//             {
//                 if(strs[j][i] != sum){
//                     return fin;
//                 }
//             }
//             fin += sum;
//         }
//         return fin;    
//     }
// };
#include <iostream>
#include <string>
#include <vector>
std::string longestCommonPrefix(std::vector<std::string> & strs) {
    std::string str = strs[0];
    std::string fin="";
        
        for(int i = 0; i < str.size(); i++)
        {
             char sum = str[i];
            for(int j = 1; j < strs.size(); j++)
            {
                if(strs[j][i] != sum){
                    return fin;
                }
                
            }
            fin += sum;
        }
        return fin;    
    }
    int main(){
        std::vector<std::string> strs = {"flower","flow","flight"};
        std::string c = longestCommonPrefix(strs);
        std::cout << c << std::endl; 

       return 0;    
    }


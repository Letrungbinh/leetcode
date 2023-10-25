// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> my_vector = {};
//         for(int i = 0 ; i < (nums.size()-1) ;i++)
//         {
//             for (int j =i+1;j < nums.size();j++ ){
//                 if (nums[i]+nums[j]==target){
//                     my_vector.emplace_back(i);
//                     my_vector.emplace_back(j);
//                     return my_vector;
//                 }
//             }
//         }
//         return my_vector;
//     }
// };

#include <iostream>
using namespace std;

int main()
{
    int n, target;
    cin >> n;
    int *arr = new int(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> target;
    int my_vector[2];
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                my_vector[0] = i;
                my_vector[1] = j;
                break;
            }
        }
    }
    cout<<"["<<my_vector[0]<<","<<my_vector[1]<<"]";
    return 0;
}
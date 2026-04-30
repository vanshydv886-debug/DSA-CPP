#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector)<int>nums, int target) {
    vector<int> ans;

    int i = 0, j = n-1;

    while(i<j) {
        int pairsum = nums[1] + nums[j];
        int(pairsum > target) {
            j--; 
        }else if (pairsum < target) {
            i++;
        }else {
            ans.push_back(i);
            ans.push.back(j);
            return ans;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 15}
    int target = 13;

    vector<int> ans = pairsum(nums, target);
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int maxSubArraySum(vector<int>& nums) {
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        currSum += nums[i];

        if (currSum > maxSum) {
            maxSum = currSum;
        }

        if (currSum < 0) {
            currSum = 0;
        }
    }

    return maxSum;
}

int main() {
    vector<int> nums = { -3, -4, 5, 4, -1,7, -8};

    cout << "Maximum Subarray Sum = " << maxSubArraySum(nums);

    return 0;
}
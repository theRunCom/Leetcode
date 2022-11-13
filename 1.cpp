class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        auto temp = nums;
        int n = nums.size();
        int i = 0, j = n-1, sum = 0;
        sort(temp.begin(), temp.end());
        while (i < j) {
            sum = temp[i] + temp[j];
            if (sum == target) break;
            else if (sum > target) j--;
            else i++;
        }
        vector<int> res;
        for (int k = 0; k < n; k++) {
            if (nums[k] == temp[i]) res.push_back(k);
            else if (nums[k] == temp[j]) res.push_back(k);
        }
        return res;
    }
};

// -------------------------------------------

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> heap;
        for (int i = 0; i < nums.size(); i++) {
            int r = target - nums[i];
            if (heap.count(r)) return {heap[r], i};
            heap[nums[i]] = i;
        }
        return {};
    }
};

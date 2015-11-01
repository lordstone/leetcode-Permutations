class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> arr, output;
        if(nums.size() == 0) return arr;
        if(nums.size() == 1) {
            arr.push_back(nums);
            return arr;
        }
        vector<int> tmp = nums;
        int myitem = tmp.back();
        tmp.pop_back();
        arr = permute(tmp);
        for(int i = 0; i < arr.size(); i ++){
            vector<int> newtmp = arr[i];
            for(int j = 0; j <= newtmp.size(); j++){
                vector<int> newnewtmp = newtmp;
                newnewtmp.insert(newnewtmp.begin() + j, myitem);
                output.push_back(newnewtmp);
            }
        }
        return output;
    }
};

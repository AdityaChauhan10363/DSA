class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_set <int> ans;
        for(int num : nums){
            ans.insert(num);
    }
    for(int x = 0;x<=n;x++){
        if(!ans.count(x))
return x;
    }
return -1;
}
};
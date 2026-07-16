class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
unordered_set<int> op;
vector<int> missing;
for(int num : nums){
    op.insert(num);
    }
    for(int i=1;i<=nums.size();i++){
if(!op.count(i)) missing.push_back(i);
    }
return missing;
}
};

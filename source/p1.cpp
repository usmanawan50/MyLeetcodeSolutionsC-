class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // create vector to store required indices
        vector<int> indices;

        // iterate given vectir array to find required vectors
        for(int i = 0; i < nums.size() - 1; i++) {

            for(int j = i + 1; j < nums.size(); j++) {

                if(nums[i] + nums[j] == target) {
                    indices.push_back(i);
                    indices.push_back(j);
                    return indices;
                } else 
                    continue;
            }
        }
        
        // if vector is empty return sentinel value -1
        if(indices.empty()) 
            indices.push_back(-1);

        return indices;
    }
};

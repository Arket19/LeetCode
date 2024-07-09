
//More efficient solution 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1]){
                //Each "new" number is moved to the index position of the array so the first n positions of the array are the n different numbers it contains. 
                nums[index] = nums[i];
                index++;
            }
        }

        return index;
    }
};


//Less efficient solution
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                //When a duplicate is found is sent to the end of the list and removed
                vector<int>::iterator newEnd = remove(nums.begin() + i, nums.end(), nums[i]);
                nums.erase(newEnd, nums.end());
            }
        }

        return nums.size();
    }
};
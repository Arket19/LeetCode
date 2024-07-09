

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        //Put the elements that are different to val at the start of the vector and return the position of the first ocurrence of val.
        vector<int>::iterator newEnd = remove(nums.begin(), nums.end(), val);

        //Erase the elements of the vector from the first ocurrence of val to the end.
        nums.erase(newEnd, nums.end());

        return nums.size();

    }
};
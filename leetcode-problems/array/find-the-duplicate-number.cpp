//this problem is done by array's different method but over here modification of array occurs, but this problem can be done without modification by binary search method.

//basic sorting method,where T.C. is high,i.e., O(nlogn)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        return -1;
    }
};

//-ve marking of elements already visited 

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //visited solution 
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            int index=abs(nums[i]);
            //aleady visited?
            if(nums[index]<0){
                ans=index;
                break;
            }
            //visted mark 
            nums[index] *=-1;
        }
        return ans;
    }
};

//positioning elements,i.e., elements of their returning to their ownself valued indexes

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        while(nums[0]!=nums[nums[0]]){
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];
    }
};

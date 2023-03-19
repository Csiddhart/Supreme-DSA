//wrong answer holo karon identical pair accept kore nicchilo and setai return kore dicchilo 

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int i=0;int j=1;
        while(j<nums.size()){
            int diff=nums[j]-nums[i];
            if(diff==k){
                ans++;
                i++;j++;
            }
            else if(diff>k){
                i++;
            }else{
                j++;
            }
            if(i==j){
                j++;
            }
        }
        return ans;
    }
};


//ekhane two pointer diye kaaj holo but identical element and identical pair accept jateh nah hoye tai SET ans PAIR use kora holo 

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>> ans;
        int i=0;int j=1;
        while(j<nums.size()){
            int diff=nums[j]-nums[i];
            if(diff==k){
                ans.insert({nums[i],nums[j]});
                i++;j++;
            }
            else if(diff>k){
                i++;
            }else{
                j++;
            }
            if(i==j){
                j++;
            }
        }
        return ans.size();
    }
};





//over here binary search kora holo main catch ta tumi niche dekhteh pabe comment kora ache 

class Solution {
public:

int bs(vector<int>& nums,int start, int k){
    int end=nums.size()-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(nums[mid]==k){
           return mid;
        }
        else if(k>nums[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>> ans;
        
        for(int i=0;i<nums.size();i++){
            /* a[i] teh i ache 
            search -> (chalu hobe from) a[i] + k[right subarray]*/
            if(bs(nums,i+1,nums[i]+k)!=-1){
                ans.insert({nums[i],nums[i]+k});
            }
        }
        return ans.size();
    }
};

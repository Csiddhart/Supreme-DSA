// here 3-pointer approach has been used 

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l,m;
        l=m=0;
        int h=nums.size()-1;
        while(m<=h){
            if(nums[m]==0){
                swap(nums[l],nums[m]);
                l++;
                m++;
            }
            else if(nums[m]==1){
                m++;
            }
            else{
                swap(nums[m],nums[h]);
                h--;
            }
        }
    }
};

//counting approach has been used 

class Solution {
public:
    void sortColors(vector<int>& nums) {
        //counting method
        int zero,one,two;
        zero=one=two=0;
        //now counting
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero++;
            }
            else if(nums[i]==1){
                one++;
            }else{
                two++; //counting done 
            }
        }
        //speard
        int i=0;
        while(zero--){
            nums[i]=0;
            i++;
        }while(one--){
            nums[i]=1;
            i++;
        }while(two--){
            nums[i]=2;
            i++;
        }
    }
};


//here it is a test that the solution is running or not with inbuilt sort function of vector, since in question there is given:- "You must solve this problem without using the library's sort function." this method is restricted to use in these types of questions.

class Solution {
public:
    void sortColors(vector<int>& nums) {
       sort(nums.begin(),nums.end()); 
    }
};

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>fin;
for(int i=0;i<nums1.size();i++){
    int element=nums1[i];
    for(int j=0;j<nums2.size();j++){
if(element==nums2[j]){
    nums2[j]=INT_MIN;                //marking, where finding of same element has been done
    fin.push_back(element);
}
    }
}
sort(fin.begin(),fin.end());
fin.erase(unique(fin.begin(),fin.end()),fin.end());  // new concept for me
return fin;
    }  
};

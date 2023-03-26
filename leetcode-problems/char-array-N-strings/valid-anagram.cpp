class Solution {
public:
    bool isAnagram(string s, string t) {
    /*

    // sorting (brute force approach)
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        return true;
    }else{
        return false;
    }
    
    
    */
    
     
//optimized and best approach
    int fretable[256]={0};
    for(int i=0;i<s.size();i++){
        fretable[s[i]]++;
    }
    for(int i=0;i<t.size();i++){
        fretable[t[i]]--;
    }
    for(int i=0;i<256;i++){
        if(fretable[i]!=0){
            return false;
        }
    }
return true; 
    }
};

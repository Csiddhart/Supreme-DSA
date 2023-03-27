class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash [256]={0};                     //mapping of char of language 's' to language 't'
        bool istcharmapped[256]={0};            //storea if t[i] char already mapped with s[i]

        for(int i=0;i<s.size();i++){
            if(hash[s[i]]==0&& istcharmapped[t[i]]==0){
                hash[s[i]]=t[i];                                                                                            //imp. concept.  how to hash and solve prbs.
                istcharmapped[t[i]]=true;
            }
        }

        for(int i=0;i<s.size();i++){
            if(char(hash[s[i]])!=t[i]){
                return false;
            }
        }
        return true;
    }
};

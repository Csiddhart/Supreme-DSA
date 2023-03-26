class Solution {
public:
bool isvowel(char ch){
    ch = tolower(ch);
    return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
}
    string reverseVowels(string s) {
        int l=0,h=s.size()-1;
        while(l<h){
            if(isvowel(s[l])&&isvowel(s[h])){
                swap(s[l],s[h]);
                l++;
                h--;
            }
            else if(isvowel(s[l])==0){
                l++;
            }
            else{
                h--;
            }
        }
        return s;
    }
};

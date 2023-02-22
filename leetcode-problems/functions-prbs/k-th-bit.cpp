// here only function will be there since these are leetcode prbs.
int bitshift(int N, int K){
    int mask= 1<<K; //for shiftting bit we have to do masking
    int ans = N|mask;
    return ans;
}
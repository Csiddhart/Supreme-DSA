 // here only function will be there since these are leetcode prbs. here leetcode q:-7 REVERSE INTEGER
 int reverse (int x){

     int ans=0,rem=0;

     bool isneg=false;

     if(x <= INT_MIN){
        return 0;
     }

     if(x<0){
        isneg=true;
        x=-x;
     }

     while(x>0){
        if(ans>INT_MAX/10){
            return 0;
        }
        int digit=x%10; //for collecting remainder
        ans=ans*10+digit;
        x=x/10; //for collecting quoient
     }

     return ans;
 }
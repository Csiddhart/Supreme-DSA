//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    
    bool ispossiblesolution(int A[],int N,int M , int sol){
        int pagesum =0;
        int c=1;
        for(int i=0;i<N;i++){
            if(A[i]>sol){
                return false;
            }
            if(pagesum + A[i]>sol){
                c++;
                pagesum=A[i];
                if(c>M){
                    return false;
                }
            }else{
                pagesum += A[i];
            }
        }
        return true;
    }
    
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(M>N)return -1;
        
        int start = 0;
        int end = accumulate(A,A+N,0);
        int ans = -1;
        while(start<=end){
            int mid = (start+end)>>1;
            if(ispossiblesolution(A,N,M,mid)){
                ans = mid;           //storing 
                end = mid-1;    //right a galo 
            }else{
                start=mid+1;     //left a galo
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends

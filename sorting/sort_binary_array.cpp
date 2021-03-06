#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
  public:
    
    // A[]: input array
    // N: input array size
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
        int j = -1;
        
        for (int i = 0; i < N; i++) {
            if (A[i] < 1) {
                j++;
                swap(A[i], A[j]);
            }
        }
    }
};

// { Driver Code Starts.
int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    Solution obj;
	    obj.binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        long long f1=1, f2=1, i;
        vector<long long> arr;
 
        if (n < 1)
            return arr;
            
        arr.push_back(f1);
        for (i = 1; i < n; i++) {
            arr.push_back(f2);
            long long next = f1 + f2;
            f1 = f2;
            f2 = next;
        }
        
        return arr;
    }
};

// { Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

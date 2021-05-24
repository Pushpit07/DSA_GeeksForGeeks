#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> res;
        int curr_max = INT_MIN;
        
        for(int i=n-1; i>=0; i--) {
            if (a[i] >= curr_max) {
                curr_max = a[i];
                res.push_back(curr_max);
            }
        }
        
        reverse(res.begin(), res.end());
        
        return res;
        
    }
};

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

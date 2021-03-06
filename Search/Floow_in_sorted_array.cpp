#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:

    int findFloor(vector<long long> v, long long n, long long x){
        if(x < v[0])
            return -1;
        if(x > v[n-1])
            return n-1;
        
        int low = 0, high = n-1;
        
        while(low <= high) {
            int mid = (low + high)/2;
            
            if (v[mid] == x)
                return mid;
            
            if(v[mid-1]<=x && v[mid]>=x) {
                return mid-1;
            }
            else if(v[mid] > x)
                high = mid-1;
            else if(v[mid] < x)
                low = mid+1;
        }
    }
};

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}

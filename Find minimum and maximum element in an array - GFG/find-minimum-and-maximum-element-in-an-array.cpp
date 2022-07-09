// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    
        long long max = INT_MIN;
        long long min = INT_MAX;
        
        for(int i=0; i<n; i++){
            max = a[i] > max ? a[i] : max;
            min = a[i] < min ? a[i] : min;
        }
        return make_pair(min,max);
    
}
#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long n, k;
    cin >> n >> k;
    
    long long total_popcount = 0;
    long long prachi = 1;
    
   
    while (n > 0 && prachi <= n) {
        long long max_bits_can_place = n / prachi;
        long long take = min(k, max_bits_can_place);
        
        total_popcount += take;
        n -= take * prachi;
        
        
        if (prachi > n / 2) {
           
            break;
        }
        
        prachi *= 2;
    }
    
    cout << total_popcount << "
";
}
 
int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
#include <bits/stdc++.h> 
using namespace std; 

  
int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
      
    int n;
    cin >> n;
    
    double count;
    for (int i = 1; i <= n; i++) {
        double q, y;
        cin >> q >> y;

        count += q * y;
    }

    cout << fixed << setprecision(3) << count << endl;

    return 0; 
} 
#include <bits/stdc++.h> 
using namespace std; 

  
int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
      
    int n, m;
    cin >> n >> m;

    int diff = abs(n - m);

    if (m > n) {
        cout << "Dr. Chaz will have " << diff << " " << (diff == 1 ? "piece" : "pieces") << " of chicken left over!\n";
    } else {
        cout << "Dr. Chaz needs " << diff << " more " << (diff == 1 ? "piece" : "pieces") << " of chicken!\n"; 
    }

    return 0; 
} 
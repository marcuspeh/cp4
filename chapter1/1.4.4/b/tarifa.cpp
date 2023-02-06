#include <bits/stdc++.h> 
using namespace std; 

  
int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
      
    int x, n;
    cin >> x >> n;

    int remainder = 0;

    for (int i = 0; i < n; i++) {
        remainder += x;
        
        int used;
        cin >> used;

        remainder -= used;
    }

    cout << remainder + x << endl;

    return 0; 
} 
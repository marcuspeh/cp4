#include <bits/stdc++.h> 
using namespace std; 

  
int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
      
    long long a, b;
    while (cin >> a >> b && !cin.eof()) {
        cout << abs(a - b) << endl;
    }

    return 0; 
} 
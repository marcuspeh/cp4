#include <bits/stdc++.h> 
using namespace std; 


int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
      
    double s;
    cin >> s;
    double result = round(s * 1000 * 5280 / 4854);
    
    cout << fixed << setprecision(0) << result << endl;
    return 0; 
} 
#include <bits/stdc++.h> 
using namespace std; 

  
int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
      
    int x, y;
    cin >> x >> y;
    y--;
    
    if (y < 0.5) {
        if (x == 0) {
            cout << "ALL GOOD\n"; 
        } else  {
            cout << "IMPOSSIBLE\n";
        }
    } else {
        double result = x / double(y);
        result = -result;

        cout << fixed << setprecision(9) << result << endl;
    }



    
    return 0; 
} 
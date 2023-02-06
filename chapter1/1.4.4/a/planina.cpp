#include <bits/stdc++.h> 
using namespace std; 


int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
      
    int s;
    cin >> s;
    
    int side = 2;
    int add = 1;
    for (int i = 0; i < s; i++) {
        side += add;
        add *= 2;
    }
    
    cout << side * side << endl;

    return 0; 
} 
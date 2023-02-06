#include <bits/stdc++.h> 
using namespace std; 


int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
      
    double A, I;
    cin >> A >> I;

    I -= 0.99;
    
    cout << ceil(A * I) << endl;

    return 0; 
} 
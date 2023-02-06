#include <bits/stdc++.h> 
using namespace std; 

  
int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
      
    string mon;
    int day;

    cin >> mon >> day;

    if (mon == "OCT" && day == 31) {
        cout << "yup\n";
    } else if (mon == "DEC" && day == 25) {
        cout << "yup\n";
    } else {
        cout << "nope\n";
    }

    return 0; 
} 
#include <bits/stdc++.h> 
using namespace std; 

  
int main() 
{ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    
      
    int g, s, c;
    cin >> g >> s >> c;

    int purchasePower = g * 3 + s * 2 + c * 1;

    string victory = "";
    if (purchasePower >= 8) 
        victory = "Province";
    else if (purchasePower >= 5)
        victory = "Duchy";
    else if (purchasePower >= 2) 
        victory = "Estate";

    string treasure = "Copper";
    if (purchasePower >= 6) 
        treasure = "Gold";
    else if (purchasePower >= 3) 
        treasure = "Silver";

    if (victory == "") 
        cout << treasure << endl;
    else    
        cout << victory << " or " << treasure << endl;


    return 0; 
} 
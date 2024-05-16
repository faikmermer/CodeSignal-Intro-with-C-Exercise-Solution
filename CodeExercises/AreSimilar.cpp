#include <bits/stdc++.h> 
using namespace std; 
  
bool solution(vector<int> a, vector<int> b) {
    
    vector<int> copyA = a;
    vector<int> copyB = b;
    
    sort(copyA.begin(), copyA.end());
    sort(copyB.begin(), copyB.end());
    
    int changeCount{};
    
    for(unsigned int i{}; i < copyA.size(); ++i) if(copyA[i] != copyB[i])
        return false;
    
    for(unsigned int i{}; i < a.size(); ++i) if(a[i] != b[i])
        ++changeCount;
    
    if(changeCount > 2) return false;
    else return true;
        
}

int main(int argc, char const *argv[])
{
    cout<<solution({1, 2, 3}, {1, 2, 3});
    
    
    return 0;
}
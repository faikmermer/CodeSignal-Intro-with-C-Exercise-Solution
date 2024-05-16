#include <iostream>
#include <vector>
int solution(std::string s1, std::string s2) {

    std::vector<std::string> str1 = {s1};
    std::vector<std::string> str2 = {s2};    
    
    int  count = 0;
    
    for(int i = 0; i < static_cast<int>(str1[0].size()); ++i){
      bool isThere = false; // break command not used
        for(int j = 0; j < static_cast<int>(str2[0].size()) && !isThere; ++j){
                
            if(str1[0][i] == str2[0][j]){
                str2[0].erase(str2[0].begin() + j);
                str1[0].erase(str1[0].begin() + i);
                --j;
                ++count;
                isThere = true;
            } 
            
        }
        if(isThere) --i;
        
    }
    return count;
}


int main(){

    std::cout<<solution("zzzz","zzzzzzz");
}
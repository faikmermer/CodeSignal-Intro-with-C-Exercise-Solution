#include <iostream>
#include <string>
std::string solution(std::string s) {
    int count = 1;
    std::string newS = "";
    for(unsigned int i = 1; i <= s.length(); ++i){
        
        if(s[i] == s[i - 1]) ++count;
        else{
            if(count >= 2) newS += std::to_string(count);
            newS += s[i - 1];        
            count = 1;
        }
    }
    return newS;
}
int main() {

    std::cout<<solution("aaaaaaa")<<std::endl;
    return 0;
}
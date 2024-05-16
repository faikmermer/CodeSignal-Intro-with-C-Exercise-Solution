#include <iostream>
#include <algorithm>
bool solution(std::string inputString) {
    std::sort(inputString.begin(), inputString.end());
    int current = 1, prev = 0;
    if(inputString[0] != 'a') return false;
    for(unsigned int i = 1; i < inputString.length(); ++i){
        if(inputString[i] == inputString[i - 1] || inputString[i] - inputString[i - 1] == 1){
            
            if(inputString[i] == inputString[i - 1]) {
                ++current;
                continue;
            }
            if(current > prev && prev != 0 ) return false;
            prev = current;
            current = 1;
            
        }
        else return false;
    }
    if(current > prev && prev != 0 ) return false;
    return true;
}

int main() {
    std::cout<<solution("abcdefghijklmnopqrstuvwxyz");
}
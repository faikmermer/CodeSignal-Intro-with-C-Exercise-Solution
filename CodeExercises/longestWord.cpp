#include <iostream>
#include <string>

std::string solution(std::string text) {
    unsigned int i = 0, currrenword_count{}, higher_word{};
    std::string currentWord = "", longWord = "";
    while(i <= text.length()){
        if((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z')){
             ++currrenword_count;
             currentWord += text[i];
        }else{
            if(currrenword_count > higher_word) {
                higher_word = currrenword_count;
                longWord = currentWord;
            }
            currentWord = "";
            currrenword_count = 0;            
        }
        ++i;
    }
    return longWord;
}


int main(){
    std::cout<<solution("To");
}
#include <iostream>
#include <string>

std::string solution(std::string address) {
    unsigned int i = 0;
    std::string domain = "";
    while (address[i] != '@') ++i;
    for(unsigned int j = i + 1; j < address.length(); ++j) domain += address[j];
    
    return domain;
    
}
int main(int argc, char const *argv[]){
    
    std::cout<<solution("example-indeed@strange-example.com");
    return 0;
}
#include <iostream>
#include <string>

bool solution(std::string time) {
    int hours = std::stoi(time.substr(0, time.find(':')));
    int minute = std::stoi(time.substr(time.find(':') + 1));
    if(hours < 24 && minute < 60) return true;
    return false;
}
int main(){
    std::cout<<solution("02:76");
}
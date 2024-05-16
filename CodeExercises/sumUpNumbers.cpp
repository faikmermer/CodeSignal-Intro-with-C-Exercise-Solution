#include <iostream>
#include <string>


int solution(std::string inputString) {
    unsigned int i = 0, number = 0, sum = 0;
    std::string strNumber = "";
    bool isSum = false;
    inputString.push_back('z');
    while(i < inputString.length()){
        if(isdigit(inputString[i])){
            strNumber += inputString[i];
            number = std::stoi(strNumber);
            isSum = false;
        }else{
            if(!isSum){
                sum += number;
                isSum = true;
                strNumber = "";
            }
        }
        ++i;
    }
    return sum;
}
int main(){
    std::cout<<solution("123450");
}
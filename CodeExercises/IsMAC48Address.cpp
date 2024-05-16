
#include <iostream>
#include <string>


bool solution(std::string inputString, int index = 0)  {   
    int j = 0;
    for(unsigned int i = j; i < j + 2; ++i){

        if((inputString[i] < '0' || inputString[i] > '9') 
            && (inputString[i] <'A' || inputString[i] > 'F')) return false;
        
        if(inputString[i + 1] == '-'){
            i += 1;
            j += 3;
        } 
    }
    if(j + 2 != inputString.length()) return false;
    return true;
}
int main(int argc, char const *argv[])
{
    std::cout<<solution("A0_00-00-00-00-00");
    return 0;
}
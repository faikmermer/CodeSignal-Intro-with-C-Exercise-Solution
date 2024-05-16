#include <iostream>
#include <string>
using namespace std;


string solution(string inputString) {
    for(unsigned int i = 0; i < inputString.length(); ++i) (inputString[i] == 'z' ? inputString[i] = 'a' : inputString[i] += 1); 
   
    return inputString;
}

int main() {
    cout<<solution("crazy");
}
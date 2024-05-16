#include <iostream>
#include <string>
using namespace std;

int solution(int n) {
    long unsigned i = 0;
    std::string strn = std::to_string(n);
    while(i < strn.length()){
        if(strn[i] < strn[i + 1]){
            strn.erase(strn.begin() + i);
            n = std::stoi(strn);
            return n;
        }
        ++i;
    }
    if(i == strn.length()){
        strn.erase(strn.begin() + (i - 1));
        n = std::stoi(strn);
        return n;
    }
    return 0; 
}
int main(){

    std::cout<<solution(222250);
    return 0;
}
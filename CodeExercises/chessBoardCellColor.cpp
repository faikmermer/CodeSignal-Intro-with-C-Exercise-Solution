#include <iostream>
#include <string>
using namespace std;

bool solution(string cell1, string cell2) {
    int alphaControl = cell1[0] - cell2[0];
    int numberControl = cell1[1] - cell2[1];
    return (alphaControl % 2 == 0 ?  
        (numberControl % 2 == 0 ) : 
        (numberControl % 2 != 0 ));
}
int main(){
    std::cout<<solution("B3", "H8");
}
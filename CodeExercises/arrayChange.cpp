#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> inputArray) {
    
    int arrayChange{};
    
    for(unsigned int i = 1; i < inputArray.size(); ++i){
        if(inputArray[i - 1] >= inputArray[i]){
           arrayChange += (inputArray[i - 1] + 1) - inputArray[i];
           inputArray[i] = inputArray[i - 1] + 1;   
        }
    }
    return arrayChange;
}
int main(int argc, char const *argv[])
{
    std::cout<<solution({-24875, -6401, 58256, 44456, 2244, -25333, -42389, -5975, 7650, -46343, -62011, -55366, 7802, -37699, 15461, 13309, -58664, 54557, 56324, -34397, -33024, -21934, -18861, -23196, 56542, -63986, 59833, -45610, -16948, 399, -7405, 54701, -57348, -32627, 65534, 615});
    return 0;
}
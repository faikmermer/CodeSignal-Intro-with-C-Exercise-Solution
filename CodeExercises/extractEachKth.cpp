#include <iostream>
#include <vector>

void arrangement(std::vector<int> &inputArray, int k);
std::vector<int> resize(std::vector<int> &inputArray, int k);
//The goal here is to create our own functions without using 
//any ready-made code. except for the size() function. :)


std::vector<int> solution(std::vector<int> inputArray, int k) {
    unsigned int path = inputArray.size() / k, x{};
    const size_t SIZE = inputArray.size() - path;
    for(unsigned int i = 1; i < path + 1; ++i){
        x = i * (k - 1);
        arrangement(inputArray, x);
    }
    inputArray = resize(inputArray, SIZE);
    return inputArray;
}

void arrangement(std::vector<int> &inputArray, int k){
    for(unsigned int i = k; i < inputArray.size() -  1; ++i){
        inputArray[i] = inputArray[i + 1];
    }
}

std::vector<int> resize(std::vector<int> &inputArray, int k){
    std::vector<int> resizeArray(k, 0);
    for(unsigned int i = 0; i < k; ++i) resizeArray[i] = inputArray[i];
    
    return resizeArray;
}
int main(){
    std::vector<int> solu = solution({2}, 2);
    for(const auto & arr : solu)
        std::cout<< arr << " ";
}
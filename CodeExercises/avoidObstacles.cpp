#include <iostream>
#include <vector>
int solution(std::vector<int> inputArray) {
    int higher = 0;
    for(unsigned int i = 0; i < inputArray.size(); ++i)    if(inputArray[i] > higher) 
        higher = inputArray[i];
    
    int i = 2;
    do{
        int j = 0;
        while(j < inputArray.size() && inputArray[j] % i != 0){
            if(j == (inputArray.size() - 1)) return i;
            ++j;
        }
        ++i;
    }while(i < higher);
}
int main(){
    std::cout<<solution({5, 8, 9, 13, 14});
}
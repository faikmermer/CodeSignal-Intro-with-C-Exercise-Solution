#include <iostream>
#include <vector>
#include <algorithm>   

bool correct(std::vector<std::string>, int, int, std::string);
bool tourRearrangement(std::vector<std::string> inputArray, unsigned next);
void printPosibility(std::vector<std::string> inputArray);

bool solution(std::vector<std::string> inputArray) {

    for(unsigned int i = 0, change = 1; change < inputArray.size(); ++ change){
        if(tourRearrangement(inputArray, i)) return true;
        else{
            std::swap(inputArray[i], inputArray[change]); // we cobinate each element individually
            continue;
        }
    }
    return false;
}
//Check if there is a single character difference
bool correct(std::vector<std::string> inputArray, int j, int diff, std::string control){
     for( unsigned int k = 0; k < inputArray[j].size(); ++k) if(control[k] != inputArray[j][k])
         ++diff;
    if(diff == 1 ) return true;
    return false;

}
// Recursive function
bool tourRearrangement(std::vector<std::string> inputArray, unsigned next){
    int diff = 0;
    std::string control = inputArray[next];

    if(next == inputArray.size() - 1) return true;

    for(unsigned int j = next + 1; j < inputArray.size(); ++j){
        if(correct(inputArray, j, diff, control)){
            if(next + 1 != j) std::swap(inputArray[next + 1], inputArray[j]);
            printPosibility(inputArray);
            if(tourRearrangement(inputArray, next + 1)) return true;
        }

    }
    return false;
}
//Print each combination
void printPosibility(std::vector<std::string> inputArray){
    for(const auto s : inputArray)
        std::cout<<s << " ";
    std::cout<<std::endl;
}

int main(int argc, char const *argv[])
{
    std::cout<<solution({"af", "bf", "qv", "qz"})   ;
    return 0;
}
#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> inputArray, int elemToReplace, int substitutionElem) {
    for(unsigned int i = 0; i < inputArray.size(); ++i){
        if(inputArray[i] == elemToReplace)
            inputArray[i] = substitutionElem;
    }
    return inputArray;

}
int main(){
	std::vector<int> sol = solution({3, 1}, 3, 9);
	for(auto &dizi:sol)
		std::cout<<dizi;
}
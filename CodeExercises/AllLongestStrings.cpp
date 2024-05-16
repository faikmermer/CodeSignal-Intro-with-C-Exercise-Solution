#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> solution(std::vector<std::string> inputArray) {
  std::vector<std::string> outputArray = {};

  unsigned int i, j, countChar = 0;
    
    for(i = 0; i < inputArray.size(); ++i){
      for(j = 0; j < inputArray[i].size(); ++j){}
        
      if(countChar < j)
         countChar = j;
    }
   for(unsigned i = 0; i < inputArray.size(); ++i){
        if(inputArray[i].size() == countChar)
            outputArray.push_back(inputArray[i]);
    }  
    return outputArray; 
}


int main(int argc, char const *argv[]){
  std::vector<std::string> inputArray = {"onsfnib", "aokbcwthc", "jrfcw"};
  std::vector<std::string> outputArray = solution(inputArray);

  for(unsigned int i = 0; i < outputArray.size(); ++i){
    std::cout<<"[\""<<outputArray[i]<< "\"]";
  }


  return 0;
}
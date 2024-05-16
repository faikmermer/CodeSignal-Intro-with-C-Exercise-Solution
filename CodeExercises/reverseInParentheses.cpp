#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 
#include <numeric>

std::string solution(std::string inputString){
    
    std::string outputStr ="";
    std::vector<std::string> inptStr = {inputString};
    int deepth = 0, indexOn = inptStr[0].size(), indexOff = inptStr[0].size();

    for(int i = 0; i < static_cast<int>(inptStr[0].size()); ++i){

        if(inptStr[0][i] == '('){

            indexOn = i;
             ++deepth; 

        }else if(inptStr[0][i] == ')'){
           
            indexOff = i;
            std::reverse(inptStr[0].begin() + indexOn, inptStr[0].begin() + indexOff + 1);
            inptStr[0].erase(inptStr[0].begin() + indexOn);
            inptStr[0].erase(inptStr[0].begin() + indexOff - 1);

            if(deepth > 1){
                i = -1;
                deepth = 0;
                indexOff = inptStr[0].size();
                indexOn = 0;
            }else{
    
                outputStr += std::accumulate(inptStr[0].begin() + indexOn, inptStr[0].begin() + (indexOff - 1), std::string{});
                i = indexOff - 2;
                indexOn = inptStr[0].size();
                --deepth;
            } 

        
        }else if(i < indexOn)
            outputStr += inptStr[0][i];
        else
            ;
    }  


    return outputStr;       
}

int main(int argc, char const *argv[])
{
   std::cout<< solution("(bar)");
    return 0;
}









/*
std::string solution(std::string inputString){
    
    std::string outputStr ="";
    std::vector<std::string> inptStr = {inputString};
    int deepth = 0, indexOn = inptStr[0].size(), indexOff = inptStr[0].size(), prevIndex = inptStr[0].size();

    for(int i = 0; i < static_cast<int>(inptStr[0].size()); ++i){

        if(inptStr[0][i] == '('){

            
            indexOn = i;
             ++deepth; 

        }else if(inptStr[0][i] == ')'){

           
            indexOff = i;

            for(int j = indexOff - 1; j > indexOn && deepth == 1; --j)
                outputStr += inptStr[0][j];
         
            if(deepth > 1){
                std::reverse(inptStr[0].begin() + indexOn, inptStr[0].begin() + indexOff + 1);
                inptStr[0].erase(inptStr[0].begin() + indexOn);
                inptStr[0].erase(inptStr[0].begin() + indexOff - 1);
                i = -1;
                deepth = 0;
                indexOff = inptStr[0].size();
                indexOn = 0;
            }else
                --deepth;

        }else if(indexOff < static_cast<int>(inptStr[0].size()) && indexOn < indexOff && (inptStr[0][i] != ')' || inptStr[0][i] != '(')){

            outputStr += inptStr[0][i];

        }else if(i < indexOn)
            outputStr += inptStr[0][i];

        
    }  


    return outputStr;       
}

int main(int argc, char const *argv[])
{
   std::cout<< solution("foo((ali))baz");
    return 0;
}*/
#include <iostream>
#include<bits/stdc++.h>

bool solution(std::string inputString) {

	inputString.erase(std::remove(inputString.begin(), inputString.end(), ' '), inputString.end());
	std::sort(inputString.begin(), inputString.end());

	int higher = 0, sameCount = 1, oddCounter = 0;
	for(unsigned int i = 0; i < inputString.length(); ++i){
	
		if(inputString[i] == inputString[i + 1])
			++sameCount;
	
		else{

			if(sameCount > higher)
			    higher = sameCount;
			if(sameCount % 2 != 0 )
				++oddCounter; 				

			sameCount = 1;
		}
	}

	if(higher % 2 != 0)
		--oddCounter; 

	if(higher % 2 == 0 && oddCounter <= 1)
		return true;
	
	else if (higher % 2 != 0 && oddCounter == 0)
		return true;
    else
	    return false;

}

int main(int argc, char const *argv[])
{
	std::cout<<solution("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaabc");
    
    return 0;
}
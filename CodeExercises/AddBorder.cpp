#include <iostream>
#include <vector>
#include <string>

vector<string> solution(vector<string> pic) {
 
    vector<string>ans;
    
    string temp(pic[0].size()+2,'*');
    ans.push_back(temp);
    
    for(int i=0;i<pic.size();i++)
    ans.push_back('*'+pic[i]+'*');
    
    ans.push_back(temp);
    
    return ans;    
}

int main(){

	std::vector<std::string> picture;

	picture = solution({"abc", "ded"});

	for(unsigned int i = 0; i < picture.size(); ++i)
		std::cout<<picture[i] <<std::endl;
	
}


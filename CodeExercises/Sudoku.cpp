#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool is_sorted(vector<int> arr);

bool solution(vector<vector<int>> grid) {
    vector<int> gridCopy(grid.size(), 0);

    unsigned int clusterRow = 0, clusterCol = 0;

    for(unsigned int i = 0; i < grid.size(); ++i){   
        //row checking
        for(unsigned int j = 0; j < grid[0].size(); ++j) gridCopy[j] = grid[j][i];
        if(!is_sorted(gridCopy)) return false;
        
        //col checking 
        for(unsigned int k = 0; k < grid[0].size(); ++k) if(!is_sorted(grid[i])) 
            return false;
            
        //3x3 checking
        int rc = 0;
        for(unsigned int n = clusterRow ; n < clusterRow + 3 && clusterRow <= 6; ++n ){
            for(unsigned int z = clusterCol; z < clusterCol + 3 && clusterCol <= 6; ++z ){
                gridCopy[rc++] = grid[n][z];
            }  
        }
        if(!is_sorted(gridCopy)) return false; 
            
        if(i % 2 == 0  && i != 0) clusterRow += 3;
        if(clusterCol == 6) clusterCol = 0;
        else clusterCol += 3;
    }   

    return true;
}

bool is_sorted(vector<int> arr){
    std::sort(arr.begin(), arr.end());
    for(unsigned int i = 0; i <arr.size() - 1; ++i) if(arr[i + 1] != arr[i] + 1) 
        return false;
    
    return true;
}

int main(int argc, char const *argv[]){
  std::cout<<solution(
{{5,3,4,6,7,8,9,1,2}, 
 {6,7,2,1,9,5,3,4,8}, 
 {1,9,8,3,4,2,5,6,7}, 
 {8,5,9,7,6,1,4,2,3}, 
 {4,2,6,8,5,3,7,9,1}, 
 {7,1,3,9,2,4,8,5,6}, 
 {9,6,1,5,3,7,2,8,4}, 
 {2,5,7,4,1,9,6,3,5}, 
 {3,4,5,2,8,6,1,7,9}});
    return 0;
}
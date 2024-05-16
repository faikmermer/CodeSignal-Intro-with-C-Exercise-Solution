#include <iostream>
#include <vector>

std::vector<std::vector<int>> solution(std::vector<std::vector<int>> image) {
	std::vector<std::vector<int>> blurImage(image.size() - 2, std::vector<int>(image[0].size() - 2, 0));
	unsigned int blurcol{}, colControl{}, rowControl{};
	//
	for(unsigned int row = rowControl; row < rowControl + 3 && rowControl + 2 < image.size(); ++row ){
		for(unsigned int col = colControl ; col < colControl + 3 && colControl + 2 < image[0].size();  ++col){
			blurcol += image[row][col];
		}
		//column scrow, calculate the average and place it
		if(row == rowControl + 2) {
			blurImage[rowControl][colControl] = blurcol / 9;
			++colControl;
			row = rowControl - 1;
			blurcol = 0;
		}//row scrow
		if(colControl + 2 == image[0].size()){
			row = rowControl;
			++rowControl;
			colControl = 0;
		}

	}

	return blurImage;
}
int main(int argc, char const *argv[])
{
    std::vector<std::vector<int>> blurImage = solution({{7,4,0,1}, 
                                                        {5,6,2,2}, 
                                                        {6,10,7,8},
                                                        {1,4,2,0}}
                                                                );

    for( auto &row:blurImage){
      for(auto &col:row)
        std::cout<<col << " ";
      std::cout<<std::endl;
    }
    return 0;
}
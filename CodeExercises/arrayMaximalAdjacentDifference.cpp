#include <iostream>
#include <vector>

int solution(std::vector<int> inputArray){

   int maxDiff = 0, subt = 0;
   unsigned int i = 0;
  
   do {
      
      subt = inputArray[i] - inputArray[i + 1];

      if(subt < 0 ) subt *= -1;
      if(maxDiff < subt) maxDiff = subt;
      
      ++i;
   }while (i < inputArray.size() - 1);

   return maxDiff;
}
int main(int argc, char const *argv[])
{
   std::cout<<solution({10, 11, 13});
   return 0;
}
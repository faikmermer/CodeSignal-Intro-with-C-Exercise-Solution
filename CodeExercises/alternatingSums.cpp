#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int> a) {
  int sum1 = 0, sum2 = 0;
  unsigned int i = 0;
  
  do{
      if(i == 0 || i % 2 == 0)
        sum1 += a[i];
      else
        sum2 += a[i];
      ++i;
  }while(i < a.size());
  
    std::vector<int> result = {sum1, sum2};

  return result;
  
}
int main(int argc, char const *argv[])
{
  std::vector<int> dizi = solution({100, 51, 50, 100});
  for(auto const &i : dizi)
    std::cout<<i << "  " ;
  
  return 0;
}
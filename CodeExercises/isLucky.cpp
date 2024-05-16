#include <iostream>
bool solution(int n) {
    int katSayi = 10, kalan = 0, count = 1, firstSum = 0, secondSum = 0;
    do {
        ++count;
        katSayi *= 10;
    }while (n != n % katSayi);
    katSayi = 10;
    for(int i = 0; i < count; ++i){
        kalan = n % katSayi;
        n -= kalan;
        if(kalan >= 10) kalan /= (katSayi / 10);
        if(i < (count / 2)){   
            firstSum += kalan;
        }else{ 
            secondSum += kalan;
        }
        katSayi *= 10;
    }
   return (secondSum == firstSum ? true : false);
   
}
int main(){
    std::cout<<solution(999999);
    return 0;
}
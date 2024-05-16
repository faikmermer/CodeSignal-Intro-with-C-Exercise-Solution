#include <iostream>
#include <vector>
using namespace std;
bool solution(vector<int> sequence) {

   
    bool removeSwitch = false;
    int prev, curret, next;

    
    
    for(unsigned int i = 1; i < sequence.size() - 1; ++i){
        

        prev = sequence[i - 1];
        curret = sequence[i];
        next = sequence[i + 1];

        if(prev < curret && curret < next)
            continue;

        else if(curret > next && prev < next)
            sequence.erase(sequence.begin() + (i));   
        
        else if(prev > curret || prev > next)
            sequence.erase(sequence.begin() + (i - 1));

        else if(prev < curret && curret > next)
            sequence.erase(sequence.begin() + (i + 1));  

        else if((curret == next || prev == curret) && prev < next )
            sequence.erase(sequence.begin() + i);

        if(removeSwitch)
            return false;

        if (sequence.size() == 2)
            return (sequence[0] <= sequence[1] ? true : false);

        removeSwitch = true;
        --i;
     
    }
    return true;;
}

int main(void){
   vector<int> dizi = {3, 2};
   cout<<solution(dizi);
    
    
    return 0;
}


#include <iostream>

bool solution(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    int sumMe = yourLeft + yourRight;
    int sumFriends = friendsLeft + friendsRight;
    if(sumFriends != sumMe) return false;
    if((yourLeft == friendsLeft || yourLeft == friendsRight) && (yourRight == friendsLeft || yourRight == friendsRight)) return true;
    else return false;
}
int main(){
    std::cout<<solution(5, 5, 10, 10);
}
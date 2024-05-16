int solution(int n, int firstNumber) {
    int neighbor = n / 2;
    if(neighbor + firstNumber < n) return neighbor + firstNumber;
    else return firstNumber - neighbor; 
}

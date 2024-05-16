int solution(std::vector<int> inputArray, int k) {
    int higher = 0, sum = 0;
    unsigned int i = 0, j = 0;
    while(i < static_cast<unsigned>(k)){
        sum += inputArray[i];
        ++i;
    }
    higher = sum;
    while( i < inputArray.size()){
        sum += inputArray[i] - inputArray[j];
        if(sum > higher) higher = sum;
        ++i;
        ++j;
    }
    return higher;
}

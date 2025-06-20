#include <string>
#include <vector>
#include <iostream>

using namespace std;

double solution(vector<int> numbers) {
    int sum = 0; // 더한 값을 저장할 빈 박스 만들기
    for (int num : numbers) { // numbers 배열에서 숫자 하나씩 꺼내서 num에 넣기
        sum += num; // sum에 num을 계속 더하기
    }
    return (double)sum / numbers.size(); // 더한 값을 숫자 개수로 나누어서 평균을 실수로 반환

}
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int sum = 0;                      // 결과 저장할 변수
    for (int i = 2; i <= n; i += 2) { // i를 2부터 시작해서 2씩 증가 (2, 4, 6, ...)
        sum += i;                     // 짝수들을 sum에 더함
    }
    return sum;  
}

int main () {
    cout << solution(10) << endl;
    cout << solution(6) << endl;
    return 0;
}
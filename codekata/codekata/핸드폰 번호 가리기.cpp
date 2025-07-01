#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {

    for (int i = 0; i < phone_number.length() - 4; i++)
    {
        phone_number[i] = '*';
    }
    // 전화번호가 문자열로 제공됨
    // - 전화번호 길이에서 -4만큼 for을 돌린다.
    // 전화번호의 뒷 4자리를 제외하고 모두 *로 표시
    return phone_number;
}
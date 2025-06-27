#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long numbers = num;

    while (numbers != 1)
    {
        if (answer > 500)
        {
            return -1;
        }
        if (numbers % 2 == 0)
        {
            numbers = numbers / 2;
        }
        else
        {
            numbers = numbers * 3 + 1;
        }

        answer++;
    }
    return answer;
}
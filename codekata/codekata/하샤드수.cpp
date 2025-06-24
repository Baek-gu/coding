#include <string>
#include <vector>

using namespace std;

bool solution(int x)
{
    int num = x;
    int sum = 0;

    while (x > 0) {
        sum += x % 10; // 끝자리부터 더하고 
            x /= 10; // 끝자리를 버림
    }

    return (num % sum == 0);
}
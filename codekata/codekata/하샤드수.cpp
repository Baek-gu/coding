#include <string>
#include <vector>

using namespace std;

bool solution(int x)
{
    int num = x;
    int sum = 0;

    while (x > 0) {
        sum += x % 10; // ���ڸ����� ���ϰ� 
            x /= 10; // ���ڸ��� ����
    }

    return (num % sum == 0);
}
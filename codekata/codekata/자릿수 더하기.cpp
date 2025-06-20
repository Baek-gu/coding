#include <iostream>

using namespace std;

int solution(int n)
{
    int sum = 0;

    while (n > 0) {
        int i = n % 10;
        sum += i;
        n /= 10;
    }
    
    return sum;
}
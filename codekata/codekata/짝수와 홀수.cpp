#include <iostream>
#include <string>
using namespace std;

string solution(int num) {
    if (num % 2 == 0)
        return "Even";
    else
        return "Odd";
}

int main() {
    int num = 2;
    cout << "num은 " << solution(num) << endl;
    return 0;
}
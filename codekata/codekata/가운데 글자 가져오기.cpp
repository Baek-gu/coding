#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";

    int FristMiddleIndex = s.length() / 2 - 1;
    int SecendMiddleIndex = s.length() / 2;

    if (s.length() % 2 == 0)
    {
        answer += s[FristMiddleIndex];
        answer += s[SecendMiddleIndex];
    }
    else
    {
        answer += s[SecendMiddleIndex];
    }
    return answer;
}
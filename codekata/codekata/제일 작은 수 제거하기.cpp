#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    // 1. 배열의 길이가 1일 시 -> -1을 반환시킴
    // 2. 최솟값을 구하기 위하여 알고리즘 구현
    // 3. 최솟값을 이용하여 배열을 출력

    if (arr.size() == 1)
    {
        answer.push_back(-1);
        return answer;
    }

    int min_value = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] < min_value)
        {
            min_value = arr[i];
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != min_value)
        {
            answer.push_back(arr[i]);
        }
    }



    return answer;
}
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;

    // 1. �迭�� ���̰� 1�� �� -> -1�� ��ȯ��Ŵ
    // 2. �ּڰ��� ���ϱ� ���Ͽ� �˰��� ����
    // 3. �ּڰ��� �̿��Ͽ� �迭�� ���

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
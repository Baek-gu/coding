#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {

    for (int i = 0; i < phone_number.length() - 4; i++)
    {
        phone_number[i] = '*';
    }
    // ��ȭ��ȣ�� ���ڿ��� ������
    // - ��ȭ��ȣ ���̿��� -4��ŭ for�� ������.
    // ��ȭ��ȣ�� �� 4�ڸ��� �����ϰ� ��� *�� ǥ��
    return phone_number;
}
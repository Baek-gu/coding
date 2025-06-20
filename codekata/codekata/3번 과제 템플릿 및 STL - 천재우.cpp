#include <iostream>
#include <vector>

using namespace std;

// class�� �̸��� SimpleVector��� ���� v
// Ÿ�Կ� �������� �ʴ� �迭�� ��������� ���� (private) -> ���ø� Ŭ���� v
// ������ ���� v
// 1. �⺻ �����ڴ� ũ�Ⱑ 10 v
// 2. ���ڸ� �ϳ� �޴� �����ڴ� �ش� ���ڿ� �ش�Ǵ� ũ���� �迭�� ���� -> �߰� ���� �ʿ�
// ��� �Լ� ���� (public)
// push_back ���� ���ڷ� ���� ���Ҹ� �� �ڿ� �߰� hmmmmm......
// pop_back ������ ������ �������� hmmmmm......
// size ���ڰ� ���� ���� ������ ������ ��ȯ
// capacity ���� ���� �迭�� ũ�⸦ ��ȯ

template <typename T>
class SimpleVector { // ���ø� Ŭ������ ����
private:
	T* arr;
	int size = 0;
	int capacity = 10;

public:
	SimpleVector() { // �⺻������ ����
		cout << "�⺻������ ȣ��" << endl;
		arr = new int[10];
	}

	SimpleVector(int n) {
		arr = new int[n];
	}

	~SimpleVector() { // �Ҹ��� ����
		delete[] arr;
		arr = nullptr; // dangling pointer ����
	}

	void printAll()
	{
		for (int i = 0; i < size; i++) {

			cout << "�迭�� ���:" << arr[i] << endl;

		}

	}

	void push_back(int data)
	{

		if (size >= capacity) {
			cout << "full" << endl;
		}
		else
		{
			arr[size] = data;
			size++;
		}

	}

	void pop_back()
	{
		size--;
	}
};

int main() {

	SimpleVector myVector;

	myVector.printAll();

	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(3);
	myVector.push_back(4);
	myVector.push_back(5);
	myVector.push_back(6);
	myVector.push_back(7);
	myVector.push_back(8);
	myVector.push_back(9);
	myVector.push_back(10);
	myVector.pop_back();
	

	cout << endl;

	myVector.printAll();

}

#include <iostream>
#include <vector>

using namespace std;

// class의 이름을 SimpleVector라고 지정 v
// 타입에 의존하지 않는 배열을 멤버변수로 갖음 (private) -> 템플릿 클래스 v
// 생성자 생성 v
// 1. 기본 생성자는 크기가 10 v
// 2. 숫자를 하나 받는 생성자는 해당 숫자에 해당되는 크기의 배열을 만듬 -> 추가 설명 필요
// 멤버 함수 구현 (public)
// push_back 으로 인자로 받은 원소를 맨 뒤에 추가 hmmmmm......
// pop_back 벡터의 마지막 원소제거 hmmmmm......
// size 인자가 없고 현재 원소의 개수를 반환
// capacity 현재 내부 배열의 크기를 반환

template <typename T>
class SimpleVector { // 템플릿 클래스로 지정
private:
	T* arr;
	int size = 0;
	int capacity = 10;

public:
	SimpleVector() { // 기본생성자 생성
		cout << "기본생성자 호출" << endl;
		arr = new int[10];
	}

	SimpleVector(int n) {
		arr = new int[n];
	}

	~SimpleVector() { // 소멸자 생성
		delete[] arr;
		arr = nullptr; // dangling pointer 방지
	}

	void printAll()
	{
		for (int i = 0; i < size; i++) {

			cout << "배열의 요소:" << arr[i] << endl;

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

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 정수를 담고 있는 배열 arr의 평균값을 반환하는 함수


double solution(vector<int> arr) {
	double sum = 0;
	double avg = 0;
	

	for (int i = 0; i < arr.size(); i++) {
		sum += arr[i];
		avg = sum / arr.size();
	}
	return avg;
}
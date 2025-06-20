#include <string>
#include <vector>
#include <algorithm>
//#include <cmath>
 
using namespace std;

long long myPower(int base, long long j)
    {
        long long digits = 1;
        while(j > 0)
        {
            digits *= base;
            j--;
        }  
        return digits;
    }

long long solution(long long n) {
    vector<long long>vec;
    long long answer = 0;
    
    while (n>0) {
        vec.push_back(n % 10);
        n /= 10;
    }
    
    long long size = vec.size();
    
    sort(vec.begin(), vec.end(), greater<long long>());
    
    long long j = 0; 
    
    for(long long i = size - 1; i >= 0; i--)
    {
        //answer += pow(10,j)*vec[i];
        //j++;
        
        answer += myPower(10, j)*vec[i];
        j++;
        
    } 
           
    return answer;
}
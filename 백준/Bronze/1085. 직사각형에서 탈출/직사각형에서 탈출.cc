#include <iostream>    
#include <string>        // 문자열(string)사용하기 위한 헤더
#include <algorithm> 
#include <math.h>// reverse() 함수를 사용하기 위한 헤더

using namespace std;     // std:: 안 써도 되게 해줌

////반전 함수..
//string reverseStr(string s) {
//    // reverse(시작 위치, 끝 위치): 문자열 전체를 뒤집는다
//    reverse(s.begin(), s.end());
//    return s; // 반환
//}
//
//int main() {
//    // 사용자로부터 입력받을 두 숫자 -> 문자열로
//    string a, b;
//
//    cin >> a >> b;
//
//    // 문자열 a를 뒤집은 뒤 정수형(int)으로 변환하여 저장
//    // 예: a가 "734"이면 → "437" → 정수 437
//    int numA = stoi(reverseStr(a));
//
//    // 문자열 b도 같은 방식으로 처리
//    // 예: b가 "893"이면 → "398" → 정수 398
//    int numB = stoi(reverseStr(b));
//
//    // max(numA, numB)는 둘 중 큰 값을 리턴
//    cout << max(numA, numB) << endl;
//
//    return 0;
//}


int su = 0;
int heigt = 0;
int width = 0;
int main()
{
	int a, b, c, d;

	cin >> a >> b >> c >> d;

    int min_value = a; // 초기값을 a로 설정

    if (b < min_value) {
        min_value = b; // b가 더 크면 갱신
    }
    if (c < min_value) {
        min_value = c; // c가 더 크면 갱신
    }
    if (d < min_value)
        min_value = d;// d가 더 크면 갱신




	heigt = abs(a - c);
	width = abs(b - d);

    su = heigt;

    if (width < su)
        su = width;
    if (min_value < su)
        su = min_value;



    cout << su;

}



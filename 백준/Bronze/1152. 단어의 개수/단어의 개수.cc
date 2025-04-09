#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s; // 입력받을 문자열
	int cnt = 0; // 단어의 갯수
	bool in = false; //단어 안에 있는지 바깥에 있는지 플래그 역할을 해주는 bool / true라면 글이 이어지는 중 / false일 때(이미 단어 밖 == 공백이 이미 쓰였었음)일때 단어수 세는거 방해 안함

	getline(cin, s); //s를 공백 포함 문자열로 받아줌


	if (s.length() == 1 && s == " ")
	{
		cout << 0;  // 입력 문자가 공백일 때 예외 처리
		return 0;
	}


	for (int i = 0; i < s.length(); i++)//index는 0에서 시작... 이기 때문에 0에서 시작
	{
		if (s[i] != ' ') {
			if (in == false) { // 공백이었다가 처음으로 문자를 만났을 때
				cnt++; // 단어의 시작이므로 단어 수 1 증가
				in = true; // 단어 안에 들어왔음을 표시
			}
		}
		else {
			in = false; // 공백을 만나면 단어 밖으로 나왔다는 표시
		}
	}
	cout << cnt;

}

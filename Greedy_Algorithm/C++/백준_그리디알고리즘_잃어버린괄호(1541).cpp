#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str; //문자열 입력
    int res = 0; //결과값
    string num = ""; //숫자 저장
    bool check = false; // - 판별

    cin >> str;
    for (int i = 0; i <= str.
size(); i++) {
        //1. 기호를 만났거나 식이 끝날 때
        if (str[i] == '-' || str[i] == '+' || i == str.size()) {
            //앞서 - 가 있었다면 숫자를 빼줌
            if (check == true) {
                // 문자열 형태의 숫자를 정수형으로 변환
                res -= stoi(num);
                // 사용된 숫자는 공백으로 초기화
                num = "";
            }
            // 앞서 - 가 없었다면 숫자를 더해줌
            else if (check == false) {
                res += stoi(num);
                num = "";
            }
        }
        //2. 기호가 아닌 경우(숫자인 경우)
        else {
            num += str[i]; // 문자열 형태로 숫자 저장
        }
        //3. - 를 만난 경우
        if (str[i] == '-') { // - 발련시 true로 변경
            check = true;
        }
    }
    cout << res << endl;
    return 0;
}
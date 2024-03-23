#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;             //회의 수
    int start, finish; //회의 시작,끝 시간 변수
    vector <pair<int, int>> vec; //2차원 vector 생성
    cin >> N;
    for (int i = 0; i < N; i++) {   
        cin >> start >> finish;
        vec.push_back(make_pair(finish, start)); 
        // 시작하는 시간이 빨라도 늦게 끝나면 최대 회의의 수를
        // 맞출 수 없다는 점이므로 각각의 스케줄에서
        // 회의의 종료시간이 중요하게 작용한다
    }
    sort(vec.begin(), vec.end());

    int time = vec[0].first;
    int count = 1;
    for (int i = 1; i < N; i++) {
        if (time <= vec[i].second) {
            count++;
            time = vec[i].first;
        }
    }
    cout << count << endl;
    return 0;
}
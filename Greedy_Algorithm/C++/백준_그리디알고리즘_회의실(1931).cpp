#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;             //ȸ�� ��
    int start, finish; //ȸ�� ����,�� �ð� ����
    vector <pair<int, int>> vec; //2���� vector ����
    cin >> N;
    for (int i = 0; i < N; i++) {   
        cin >> start >> finish;
        vec.push_back(make_pair(finish, start)); 
        // �����ϴ� �ð��� ���� �ʰ� ������ �ִ� ȸ���� ����
        // ���� �� ���ٴ� ���̹Ƿ� ������ �����ٿ���
        // ȸ���� ����ð��� �߿��ϰ� �ۿ��Ѵ�
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
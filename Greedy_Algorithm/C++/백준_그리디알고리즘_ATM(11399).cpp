#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int people;
    int minute;
    int sum = 0;
    int result = 0;
    vector<int> vec;
    cin >> people;
    for (int i = 0; i < people; i++) {  
        cin >> minute;
        vec.push_back(minute);
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < people; i++) {
        sum += vec[i];
        result += sum;
    }
    cout << result << endl;
    return 0;
}
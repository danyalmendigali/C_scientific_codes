#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve() {
    /*
    const vector <int> v {1, 2, 3, 4, 5}; // ������������ ������
    for(auto iter = v.begin(); iter != v.end(); iter++) { // ����� �������� ��������� ��������� ��������, �� �� �������� ��
        cout << *iter << " ";
          // ��� ������ �������
          //*iter = (*iter) * (*iter);
    }
    */

    vector <int> v {1, 2, 3, 4, 5};
    for(vector <int>::const_iterator iter = v.cbegin(); iter != v.cend(); ++iter)
    {
        cout << *iter << " ";
         // ��� ������ �������, ��� ��� �������� �����������
         //*iter = (*iter) * (*iter);
    }


}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    setlocale(LC_ALL, "Russian");


      solve();




    return 0;
}

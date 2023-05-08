#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

// ���������� ��������� ��� �������� ��������� �������
// *iter: ��������� ��������, �� ������� ��������� ��������
// ++iter: ����������� ��������� ������ ��� ��������� � ���������� ��������
// -iter: ����������� ��������� ����� ��� ��������� � ����������� ��������. ��������� ���������� forward_list �� ������������ �������� ����������.
// iter1 == iter2: ��� ��������� �����, ���� ��� ��������� �� ���� � ��� �� �������
// iter1 != iter2: ��� ��������� �� �����, ���� ��� ��������� �� ������ ��������

void solve() {
    cout << "��������� �1" << endl;
    vector <int> numbers1 {76, 47, 35, 25, 85}, numbers2 {63, 91, 101, 45, 63};

    cout << "������ ������� �������: " << numbers1.size() << endl;
    cout << "������ ������� �������: " << numbers2.size() << endl;
    cout << endl;

    cout << "������� ���������� ������� �������: ";
    auto iter1 = numbers1.begin(); // �������� ��������
    while(iter1 != numbers1.end()) // ���� �� ������ �� �����
    {
        cout << *iter1 << " "; // �������� �������� ����� ��������
        ++iter1; // ������������ ������ �� ���� �������

    }
    cout << endl;


    cout << "������� ���������� ������� �������: ";
    auto iter2 = numbers2.begin();
    while(iter2 != numbers2.end())
    {
        cout << *iter2 << " ";
        ++iter2;
    }
    cout << endl << endl;





     cout << "��������� �2" << endl;
     vector <int> v {1, 2, 3, 4, 5};
    auto iter = v.begin();
    while(iter != v.end()) // ���� �� ������ �� �����
    {

        *iter = (*iter) * (*iter); // �������� ����� � �������
        ++iter;
    }

    for(iter = v.begin(); iter < v.end(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl << endl;






    cout << "��������� �3" << endl;
    vector <int> numbers;
    for(int count = NULL; count < 5; count++) {
        numbers.push_back(count);
    }
    vector <int>::const_iterator it; // ��������� �������� ������ ��� ������
    it = numbers.begin(); // ����������� ��� ��������� ������� �������
    while(it != numbers.end()) // ���� �������� �� ��������� ���������� ��������
    {
        cout << *it << " "; // ������� �������� ��������, �� ������� ��������� ��������
        ++it; // � ��������� � ���������� ��������
    }
    cout << endl << endl;


    cout << "��������� �4" << endl;
    vector <int> namevector;
    namevector.push_back(3);
    namevector.push_back(4);
    namevector.push_back(6);
    vector <int>::iterator iter3; // ������� ��������
    for(iter3 = namevector.end() - 1; iter3 >= namevector.begin(); --iter3) {
        cout << *iter3 << " ";
    }


    cout << endl << endl << endl << endl;


    cout << "��������� �5" << endl;
    string s("some string");
    if(s.begin() != s.end()) { // ������ ������� �� �����
        auto it = s.begin(); // it ��������� �� ������ ������ ������ s
        *it = toupper(*it); // ������� ������ � ������� �������

    }

    for(int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";
    }
    cout << endl << endl << endl << endl;




     cout << "��������� �6" << endl;
     string s1("some string");
     if(s1.begin() != s1.end()) {
        auto it4 = s1.begin();
        for(auto it4 = s1.begin(); it4 != s1.end() - 1 && !isspace(*it4); ++it4) {
            *it4 = toupper(*it4);
        }
     }

    for(int i = 0; i < s.size(); i++) {
        cout << s[i];
    }


}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    setlocale(LC_ALL, "Russian");

    /* int t;
    cin >> t;
    while(t--)
    */

      solve();




    return 0;
}

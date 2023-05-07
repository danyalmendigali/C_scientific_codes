#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

// ��������� ��������

int main() {
    cin.tie(0);
    setlocale(LC_ALL, "Russian");

    cout << "������� ������ ������� �������: ";
    int n, n2;
    cin >> n;
    cout << "������� ������ ������� �������: ";
    cin >> n2;
    vector <int> a (n), b (n2);

    cout << "������� ���������� ������� �������" << endl;
    for(int i = 0; i < n; i++) {
        cout << "������� #" << i << " = ";
        cin >> a[i];
    }
    cout << endl;

    cout << "������� ���������� ������� �������" << endl;
    for(int i = 0; i < n2; i++) {
        cout << "������� #" << i << " = ";
        cin >> b[i];
    }
    cout << endl;

    if(a.empty()) {
        cout << "������ ������ ����! " << endl;
    }
    else cout << "������ ������ ����� �����!" << endl;

    if(b.empty()) {
        cout << "������ ������ ����! " << endl;
    }
    else cout << "������ ������ ����� �����!" << endl;

    auto iter1 = a.cbegin();
    auto iter2 = b.cbegin();

    a.insert(iter1 + 1, 3, 5);
    b.insert(iter2 + 3, {5, 76, 36, 26});

    cout << "������ ������� �������: " << a.size() << endl;
    cout << "������ ������� �������: " << b.size() << endl;
    cout << "���������� ������� ������" << endl;
    for(int i = 0; i < a.size(); i++) {
        cout << "������� #" << i << " = " << a[i] << endl;
    }

    cout << "���������� ������� ������" << endl;
    for(int i = 0; i < b.size(); i++) {
        cout << "������� #" << i << " = " << b[i] << endl;
    }
    cout << endl << endl;


    a.resize(10, 878);
    b.resize(12, 898);


    cout << "������ ������� �������: " << a.size() << endl;
    cout << "������ ������� �������: " << b.size() << endl;
    cout << "���������� ������� ������" << endl;
    for(int i = 0; i < a.size(); i++) {
        cout << "������� #" << i << " = " << a[i] << endl;
    }
    cout << endl << endl;

    cout << "���������� ������� ������" << endl;
    for(int i = 0; i < b.size(); i++) {
        cout << "������� #" << i << " = " << b[i] << endl;
    }

    if(bool ab = a == b) {
        cout << "������� �����!" << endl;
    }

    if(bool ab = a != b) {
        cout << "������� �� �����! " << endl;
    }

    cout << endl << endl << endl;

    vector <int> v1 {1, 2, 3};
    vector <int> v2 {1, 2, 3};
    vector <int> v3 {3, 2, 1};

    if(bool v1v2 = v1 == v2) {
        cout << "������ � ������ ������ �����! " << endl;
    }
    if(bool v2v3 = v1 == v3) {
        cout  << "������ � ������ ������ �����!" << endl;
    }
    else if(bool v1v3 = v1 != v3) {
        cout << "������ � ������ ������ �� �����!" << endl;
    }




    return 0;
}

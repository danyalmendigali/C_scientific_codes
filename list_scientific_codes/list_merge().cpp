#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

/// merge() � C++ - ��� ����������� ������� ���������� STL, ������� ������ ��� ������� ���� ��������������� ���������� ��������� � ���� ��������������� ��������.

void solve() {

    list <int> myList1, myList2;
    int n1, n2;
    cout << "������� ���������� ����� � ������ �����: ";
    cin >> n1;
    cout << "������� ���������� ����� �� ������ �����: ";
    cin >> n2;
    cout << endl;

    cout << "��������� ���������� ������ ����" << endl;
    for(int i = 0; i < n1; i++) {
        cout << "������� ������� #" << i << " : ";
        int a;
        cin >> a;
        myList1.push_back(a);
    }

    cout << endl;
    cout << "��������� ���������� ������ ����" << endl;
    for(int i = 0; i < n2; i++) {
        cout << "������� ������� #" << i << " : ";
        int b;
        cin >> b;
        myList2.push_back(b);
    }
    cout << endl;

    if(myList1.empty()) {
        cout << "��� ������ ���� ����!" << endl;
    }
    else cout << "��� ������ ���� �� ����!" << endl;

    if(myList2.empty()) {
        cout << "��� ������ ���� ����!" << endl;
    }
    else cout << "��� ������ ���� �� ����!" << endl;

    cout << endl;
    cout << "������� ����������� �������� ������� �����(������ ���� � �������� �������)" << endl;
    for (list<int>::reverse_iterator iter = myList1.rbegin(); iter != myList1.rend(); ++iter) { /// ������� ���� � �������� ������� ��������� ����������� ��������
        cout << *iter << " ";
    }
    cout << endl << endl;


    cout << "������� ����������� �������� ������� �����(������ ���� � �������� �������)" << endl;
    for (list<int>::reverse_iterator iter2 = myList2.rbegin(); iter2 != myList2.rend(); ++iter2) { /// ������� ���� � �������� ������� ��������� ����������� ��������
        cout << *iter2 << " ";
    }
    cout << endl;



    cout << "��������� ����� � ������� insert() ������� �����" << endl;
    cout << "������� 1) c ������ ����� ������ ������� ����� 2) C������ ����� 3) ����� ��� �����" << endl;
    cout << "������� ������ �����: ";
    int g1, g2, g3;
    cin >> g1;
    cout << "������� ������ �����: ";
    cin >> g2;
    cout << "������� ������ �����: ";
    cin >> g3;

    auto iter3 = myList1.begin();
    advance(iter3, g1);
    myList1.insert(iter3, g2, g3); /// ��������� �������� g2 ����, g3 ����� ����� � iter3 ������� � ������ ��������

    cout << endl;
    cout << "����� ����������� ������� ����� ����� ���������� ����� (insert): ";
    for(list <int>::iterator iter4 = myList1.begin(); iter4 != myList1.end(); ++iter4)
    {
        cout << *iter4 << " ";
    }
    cout << endl << endl << endl;





    cout << "��������� �����  � ������� insert() ������ �����" << endl;
    cout << "������� 1) c ������ ����� ������ ������� ����� 2) C������ ����� 3) ����� ��� �����" << endl;
    cout << "������� ������ �����: ";
    int g4, g5, g6;
    cin >> g4;
    cout << "������� ������ �����: ";
    cin >> g5;
    cout << "������� ������ �����: ";
    cin >> g6;

    auto iter5 = myList2.begin();
    advance(iter5, g4);
    myList2.insert(iter5, g5, g6); /// ��������� �������� g2 ����, g3 ����� ����� � iter3 ������� � ������ ��������

    cout << endl;
    cout << "����� ����������� ������� ����� ����� ���������� ����� (insert): ";
    for(list <int>::iterator iter6 = myList2.begin(); iter6 != myList2.end(); ++iter6)
    {
        cout << *iter6 << " ";
    }
    cout << endl << endl << endl;


    cout << "������ �� ��������� ��� ��� �����" << endl;
    cout << "�������� � �������: ";
    myList1.sort(); /// ��������� ������ ����
    for(int res : myList1){
        cout << res << " "; /// ������� ���������
    }
    cout << endl;
    cout << "������ ������: ";
    myList2.sort(); /// ��������� ������ ����
    for(int res2 : myList2){
        cout << res2 << " "; /// ������� ���������
    }

    myList1.merge(myList2); /// ������� ���� ��������������� ���������� ��������� � ���� ��������������� ��������
    cout << endl;

    cout << "���� ����� ������� merge(): ";
    for(int res3 : myList1) {
        cout << res3 <<  " "; /// ������� ���������
    }
}



int main() {
    cin.tie(0);
    setlocale(LC_ALL, "Russian");

    /*
    int t;
    cin >> t;
    while(t--)
    */
       solve();






    /*
    vector<int> v1 = {1, 3, 5, 7};
    vector<int> v2 = {2, 4, 6, 8};
    vector<int> v3(v1.size() + v2.size());

    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

    for (int i : v3) {
        std::cout << i << " ";
    }
    cout << std::endl;
    */


   return 0;
}


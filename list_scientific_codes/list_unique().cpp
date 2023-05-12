#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    list <int> myList1;
    int n;
    cout << "������� ���������� ����� � �����: ";
    cin >> n;
    cout << "������� ���������� �����" << endl;
    for(int i = 0;  i < n; i++) {
        int a;
        cout << "������� #" << i << " : ";
        cin >> a;
        myList1.push_back(a);
    }
    cout << endl;

    if(myList1.empty()) {
        cout << "��� ���� ����!" << endl;
    }
    else {
        cout << "��� ���� �� ����!" << endl;
    }
    cout << endl;

    cout << "������� ����������� �������� ������� �����(������ ���� � �������� �������)" << endl;
    cout << "���� � �������� �������: ";
    for(list <int>::reverse_iterator iter1 = myList1.rbegin(); iter1 != myList1.rend(); ++iter1)
    {
        cout << *iter1 << " ";
    }
    cout << endl << endl;



    cout << "��������� ����� ����� � ������� insert() " << endl;
    cout << "������� 1) c ������ ����� ������ ������� ����� 2) C������ ����� 3) ����� ��� �����" << endl;
    cout << "������� ������ �����: ";
    int g1, g2, g3;
    cin >> g1;
    cout << "������� ������ �����: ";
    cin >> g2;
    cout << "������� ������ �����: ";
    cin >> g3;

    auto iter2 = myList1.begin();
    advance(iter2, g1);
    myList1.insert(iter2, g2, g3);

    cout << "���������� ����� ����� ����������(insert): ";
    for(list <int>::iterator iter3 = myList1.begin(); iter3 != myList1.end(); ++iter3)
    {
        cout << *iter3 << " ";
    }
    cout << endl;


    cout << "������� ����� � ������� ������� erase()" << endl;
    cout << "������� 1) � ����� ������� ������� �������� 2) �� ����� ������� ������� ��������" << endl;
    cout << "������� ������ �����: ";
    int h1, h2;
    cin >> h1;
    cout << "������� ������ �����: ";
    cin >> h2;
    h2++;

    auto iter4 = myList1.begin();
    auto iter5 = myList1.begin();
    advance(iter4, h1);
    advance(iter5, h2);

    myList1.erase(iter4, iter5); /// ������� ����� ��������� iter4 � iter5

    cout << "���������� ����� �������� ��������� erase(): ";
    for(list <int>::iterator iter6 = myList1.begin(); iter6 != myList1.end(); ++iter6)
    {
        cout << *iter6 << " ";
    }
    cout << endl << endl;
    cout << "������� ������ ���� List2 {45, 74, 25, 72, 64, 26, 75} " << endl;
    cout << endl;
    list <int> myList2 {45, 74, 25, 72, 64, 26, 75};

    cout << "��������� ������ ���� sort()" << endl;
    myList1.sort(); /// ��������� ������ ����
    cout << "������ ������� �����: " << myList1.size() << endl;
    cout << "���������� ������� ����� ����� ���������� ��������� sort(): ";
    for(list <int>::iterator iter7 = myList1.begin(); iter7 != myList1.end(); ++iter7)
    {
        cout << *iter7 << " ";
    }
    cout << endl << endl;

    cout << "��������� ������  ���� sort()" << endl;
    myList2.sort(); /// ��������� ������ ����
    cout << "������ ������� �����: " << myList2.size() << endl;
    cout << "���������� ������� ����� ����� ���������� ��������� sort(): ";
    for(list <int>::iterator iter8 = myList2.begin(); iter8 != myList2.end(); ++iter8)
    {
        cout << *iter8 << " ";
    }
    cout << endl << endl;

    cout << "��������� ������� merge()" << endl;
    myList1.merge(myList2); /// ������� ���� ��������������� ���������� ��������� � ���� ��������������� ��������
    cout << endl;
    cout << "������ ������ ����� = " << myList1.size() << endl;
    cout << "������� ���� ����: ";
    for(list <int>::iterator iter9 = myList1.begin(); iter9 != myList1.end(); ++iter9)
    {
        cout << *iter9 << " ";
    }

    cout << endl << endl;

    cout << "������� ����� ������� ������ ������ � �����: ";
    int delete_number;
    cin >> delete_number;
    myList1.remove(delete_number); /// remove() ������� ��� �������� �� ��������� delete_number
    cout << endl;

    cout << "������ ����� ����� �������� ����� ������� �� ����� = " << myList1.size() << endl;
    cout << "������� ���� ����: ";
    for(list <int>::iterator iter10 = myList1.begin(); iter10 != myList1.end(); ++iter10)
    {
        cout << *iter10 << " ";
    }
    cout << endl << endl;

    cout << "���������� ������� unique() ������� ������� ������������� ��������" << endl;
    auto iter12 = myList1.begin();
    auto iter13 = myList2.end();
    myList1.unique(); /// ������� ������������� ��������


    cout << "������� ���� ����� ������� unique(): ";
    for(list <int>::iterator iter11 = myList1.begin(); iter11 != myList1.end(); ++iter11)
    {
        cout << *iter11 << " ";
    }


}




int main() {
    cin.tie(0);
    setlocale(LC_ALL, "Russian");

     /*
    int t;
    cin >> t;
    while(--t)
     */
        solve();







   return 0;
}


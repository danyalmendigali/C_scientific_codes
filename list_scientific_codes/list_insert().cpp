#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    list <int> numbers1;
    int n;
    cout << "������� ���������� ����� � �����: ";
    cin >> n;
    cout << endl;
    cout << "������� ���������� �����" << endl;

    for(int i = 0; i < n; ++i)
    {
        cout << "������� ������� #" << i << ": ";
        int a;
        cin >> a;
        numbers1.push_back(a); /// ��������� � ����� ����� ��������
    }
    cout << endl;

    if(numbers1.empty()) { /// ��������� ������ �� ���� ��� ���
        cout << "��� ���� �� ����!" << endl;
    }
    else cout << "��� ���� ����!" << endl;
    cout << endl;

    cout << "������� ����������� ��������(������ ���� � �������� �������)" << endl;
    for (list<int>::reverse_iterator iter = numbers1.rbegin(); iter != numbers1.rend(); ++iter) { /// ������� ���� � �������� ������� ��������� ����������� ��������
        cout << *iter << " ";
    }
    cout << endl;

    cout << "������� ���������� ����� ������� ����� �������� � ����� ����� � ������� ������� push_front(): ";
    int l;
    cin >> l;
    for(int i = 0; i < l; i++) {
        int b;
        cout << "������� " << i << " �������: ";
        cin >> b;
        numbers1.push_front(b); /// ��������� �������� � ����� �����
    }
    cout << "������� ������ ���� � ���� �������� ������ ������� �����" << endl;
    list <int> numbers2 = numbers1;
    cout << "��������� ������� �����: ";
    for(list <int>::iterator iter3 = numbers2.begin(); iter3 != numbers2.end(); ++iter3 )
    {
        cout << *iter3 << " ";
    }
    cout << endl;

    cout << "������� � ������ �� ����� ������� �� ������ �������" << endl;
    int t, y;
    cout << "1. C ������: ";
    cin >> t;
    t--;
    cout << "2. �� ����� �������: ";
    cin >> y;
    auto iter4 = numbers2.begin();
    auto iter5 = numbers2.begin();
    advance(iter4, t); /// ��� ��������� ������������ �� ��������� � ���������� � �������������� ���������� (advance)
    advance(iter5, y); /// ��� ��������� ������������ �� ��������� � ���������� � �������������� ���������� (advance)
    numbers2.erase(iter4, iter5); /// ������� �������� �� iter4 �� iter5

    cout << endl;
    cout << "������ ���������� �����: ";

    for(list <int>::iterator iter6 = numbers2.begin(); iter6 != numbers2.end(); ++iter6)
    {
        cout << *iter6 << " ";
    }
    cout << endl;

    cout << "��������� ����� � ���� � ������� insert()" << endl;
    cout << "������� 1) c ������ ����� ������ ������� ����� 2) C������ ����� 3) ����� ��� �����" << endl;
    cout << "������� ������ �����: ";
    int g1, g2, g3;
    cin >> g1;
    cout << "������� ������ �����: ";
    cin >> g2;
    cout << "������� ������ �����: ";
    cin >> g3;

    auto iter6 = numbers2.begin();
    advance(iter6, g1);
    numbers2.insert(iter6, g2, g3); /// ��������� �������� g2 ����, g3 ����� ����� � iter6 ������� � ������ ��������

    cout << endl;
    cout << "����� ���������� ����� ����� ���������� ����� (insert): ";
    for(list <int>::iterator iter7 = numbers2.begin(); iter7 != numbers2.end(); ++iter7)
    {
        cout << *iter7 << " ";
    }
    cout << endl;

    cout << "������� ��� ��������� �����" << endl;
    for(int i = 0; i < 3; i++) {
        numbers2.pop_back(); /// ������� �������� ������� � �����
    }

    cout << "����� ���������� ����� ����� �������� ���� �����: ";
    for(list <int>::iterator iter8 = numbers2.begin(); iter8 != numbers2.end(); ++iter8)
    {
        cout << *iter8 << " ";
    }
    cout << endl;






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
    list <int> myList {12, 13, 14 ,15};  // ������� ����
    auto it = myList.begin(); // ������� �������� �� ������ �������
    advance(it, 4); // ���������� �������� �� 4 �������� ������
    myList.insert(it, 3, 4); // ������� � 4 ������ ��������� ��� ��������
    cout << "���������� �����: ";
    for(auto i = myList.begin(); i != myList.end(); i++) // ����� ����
    {
        cout << *i << " ";
    }
    */




   return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve() {
     cout << "������� ���������� ����� � ������ �������: ";
     int l1, l2;
     cin >> l1;
     cout << "������� ���������� ����� �� ������ �������: ";
     cin >> l2;
     vector <int> numbers1 (l1);
     vector <int> numbers2 (l2);
     cout << "��������� ������ ������ " << l1 << " �������: " << endl;
     for(int i = 0; i < l1; i++) {
        cout << "������� " << i << " �����: ";
        cin >> numbers1[i];
     }
     cout << endl;

     cout << "��������� ������ ������ " << l2 << " �������: " << endl;
     for(int i = 0; i < l2; i++) {
        cout << "������� " << i << " �����: ";
        cin >> numbers2[i];
     }
     cout << endl;

     if(numbers1.empty()) { /// ��� ������� ���������� ������ �� ������ ��� ���
        cout << "��� ������ ������ ����!" << endl;
     }
     else {
        cout << "��� ������ ������ ����� �����!" << endl;
     }


     if(numbers2.empty()) { /// ��� ������� ���������� ������ �� ������ ��� ���
        cout << "��� ������ ������ ����!" << endl;
     }
     else {
        cout << "��� ������ ������ ����� �����!" << endl;
     }

     cout << "�������� ������ ������ numbers1.insert(iter1 + 2, 3, 4) " << endl;
     auto iter1 = numbers1.cbegin();
     auto iter2 = numbers2.cend();
     numbers1.insert(iter1 + 2, 3, 4); /// ������� �� ������ ������ ��������� ��� ��������
     numbers2.insert(iter2 - 1, {9999, 9999, 9999, 8888, 8888}); // ������� � ������������� ������ ��������� 9999, 9999, 9999, 8888, 8888
     for(int i = 0; i < numbers1.size(); i++) {
        cout << numbers1[i] << " ";
     }
     cout << endl << endl;

    cout << "�������� ������ ������ numbers2.insert(iter2 - 1, {9999, 9999, 9999, 8888, 8888})" << endl;
    for(int i = 0; i < numbers2.size(); i++) {
        cout << numbers2[i] << " ";
    }
    cout << endl << endl << endl;


    cout << "������ ������ ������� ������� numbers1.resize(12, 10000) " << endl;
    numbers1.resize(12, 10000); /// ������� ������ ������� �� 12, ���� ��� ��� ������� �����, �� ��������� 10000
    numbers2.resize(14, 20000); /// ������� ������ ������� �� 14, ���� ��� ��� ������� �����, �� ��������� 20000
    cout << "������ ������� ������� ����� ���������: " << numbers1.size() << endl;
    cout << "���������� ������� �������: " << endl;
    for(int i = 0; i < numbers1.size(); i++) {
        cout << "������� #" << i << " = " << numbers1[i] << endl;
    }
    cout << endl << endl;

    cout << "������ ������ ������� numbers2.resize(14, 20000) " << endl;
    cout << "������ ������� ������� ����� ���������: " << numbers2.size() << endl;
    cout << "���������� �������� �������: " << endl;
    for(int i = 0; i < numbers2.size(); i++) {
        cout << "������� #" << i << " = " << numbers2[i] << endl;
    }
    cout << endl << endl;


    cout << "���������� �������� ���� �����������" << endl;
    numbers1.swap(numbers2); /// ����������� �������� ���� ��������
    cout << "������ ������� ������� ����� ���������: " << numbers1.size() << endl;
    cout << "���������� ������� �������: " << endl;
    for(int i = 0; i < numbers1.size(); i++) {
        cout << "������� #" << i << " = " << numbers1[i] << endl;
    }
    cout << endl << endl;

    cout << "������ ������� ������� ����� ���������: " << numbers2.size() << endl;
    cout << "���������� ������� �������: " << endl;
    for(int i = 0; i < numbers2.size(); i++) {
        cout << "������� #" << i << " = " << numbers2[i] << endl;
    }
    cout << endl << endl;


    cout << "������� ������ ������ � �������� �������: " << endl;
    for(vector <int>::reverse_iterator iter = numbers1.rbegin(); iter != numbers1.rend(); ++iter) /// ����������� ��������� ��������� ���������� �������� ���������� � �������� �����������.
    {
        cout << *iter << " ";
    }
    cout << endl << endl;


    cout << "������� ������ ������ � �������� �������: " << endl;
    for(vector <int>::reverse_iterator iter4 = numbers2.rbegin();  iter4 != numbers2.rend(); ++iter4) /// ����������� ��������� ��������� ���������� �������� ���������� � �������� �����������.
    {
        cout << *iter4 << " ";
    }
    cout << endl << endl;

    cout << "���������� ����������� ����������� ��������" << endl;
    cout << endl;
    cout << "������� ������ ������ ��������� ����������� ��������:" << endl;
    for(vector <int>::const_reverse_iterator iter5 = numbers1.crbegin(); iter5 != numbers1.crend(); ++iter5) /// ���� ���� ���������� ������ �� ��������� �������� ����������, �� ����� ������������ ����������� ����������� ��������,
    {
        cout << *iter5 << " ";
    }
    cout << endl << endl << endl;

    cout << "������� ������ ������ ��������� ����������� ��������:" << endl;
    for(vector <int>::const_reverse_iterator iter6 = numbers2.crbegin(); iter6 != numbers2.crend(); ++iter6) /// ���� ���� ���������� ������ �� ��������� �������� ����������, �� ����� ������������ ����������� ����������� ��������,
    {
        cout << *iter6 << " ";
    }
    cout << endl << endl << endl;
    auto iter7 = numbers1.begin();
    auto iter8 = numbers1.end();

    auto iter9 = numbers2.begin();
    auto iter10 = numbers2.end();

    numbers1.erase(iter7 + 3, iter8 - 1);
    numbers2.erase(iter9 + 2, iter10 - 2);

    cout << "������ ������� ������� ����� numbers1.erase(iter6 + 3; iter7 - 1) = " << numbers1.size() << endl;
    cout << "������� ������ ������: " << endl;
    for(int i = 0; i < numbers1.size(); i++) {
       cout << numbers1[i] << " ";
    }
    cout << endl << endl;

    cout << "������ ������� ������� ����� numbers2.erase(iter8 + 2, iter9 - 2) = " << numbers2.size() << endl;
    cout << "������� ������ ������: " << endl;
    for(int i = 0; i < numbers2.size(); i++) {
       cout << numbers2[i] << " ";
    }
    cout << endl << endl;

    if(bool numbers1numbers2 = numbers1 == numbers2) /// ��������� ���� �������� "���� ������ ������ ����� ������� �������"
    {
        cout << "���� ��� ������� �����!" << endl;
    }
    if(bool numbers1numbers2 = numbers1 != numbers2) /// ��������� ���� �������� "���� ������ ������ �� ����� ������� �������"
    {
        cout << "���� ��� ������� �� �����!" << endl;
    }
    cout << endl << endl;




    cout << "��������� ����� clear() � ���� ��������" << endl;
    numbers1.clear(); /// �������� ���� ��������� � �������
    cout << "������ ������� �������: " << numbers1.size() << endl;

    numbers2.clear(); /// �������� ���� ��������� � �������
    cout << "������ ������� �������: " << numbers2.size() << endl;
}


int main() {
    cin.tie(0);
    setlocale(LC_ALL, "Russian");
    /*
     int t;
     cin >> t;
     while(t--)
    */





    return 0;
}

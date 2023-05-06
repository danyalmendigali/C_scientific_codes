#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

// swap() ���������� �������� ���� �����������:

int main() {
     ios::sync_with_stdio(false);
     cin.tie();
     setlocale(LC_ALL, "Russian");
     cout << "������� ���������� ����� � ������ �������: ";
     int l1, l2;
     cin >> l1;

     cout << "������� ���������� ����� �� ������ �������: ";
     cin >> l2;
     vector <int> numbers1 (l1);
     vector <int> numbers2 (l2);
     cout << "������� ���������� ������� ������� " << endl;
     for(int i = 0; i < l1; ++i) {
        cout << "������� " << i << " �����: ";
        cin >> numbers1[i];
     }
     cout << endl;

     cout << "������� ���������� ������� ������� " << endl;
     for(int i = 0; i < l2; ++i) {
        cout << "������� " << i << " �����: ";
        cin >> numbers2[i];
     }
     cout << endl;

     if(numbers1.empty()) {
        cout << "������ ������ ����! " << endl;
     }
     else {
        cout << "������ ������ ����� �����! " << endl;
     }

     if(numbers2.empty()) {
        cout << "������ ������ ����! " << endl;
     }
     else {
        cout << "������ ������ ����� �����! " << endl;
     }

     auto iter1 = numbers1.cbegin();
     auto iter2 = numbers2.cend();

     numbers1.insert(iter1 + 1, 5, 999);
     numbers2.insert(iter2 - 1, 3, 999);

     cout << endl;
     cout << "������ ������� ������� �����  numbers1.insert(iter1 + 1, 5, 999): " << numbers1.size() << endl;
     cout << "������ ������� ������� �����  numbers2.insert(iter2 - 1, 3, 999): " << numbers2.size() << endl;

     cout << "���������� ������� ������� �����  numbers1.insert(iter1 + 1, 5, 999)" << endl;
     for(int i = 0; i < numbers1.size(); ++i) {
        cout << "������� ��� ������� #" << i << " = " << numbers1[i] << endl;
     }
     cout << endl;


     cout << "���������� ������� ������� �����   numbers2.insert(iter2 - 1, 3, 999)" << endl;
     for(int i = 0; i < numbers2.size(); ++i) {
        cout << "������� ��� ������� #" << i << " = " << numbers2[i] << endl;
     }

     cout << endl;

     cout << "������ ����� swap() ������� ����������� �������� ���� �����������" << endl;
     numbers1.swap(numbers2); // swap() ���������� �������� ���� �����������:


     cout << "������ ������� ������� ����� numbers1.swap(numbers2): " << numbers1.size() << endl;
     cout << "������ ������� ������� ����� numbers1.swap(numbers2): " << numbers2.size() << endl;

     cout << "���������� ������� ������� ����� numbers1.swap(numbers2)" << endl;
     for(int i = 0; i < numbers1.size(); ++i) {
        cout << "������� ��� ������� #" << i << " = " << numbers1[i] << endl;
     }
     cout << endl;


     cout << "���������� ������� ������� ����� numbers1.swap(numbers2);" << endl;
     for(int i = 0; i < numbers2.size(); ++i) {
        cout << "������� ��� ������� #" << i << " = " << numbers2[i] << endl;
     }

     cout << endl << endl;

     cout << "�� ������� �������� �������� ���� �����������!" << endl;



   return 0;
}

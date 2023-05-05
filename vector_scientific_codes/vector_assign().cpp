#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

// ������� assign() ��������� �������� ��� �������� ������� ������������ �������:

int main() {
     ios::sync_with_stdio(false);
     cin.tie();
     setlocale(LC_ALL, "Russian");


     cout << "������ #1: " << endl;
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

     auto iter1 = numbers1.cend();
     auto iter2 = numbers2.cbegin();

     numbers1.insert(iter1 - 1, {34, 23, 15, 23, 63});
     numbers2.insert(iter2 + 2, 3, 4);

     cout << "������ ������ ������� ������� = " << numbers1.size() << endl;
     cout << "������ ������ ������� ������� = " << numbers2.size() << endl;
     cout << endl;
     cout << "������� ���������� ������� �������: ";
     for(int i = 0; i < numbers1.size(); i++) {
        cout << numbers1[i] << " ";
     }
     cout << endl;


     cout << "������� ���������� ������� �������: ";
     for(int i = 0; i < numbers2.size(); i++) {
        cout << numbers2[i] << " ";
     }
     cout << endl << endl;

     cout << "�������� ������ ������� ������� - numbers1.resize(13, 898) " << endl;
     numbers1.resize(13, 898);

     cout << "�������� ������ ������� ������� - numbers2.resize(15, 999) " << endl;
     numbers2.resize(15, 999);
     cout << endl;

     cout << "������� ���������� ������� �������: ";
     for(int i = 0; i < numbers1.size(); i++) {
        cout << numbers1[i] << " ";
     }
     cout << endl;


     cout << "������� ���������� ������� �������: ";
     for(int i = 0; i < numbers2.size(); i++) {
        cout << numbers2[i] << " ";
     }
     cout << endl << endl;


     numbers1.assign(12, 1090); // ������� 12 ��������� � ������� �� 1090
     numbers2.assign(0, 1090); // ������� 0 ��������� � ������� �� 1090

     cout << "������ ������� ������� �����  numbers1.assign(12, 1090): " << numbers1.size() << endl;
     cout << "������ ������� ������� �����  numbers2.assign(0, 1090): " << numbers2.size() << endl;

     cout << "���������� ������� �������: ";
     for(int i = 0; i < numbers1.size(); i++) {
        cout << numbers1[i] << " ";
     }
     cout << endl;


     cout << "���������� ������� �������: ";
     for(int i = 0; i < numbers2.size(); i++) {
        cout << numbers2[i] << " ";
     }
     cout << endl;

     if(numbers1.empty()) {
        cout << "������ ������ ����!" << endl;
     }
     else {
        cout << "� ������ ������� ���� �����!" << endl;
     }


     if(numbers2.empty()) {
        cout << "������ ������ ����!" << endl;
     }
     else {
        cout << "�� ������ ������� ���� �����!" << endl;
     }







     /*
     vector <string> string1 {"C++", "JAVA", "C#", "PYTHON"};
     vector <string> string2 {"TOM", "DANIYAL", "SAM"};
     string2.assign(10, "C++");
     for(int i = 0; i < string2.size(); i++) {
        cout << string2[i] << " ";
     }
     */



   return 0;
}



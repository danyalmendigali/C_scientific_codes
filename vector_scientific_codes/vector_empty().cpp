#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
     ios::sync_with_stdio(false);
     cin.tie();
     setlocale(LC_ALL, "Russian");


     cout << "������ #1: " << endl;
     vector <int> numbers1 {1, 2, 3, 4, 5, 6};
     auto iter1 = numbers1.cbegin(); // ����������� �������� ��������� �� ������ �������
     numbers1.insert(iter1 + 1, 3);
     if(numbers1.empty()) { // ��������� ������ �� ������ ��� ���
        cout << "������ ������ ������! " << endl;
     }
     else
        cout << "������ ������ �� ������!" << endl;
     cout << "������ �������: " << numbers1.size() << endl; // ��� ���� ����� ������ ������ ������ ������������ ������� size()
     for(int i = 0; i < numbers1.size(); i++) {
        cout << numbers1[i] << " ";
     }
     cout << endl;
     cout << "�������� ���� ���������: " << endl;
     numbers1.clear(); // �������� ���� ��������� � �������
     cout << "������ ������� ������: " << numbers1.size() << endl;
     cout << endl << endl << endl;






     cout << "������ #2: " << endl;
     vector <int> numbers2 {1, 2};
     auto iter2 = numbers2.cend(); // ����������� �������� ��������� �� ��������� �������
     numbers2.insert(iter2 - 1, {51, 56, 53});
     if(numbers2.empty()) { // ��������� ������ �� ������ ��� ���
        cout << "������ ������ ������! " << endl;
     }
     else
        cout << "������ ������ �� ������! " << endl;
      cout << "������ �������: " << numbers2.size() << endl; // ��� ���� ����� ������ ������ ������ ������������ ������� size()
     for(int i = 0; i < numbers2.size(); i++) {
        cout << numbers2[i] << " ";
     }
     cout << endl;
     cout << "�������� ���� ���������: " << endl;
     numbers2.clear(); // �������� ���� ��������� � �������
     cout << "������ ������� ������: " << numbers2.size() << endl;
     cout << endl << endl << endl;







     cout << "������ #3: " << endl;
     vector <int> numbers3 {44, 51, 23, 45, 67, 37};
     auto iter3  = numbers3.cbegin(); // ����������� �������� ��������� �� ������ �������
     numbers3.insert(iter3 + 1, 5);
     if(numbers3.empty()) { // ��������� ������ �� ������ ��� ���
        cout << "������ ������ ������! " << endl;
     }
     else
        cout << "������ ������ �� ������!" << endl;

     cout << "������ �������: " << numbers3.size() << endl; // ��� ���� ����� ������ ������ ������ ������������ ������� size()
     for(int i = 0; i < numbers3.size(); i++) {
        cout << numbers3[i] << " ";
     }

     cout << endl;
     cout << "�������� ���� ���������: " << endl;
     numbers3.clear(); // �������� ���� ��������� � �������
     cout << "������ ������� ������: " << numbers3.size() << endl;
     cout << endl << endl << endl;








     /*
     vector <int> v {1, 2, 3, 4, 5};
     if(v.empty()) { // .empty() ��������� ������ �� ������ ��� ���
        cout << "������ ������!";
     }
     else cout << "������ ����� ������!";
        */

   return 0;
}


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
     auto iter1 = numbers1.cbegin();
     numbers1.insert(iter1 + 1, 4);
     if(numbers1.empty()) {
        cout << "������ ������ ����! " << endl;
     }
     else
        cout << "������ ������ ����� �����! " << endl;

     cout << "������ ������ ������� = " << numbers1.size() << endl;
     cout << "���������� �������: ";
     for(int i = 0; i < numbers1.size(); i++) {
        cout << numbers1[i] << " ";
     }
     cout << endl << endl << endl;
     cout << "����� numbers1.resize(10, 8): " << endl;
     numbers1.resize(10, 8);
     cout << "������ ������ ������� = " << numbers1.size() << endl;
     cout << "���������� �������: ";
     for(int i = 0; i < numbers1.size(); i++) {
        cout << numbers1[i] << " ";
     }
     cout << endl;
     numbers1.clear();
     cout << "������ ����� numbers1.clear(): " << numbers1.size() << endl;
     cout << endl << endl << endl;







     cout << "������ #2: " << endl;
     vector <int> numbers2 = {34, 54, 21, 43, 26};
     auto iter2 = numbers2.cend();
     numbers2.insert(iter2 - 1, {1023, 3543, 5356, 3642});
     if(numbers2.empty()) {
        cout << "������ ������ ����! " << endl;
     }
     else
        cout << "������ ������ ����� �����!" << endl;

      cout << "������ ������ ������� = " << numbers2.size() << endl;
      cout << "���������� �������: ";
      for(int i = 0; i < numbers2.size(); i++) {
        cout << numbers2[i] << " ";
      }
      cout << endl << endl << endl;

      numbers2.resize(2);
      cout << "���������� ����� numbers2.resize(2): ";
      for(int i = 0; i < numbers2.size(); i++) {
        cout << numbers2[i] << " ";
      }
      cout << endl << endl;

      cout << "���������� ����� numbers2.resize(5, 8): ";
      numbers2.resize(5, 8);
      cout << "������ ������ ������� = " << numbers2.size() << endl;
      cout << "���������� �������: ";
      for(int i = 0; i < numbers2.size(); i++) {
        cout << numbers2[i] << " ";
      }
      cout << endl;
      numbers2.clear();
      cout << "������ ����� numbers2.clear(): " << numbers2.size() << endl;
      cout << endl << endl << endl;









      cout << "������ #3: " << endl;
      int g;
      cout << "������� ���������� ����� � �������: ";
      cin >> g;
      vector <int> numbers3 (g);
      cout << "������� " << g << " �����: " << endl;
      for(int i = 0; i < g; i++) {
        cout << "������� " << i << " �����: ";
        cin >> numbers3[i];
      }
      int h, l, k;
      h--;
      cout << "���� ������������������ �� " << numbers3.size() << " �����" << endl;
      cout << "������� ��� ����� 1. � ������ �������� ������ �������� ������������������. 2. ������� ������ ���� ��������. 3. ������� ����� ����� �� ������ ��������: " << endl;
      cout << " 1) ";
      cin >> h;

      cout << " 2) ";
      cin >> l;

      cout << " 3) ";
      cin >> k;
      auto iter3 = numbers3.cbegin();
      numbers3.insert(iter3 + h, l, k);
      cout << "���������� ������� ������: " ;
      for(int i = 0; i < numbers3.size(); i++) {
        cout << numbers3[i] << " ";
      }
      cout << endl;

      if(numbers3.empty()) {
        cout << "��� ������ ����! " << endl;
      }
      else
        cout << "��� ������ ����� �����! " << endl;

       numbers3.resize(3);
       cout << "�������� ������ ������� �� 3 " << endl;
       cout << "������ ������ ������� = " << numbers3.size() << endl;
       cout << "���������� ������� ������: ";
       for(int i = 0; i < numbers3.size(); i++) {
        cout << numbers3[i] << " ";
       }
       cout << endl << endl;


       cout << "������ numbers3.resize(11, 3) " << endl;
       numbers3.resize(11, 3);
       cout << "������ ������ ������� = " << numbers3.size() << endl;
       cout << "���������� ������� ������: ";
       for(int i = 0; i < numbers3.size(); i++) {
        cout << numbers3[i] << " ";
       }
       cout << endl << endl;



     /*
     vector <int> numbers1 = {1, 2, 3, 4, 5, 6};
     numbers1.resize(4);
     numbers1.resize(6, 8);

     for(int i = 0; i < numbers1.size(); i++) {
        cout << numbers1[i] << " ";
     }
     cout << endl;
     */

   return 0;
}


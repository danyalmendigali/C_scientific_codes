#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
     ios::sync_with_stdio(false);
     cin.tie();
     setlocale(LC_ALL, "Russian");

     cout << "������: numbers1.insert(iter1 + 2, 8): " << endl;
     vector <int> numbers1 = {1, 2, 3, 4, 5};
     auto iter1 = numbers1.cbegin(); // ����������� �������� ��������� �� ������ �������
     numbers1.insert(iter1 + 2, 8); // ��������� ����� ������� ��������
     for(int i = 0; i < numbers1.size(); i++) {
        cout << numbers1[i] << " ";
     }
     cout << endl << endl << endl;


     cout << "������: numbers2.insert(iter2 + 1, 3, 4): " << endl;
     vector <int> numbers2 = {1, 2, 3, 4, 5};
     auto iter2 = numbers2.cbegin(); // ����������� �������� ��������� �� ������ �������
     numbers2.insert(iter2 + 1, 3, 4); // ��������� ����� ������� �������� ��� ��������
     for(int i = 0; i < numbers2.size(); i++) {
        cout <<  numbers2[i] << " ";
     }
     cout << endl << endl << endl;


     cout << "������: numbers3.insert(iter3 + 1, values.begin(), values.begin() + 3):" << endl;
     vector <int> values = {10, 20, 30, 40, 50};
     vector <int> numbers3 = {1, 2, 3, 4, 5};
     auto iter3 = numbers3.cbegin(); // ����������� �������� ��������� �� ������ �������
     numbers3.insert(iter3 + 1, values.begin(), values.begin() + 3); // ��������� ����� ������� �������� ��� ������ �������� �� ������� values
     for(int i = 0; i < numbers3.size(); i++) {
        cout << numbers3[i] << " ";
     }
     cout << endl << endl << endl;



     cout << "������:  numbers4.insert(iter4, {21, 22, 23}):" << endl;
     vector <int> numbers4 = {1, 2, 3, 4, 5};
     auto iter4 = numbers4.cend(); // ����������� �������� ��������� �� ������� �� ��������� ���������
     numbers4.insert(iter4, {21, 22, 23}); // ��������� � ����� ������� numbers4 �������� �� ������ { 21, 22, 23 }
     for(int i = 0; i < numbers4.size(); i++) {
        cout << numbers4[i] << " ";
    }
    cout << endl << endl;




     /*
     vector <int> v1 {1, 2, 3, 4, 5};
     auto iter1 = v1.cbegin();
     v1.insert(iter1 + 1, 3);
     for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
      cout << endl << endl;


      vector <int> v2 {1, 2, 3, 4, 5};
      auto iter2 = v2.cbegin();
      v2.insert(iter2 + 2, 3, 4);
      for(int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
      }
      cout << endl << endl;




      vector <int> v3 = {1, 2, 3, 4, 5};
      auto iter3 = v3.cend();
      v3.insert(iter3, {21, 22, 23});
      for(int i = 0; i < v3.size(); i++) {
        cout << v3[i] << " ";
      }
      cout << endl << endl;



      vector <int> v4 = {1, 2, 3, 4, 5};
      vector <int> v5 = {10, 20, 30, 40, 50};
      auto iter4 = v5.cbegin();
      v5.insert(iter4, v4.begin(), v4.begin() + 3);
      for(int i = 0; i < v5.size(); i++) {
        cout << v5[i] << " ";
      }
      cout << endl << endl;
      */



   return 0;
}

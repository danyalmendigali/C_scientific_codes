#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
     ios::sync_with_stdio(false);
     cin.tie();
     setlocale(LC_ALL, "Russian");


     cout << "������: numbers1.erase(iter + 2): " << endl;
     vector <int> numbers1 {1, 2, 3, 4, 5, 6};
     auto iter = numbers1.cbegin(); // ��������� �� ������ �������
     numbers1.erase(iter + 2); // ������� ������ �������
     for(int i = 0; i < numbers1.size(); ++i) {
        cout << numbers1[i] << " ";
     }
     cout << endl << endl << endl;




     cout << "������: numbers2.erase(iter_begin + 3, iter_end - 1): " << endl;
     vector <int> numbers2 {1, 2, 3, 4, 5, 6};
     auto iter_begin = numbers2.cbegin(); // ��������� �� ������ �������
     auto iter_end = numbers2.cend(); // ��������� �� ��������� �������
     numbers2.erase(iter_begin + 2, iter_end - 1); // ������� � �������� �������� �� ����������
     for(int i = 0; i < numbers2.size(); ++i) {
        cout << numbers2[i] << " ";
     }
     cout << endl << endl << endl;












   return 0;
}

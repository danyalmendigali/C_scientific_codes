#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

int main() {
     ios::sync_with_stdio(false);
     cin.tie();
     setlocale(LC_ALL, "Russian");

     vector <int> v;
     cout << "������ � ������: " << v.size() << endl;
     cout << "������� ���������� �������: ";

     for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
        }

        cout << endl << endl << endl;


     cout << "������� 5 �����: " << endl;
     for(int i = 1; i <= 5; i++) {
        cout << "������� #" << i << ": ";
        int n;
        cin >> n;
        v.push_back(n);
     }


     cout << "������ � ������: " << v.size() << endl;
     cout << "������� ���������� �������: ";

     for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
        }

        cout << endl << endl << endl;














   return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

/// reverse() � C++ - ��� �������� �� ����������� ���������� (STL), ������� �������� ������� ��������� � ���������� �� ��������.

void solve() {
    int n, n1;
    cout << "������� ������ ������� �����: ";
    cin >> n;
    cout << "������� ������ ������� �����: ";
    cin >> n1;
    list <int> numbers1, numbers2;


    cout << "������� ���������� ������� �����" << endl;
    for(int i = 0; i < n; i++) {
        int a;
        cout << "������� #" << i << " : ";
        cin >> a;
        numbers1.push_back(a);
    }
    cout << endl;


    cout << "������� ���������� ������� �����" << endl;
    for(int i = 0; i < n1; i++) {
        int b;
        cout << "������� #" << i << " : ";
        cin >> b;
        numbers2.push_back(b);
    }
    cout << endl;

    if(numbers1.empty()) {
        cout << "��� ������ ���� ����!" << endl;
    }
    else {
        cout << "��� ������ ���� �� ����!" << endl;
    }


    if(numbers2.empty()) {
        cout << "��� ������ ���� ����!" << endl;
    }
    else {
        cout << "��� ������ ���� �� ����!" << endl;
    }
    cout << endl;

    cout << "������� ����������� ��������" << endl;
    cout << "��������� ������� ����� ��������� ����������� ��������: ";
    for(list <int>::reverse_iterator iter1 = numbers1.rbegin(); iter1 != numbers1.rend(); ++iter1) {
        cout << *iter1 << " ";
    }
    cout << endl << endl;

    cout << "��������� ������� ����� ��������� ����������� ��������: ";
    for(list <int>::reverse_iterator iter2 = numbers2.rbegin(); iter2 != numbers2.rend(); ++iter2) {
        cout << *iter2 << " ";
    }
    cout << endl << endl;


    cout << "��������� ����� ������� ����� � ������� insert() " << endl;
    cout << "������� 1) c ������ ����� ������ ������� ����� 2) C������ ����� 3) ����� ��� �����" << endl;
    cout << "������� ������ �����: ";
    int g1, g2, g3;
    cin >> g1;
    cout << "������� ������ �����: ";
    cin >> g2;
    cout << "������� ������ �����: ";
    cin >> g3;

    auto iter3 = numbers1.begin();
    advance(iter3, g1);
    numbers1.insert(iter3, g2, g3);

    cout << "���������� ����� ����� ���������� (insert): ";
    for(list <int>::iterator iter4 = numbers1.begin(); iter4 != numbers1.end(); ++iter4)
    {
        cout << *iter4 << " ";
    }
    cout << endl << endl;


    cout << "��������� ����� ������� ����� � ������� insert()" << endl;
    cout << "������� 1) c ������ ����� ������ ������� ����� 2) C������ ����� 3) ����� ��� �����" << endl;
    cout << "������� ������ �����: ";
    int g4, g5, g6;
    cin >> g4;
    cout << "������� ������ �����: ";
    cin >> g5;
    cout << "������� ������ �����: ";
    cin >> g6;

    auto iter5 = numbers2.begin();
    advance(iter5, g4);
    numbers2.insert(iter5, g5, g6);

    cout << "���������� ����� ����� ���������� (insert): ";
    for(list <int>::iterator iter5 = numbers2.begin(); iter5 != numbers2.end(); ++iter5)
    {
        cout << *iter5 << " ";
    }

    cout << endl << endl;

    cout << "���� #1" << endl;
    cout << "������� ����� � ������� ������� erase()" << endl;
    cout << "������� 1) � ����� ������� ������� �������� 2) �� ����� ������� ������� ��������" << endl;
    cout << "������� ������ �����: ";
    int j1, j2;
    cin >> j1;
    cout << "������� ������ �����: ";
    cin >> j2;
    j2++;

    auto iter6 = numbers1.begin();
    auto iter7 = numbers1.begin();
    advance(iter6, j1);
    advance(iter7, j2);

   numbers1.erase(iter6, iter7); /// ������� ����� ��������� iter6 � iter7
   cout << "������ ������ = " << numbers1.size() << endl;
   cout << "���������� ������� �����: ";
   for(list <int>::iterator iter8 = numbers1.begin(); iter8 != numbers1.end(); ++iter8)
   {
       cout << *iter8 << " ";
   }
   cout << endl << endl;


   cout << "���� #2" << endl;
   cout << "������� ����� � ������� ������� erase()" << endl;
   cout << "������� 1) � ����� ������� ������� �������� 2) �� ����� ������� ������� ��������" << endl;
   cout << "������� ������ �����: ";
   int j3, j4;
   cin >> j3;
   cout << "������� ������ �����: ";
   cin >> j4;
   j4++;

   auto iter9 = numbers2.begin();
   auto iter10 = numbers2.begin();
   advance(iter9, j3);
   advance(iter10, j4);

   numbers2.erase(iter9, iter10); /// ������� ����� ��������� iter9 � iter10
   cout << "������ ������ = " << numbers2.size() << endl;
   cout << "���������� ������� �����: ";
   for(list <int>::iterator iter11 = numbers2.begin(); iter11 != numbers2.end(); ++iter11)
   {
       cout << *iter11 << " ";
   }

   cout << endl << endl;

   cout << "���� #1" << endl;
   cout << "��������� ������ ����" << endl;
   numbers1.sort();
   cout << "������ ������� �����: " << numbers1.size() << endl;
   cout << "������� ���������� ������� �����: ";
   for(list <int>::iterator iter12 = numbers1.begin(); iter12 != numbers1.end(); ++iter12)
   {
       cout << *iter12 << " ";
   }
   cout << endl << endl;


   cout << "���� #2" << endl;
   cout << "��������� ������ ����" << endl;
   numbers2.sort();
   cout << "������ ������� �����: " << numbers2.size() << endl;
   cout << "����� ���������� ������� �����: ";
   for(list <int>::iterator iter13 = numbers2.begin(); iter13 != numbers2.end(); ++iter13)
   {
       cout << *iter13 << " ";
   }
   cout << endl << endl << endl;

   cout << "��������� ������� merge()" << endl;
   numbers1.merge(numbers2); /// ������� ���� ��������������� ���������� ��������� � ���� ��������������� ��������

   cout << "������ ����� = " << numbers1.size() << endl;
   cout << "����� ���������� ������� �����: ";
   for(list <int>::iterator iter14 = numbers1.begin(); iter14 != numbers1.end(); ++iter14)
   {
       cout << *iter14 << " ";
   }
   cout << endl << endl;

   cout << "������� ����� ������� ������ ������ c �����: ";
   int delete_num;
   cin >> delete_num;
   numbers1.remove(delete_num); /// remove() ������� ��� �������� �� ��������� delete_num
   cout << "������ ����� ����� �������� ����� ���� ��� " << delete_num << " = " << numbers1.size() << endl;
   cout << "����������: ";
   for(list <int>::iterator iter15 = numbers1.begin(); iter15 != numbers1.end(); ++iter15)
   {
       cout << *iter15 << " ";
   }
   cout << endl << endl;


   cout << "������ �� ������ ������������� �����" << endl;
   numbers1.unique(); /// ������� ������������� ��������
   cout << "������ ����� = " << numbers1.size() << endl;
   cout << "����������: ";
   for(list <int>::iterator iter16 = numbers1.begin(); iter16 != numbers1.end(); ++iter16)
   {
       cout << *iter16 << " ";
   }

   cout << endl << endl;

   cout << "������ ��� ������ ����� ���������� ������� reverse() ��� ������� ���� � �������� �������";
   reverse(numbers1.begin(), numbers1.end()); /// �������� ������� �� ��������
   cout << endl;

   cout << "������� ����������: ";
   for(list <int>::iterator iter17 = numbers1.begin(); iter17 != numbers1.end(); ++iter17)
   {
       cout << *iter17 << " ";
   }
   cout << endl << endl;













}



int main() {
    cin.tie(0);
    setlocale(LC_ALL, "Russian");
    solve();





   return 0;
}

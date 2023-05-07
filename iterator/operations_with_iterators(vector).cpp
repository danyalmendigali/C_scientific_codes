#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define array arr

// ���������� ��������� ��� �������� ��������� �������
// *iter: ��������� ��������, �� ������� ��������� ��������
// ++iter: ����������� ��������� ������ ��� ��������� � ���������� ��������
// -iter: ����������� ��������� ����� ��� ��������� � ����������� ��������. ��������� ���������� forward_list �� ������������ �������� ����������.
// iter1 == iter2: ��� ��������� �����, ���� ��� ��������� �� ���� � ��� �� �������
// iter1 != iter2: ��� ��������� �� �����, ���� ��� ��������� �� ������ ��������


int main() {
    cin.tie(0);
    setlocale(LC_ALL, "Russian");



    cout << "��������� �1" << endl;
    vector <int> numbers1 {76, 47, 35, 25, 85}, numbers2 {63, 91, 101, 45, 63};

    cout << "������ ������� �������: " << numbers1.size() << endl;
    cout << "������ ������� �������: " << numbers2.size() << endl;
    cout << endl;

    cout << "������� ���������� ������� �������: ";
    auto iter1 = numbers1.begin(); // �������� ��������
    while(iter1 != numbers1.end()) // ���� �� ������ �� �����
    {
        cout << *iter1 << " "; // �������� �������� ����� ��������
        ++iter1; // ������������ ������ �� ���� �������

    }
    cout << endl;


    cout << "������� ���������� ������� �������: ";
    auto iter2 = numbers2.begin();
    while(iter2 != numbers2.end())
    {
        cout << *iter2 << " ";
        ++iter2;
    }
    cout << endl << endl;





     cout << "��������� �2" << endl;
     vector <int> v {1, 2, 3, 4, 5};
    auto iter = v.begin();
    while(iter != v.end()) // ���� �� ������ �� �����
    {

        *iter = (*iter) * (*iter); // �������� ����� � �������
        ++iter;
    }

    for(iter = v.begin(); iter < v.end(); ++iter)
    {
        cout << *iter << " ";
    }
    cout << endl << endl;






    cout << "��������� �3" << endl;
    vector <int> numbers;
    for(int count = NULL; count < 5; count++) {
        numbers.push_back(count);
    }
    vector <int>::const_iterator it; // ��������� �������� ������ ��� ������
    it = numbers.begin(); // ����������� ��� ��������� ������� �������
    while(it != numbers.end()) // ���� �������� �� ��������� ���������� ��������
    {
        cout << *it << " "; // ������� �������� ��������, �� ������� ��������� ��������
        ++it; // � ��������� � ���������� ��������
    }




    return 0;
}

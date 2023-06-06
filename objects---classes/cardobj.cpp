#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> // для getch()
using namespace std;

#define ll long long
#define ar array
#define FOR(i, a, b) for(int i = a; i < b; i++)

enum Suit { clubs, diamonds, hearts, spades };
const int jack = 11; // именованные достоинства карт
const int queen = 12;
const int king = 13;
const int ace = 14;


class card
{
     private:
     int number;
     Suit suit;
     public:
     card() { }

     card (int n, Suit s) : number(n), suit(s) { }

     void display();
     bool isEqual(card);
};

void card::display() // вывод карты на экран
{
     if(number >= 2 && number <= 10) {
       cout << number;
     }

     else
     switch(number)
       {
     case jack: cout << "Валет "; break;
     case queen: cout << "Дама "; break;
     case king: cout << "Король "; break;
     case ace: cout << "Туз "; break;
       }

    switch(suit)
       {
     case clubs: cout << "треф"; break;
     case diamonds: cout << "бубен"; break;
     case hearts: cout << "червей" ;break;
     case spades: cout << "пик" ;break;
    }
}

bool card::isEqual(card c2) // сравнение двух карт
{

    return (number == c2.number && suit == c2.suit)? true : false;
}


int main() {
    cin.tie(0);
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

     card temp, chosen, prize; // 3 карты
     int position;

     card card1(7, clubs); // определение и инициализация card1
     cout << "Карта 1: ";
     card1.display(); // вывод card1
     card card2(jack, hearts); // определение и инициализация card2

     cout << "\nКарта 2: ";
     card2.display(); // вывод card2
     card card3(ace, spades); // определение и инициализация card3

     cout << "\nКарта 3: ";
     card3.display(); // вывод card3
     prize = card3; // карту prize будет необходимо угадать

     cout << "\nМеняем местами карты 1 и 3...";
     temp = card3;
     card3 = card1;
     card1 = temp;

     cout << "\nМеняем местами карты 2 и 3...";
     temp = card3;
     card3 = card2;
     card2 = temp;

     cout << "\nМеняем местами карты 1 и 2...";
     temp = card2;
     card2 = card1;
     card1 = temp;

     cout << "\nНа какой позиции (1, 2 или 3) теперь ";
     prize.display(); // угадываемая карта
     cout << "?";
     cin >> position;

     switch(position)
     {
        case 1:chosen = card1; break;
        case 2:chosen = card2; break;
        case 3:chosen = card3; break;
     }

     if(chosen.isEqual(prize)) {
        cout << "Правильно! Вы выиграли!";
     }
     else {
        cout << "Неверно. Вы проиграли.";
        cout << " Вы выбрали карту ";
        chosen.display();
        cout << endl;
     }








  return 0;
}


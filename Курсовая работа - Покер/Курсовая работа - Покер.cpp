#include <iostream>
#include <Windows.h>


using namespace std;

struct Playing_card
{
    string Card{};
    
    string Suit{};

};

struct Deck
{
    Playing_card Deck_card[52]{};
};

void Fill_the_deck(Deck& deck, int size_card, int size_suit, string *card, string *suit )
{
    int index{};
    for (int i{}; i < size_suit; ++i)
    {
        for (int j{}; j < size_card; ++j)
        {
            deck.Deck_card[index].Card = card[j];
            deck.Deck_card[index].Suit = suit[i];
            ++index;
        }
    }

}

void Print_card(Playing_card& card)
{
    cout << card.Card << endl;
    cout << card.Suit << endl;
}

void Print_deck(Deck& deck, int size = 52)
{
    for (int i{}; i < size; ++i)
    {
        cout << "---------------" << endl;
        Print_card(deck.Deck_card[i]);
    }
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string Card[13]{ "Двойка","Тройка","Четыре","Пятерка","Шестерка","Семерка","Восьмерка","Девятка","Десятка","Валет","Дама","Король","Туз" };
    string Suit[4]{ "Пики","Буби","Черви","Крести" };

    Deck game;
    Fill_the_deck(game, 13, 4, Card, Suit);
    Print_deck(game);

}

  

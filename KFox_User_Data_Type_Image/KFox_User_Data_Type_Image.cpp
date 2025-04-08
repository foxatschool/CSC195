
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

class computer 
{
public:
    void adjustBrightness(int valueAdded);
    void buttonClick();
private:
    int numOfKeys;
    int currentBrightness;
    bool isTurnedOn;
};

class deckOfAnimatedSpells
{
public:
    void drawCard();
    void flipCard();
private:
    int numOfCards;
    float currentAngleOfCard;
    bool isOpen;
};
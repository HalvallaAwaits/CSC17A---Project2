#include <string>
#include "player.h"
using namespace std;

//Constructors
Player::Player(){
    name="Player";
    mrkr='-';
    wins=0;
    losses=0;
}

Player::Player(string n){
    name=n;
    mrkr='-';
    wins=0;
    losses=0;
}

//Copy Constructor
Player::Player(const Player &obj){
    name=obj.name;
    mrkr=obj.mrkr;
    wins=obj.wins;
    losses=obj.losses;
}

//Accessors
string Player::getName(){
    return name;
}

char Player::getMrkr(){
    return mrkr;
}

int Player::getWins(){
    return wins;
}

int Player::getLosses(){
    return losses;
}

//Mutators
void Player::setName(string n){
    name=n;
}

void Player::setMrkr(char m){
    mrkr=m;
}

void Player::setWins(int w){
    wins=w;
}

void Player::incWins(){
    wins+=1;
}

void Player::setLosses(int l){
    losses=l;
}

void Player::incLosses(){
    losses+=1;
}

//overloaded = operator
void Player::operator = (const Player &right){
    name=right.name;
    mrkr=right.mrkr;
    wins=right.wins;
    losses=right.losses;
}
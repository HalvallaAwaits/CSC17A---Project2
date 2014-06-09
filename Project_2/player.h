/* 
 * File:   player.h
 * Author: Joe
 *
 * Created on June 6, 2014, 3:28 PM
 */

#include <iostream>
#include <string>
using namespace std;

#ifndef PLAYER_H
#define	PLAYER_H

class Player{
protected:
    string name;   //holds player name
    char mrkr;     //holds x's or o's
    int wins;      //holds wins
    int losses;    //holds losses
public:
    //Constructors
    Player();
    Player(string);
    //Copy Constructor
    Player(const Player &);
    //Accessors
    string getName();
    char getMrkr();
    int getWins();
    int getLosses();
    //Mutators
    void setName(string);
    void setMrkr(char);
    void setWins(int);
    void incWins();
    void setLosses(int);
    void incLosses();
    //Overloaded = operator
    void operator = (const Player &);
};

#endif	/* PLAYER_H */
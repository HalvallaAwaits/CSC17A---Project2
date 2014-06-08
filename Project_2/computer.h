/* 
 * File:   computer.h
 * Author: Joe
 *
 * Created on June 6, 2014, 4:07 PM
 */

#include <iostream>
#include <string>
#include "player.h"
using namespace std;

#ifndef COMPUTER_H
#define	COMPUTER_H

class Computer : public Player{
private:
    int diff;  //stores difficulty setting
public:
    //constructor
    Computer() : Player(){
        diff=1;
        name="Easy AI";
    }
    
    Computer(int d) : Player(){
        diff=d;
        if(diff==1)name="Easy AI";
        if(diff==2)name="Advanced AI";
    }
    int getDiff(){
        return diff;
    }
};

#endif	/* COMPUTER_H */


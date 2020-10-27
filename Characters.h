//
//  Characters.hpp
//  Test
//
//  Created by Elias Farhan on 14/12/16.
//  Copyright © 2016 Elias Farhan. All rights reserved.
//

#ifndef Characters_hpp
#define Characters_hpp
#include "Characters.h"
class Character;
class Hero;

class Monster
{
    
public:
    Monster(int,int,int,int);
    void takeDamage(int damage);
    void fight(Hero*);
    void death();
};

class Hero
{
public:
    Hero(int,int,int,int);
    Hero(int i, int i1, int i2, int i3, float x);
    void takeDamage(int damage);
    void fight(Monster*);
    void death();
    bool isAlive();
};

class Character
{
public:
    Character(int,int,int,int);
    void takeDamage(int damage);
    int getAttack() const;
    virtual bool isAlive() = 0;
    virtual void death() = 0;
    int getDefense() const;
    int getHealth() const;
protected:
    int health;
    int attack;
    int defense;
    int strength;
};



#endif  //Characters_hpp 

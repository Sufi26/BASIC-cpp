#ifndef PLAYER_H
#define PLAYER_H

#include<iostream>
using namespace std;

class Player{
    int Playerid;
    char Playername;
    float Playerage;
    int  Numberofmatchesplayed;
    int Playerrank;
    int Score[3];

    public:
    
    void setPlayerid(int p_id);
    int getPayerid();

    void setPlayername(char p_name);
    int getPlayername();

    void setPlayerage(float p_age);
    float getPlayerage();

    void setNumberofmatchesplayed(int no_matches_played);
    int getNumberofmatchesplayed();

    void setPlayerrank(int p_rank);
    int getPlayerrank();

    void setScore(int p_score);
    int getScore();

    Player();

   void  Calculateavgescore();





};

#endif // PLAYER_H

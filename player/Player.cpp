#include "Player.h"

#include<iostream>
using namespace std;

void Player::setPlayerid(int p_id)
{
    Playerid=p_id;
}

int Player::getPayerid()
{
    return Playerid;
}

void Player::setPlayername(char p_name)
{
    Playername=p_name;
}

int Player::getPlayername()
{
    return Playername;
}

void Player::setPlayerage(float p_age)
{
    Playerage=p_age;
}

float Player::getPlayerage()
{
    return Playerage;
}

void Player::setNumberofmatchesplayed(int no_matches_played)
{
    Numberofmatchesplayed=no_matches_played;
}

int Player::getNumberofmatchesplayed()
{
    return Numberofmatchesplayed;
}

void Player::setPlayerrank(int p_rank)
{
    Playerrank=p_rank;
}

int Player::getPlayerrank()
{
    return Playerrank;
}

void Player::setScore(int p_score)
{
   Score[3]=p_score;
}

int Player::getScore()
{
    return Score[3];
}

Player::Player()
{
    int Playerid;
    char Playername;
    float Playerage;
    int  Numberofmatchesplayed;
    int Playerrank;
    int Score[3];

}

void Player::Calculateavgescore()
{
    int p_val, p_score,p_score1,p_score2;
    p_val=(p_score+p_score1+p_score2)/3;
    cout<<"the average of scores of your matches are: "<<p_val<<endl;


}


int main(){
    Player p1;

    int p_id;
    char p_name;
    float p_age;
    int no_matches_played;
    int p_rank;
    int p_score;
    int p_score1;
    int p_score2;
   

    cout<<"Enter player id :"<<endl;
    cin>>p_id;
    //cout<<"Enter player name :"<<endl;
   // cin>>p_name;
    cout<<"Enter player age : "<<endl;
    cin>>p_age;
    cout<<"Enter Number of matches played :"<<endl;
    cin>>no_matches_played;
    cout<<"Enter rank of player :"<<endl;
    cin>>p_rank;
    cout<<"Enter scores of your matches"<<endl;
    cin>>p_score;
    cin>>p_score1;
    cin>>p_score2;

    p1.Calculateavgescore();



}

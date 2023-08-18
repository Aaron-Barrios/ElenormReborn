#include <iostream>
#include <fstream>
#include <string>
#include <vector>   
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "waterClass.cpp"
#include "fireClass.cpp"
#include "earthClass.cpp"
#include "airClass.cpp"
#include "NormieClass.cpp"
#include "Map.cpp"
using namespace std;

void test();
void writeDefeatedToFile();

playerClass P1 = playerClass();

waterClass PlayerA = waterClass("Joe mama", 45, 30, 35);

waterClass NPC1 = waterClass("Archibald", 35, 36, 38);//these should all be fixed

//fire
fireClass PlayerB = fireClass("Joe mama", 45, 30, 35);

fireClass NPC2 = fireClass("Quentin", 35, 39, 33);

//earth
earthClass PlayerC = earthClass("Joe mama", 45, 30, 35); //set this for every class and regulate it

earthClass NPC3 = earthClass("Genevieve", 35, 35, 38);

//air
airClass PlayerD = airClass("Joe mama", 45, 30, 35);

airClass NPC4 = airClass("Joe", 35, 38, 35);

NormieClass Dagon = NormieClass("King Dagon", 35, 65, 100);

vector<playerClass> defeatedPeeps= {NPC1, NPC2 , NPC3, NPC4};

int main(){

    // writeDefeatedToFile();
    // P1.displayShopItems(1);
    // P1.displayShopItems(1);
    PlayerA.displayStats();
    cout << endl;
    PlayerA.setAttack(0);
    PlayerA.displayStats();
    return 0;
}

void writeDefeatedToFile(){
    ofstream outFile;
    outFile.open("Defeated Enemies");
    if(!outFile.fail()){
        outFile << "Name" << endl << "health, attack, defense, power" << endl << endl;
        for(int i = 0; i < defeatedPeeps.size(); i++){
            outFile << defeatedPeeps[i].getName();
            outFile << "'s stats: " << endl;
            for(int j = 0; j < 3; j++){
                outFile << defeatedPeeps[i].getInitialStatsAt(j) << ", ";
            }
            outFile << defeatedPeeps[i].getInitialStatsAt(3) << endl;
            outFile << endl;
        }
        outFile.close();
    }
    else{
        cout << "Error with writing defeated enemies" << endl;
    }
}

//my test case function that tests every single memeber function, both in the playerClass and the four classes/"tribes"
void test(){

    waterClass Katarra = waterClass("Katarra", 35, 30, 30); 
    playerClass Player1 = playerClass("Katarra", 1);
    cout << Katarra.getPower() << endl;
    cout << Katarra.getHealth() << endl;
    cout << Katarra.getAttack() << endl;
    cout << Katarra.getDefense() << endl;
    //tests my player class/my inheritence from that to water
    Katarra.setHealth(35);
    Katarra.setAttack(35);
    Katarra.setDefense(30);

    cout << Katarra.getName() << endl;
    cout << Katarra.getPower() << endl;
    cout << Katarra.getHealth() << endl;
    cout << Katarra.getAttack() << endl;
    cout << Katarra.getDefense() << endl;

    cout << endl;
    cout << Player1.getTribe() << endl;
    cout << endl;

    cout << Katarra.tsunami() << endl;
    cout << Katarra.iceSpikes() << endl;
    cout << Katarra.hose() << endl;

    cout << "..." << endl;
    fireClass Zuko = fireClass("Zuko", 35, 30, 30);
    playerClass Player2 = playerClass("Zuko", 2);
    cout << Zuko.getPower() << endl;
    cout << Zuko.getHealth() << endl;
    cout << Zuko.getAttack() << endl;
    cout << Zuko.getDefense() << endl;
    

    //tests my player class/my inheritence from that to fire
    Zuko.setHealth(45);
    Zuko.setAttack(40);
    Zuko.setDefense(25);
    cout << endl;
    cout << Zuko.getName() << endl;
    cout << Zuko.getPower() << endl;
    cout << Zuko.getHealth() << endl;
    cout << Zuko.getAttack() << endl;
    cout << Zuko.getDefense() << endl;

    cout << endl;
    cout << Player2.getTribe() << endl;
    cout << endl;

    cout << Zuko.firewall() << endl;
    cout << Zuko.lightningBolt() << endl;
    cout << Zuko.fireball() << endl;

    cout << "..." << endl;
    earthClass Toph = earthClass("Toph", 35, 30, 30);
    playerClass Player3 = playerClass("Toph", 3);
    cout << Toph.getPower() << endl;
    cout << Toph.getHealth() << endl;
    cout << Toph.getAttack() << endl;
    cout << Toph.getDefense() << endl;

    //tests my player class/my inheritence from that to earth
    Toph.setHealth(45);
    Toph.setAttack(40);
    Toph.setDefense(25);
    cout << endl;
    cout << Toph.getName() << endl;
    cout << Toph.getPower() << endl;
    cout << Toph.getHealth() << endl;
    cout << Toph.getAttack() << endl;
    cout << Toph.getDefense() << endl;

    cout << endl;
    cout << Player3.getTribe() << endl;
    cout << endl;

    cout << Toph.theBoulder() << endl;
    cout << Toph.magmaBlast() << endl;
    cout << Toph.gauntlet() << endl;

    cout << "..." << endl;
    airClass Aang = airClass("Aang", 35, 30, 30);
    playerClass Player4 = playerClass("Aang", 4);
    cout << Aang.getPower() << endl;
    cout << Aang.getHealth() << endl;
    cout << Aang.getAttack() << endl;
    cout << Aang.getDefense() << endl;

    //tests my player class/my inheritence from that to air
    Aang.setHealth(45);
    Aang.setAttack(40);
    Aang.setDefense(25);
    cout << endl;
    cout << Aang.getName() << endl;
    cout << Aang.getPower() << endl;
    cout << Aang.getHealth() << endl;
    cout << Aang.getAttack() << endl;
    cout << Aang.getDefense() << endl;

    cout << endl;
    cout << Player4.getTribe() << endl;
    cout << endl;

    cout << Aang.tornado() << endl;
    cout << Aang.windWhip() << endl;
    cout << Aang.airBlast() << endl;

}


//Game Play Driver for Phase 3 + 4
//GameState getTurnOfPlayer returns int

//#include "GameState.hpp"
#include "Game.h"
#include <cstdlib>
#include <iostream>
#include "Market.hpp"

using namespace std;

Game::Game() {
	cout << "Welcome to PowerGrid!" << endl;
}

Game::Game(vector <Player*> players)
: game_players(players){

}


void Game::reversePlayerOrder(vector <Player*> players) {
	//reverse player order here -- rearrange vector
	int playerTurn = 0;
}

void Game::dashboard(Player* p) {
	//cout resources from powerplants, cities, etc

	cout << "\n***********************************************************" << endl;
	cout << p->getName() + "'s Dashboard: " << endl;
	cout << "***********************************************************" << endl;
	cout << "PowerPlants:" << endl;
	
	//Display list of player's powerplants
	//***need to reformat powerplant toString so that it looks better in dashboard***
	//NEEDS DEBUGGING
	vector <PowerPlant> show{ NULL };
	show = p->getPowerPlant();
	for (int i = 0; i < show.size(); i++) {
		show[i].toString();
		cout << endl;
	}
	cout << "***********************************************************" << endl;

	cout << "Cities:\n" << endl;
	cout << "***********************************************************" << endl;
	//*** add cities later


	cout << "Houses:\n" << endl;
	cout << "***********************************************************" << endl;
	//*** add houses later

	cout << "Elektros:\n" << endl;
	p->walletToString();
	cout << "***********************************************************" << endl;
	cout << "Resources:\n" << endl;
	
	//cycle through player's powerplant vectors to see which resources they own

	int player_coal = 0;
	int player_oil = 0;
	int player_garbage = 0;
	int player_uranium = 0;

	for (int i = 0; i < show.size(); i++) {
		player_coal += show[i].getRTStocked("coal");
		player_oil += show[i].getRTStocked("oil");
		player_garbage += show[i].getRTStocked("garbage");
		player_uranium += show[i].getRTStocked("uranium");
	}

	cout << "Amount of Coal Owned: " + player_coal << endl;
	cout << "Amount of Oil Owned: " + player_oil << endl;
	cout << "Amount of Garbage Owned: " + player_garbage << endl;
	cout << "Amount of Uranium Owned: " + player_uranium << endl;
	cout << "***********************************************************" << endl;



}



void Game::buyingResources() {
	//display resourceMarket
	//show which resources player can buy based on powerplants

}

//Players start or add cities to their networks
//Show possessions of each player at end of Phase 4

//In reverse turn order, players may build into cities. In the first round, 
//a player may choose to build into any city that is not already occupied.
//A player may continue to expand by paying the cost to
//build into the desired city slot plus the value of all connections to that 
//city from an already occupied city.No player may build into more than one 
//slot in a city.Slot one costs 10'Elektros' and is the
//only slot available during Step 1. During Step 2, the second slot is 
//available at a cost of 15 Electros, and in Step 3, the final slot is 
//available at a cost of 20 Electros.

void Game::buildingCities() {

}

#pragma once
#include <queue>
#include <iostream>
using namespace std;
struct movie {
	string name;
	//time date of end and start using real time 
	int hall;

};
class Cinema
{
private:
	queue<bool> queuesytem;
public:
	void addmovie() {
		
	};
	int	Rooms();
	int remainingseats();
	void setcapicaty();
	bool seating();
	bool seatingfull();
	void removemovie()
	{

		// removes when the real time surpasses movie end time
	}
	bool ifreservedseat() {
		//if it is served return true
	}
	void reserveseat() {

	 }
	void purchaseticket() {

	}
	void cancelseat() {
		//return seat to be available
	}




	




};


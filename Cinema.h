#pragma once
#include <queue>
#include <vector>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
struct seating {
	int coloumns;
	int rows;
	
	void printSeats() {
		int k=0;
		while (k <= coloumns *6){
			cout << "-";
			k++;
		}
		cout << endl ;
		for (int i = 0; i < rows; i++) {
			char a = i + 65;
			for (int j = 0; j < coloumns; j++) {
				cout<<"["<<a<<j<<"]"<< "  ";
			}
			cout << endl;
		}
	}
};
class Movie {
public:
    Movie(const string& title = "", int duration = 0) : title(title), duration(duration) {}

    const string& getTitle() const {
        return title;
    }

    int getDuration() const {
        return duration;
    }

private:
    string title;
    int duration;
};

class Hall {
public:
    Hall(int hallNumber = 0, int capacity = 0) : hallNumber(hallNumber), capacity(capacity) {}

    int getHallNumber() const {
        return hallNumber;
    }

    int getCapacity() const {
        return capacity;
    }

private:
    int hallNumber;
    int capacity;
};

class Cinema {
public:
    Cinema(const string& name) : name(name) {}

    void addHall(const Hall& hall) {
        halls.push_back(hall);
    }

    void addMovie(const Movie& movie) {
        movies.push_back(movie);
    }

    void registerVisitor(const string& visitorName) {
        registrationQueue.push(visitorName);
    }

    void enterMovie() {
        if (!registrationQueue.empty()) {
            std::cout << registrationQueue.front() << " enters the cinema for " << currentMovie.getTitle() << " in Hall " << currentHall.getHallNumber() << std::endl;
            registrationQueue.pop();
        }
        else {
            std::cout << "No more visitors in the queue." << std::endl;
        }
    }

    void setCurrentMovie(const Movie& movie) {
        currentMovie = movie;
    }

    void setCurrentHall(const Hall& hall) {
        currentHall = hall;
    }

private:
    string name;
    vector<Hall> halls;
    vector<Movie> movies;
    queue<std::string> registrationQueue;
    Movie currentMovie;
    Hall currentHall;
};


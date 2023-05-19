//
// 	Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab 10E
//	This assignment that add a new function. The function should return true if the two time slots overlap, otherwise return false. (Take into account the starting times of the time slots and the duration of the scheduled movies.)
//

#include <iostream>
using namespace std;

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Time {
public:
	int h;
	int m;
};

class Movie {
public:
	string title;
	Genre genre;     // only one genre per movie
	int duration;    // in minutes
};

class TimeSlot {
public:
	Movie movie;     // what movie
	Time startTime;  // when it starts
};

void printMovie(Movie mv){
	string g;
	switch (mv.genre) {
		case ACTION   : g = "ACTION"; break;
		case COMEDY   : g = "COMEDY"; break;
		case DRAMA    : g = "DRAMA";  break;
		case ROMANCE  : g = "ROMANCE"; break;
		case THRILLER : g = "THRILLER"; break;
	}
	cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTime(Time time) {
	cout << time.h << ":" << time.m;
}

Time addMinutes(Time time0, int min){
	int x = time0.h; // x = hour
	int y = time0.m; // y = minute
	x += min/60;
	y += min%60;
	
	if (y > 59){
		y -= 60;
		x++;
	}
	return {x, y};
}


void printTimeSlot(TimeSlot ts){
	printMovie(ts.movie);
	cout << " [starts at ";
	printTime(ts.startTime);
	cout << ", ends by ";
	printTime(addMinutes(ts.startTime, ts.movie.duration));
	cout << "]\n";
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
	return {nextMovie, addMinutes(ts.startTime, ts.movie.duration)};
}


int minutesSinceMidnight(Time time){
	int mid;
	return mid = (time.h*60) + time.m;
}

int minutesUntil(Time earlier, Time later){
	int mid;
	mid = (later.h - earlier.h)*60;
	
	if(later.m > earlier.m){
		mid += later.m - earlier.m;
	}
	else{
		mid -= (earlier.m - later.m);
	}
	return mid;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
	if (minutesUntil(ts1.startTime, ts2.startTime) < ts1.movie.duration
		&& minutesUntil(ts2.startTime, ts1.startTime) < ts2.movie.duration){
		return true;
	}
	return false;
}

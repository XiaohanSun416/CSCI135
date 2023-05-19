//
// 	Author: Xiaohan Sun
//	Course: CSCI-136
//	Instructor: Sadab Hafiz
//	Assignment: Lab 9F
//	This assignment that write a new program particle.cpp (you may copy anything you want from 3d-space.cpp if need be).
//

#include <iostream>
using namespace std;

class Coord3D {
	public:
	double x;
	double y;
	double z;
};

class Particle
{
	public:
	double x;
	double y;
	double z;
	double vx;
	double vy;
	double vz;
};

Particle* createParticle(double x, double y, double z, double vx, double vy, double vz){
	Particle *p = new Particle;
	p->x = x;
	p->y = y;
	p->z = z;
	p->vx = vx;
	p->vy = vy;
	p->vz = vz;
	return p;
}

void setVelocity(Particle *p, double vx, double vy, double vz){
	p->vx = vx;
	p->vy = vy;
	p->vz = vz;
}

Coord3D getPosition(Particle *p){
	Coord3D pos;
	pos.x = p->x;
	pos.y = p->y;
	pos.z = p->z;
	return pos;
}

void move(Particle *p, double dt){
	p->x += (p->vx * dt);
	p->y += (p->vy * dt);
	p->z += (p->vz * dt);
}

void deleteParticle(Particle *p)
{
	delete p;
}

int main() {
	// make new particle
	Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
	double time = 0.0;
	double dt = 0.1;
	while(time < 3.0) {
		// update its velocity
		setVelocity(p, 10.0 * time, 0.3, 0.1);

		// move the particle
		move(p, dt);
		time += dt;

		// reporting its coordinates
		cout << "Time: " << time << " \t";
		cout << "Position: "
			 << getPosition(p).x << ", "
			 << getPosition(p).y << ", "
			 << getPosition(p).z << endl;
	}
	// remove the particle, deallocating its memory
	deleteParticle(p);
}

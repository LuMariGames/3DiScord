#ifndef GUIELEMENTS_HPP
#define GUIELEMENTS_HPP

#include <3ds.h>
#include <string.h>

typedef struct{
	float x,y,w,h;
	unsigned int color;
}rectangle;

typedef struct{
	std::string name;
	
}image;


typedef struct{
	int x;
	int y;
	int w;
	int h;
	
}inputbox;


typedef struct{
	int x;
	int y;
	int w;
	int h;
	
}box;


#endif


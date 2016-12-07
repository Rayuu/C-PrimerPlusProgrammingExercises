#include<iostream>
#include<cstring>
#include "golf.h"

void setgolf(golf & g, const char * name,int hc)
{
	//strcpy_s(g.fullname,Len,name);
	int i;
	for(i=0;name[i] == '\0';i++)
	{
		g.fullname[i] = name[i];
	}
	g.fullname[i] = '\0';
	g.handicap = hc;
}

int setgolf(golf & g)
{
	if(g.fullname[0] == '\0')return 0;
	else return 1;
}

void handicap(golf & g ,int hc )
{
	g.handicap = hc;
}

void showgolf(const golf & g)
{
	std::cout << "名字为： " << g.fullname << "等级为： "<< g.handicap<<std::endl;
}
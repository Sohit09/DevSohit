#include "stdafx.h"
#include "IEEE488.h"
#include"C:\Users\einvensys\Documents\Visual Studio 2015\Projects\EquipmentWork\LIB\ieee-cpp.h"


IEEE488::IEEE488()//constructor
{

}

IEEE488::~IEEE488()//destructor
{
}

void IEEE488::Initialize(int addr,int level)
{
	initialize(addr, level);
}

void IEEE488::Transmit(char* cmd, int status)
{
	transmit(cmd, status);
}

void IEEE488::Receive(char* s, unsigned int maxlen, unsigned int len, int status)
{
	receive(s, maxlen, len, status);
}

void IEEE488::Send(int addr, char* s, int status)
{
	send(addr, s, status);
}

void IEEE488::Enter(char* s, unsigned int maxlen, unsigned int len, int addr, int status)
{
	enter(s, maxlen, len, addr, status);
}

void IEEE488::Spoll(int addr, char* poll, int status)
{
	spoll(addr, poll, status);
}

void IEEE488::Ppoll(char* poll)
{
	ppoll(poll);
}

void IEEE488::Tarray(void * d, unsigned int count, bool eoi, int status)
{
	tarray(d, count, eoi, status);
}

void IEEE488::Rarray(void * d, unsigned int count, unsigned int len, int status)
{
	rarray(d, count, len, status);
}

bool IEEE488::Srq()
{
	bool res=0;
	res=srq;
	return res;
}

void IEEE488::Setport(int boardnum, unsigned int ioaddr)
{
	setport(boardnum, ioaddr);
}

void IEEE488::Boardselect(int boardnum)
{
	boardselect(boardnum);
}

void IEEE488::Dmachannel(int c)
{
	dmachannel(c);
}

void IEEE488::Settimeout(unsigned int t)
{
	settimeout(t);
}

void IEEE488::SetoutputEOS(int eos1, int eos2)
{
	setoutputEOS(eos1, eos2);
}

void IEEE488::SetinputEOS(int eos)
{
	setinputEOS(eos);
}

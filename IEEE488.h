#pragma once
#include<string>
class IEEE488
{
public:
	IEEE488();
	~IEEE488();
	void Initialize( int addr, int level);
	void Transmit(char* cmd, int status);
	void Receive(char* s, unsigned int maxlen, unsigned int len, int status);
	void Send(int addr, char* s, int status);
	void Enter(char* s, unsigned int maxlen, unsigned int len, int addr, int status);
	void Spoll(int addr,  char* poll, int status);
	void Ppoll(char* poll);
	void Tarray(void* d, unsigned int count, bool eoi, int status);
	void Rarray(void* d, unsigned int count, unsigned int len, int status);
	bool Srq();
	void Setport(int boardnum, unsigned int ioaddr);
	void Boardselect(int boardnum);
	void Dmachannel(int c);
	void Settimeout(unsigned int t);
	void SetoutputEOS(int eos1,int eos2);
	void SetinputEOS(int eos);
};


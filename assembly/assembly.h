#include"helpers.h"


#ifndef ASSEMBLY_H

#define ASSEMBLY_H

void mov(int to, int from);
	

void movv(int to,int from);

void load(int to,int from);
	

void loadr(int to,int from);
	

void store(int to,int from);


void storer(int to,int from);
	

void add(int reg1,int reg2);
	

void sub(int reg1,int reg2);
	

void mod(int reg1,int reg2);
	

void call(int address);
	

void ret();
	

void out(int reg1);


void push(int reg1);
	

void pop(int reg1);
	

void jmp(int address);
	

void jnz(int address,int reg1);
	

void holt();


void print(char* word);

#endif //ASSEMBLY_H
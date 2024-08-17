#include "assembly.h"


void mov(int to, int from){
    REG[to]=REG[from];
	REG[pc]=REG[pc]+1;
}
	

void movv(int to,int from){
    //printf("REG name = %s , address = %d\n",reg_names[to],from);
    REG[to]=from;
	REG[pc]=REG[pc]+1;
}

void load(int to,int from){
    REG[to]=char_toint(MEMORY[from]);
	REG[pc]=REG[pc]+1;
}
	

void loadr(int to,int from){
    REG[to]=char_toint(MEMORY[REG[from]]);
	REG[pc]=REG[pc]+1;
}
	

void store(int to,int from){
    strcpy(MEMORY[to],int_Tochar(REG[from]));
	REG[pc]=REG[pc]+1;
}


void storer(int to,int from){
    strcpy(MEMORY[REG[to]],int_Tochar(REG[from]));
	REG[pc]=REG[pc]+1;
}
	

void add(int reg1,int reg2){
    REG[acc]=REG[reg1]+REG[reg2];
	REG[pc]=REG[pc]+1;
}
	

void sub(int reg1,int reg2){
    REG[acc]=REG[reg1]-REG[reg2];
	REG[pc]=REG[pc]+1;
}
	

void mod(int reg1,int reg2){
    REG[acc]=REG[reg1] % REG[reg2];
	REG[pc]=REG[pc]+1;
}
	

void call(int address){
    REG[sp]=REG[sp]+1;
	strcpy(MEMORY[REG[sp]],int_Tochar(REG[pc]+1));
	REG[pc]=address;
}
	

void ret(){
    REG[pc]=char_toint(MEMORY[REG[sp]]);
	REG[sp]=REG[sp]-1;
}
	

void out(int reg1){
    //printf("%s = %d\n",reg_names[reg1],reg[reg1]);
    printf("%d\n",REG[reg1]);
	REG[pc]=REG[pc]+1;
}


void push(int reg1){
    REG[sp]=REG[sp]+1;
	strcpy(MEMORY[REG[sp]],int_Tochar(REG[reg1]));
	REG[pc]=REG[pc]+1;
}
	

void pop(int reg1){
    REG[reg1]=char_toint(MEMORY[REG[sp]]);
	REG[sp]=REG[sp]-1;
	REG[pc]=REG[pc]+1;
}
	

void jmp(int address){
    REG[pc]=address;
}
	

void jnz(int address,int reg1){
    if (REG[reg1]!=0){
        REG[pc]=address;
    }	
	else{
        REG[pc]=REG[pc]+1;

    }
}
	

void holt(){         //   --->   holt = halt  (conflict -> halt function & halt reg enum )...
    REG[halt]=1;
	REG[pc]=REG[pc]+1;
}


void print(char* word){
    printf("%s",word);
    REG[pc] = REG[pc]+1;
}
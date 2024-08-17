#ifndef CONFIG_H

#define CONFIG_H

#define MEMORY_SIZE 100	// maximum size of the memory... 
#define REG_SIZE 13

enum REGISTERS {a=0, b, c, d, e,f,sp,acc, pc, ivec, Int, timer, halt};
char REG_NAMES[REG_SIZE][10] = {"a","b","c","d","e","f","sp","acc","pc","ivec","Int","timer","halt"};

int REG[REG_SIZE];
char *MEMORY[MEMORY_SIZE];

#endif //CONFIG_H
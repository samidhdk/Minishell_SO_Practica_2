/*
 * parser.h
 *
 *  Created on: 16 abr. 2020
 *      Author: Okachu
 */


typedef struct {
	char * filename;
	int argc;
	char ** argv;
} tcommand;

typedef struct {
	int ncommands;
	tcommand * commands;
	char * redirect_input;
	char * redirect_output;
	char * redirect_error;
	int background;
} tline;

extern tline * tokenize(char *str);


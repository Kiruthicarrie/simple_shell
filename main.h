#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

/** Signal Handler */
void exception_handler(int sig_num);

/** String helpers */
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);

/** Processing functions */
char *read_line_prompt(void);
int _dirch(char **cmm, char **env);

/** executor */
int _exec(char **args, char **env);
char *findPath(char *exe, char **env);

/** Environment functions */
char *getVarEnv(char *var, char **env);
char *findPattern(char *var, char *sub);

#endif

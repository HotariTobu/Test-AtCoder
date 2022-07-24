#pragma once

#include <stdio.h>

static FILE* file;

extern void initgetchar() {
	fopen_s(&file, "in.txt", "r");
}

extern void closegetchar() {
	fclose(file);
}

extern int getchar() {
	return getc(file);
}
#pragma once
#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<time.h>
#include<stdlib.h>

#define S '#'
#define Body '='
#define Head '>'
#define NUM 103

//函数指针类型
typedef void (*callback_t)(double);


//version1版本
void process();
//version2版本
void process_flush(double rate);

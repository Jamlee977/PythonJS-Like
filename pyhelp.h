#pragma once

#ifndef PYHELP_H
#define PYHELP_H

#include "pyhelp.cpp"
#include <iostream>

using std::string;


class range;

class str;

class integer;

class real;

class toChar;



void type(string);

void type(char);

void type(int);

void type(float);

void type(double);

void type(long double);

void type(long int);

void type(long long int);

void type(unsigned int);

template <typename T>
void type(T []);




bool isPrime(int);


void prime(int);

void prime(int, int);


char upper(char &);

void upper(char []);


void upper(string &);

char lower(char &);

void lower(char []);

void lower(string &);



void print();

template<typename T, typename ...TAIL >
void print(const T &, TAIL...);

template<typename T, size_t n>
void print(T const(&)[n]);


template <typename T>
void *print(T *, int);

void print(const char *[], int);


template<typename Y>
void input(Y);


template<typename Y>
void input(string, Y &);

void *input(int *, int);

void *input(float *, int);

void *input(double *, int);


int min (int [], int);

int min (float [], int);

int min (double [], int);

int max (int [], int);

int max (float [], int);

int max (double [], int);


int len(char []);

int len(string);

int len(const char *[]);

void copy(char [], char []);

void copyBack(char [], char []);


void copy(string, string);

void copyBack(string, string);

void copy(int [], int [], int);

void copy(float [], float [], int);

void copy(double [], double [], int);

void reverse(char []);

void reverse(int [], int);

void reverse(float [], int);

void reverse(double [], int);

template <typename T>
void id(T);


void enumerate(char []);


void enumerate(char [], int);


void enumerate(const char *[], int);


void enumerate(const char *[], int , int);


template <typename T>
void enumerate(T [], int);


template <typename T>
void enumerate(T [], int, int);


void sort(int [], int);

void sort(float [], int);

void sort(double [], int);
#endif


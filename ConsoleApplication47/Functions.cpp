#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include "Header.h"
void Task1()
{
	short int month = 0;
	NOTE1 block[9];
	for (short int i = 0; i < 9; i++)
	{
		block[i].name[i] = 95 + rand() % 25;
		block[i].TelNumber = 87000000000 + rand() % 9999999999;
		block[i].DateOfBirth.day = 1 + rand() % 31;
		block[i].DateOfBirth.month = 1 + rand() % 12;
		block[i].DateOfBirth.year = 1980 + rand() % 18;
	}

	for (short int i = 0; i < 9; i++)
	{
		printf("--- --- --- BLOCK %d --- --- ---\n", i);
		printf("Name - %s\n", block[i].name);
		printf("Tellephone number - %lld\n", block[i].TelNumber);
		printf("Date of birth - %hu.%hu.%hu\n", block[i].DateOfBirth.day, block[i].DateOfBirth.month, block[i].DateOfBirth.year);
		printf("--- --- --- --- --- --- ---\n\n");
	}

	for (short int i = 0; i < 9; i++)
	{
		printf("Enter month: ");
		scanf("%hu", &month);
		if (month == block[i].DateOfBirth.month)
		{
			printf("Month, which equally with entered month: \n");
			printf("--- --- --- BLOCK %d --- --- ---\n", i);
			printf("Name - %s\n", block[i].name);
			printf("Tellephone number - %lld\n", block[i].TelNumber);
			printf("Date of birth - %hu.%hu.%hu\n", block[i].DateOfBirth.day, block[i].DateOfBirth.month, block[i].DateOfBirth.year);
			printf("--- --- --- --- --- --- ---\n\n");
		}
		else if (month != block[i].DateOfBirth.month)
			printf("Nobody hasn't this month.\n");
	}
}
void Task2()
{
	tovar *spisok = NULL;
	spisok = (tovar*)malloc(sizeof(tovar));

	int sum = 0, sr = 0;
	for (short int i = 0; i < 10; i++)
	{
		spisok->name[i] = 95 + rand() % 25;
		spisok->count[i] = 1 + rand() % 100;
		spisok->price[i] = 5 + rand() % 200;
		(spisok + i)->DateOfComing.day = 1 + rand() % 31;
		(spisok + i)->DateOfComing.month = 1 + rand() % 12;
		(spisok + i)->DateOfComing.year = 1999 + rand() % 19;
	}

	for (short int i = 0; i < 10; i++)
	{
		sum += spisok[i].price[i];
		sr = sum / 1000000;

		printf("--- --- --- Product #%d --- --- ---\n", i);
		printf("Name: %s\n", spisok->name);
		printf("Count in storage: %d\n", spisok->count[i]);
		printf("Price: %d$\n", spisok->price[i]);
		printf("Date of coming to storage: %hu.%hu.%hu\n", (spisok + i)->DateOfComing.day, (spisok + i)->DateOfComing.month, (spisok + i)->DateOfComing.year);
		printf("--- --- --- --- --- --- ---\n\n");
	}
	printf("Srednee arifm of prices = %d$\n", sr);

	for (short int i = 0; i < 10; i++)
	{
		if (abs(spisok->DateOfComing.month) - 10 == 0)
		{
			printf("--- --- --- Products, which was came 10 month ago: --- --- ---\n");
			printf("--- --- --- Product #%d --- --- ---\n", i);
			printf("Name: %s\n", spisok->name);
			printf("Count in storage: %d\n", spisok->count[i]);
			printf("Price: %d$\n", spisok->price[i]);
			printf("Date of coming to storage: %hu.%hu.%hu\n", spisok->DateOfComing.day, spisok->DateOfComing.month, spisok->DateOfComing.year);
			printf("--- --- --- --- --- --- ---\n\n");
		}
		else
			printf("This market don't have products, which was came 10 month ago.\n");
	}
}
void Task3()
{
	MARSHRUT *st = NULL;
	st = (MARSHRUT*)malloc(sizeof(MARSHRUT));

	int max = 0;
	for (short int i = 0; i < 10; i++)
	{
		st->numMars[i] = 1 + rand() % 500;
		st->Beginning[i] = 95 + rand() % 25;
		st->End[i] = 95 + rand() % 25;
		st->length[i] = 100 + rand() % 1000;
	}

	for (short int i = 0; i < 10; i++)
	{
		printf("--- --- --- Marshrut #%d --- --- --- \n", i);
		printf("Number of route: #%d\n", st->numMars[i]);
		printf("Beginning of route: %s\n", st->Beginning);
		printf("Ending of route: %s\n", st->End);
		printf("Length of route: %dkm\n", st->length[i]);
		printf("--- --- --- --- --- --- ---\n\n");
	}

	for (short int i = 0; i < 10; i++)
		if (st->length[i] < st->length[i + 1])
			max = st->length[i + 1];
	printf("Max length = %d\n", max);
}
void Task4()
{
	ABON *st = NULL;
	st = (ABON*)malloc(sizeof(ABON));

	for (short int i = 0; i < 12; i++)
	{
		st->name.fname = 95 + rand() % 25;
		st->name.sname[i] = 95 + rand() % 25;
		st->name.lname = 95 + rand() % 25;
		st->TelNumber = 87456172813 + rand() % 9999999999;
		(st + i)->connect.day = 1 + rand() % 31;
		(st + i)->connect.month = 1 + rand() % 12;
		(st + i)->connect.year = 1999 + rand() % 19;
		st->price[i] = 1 + rand() % 6;
		st->balance[i] = 1 + rand() % 30;
	}

	for (short int i = 0; i < 12; i++)
	{
		printf("--- --- --- Abonent #%d --- --- ---\n", i);
		printf("Name: %s %c. %c.\n", st->name.sname, st->name.fname, st->name.lname);
		printf("Tellephone number: %lld\n", st->TelNumber);
		printf("Date of connection: %hu.%hu.%hu\n", (st + i)->connect.day, (st + i)->connect.month, (st + i)->connect.year);
		printf("Price of connection: %d$\n", st->price[i]);
		printf("Balance: %d$\n", st->balance[i]);
		printf("--- --- --- --- --- --- ---\n\n");
	}

	for (short int i = 0; i < 12; i++)
	{
		if (2018 - (st + i)->connect.year >= 10)
		{
			printf("People, which was connected 10 or more years ago, add 1$\n");
			printf("--- --- --- Abonent #%d --- --- ---\n", i);
			printf("Name: %s %c. %c.\n", st->name.sname, st->name.fname, st->name.lname);
			printf("Tellephone number: %lld\n", st->TelNumber);
			printf("Date of connection: %hu.%hu.%hu\n", (st + i)->connect.day, (st + i)->connect.month, (st + i)->connect.year);
			printf("Price of connection: %d$\n", st->price[i]);
			printf("Balance: %d$\n", st->balance[i] + 1);
			printf("--- --- --- --- --- --- ---\n\n");
		}
	}
}
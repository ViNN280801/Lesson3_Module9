#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include "Header.h"
void main()
{
	srand(time(NULL));
	short int w;
	printf("Enter number of task: ");
	scanf("%hu", &w);
	switch (w)
	{
	case 1:
	{
		//1.	������� ��������� � ������ NOTE1, ���������� ���� :
		//  a.Name � ������� � ��������
		//	b.TELE � ����� ��������
		//	c.DATE � ���� ��������(���, �����, �����)

		//�������� ���������, ����������� :
		//�	���� � ���������� ������ � ������ BLOCK, ��������� �� 9 ��������� ���� NOTE1, ������ ������ ���� ����������� �� ���������;
		//�	����� �� ����� ���������� � �����, ��� ��� �������� ���������� �� �����, �������� �������� ������� � ����������; ���� ������ �������� ��� � ������ ���������.
		Task1();
	}
	break;
	case 2:
	{
		//2.	������� ��������� � ������ TOVAR, ���������� ���� :
		//a.�������� ������;
		//b.���������� ������ ������;
		//c.��������� ������;
		//d.���� ����������� ������ � ���� ���������(���, �����, ����).

		//	�������� ������� :
		//�	�������� ������� SPISOK �� ����� ��� �� 10 �������(��������) ������ � �������(���� ������ � ����������);
		//�	���������� ������� ��������� ������;
		//�	������������ ������� �� ����������� ��������� �������;
		//�	������ �������� � �������, ����������� ����� 10 ������� �����.

		//��� ����������� ������ ��� ������� ������ ������������ � �������� �� ����������.
		//������������� ���������� ���������� �� �����������.������� ������, ������� ������������� ������ ���� �������.
		Task2();
	}
	break;
	case 3:
	{
		//3.	������� ��������� � ������ MARSHRUT, ���������� ���� :
		//a.����� ��������;
		//b.��������� ����� ��������;
		//c.�������� ����� ��������;
		//d.����� ��������.
		//	�������� ������� :
		//�	�������� ������� �� ����� ��� �� 10 �������(��������) �������� � ���������(���� ������ � ����������);
		//�	����������� �������� � ������������ ������;
		//�	������������ ������� �� ����������� ������� ���������;
		//�	������ �������� � ���������, ������� ���������� ��� ������������� � ������, �������� �������� �������� � ����������.
		//��� ����������� ������ ��� ������� ������ ������������ � �������� �� ����������.
		//������������� ���������� ���������� �� �����������.������� ������, ������� ������������� ������ ���� �������.
		Task3();
	}
	break;
	case 4:
	{
		//4.	������� ��������� � ������ ABON, ���������� ���� :
		//a.������� � �������� ��������;
		//b.����� ��������;
		//c.���� ����������� �������� � ���� ���������(���, �����, ����);
		//d.����������� ����� ������;
		//e.����� �� ����� ��������
		//	�������� ������� :
		//�	�������� ������� �� ����� ��� �� 12 �������(��������) ������ �� ���������(���� ������ � ����������);
		//�	������������ ������� �� ��������(� ������ ��������� ��� ��������� � ����������� ���������;
		//�	�������� 20 ��.�� ����� ���������, ������� ���������� ����� 10 ��� �����;
		//�	������ �������� �� ���������, � ������� ����� �� ����� ������������� ����� ������ ����������;
		//�	������ �������� �� ��������, ����� �������� �������� �������� � ����������
		//��� ����������� ������ ��� ������� ������ ������������ � �������� �� ����������.
		//������������� ���������� ���������� �� �����������.������� ������, ������� ������������� ������ ���� �������.
		Task4();
	}
	break;
	}
}
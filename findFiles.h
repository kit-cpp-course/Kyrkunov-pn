#pragma once

#include "Immage.h"

/*
 * ���� ��� ����������� � ���������� � ���������������
 * ���������� � ���, ����� ��������� ������������ ����
 * @param path ���� � ����������
 * @return files ������ � ��������� ���� Immage 
*/
std::vector<Immage*> list_dir(char *path);
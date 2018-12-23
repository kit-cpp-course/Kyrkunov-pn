#pragma once
#include <iostream>
#include <vector>

/* Singleton ����� */
class CmdArgs
{
private:
	/* ����� �������� ��������� */
	static CmdArgs* instance;

	/* private ����������� ��� �������������� �������� ���������� ����������� */
	CmdArgs();

public:
	/* ��������� �����, ��� �������� ������������� ���������� ������ */
	static CmdArgs* getInstance();
	/* ������ ���������� ��������� ������, ����� ���������� ������������ ����� �����
	 * @param1 ���-�� ���������� ��������� ������
	 * @param2 ��������� ��������� ������
	 * @param3 ������ �� ����������, � ������� �������� ���� � ����������
	 * @param3 ������ �� ����������, � ������� �������� �������� ����
	 * @return 1, ���� ��� ��������� ����� � 0,���� ���
	 */
	int argParser(int argc, char* argv[], std::string &path, std::string &color);

};




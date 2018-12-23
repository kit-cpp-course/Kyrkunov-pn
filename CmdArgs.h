#pragma once
#include <iostream>
#include <vector>

/* Singleton класс */
class CmdArgs
{
private:
	/* здесь хранитс€ экземпл€р */
	static CmdArgs* instance;

	/* private конструктор дл€ предотвращени€ создани€ нескольких экземпл€ров */
	CmdArgs();

public:
	/* —татичный метод, дл€ создани€ единственного экземпл€ра класса */
	static CmdArgs* getInstance();
	/* ѕарсер аргументов командной строки, также определ€ет корректность ввода цвета
	 * @param1 кол-во параметров командной строки
	 * @param2 параметры командной строки
	 * @param3 ссылка на переменную, в которой хранитс€ путь к директории
	 * @param3 ссылка на переменную, в которой хранитс€ введЄнный цвет
	 * @return 1, если все параметры верны и 0,если нет
	 */
	int argParser(int argc, char* argv[], std::string &path, std::string &color);

};




#pragma once

#include "Immage.h"

/*
 * »щет все изображени€ в директории и систематизирует
 * информацию о них, также провер€ет корректность пути
 * @param path путь к директории
 * @return files вектор с объектами типа Immage 
*/
std::vector<Immage*> list_dir(char *path);
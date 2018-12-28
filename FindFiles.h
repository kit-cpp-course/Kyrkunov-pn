#pragma once
#include <vector>
#include <stdio.h>
#include "Immage.h"

/* Ð°Ð±ÑÑÑÐ°ÐºÑÐ½ÑÐ¹ ÐºÐ»Ð°ÑÑ - Ð¾Ð±Ð¾Ð±ÑÐµÐ½Ð¸Ðµ Ð¿Ð¾Ð¸ÑÐºÐ° ÑÐ°Ð¹Ð»Ð¾Ð²*/
class FindFiles
{
public:
	/* Ð¾Ð±Ð¾Ð±ÑÑÐ½Ð½ÑÐ¹ Ð¼ÐµÑÐ¾Ð´ Ð¿Ð¾Ð¸ÑÐºÐ° ÑÐ°Ð¹Ð»Ð¾Ð² Ð² Ð´Ð¸ÑÐµÐºÑÐ¾ÑÐ¸Ð¸*/
	virtual std::vector<Immage*> search(char *path) const = 0;
};


#pragma once
#include "FindFiles.h"


class FindImmages :
	public FindFiles
{
public:
	/* Ð¿Ð¾Ð¸ÑÐº Ð¸Ð·Ð¾Ð±ÑÐ°Ð¶ÐµÐ½Ð¸Ð¹ Ð² Ð´Ð¸ÑÐµÐºÑÐ¾ÑÐ¸Ð¸
	 * @param Ð¿ÑÑÑ Ðº Ð´Ð¸ÑÐµÐºÑÐ¾ÑÐ¸Ð¸
	 * @return Ð²ÐµÐºÑÐ¾Ñ Ð¾Ð±ÑÐµÐºÑÐ¾Ð², Ð¾Ð¿Ð¸ÑÑÐ²Ð°ÑÑÐ¸Ñ Ð¸Ð·Ð¾Ð±ÑÐ°Ð¶ÐµÐ½Ð¸Ðµ
	 */
	std::vector<Immage*> search(char *path) const;
};


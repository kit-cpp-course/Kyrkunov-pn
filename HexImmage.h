#pragma once
#include <map>
class HexImmage
{
private:
	std::map<std::string, int> hexColorCount;
	/*

	* ÐÐ°Ð·Ð²Ð°Ð½Ð¸Ðµ Ð¸Ð·Ð¾Ð±ÑÐ°Ð¶ÐµÐ½Ð¸Ñ
	*/
	std::string im_name;
	/*
	* ÐÑÑÑ Ðº Ð¸Ð·Ð¾Ð±ÑÐ°Ð¶ÐµÐ½Ð¸Ñ
	*/
	std::string im_path;
	/*
	* ÐÐ¾Ð¼Ð¸Ð½Ð¸ÑÑÑÑÐ¸Ð¹ ÑÐ²ÐµÑ Ð² Ð¸Ð·Ð¾Ð±ÑÐ°Ð¶ÐµÐ½Ð¸Ð¸
	*/
	std::string dominateColor;
	
public:
	HexImmage();
};


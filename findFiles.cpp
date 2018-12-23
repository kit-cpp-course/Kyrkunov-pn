#include "findFiles.h"

std::vector<Immage*> list_dir(char *path)
{
	std::vector<Immage*> files;
	struct dirent *entry;
	DIR *dir;
	dir = opendir(path);
	try 
	{
		if (dir == NULL)
		{
			throw -1;
		}
	}
	catch (int i)
	{
		throw i;
	}
	while ((entry = readdir(dir)) != NULL)
	{
		Immage* immage = new Immage(entry->d_name, (std::string)path + "/" + entry->d_name);
		files.push_back(immage);	
	}
	closedir(dir);
	return files;
}
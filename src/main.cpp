/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduchi <vduchi@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:32:24 by vduchi            #+#    #+#             */
/*   Updated: 2024/03/15 16:49:58 by vduchi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WebServer.hpp"

static int outError(int idx)
{
	std::cout << RED;
	idx == 1 ? std::cout << "Too many arguments!" << std::endl : std::cout << "";
	idx == 2 ? std::cout << "File is not a configuration file!" << std::endl : std::cout << "";
	idx == 3 ? std::cout << "File error!" << std::endl : std::cout << "";
	std::cout << CYAN;
	std::cout << "Usage: ./webserv [config file]" << RESET << std::endl;
	return 1;
}

static int checkFile(char *arg)
{
	std::string name(arg);
	if (name.compare(name.length() - 4, 4, ".cnf")
		|| name.find(".cnf", name.find(".cnf") + 4) != std::string::npos)
		return outError(2);
	std::ifstream in(arg);
	if (!in.good())
		return outError(3);
	return 0;
}

int main(int argc, char **argv)
{
	switch (argc) 
	{
		case 1:
			return outError(0);
		case 2:
			{
				if (checkFile(argv[1]))
					return 1;
				break;
			}
		default:
			return outError(1);
	}
}

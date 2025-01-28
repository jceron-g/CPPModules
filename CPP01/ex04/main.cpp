/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jceron-g <jceron-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:20:57 by jceron-g          #+#    #+#             */
/*   Updated: 2025/01/28 11:32:11 by jceron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

std::string replaceOcurrence(std::string line, std::string s1, std::string s2)
{
	size_t	position;
	size_t	found;

	std::string result;
	position = 0;
	while ((found = line.find(s1, position)) != std::string::npos)
	{
		result.append(line, position, found - position);
		result.append(s2);
		position = found + s1.length();
	}
	result.append(line, position, line.length() - position);
	return (result);
}
int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: You must provide 3 arguments" << std::endl;
		return (0);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty())
	{
		std::cout << "Error: s1 can not be empty" << std::endl;
		return (1);
	}
	std::ifstream inputFile(filename.c_str());
	if (!inputFile)
	{
		std::cout << "Error: Unable to open file " << filename << " for reading.\n";
		return (1);
	}
	std::string outputFilename = filename + ".replace";
	std::ofstream outputFile(outputFilename.c_str());
	if (!outputFile)
	{
		std::cout << "Error: Unable to open file " << outputFilename << " for writing.\n";
		return (1);
	}
	std::string line;
	while (std::getline(inputFile, line))
		outputFile << replaceOcurrence(line, s1, s2) << "\n";
	inputFile.close();
	outputFile.close();
	std::cout << "Replacement completed. Output written to " << outputFilename << "\n";
	return (0);
}

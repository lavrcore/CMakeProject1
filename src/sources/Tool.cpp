#include "Tool.h"


void Tools::showMenu() {
	std::cout << "1 - �������� ������ ���������� ����� ��������" << std::endl;
	std::cout << "2 - �������� ������ ���������� ����� �������� ����������� ���������" << std::endl;
	std::cout << "3 - �����" << std::endl << std::endl;
}


void Tools::showSchedule(std::vector <std::vector <std::map <std::string, std::string>>> schedule) {
	system("chcp 65001");
	for (int i = 0; i < schedule.size(); i++) {
		for (int j = 0; j < schedule[i].size(); j++) {
			std::cout << schedule[i][j]["Race Title"] << " ";
			std::cout << schedule[i][j]["Race Number"] << " ";
			std::cout << schedule[i][j]["Departure Station Title"] << " ";
			std::cout << schedule[i][j]["Departure Station Code"] << " ";
			std::cout << schedule[i][j]["Arrival Station Title"] << " ";
			std::cout << schedule[i][j]["Arrival Station Code"] << " ";
			std::cout << schedule[i][j]["Transport Type"] << " ";
			std::cout << schedule[i][j]["Departure Date"] << " ";
			std::cout << schedule[i][j]["Arrival Date"] << " ";
			std::cout << schedule[i][j]["Transport Company Code"] << " ";
			std::cout << schedule[i][j]["Price"] << std::endl << std::endl;
		}
	}
	system("chcp 1251");
}


std::string Tools::askAboutDate() {
	std::string date;
	std::cout << "�� ������ �������� ���� �������? [y/n]: ";
	std::string answer; std::cin >> answer;
	if (answer == "y") {
		std::cout << "������� ���� �������: ";
		std::cin >> date;
		return date;
	}
	return "null";
}
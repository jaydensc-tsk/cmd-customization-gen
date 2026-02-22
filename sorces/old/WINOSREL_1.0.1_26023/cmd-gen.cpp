// cmd-gen.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
#include "info.h"

int main()
{
    char title[5000] = "cmd";
    char startup_print_string[5000] = "cmd" ;
	char startup_exec_command[5000] = "ver";
	char color[5000] = "0F";
	char prompt[5000] = "$P$G";
    while (true)
    {
        char options[500];
        

    menu:
        std::cout << "choise a option\n";
        std::cout << "1. gen script\n";
        std::cout << "2. about\n";
        std::cout << "3. quit\n";
        std::cout << "input[1,2,3]: ";
        std::cin >> options;
        if (options[0] == '1') // Check the first character of the input
        {
            char options2[500];
        genmenu:
            std::cout << "1. title\n";
            std::cout << "2. color\n";
            std::cout << "3. prompt\n";
            std::cout << "4. startup print string\n";
            std::cout << "5. stautup execute command\n";
			std::cout << "6. generate\n";
            std::cout << "7. back to menu\n";
            std::cout << "0. exit\n";
            std::cout << "choise a option\n";
            std::cout << "input[0,1,2,3,4,5,6,7]: ";
            std::cin >> options2;
            if (options2[0] == '1')
            {
                std::cout << "input title: ";
                std::cin >> title;
				std::cout << "your title is : " << title << "\n";
                goto genmenu; // Jump back to the genmenu label to display the genmenu again
            }
            else if (options2[0] == '2')
            {
				std::cout << "color code format : [background color][text color]\n";
                std::cout << "supported color code\n";
				std::cout << "0 = Black\n";
				std::cout << "1 = Blue\n";
				std::cout << "2 = Green\n";
				std::cout << "3 = Aqua\n";
				std::cout << "4 = Red\n";
				std::cout << "5 = Purple\n";
				std::cout << "6 = Yellow\n";
				std::cout << "7 = White\n";
				std::cout << "8 = Gray\n";
				std::cout << "9 = Light Blue\n";
				std::cout << "A = Light Green\n";
				std::cout << "B = Light Aqua\n";
				std::cout << "C = Light Red\n";
				std::cout << "D = Light Purple\n";
				std::cout << "E = Light Yellow\n";
				std::cout << "F = Bright White\n";
                std::cout << "input color code: ";
				std::cin >> color;
				std::cout << "your color code is : " << color << "\n";
                goto genmenu;
            }
            else if (options2[0] == '3')
            {
				std::cout << "supported placeholder(part)\n";
                std::cout << "for more placeholder please refer to https://learn.microsoft.com/zh-tw/windows-server/administration/windows-commands/prompt \n";
                std::cout << "$$    =    $(dollar sign)\n";
				std::cout << "$g    =    >\n";
				std::cout << "$l    =    <\n";
				std::cout << "$n    =    (Current drive)\n";
				std::cout << "$p    =    (Current drive and path)\n";
				std::cout << "$v    =    (Windows version number)\n";
                std::cout << "$s    =    (space)";
				std::cout << "input prompt: ";
				std::cin >> prompt;
                goto genmenu;
            }
            else if (options2[0] == '4')
            {
				std::cout << "input startup print string, use [^^!] to disp. exec mark,use [^(^)] to disp [()]: ";
				std::cin >> startup_print_string;
                goto genmenu;
            }
            else if (options2[0] == '5')
            {
				std::cout << "input startup execute command: ";
				std::cin >> startup_exec_command;
                goto genmenu;
            }
			else if (options2[0] == '6')
			{
				char options3[50];
                std::cout << usage "\n";
                std::cout << "@echo off\n";
				std::cout << "title " << title << "\n";
				std::cout << startup_exec_command << "\n";
				std::cout << "echo (" << startup_print_string << ")\n";
				std::cout << "cmd /k prompt" << prompt << " && " << "color" << color << "\n";
				std::cout << "1. back to main menu,2. exit[1,2]:";
				std::cin >> options3;
				if (options3[0] == '1')
				{
					goto menu; // Jump back to the menu label to display the menu again
				}
				else if (options3[0] == '2')
				{
					return 0; // Exit the program
				}
				else
				{
					std::cerr << "Invalid option. Please try again.\n";
					goto genmenu; // Jump back to the genmenu label to display the genmenu again
				}
			}
            else if (options2[0] == '7')
            {
                goto menu; // Jump back to the menu label to display the menu again
            }
            else if (options2[0] == '0')
            {
                break; // Exit the loop to quit the program
            }
            else
			{
				std::cerr << "Invalid option. Please try again.\n";
				goto genmenu; // Jump back to the genmenu label to display the genmenu again
			}
        }
        else if (options[0] == '2')
        {
            std::cout << project_name "(" init_executable_name ")\n";
            std::cout << "version :" version ",update date :" update "[build :" build "]\n";
            std::cout << desc "\n";
            std::cout << "make by :" author "\n";
            std::cout << "license :" license "\n";
            goto menu; // Jump back to the menu label to display the menu again
        }
        else if (options[0] == '3')
        {
            break; // Exit the loop to quit the program
        }
        else
        {
            std::cerr << "Invalid option. Please try again.\n";
        }
    }

    return 0;
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <vector>

void printText(std::vector<std::vector<char>> text, int cursor[]){
    std::cout << "\n";
    std::cout << cursor[0] << cursor[1];
    std::cout << "\n";
    for(int i=0; i<=cursor[0]; i++){
        for(int j=0; j<=text[i].size(); j++){
            std::cout << text[i][j];
        }
        std::cout << "\n";
    }
}

int main() {
    std::vector<std::vector<char>> text(1, std::vector<char>());
    int cursor[] = {0,0};

    while(true){
        char c = _getch();

        if(c == 'q'){
            break;
        }

        if(c == 13){
            text.push_back(std::vector<char>());
            cursor[0]++;
            cursor[1] = 0;
            continue;
        }

        text[cursor[0]].push_back(c);
        cursor[1]++;

        printText(text, cursor);      

    }
    return 0;
}


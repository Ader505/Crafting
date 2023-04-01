#include <iostream>
#include <conio.h>
// Zadanko: craftingi i craftowanie, wybor co craftujesz, tworzenie swoich craftingow (pliki). crafting(recipies), dodaj przedmioty, eq, wyjscie
// 13 - enter, 27 - esc,224-72 up-arrow, 224-80 down-arrow

int main() {
    const int N_OPTIONS = 4;
    int cursor = 0;
    bool running = true;
    std::string options[N_OPTIONS] = {"Crafting", "Dodaj przedmioty", "Ekwipunek", "Wyjscie"};
    while (running) {
        system( "CLS");
        for (int i = 0; i < N_OPTIONS; i++) {
            if (i == cursor) {
                std::cout << " > " << options[i] << " <\n";
            } else {
                std::cout << "   " << options[i] << "\n";
            }
        }
        int key = getch();
        switch (key){
            case 13:
                std::cout << "Currently you have: " << options[cursor] << " selected.\n";
                break;
            case 8:
                running = false;
                break;
            case 224:
                int arrow = getch();
                if (arrow == 72) {
                    cursor--;
                    if (cursor < 0){
                        cursor += N_OPTIONS;
                    }
                }
                if (arrow == 80) {
                    cursor++;
                    if (cursor > N_OPTIONS - 1) {
                        cursor -= N_OPTIONS;
                    }
                }
                break;
        }
    }
    return 0;
}

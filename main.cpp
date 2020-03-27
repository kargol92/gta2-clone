// main.cpp
#include <allegro.h>
#include <math.h>
#include <string>
using namespace std;
#include "classes.h"
#include "global_variables.h"
#include "map.h"
#include "declarations_of_functions.h"
#include "init_&_de_init.h"
#include "drawing_position.h"
#include "draw_map.h"
#include "check_key.h"
#include "calculate_and_display.h"
#include "main_menu.h"
#include "play_menu.h"
#include "game.h"

int main(int argc, char *argv[])
{
    init();
	main_menu();
	de_init();
	return 0;
}
END_OF_MAIN();

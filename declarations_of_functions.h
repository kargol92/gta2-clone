// declarations_of_functions.h

void init();
void de_init();
void main_menu();
void play_menu(SAMPLE * &menu_music);
void game();
void drawing_position_forward();
void drawing_position_back();
void check_key_man(BITMAP * & buffer);
void check_key_car(BITMAP * & buffer);
void draw_map(BITMAP * & bg, BITMAP * & ventilator, BITMAP * & road1, BITMAP * & road2, BITMAP * & road3, BITMAP * & road4, BITMAP * & pavement);
void display_coords_and_stuff(BITMAP * & buffer, BITMAP * & gangs, BITMAP * & lifes);
void increment_meter() { meter++; }
END_OF_FUNCTION(increment_meter);
LOCK_VARIABLE(meter);
LOCK_FUNCTION(increment_meter);

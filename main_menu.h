// main_menu.h
void main_menu()
{
    BITMAP *menu_play = load_bmp("graphics/menu/main_play.bmp",default_palette);
	BITMAP *menu_options = load_bmp("graphics/menu/main_options.bmp",default_palette);
	BITMAP *menu_quit = load_bmp("graphics/menu/main_quit.bmp",default_palette);
	SAMPLE *menu_music = load_sample("sound/E-Z Rollers - Short Change.wav");
	play_sample(menu_music, 255,127,1000,1);
	char choice = play;
	bool running = true;
	while(running)
    {
		if (choice == play)
        {
            blit( menu_play, screen, 0, 0, 0, 0, menu_play->w, menu_play->h);
            if( key[KEY_ENTER] ) play_menu(menu_music);
        }
        else if (choice == options)
        {
            blit( menu_options, screen, 0, 0, 0, 0, menu_options->w, menu_options->h);
        }
        else if (choice == quit)
        {
            blit( menu_quit, screen, 0, 0, 0, 0, menu_quit->w, menu_quit->h);
            if( key[KEY_ENTER] ) running = false;
        }
        rest (150);
        if	   (key[KEY_UP])   { choice--; if (choice < 1) choice = 3; }
        else if(key[KEY_DOWN]) { choice++; if (choice > 3) choice = 1; }
        else if(key[KEY_ESC])  { running = false; }
    }
	stop_sample(menu_music);
    destroy_sample(menu_music);
    destroy_bitmap(menu_play);
	destroy_bitmap(menu_options);
	destroy_bitmap(menu_quit);
}

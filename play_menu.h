// play_menu.h
void play_menu(SAMPLE * &menu_music)
{
    BITMAP *play_choose_1 = load_bmp("graphics/menu/play_choose_1.bmp",default_palette);
    BITMAP *play_choose_2 = load_bmp("graphics/menu/play_choose_2.bmp",default_palette);
    BITMAP *play_choose_3 = load_bmp("graphics/menu/play_choose_3.bmp",default_palette);
    BITMAP *play_view = load_bmp("graphics/menu/play_view.bmp",default_palette);
    BITMAP *play_start = load_bmp("graphics/menu/play_start.bmp",default_palette);
	char choice = start;
	bool running = true;
	while( running )
    {
		if (choice == choose)
        {
			if (player.car_choose == taxi) blit( play_choose_1, screen, 0, 0, 0, 0, play_choose_1->w, play_choose_1->h);
            if (player.car_choose == cop) blit( play_choose_2, screen, 0, 0, 0, 0, play_choose_2->w, play_choose_2->h);
            if (player.car_choose == sports) blit( play_choose_3, screen, 0, 0, 0, 0, play_choose_3->w, play_choose_3->h);
        }
        else if (choice == view) blit( play_view, screen, 0, 0, 0, 0, play_view->w, play_view->h);
        else if (choice == start)
        {
            blit( play_start, screen, 0, 0, 0, 0, play_start->w, play_start->h);
            if( key[KEY_ENTER] ) {stop_sample(menu_music); game(); play_sample(menu_music, 255,127,1000,1);}
        }
        rest (150);
	    if	   ( key[KEY_UP] )    {choice--; if (choice < 1) choice = 3; }
        else if( key[KEY_DOWN] )  {choice++; if (choice > 3) choice = 1; }
        else if( key[KEY_LEFT] )  {player.car_choose--; if (player.car_choose < 1) player.car_choose = 3; }
        else if( key[KEY_RIGHT] ) {player.car_choose++; if (player.car_choose > 3) player.car_choose = 1; }
        else if( key[KEY_ESC] )   running = false;
    }
    destroy_bitmap(play_choose_1);
    destroy_bitmap(play_choose_2);
    destroy_bitmap(play_choose_3);
	destroy_bitmap(play_view);
	destroy_bitmap(play_start);
}

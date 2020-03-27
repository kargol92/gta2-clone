// options_menu.h  - not ready!!!!!!!!!!
int options()
{
    BITMAP *menu1 = load_bmp("bitmaps/menu1.bmp",default_palette);
	BITMAP *menu2 = load_bmp("bitmaps/menu2.bmp",default_palette);
	BITMAP *menu3 = load_bmp("bitmaps/menu3.bmp",default_palette);

	char choice = 3;
	bool running = true;
	while( running )
    {
		if (choice == play)
        {
			blit( menu1, screen, 0, 0, 0, 0, menu1->w, menu1->h);
            if( key[KEY_ENTER] ) running = false;
        }
        else if (choice == options) blit( menu2, screen, 0, 0, 0, 0, menu2->w, menu2->h);
        else if (choice == quit)
        {
            blit( menu3, screen, 0, 0, 0, 0, menu3->w, menu3->h);
            if( key[KEY_ENTER] ) running = false;
        }
	    if( key[KEY_UP] )
        {
            choice--;
            if (choice < 1) choice = 3;
        }
	    else if( key[KEY_DOWN] )
        {
            choice++;
            if (choice > 3) choice = 1;
        }
        rest (150);
    }
    destroy_bitmap(menu1);
	destroy_bitmap(menu2);
	destroy_bitmap(menu3);
	return choice;
}

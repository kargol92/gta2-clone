// game.h
void game()
{
    BITMAP *buffer = create_bitmap(screen_w,screen_h);
	BITMAP *bg = create_bitmap(screen_w,screen_h);
	BITMAP *get_ready = load_bmp("graphics/menu/get_ready.bmp",default_palette);
	BITMAP *gangs = load_bmp("graphics/gangs.bmp",default_palette);
    BITMAP *lifes = load_bmp("graphics/lifes.bmp",default_palette);
    BITMAP *ventilator = load_bmp("graphics/ventilator.bmp",default_palette);
	BITMAP *pavement = load_bmp("graphics/pavement.bmp",default_palette);
	BITMAP *road1 = load_bmp("graphics/road1.bmp",default_palette);
	BITMAP *road2 = load_bmp("graphics/road2.bmp",default_palette);
	BITMAP *road3 = load_bmp("graphics/road3.bmp",default_palette);
	BITMAP *road4 = load_bmp("graphics/road4.bmp",default_palette);
	BITMAP *man1 = load_bmp("graphics/forms/man1.bmp",default_palette);
	BITMAP *man2 = load_bmp("graphics/forms/man2.bmp",default_palette);
	BITMAP *man3 = load_bmp("graphics/forms/man3.bmp",default_palette);
	BITMAP *man4 = load_bmp("graphics/forms/man4.bmp",default_palette);
	BITMAP *man5 = load_bmp("graphics/forms/man5.bmp",default_palette);
	BITMAP *carbit = NULL;
	SAMPLE *radio1 = load_sample("sound/E-Z Rollers - Short Change.wav");
	//play_sample(radio1, 155,127,1000,1);
	if (player.car_choose == 1)
	{
	    carbit = load_bmp("graphics/forms/taxi.bmp",default_palette);
		now = cTaxi;
	}
	else if (player.car_choose == 2)
	{
		carbit = load_bmp("graphics/forms/copcar.bmp",default_palette);
		now = cCopcar;
	}
	else if (player.car_choose == 3)
	{
		carbit = load_bmp("graphics/forms/zcx5.bmp",default_palette);
		now = cZcx5;
	}
	blit( get_ready, screen, 0, 0, 0, 0, get_ready->w, get_ready->h);
	rest (1000);
	player.type = eMan;
	while(gameRunning)
    {
        draw_map(bg, ventilator, road1, road2, road3, road4, pavement);
        masked_blit(bg, buffer, 0, 0, 0, 0, 640, 480);
        while (meter > 0)
        {
			meter--;
			frame++;
			if (frame > fps) frame = 0;
			if (player.type == eMan) check_key_man();
        	else if (player.type == eCar) check_key_car();
		}
		if (player.type == eMan)
		{
			rotate_sprite( buffer, carbit, 450 - player.scroll_x, 70 - player.scroll_y, ftofix( 65 ) );
			if(player.motion == eStand) {rotate_sprite( buffer, man1, player.screen_x, player.screen_y, ftofix( player.angle ) );}
			else if(player.motion == eGo)
			{
				if( frame<(fps/5)) {rotate_sprite( buffer, man1, player.screen_x, player.screen_y, ftofix( player.angle ) );}
            	else if( frame>=(fps/5) && frame<(fps*2/5)) {rotate_sprite( buffer, man2, player.screen_x, player.screen_y, ftofix( player.angle ) );}
            	else if( frame>=(fps*2/5) && frame<(fps*3/5)) {rotate_sprite( buffer, man3, player.screen_x, player.screen_y, ftofix( player.angle ) );}
            	else if( frame>=(fps*3/5) && frame<(fps*4/5)) {rotate_sprite( buffer, man4, player.screen_x, player.screen_y, ftofix( player.angle ) );}
            	else if( frame>=(fps*4/5) && frame<fps) {rotate_sprite( buffer, man5, player.screen_x, player.screen_y, ftofix( player.angle ) );}
			}
		}
		else if (player.type == eCar)
		{
			rotate_sprite( buffer, carbit, player.screen_x, player.screen_y, ftofix( player.angle ) );
		}
		display_coords_and_stuff(buffer, gangs, lifes);
    }
    stop_sample(radio1);
    destroy_sample(radio1);
	destroy_bitmap(buffer);
	destroy_bitmap(bg);
	destroy_bitmap(get_ready);
	destroy_bitmap(gangs);
	destroy_bitmap(lifes);
	destroy_bitmap(pavement);
	destroy_bitmap(road1);
	destroy_bitmap(road2);
	destroy_bitmap(road3);
	destroy_bitmap(road4);
	destroy_bitmap(man1);
	destroy_bitmap(man2);
	destroy_bitmap(man3);
	destroy_bitmap(man4);
	destroy_bitmap(man5);
	destroy_bitmap(carbit);
}

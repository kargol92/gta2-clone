// init_and_de_init.h
void init()
{
    allegro_init();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED,screen_w,screen_h,0,0); //_WINDOWED
    install_keyboard();
    install_sound(DIGI_AUTODETECT,MIDI_AUTODETECT,"");
    set_volume(255,255);
    install_timer();
    install_int_ex(increment_meter, BPS_TO_TIMER(fps));
}

void de_init()
{
	remove_int(increment_meter);
    allegro_exit();
}

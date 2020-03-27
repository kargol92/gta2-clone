// calculate_and_display.h
void display_coords_and_stuff(BITMAP * & buffer, BITMAP * & gangs, BITMAP * & lifes)
{
	masked_blit(gangs, buffer, 0, 0, 0, 0, 640, 480);
    masked_blit(lifes, buffer, 0, 0, 503, 0, 640, 480);
    if(player.type == eMan)textprintf_ex(buffer, font, 370, 400, makecol( 255, 255, 128 ), -1, "form: player.man" );
    else if(player.type == eCar)textprintf_ex(buffer, font, 370, 400, makecol( 255, 255, 128 ), -1, "form: car" );
    textprintf_ex(buffer, font, 370, 410, makecol( 255, 255, 128 ), -1, "map:    X %f Y %f", player.map_x, player.map_y );
    textprintf_ex(buffer, font, 370, 420, makecol( 255, 255, 128 ), -1, "screen: X %f Y %f", player.screen_x, player.screen_y );
    textprintf_ex(buffer, font, 370, 430, makecol( 255, 255, 128 ), -1, "scroll: X %f Y %f", player.scroll_x, player.scroll_y );
    textprintf_ex(buffer, font, 370, 440, makecol( 255, 255, 128 ), -1, "player.speed: %f", player.speed );
    textprintf_ex(buffer, font, 370, 450, makecol( 255, 255, 128 ), -1, "player.angle: %f", player.angle );
    textprintf_ex(buffer, font, 370, 460, makecol( 255, 255, 128 ), -1, "fps: %d", fps );
    textprintf_ex(buffer, font, 370, 470, makecol( 255, 255, 128 ), -1, "frame: %d", frame );
    if(escape == 1)
    {
		textprintf_centre_ex(buffer, font, 320, 210, makecol( 255, 255, 128 ), -1, "Are you sure?" );
		textprintf_centre_ex(buffer, font, 320, 220, makecol( 255, 255, 128 ), -1, "Press Enter to quit" );
		textprintf_centre_ex(buffer, font, 320, 230, makecol( 255, 255, 128 ), -1, "Press Esc to return" );
	}
    masked_blit(buffer, screen, 0, 0, 0, 0, 640, 480);
}

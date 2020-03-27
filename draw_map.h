// draw_map.h
void draw_map(BITMAP * & bg, BITMAP * & ventilator, BITMAP * & road1, BITMAP * & road2, BITMAP * & road3, BITMAP * & road4, BITMAP * & pavement)
{
    for (int y = 0; y < map_H; y++)
    {
		for (int x = 0; x < map_W; x++)
        {
			if (map[y][x] == 10) {blit (pavement, bg, 0, 0, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            else if (map[y][x] == 11) {blit (pavement, bg, 64, 0, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            else if (map[y][x] == 20) {blit (road1, bg, 196, 131, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            else if (map[y][x] == 21) {blit (road1, bg, 391, 1, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            else if (map[y][x] == 22) {blit (road1, bg, 391, 66, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            else if (map[y][x] == 23) {blit (road1, bg, 326, 66, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            else if (map[y][x] == 30) {blit (road3, bg, 326, 131, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            else if (map[y][x] == 31) {blit (road3, bg, 391, 66, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
        	else if (map[y][x] == 40) {blit (road4, bg, 131, 261, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            else if (map[y][x] == 41) {blit (road4, bg, 1, 66, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            else if (map[y][x] == 42) {blit (road4, bg, 66, 66, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            else if (map[y][x] == 43) {blit (road4, bg, 66, 131, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            else if (map[y][x] == 51) {blit (road2, bg, 66, 66, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            else if (map[y][x] == 60) {blit (road3, bg, 261, 66, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            else if (map[y][x] == 61) {blit (road3, bg, 66, 196, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            else if (map[y][x] == 80) {blit (road2, bg, 66, 196, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            else if (map[y][x] == 81) {blit (road2, bg, 196, 391, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            else if (map[y][x] == 200) {blit (road1, bg, 32, 0, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            else if (map[y][x] == 100)
			{
				if( frame<(fps/8)) {blit (ventilator, bg, 1, 1, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            	else if( frame>=(fps/8) && frame<(fps*2/8)) {blit (ventilator, bg, 66, 1, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            	else if( frame>=(fps*2/8) && frame<(fps*3/8)) {blit (ventilator, bg, 131, 1, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            	else if( frame>=(fps*3/8) && frame<(fps*4/8)) {blit (ventilator, bg, 196, 1, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            	else if( frame>=(fps*4/8) && frame<(fps*5/8)) {blit (ventilator, bg, 1, 66, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            	else if( frame>=(fps/5/8) && frame<(fps*6/8)) {blit (ventilator, bg, 66, 66, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            	else if( frame>=(fps*6/8) && frame<(fps*7/8)) {blit (ventilator, bg, 131, 66, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
            	else if( frame>=(fps*7/8) && frame<(fps)) {blit (ventilator, bg, 196, 66, (x*tile.w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile.w, tile.h);}
				//blit (ventilator, bg, 1, 1, (x*tile_w)-(player.scroll_x), (y*tile.h)-(player.scroll_y), tile_w, tile.h);
			}
        }
    }
}

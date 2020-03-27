// drawing_position.h
void drawing_position_forward()
{
    player.map_x+=(player.speed)*-sin((player.angle)*(PI/128));
    player.map_y+=(player.speed)*cos((player.angle)*(PI/128));
    if (player.map_x < (screen_w/2)) player.screen_x+=(player.speed)*-sin((player.angle)*(PI/128));
    else if (player.map_x >= (map_w - screen_w / 2)) player.screen_x+=(player.speed)*-sin((player.angle)*(PI/128));
    else player.scroll_x+=(player.speed)*-sin((player.angle)*(PI/128));
    if (player.map_y < (screen_h/2)) player.screen_y+=(player.speed)*cos((player.angle)*(PI/128));
    else if (player.map_y >= (map_h - screen_h / 2)) player.screen_y+=(player.speed)*cos((player.angle)*(PI/128));
    else player.scroll_y+=(player.speed)*cos((player.angle)*(PI/128));
}
void drawing_position_back()
{
    player.map_x+=(player.speed)*sin((player.angle)*(PI/128));
    player.map_y+=(player.speed)*-cos((player.angle)*(PI/128));
    if (player.map_x < (screen_w/2)) player.screen_x+=(player.speed)*sin((player.angle)*(PI/128));
    else if (player.map_x >= (map_w - screen_w / 2)) player.screen_x+=(player.speed)*sin((player.angle)*(PI/128));
    else player.scroll_x+=(player.speed)*sin((player.angle)*(PI/128));
    if (player.map_y < (screen_w/2)) player.screen_y+=(player.speed)*-cos((player.angle)*(PI/128));
    else if (player.map_y >= (map_h - screen_h / 2)) player.screen_y+=(player.speed)*-cos((player.angle)*(PI/128));
    else player.scroll_y+=(player.speed)*-cos((player.angle)*(PI/128));
}

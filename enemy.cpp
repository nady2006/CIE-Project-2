#include <enemy.h>
enemy::enemy(int x = 20, int y = 2) {
    speed = x;
    enemy_num = y;
}
enemy::set_speed(int x) {
    speed = x;
}
enemy::get_speed()const {
    return speed;
}
enemy::get_enemy_num()const {
    return enemy_num;
}
enemy::set_enemy_num() {
    //generates random number based on the speed , as the speed grows the numbers get bigger
    srand(time(0));
    int max = (speed * 2 / 5);
    int min = (speed / 5);
    int range = (max - min + 1);
    enemy_num = min + (rand() % range);
}
enemy::set_enemy_x(int max,int min) {
    //generates random x coordinate between x_min and x_max based on the background
    srand(time(0));
    int range = (max - min + 1);
    x = min + (rand() % range);
}
enemy::set_enemy_y(int max ,int min ){
    //generates random y coordinate between y_min and y_max based on the background
    srand(time(0));
    int range = (max - min + 1);
    y = min + (rand() % range);
}
enemy::get_enemy_x() {
    return x;
}
enemy::get_enemy_y() {
    return y;
}
enemy::get_enemy_type() {
    //generate random type for example, 1 being ship 0 being helicopter .
    x = 1 + (rand() % 14);
    if (x % 2 == 0) {
        type = 0
    }
    else type = 1;
}

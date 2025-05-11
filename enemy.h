#pragma once
class enemy {
    int speed;
    int enemy_num;
    int enemy_position;
    int x;
    int y;
    int type;
public:
    enemy(int x = 20, int y = 2); 
    void set_speed(int x); 
    int get_speed()const; 
    int get_enemy_num()const; 
    void set_enemy_num(); 
    void set_enemy_x(int max, int min);
    int get_enemy_x() const;
    void set_enemy_y(int max, int min);
    int get_enemy_y() const;
    void get_enemy_type();
    
};
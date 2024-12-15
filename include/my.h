/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

    #include <SFML/Window.h>
    #include <SFML/Window/Mouse.h>
    #include <SFML/System.h>
    #include <SFML/System/Vector2.h>
    #include <SFML/System/Export.h>
    #include <SFML/System/Time.h>
    #include <SFML/System/Types.h>
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <SFML/Network.h>
    #include <stdlib.h>
    #include <stdio.h>

typedef struct sprite_s {
    sfSprite *game_over;
    sfSprite *win;
    sfSprite *tower_can_two;
    sfSprite *tower_can_two_i;
    sfSprite *tower_magic;
    sfSprite *tower_magic_i;
    sfSprite *tower_can;
    sfSprite *tower_crossbow;
    sfSprite *tower_can_i;
    sfSprite *tower_crossbow_i;
    sfSprite *fox_i;
    sfSprite *square_one;
    sfSprite *square_two;
    sfSprite *square_tree;
    sfSprite *square_four;
    sfSprite *menu;
    sfSprite *life_bar;
    sfSprite *start;
    sfSprite *coin;
    sfSprite *board;
    sfSprite *button_exit;
    sfSprite *button_pause;
    sfSprite *wallpaper;
    sfSprite *enemy_wildbord;
    sfSprite *enemy_rathian;
    sfSprite *enemy_diablos;
    sfSprite *defender_fox;
} sprite_t;

typedef struct pos_s {
    sfVector2f game_over;
    sfVector2f win;
    sfVector2f tower_can_two;
    sfVector2f tower_can_two_i;
    sfVector2f tower_magic;
    sfVector2f tower_magic_i;
    sfVector2f square_one;
    sfVector2f square_two;
    sfVector2f square_tree;
    sfVector2f square_four;
    sfVector2f fox_i;
    sfVector2f coin;
    sfVector2f life_bar;
    sfVector2f start;
    sfVector2f button_pause;
    sfVector2f board;
    sfVector2f button_pause_menu;
    sfVector2f button_exit;
    sfVector2f enemy_wildbord;
    sfVector2f enemy_rathian;
    sfVector2f enemy_diablos;
    sfVector2f defender_fox;
    sfVector2f tower_can_i;
    sfVector2f tower_crossbow_i;
    sfVector2f tower_can;
    sfVector2f tower_crossbow;
    sfVector2f fox;
} pos_t;

typedef struct rect_s {
    sfIntRect game_over;
    sfIntRect win;
    sfIntRect tower_can_two;
    sfIntRect tower_can_two_i;
    sfIntRect tower_magic;
    sfIntRect tower_magic_i;
    sfIntRect square_one;
    sfIntRect square_two;
    sfIntRect square_tree;
    sfIntRect square_four;
    sfIntRect fox_i;
    sfIntRect tower_can;
    sfIntRect tower_crossbow;
    sfIntRect tower_can_i;
    sfIntRect tower_crossbow_i;
    sfIntRect life_bar;
    sfIntRect coin;
    sfIntRect start;
    sfIntRect button_pause;
    sfIntRect board;
    sfIntRect button_exit;
    sfIntRect enemy_wildbord;
    sfIntRect enemy_rathian;
    sfIntRect enemy_diablos;
    sfIntRect defender_fox;
} rect_t;

typedef struct scale_s {
    sfVector2f game_over;
    sfVector2f win;
    sfVector2f tower_can_two;
    sfVector2f tower_can_two_i;
    sfVector2f tower_magic;
    sfVector2f tower_magic_i;
    sfVector2f square_one;
    sfVector2f square_two;
    sfVector2f square_tree;
    sfVector2f square_four;
    sfVector2f fox_i;
    sfVector2f tower_can;
    sfVector2f tower_crossbow;
    sfVector2f tower_can_i;
    sfVector2f tower_crossbow_i;
    sfVector2f life_bar;
    sfVector2f coin;
    sfVector2f start;
    sfVector2f button_pause;
    sfVector2f board;
    sfVector2f button_exit;
    sfVector2f button_pause_menu;
    sfVector2f button_exit_menu;
    sfVector2f enemy_wildbord;
    sfVector2f enemy_rathian;
    sfVector2f enemy_diablos;
    sfVector2f defender_fox;
} scale_t;

typedef struct texture_s {
    sfTexture *game_over;
    sfTexture *win;
    sfTexture *tower_can_two;
    sfTexture *tower_can_two_i;
    sfTexture *tower_magic;
    sfTexture *tower_magic_i;
    sfTexture *square_one;
    sfTexture *square_two;
    sfTexture *square_tree;
    sfTexture *square_four;
    sfTexture *fox_i;
    sfTexture *tower_can;
    sfTexture *tower_crossbow;
    sfTexture *tower_can_i;
    sfTexture *tower_crossbow_i;
    sfTexture *life_bar;
    sfTexture *coin;
    sfTexture *start;
    sfTexture *button_pause;
    sfTexture *board;
    sfTexture *button_exit;
    sfTexture *enemy_wildbord;
    sfTexture *enemy_rathian;
    sfTexture *enemy_diablos;
    sfTexture *defender_fox;
} texture_t;

typedef struct life_s {
    int enemy_wildbord;
    int enemy_rathian;
    int enemy_diablos;
    int life_bar;
} life_t;

typedef struct score_s {
    sfFont *font;
    sfText *text;
    sfVector2f pos;
    sfText *res;
    char *result;
    int count;
} score_t;

typedef struct variables_s {
    int fox_active;
    int square_one_active;
    int square_two_active;
    int square_tree_active;
    int square_four_active;
    int tower_can_active;
    int tower_crossbow_active;
    int tower_can_pose;
    int tower_crossbow_pose;
    int tower_magic_active;
    int tower_magic_pose;
    int tower_can_two_active;
    int tower_can_two_pose;
    int *square_check;
    int win;
} variables_t;

typedef struct struct_clock_s {
    float seconds;
    float sec_attack;
    sfClock *clock;
    sfClock *clock_attack;
} struct_clock_t;

typedef struct game_s {
    struct_clock_t var_clock;
    variables_t var;
    score_t score;
    sprite_t sprite;
    pos_t pos;
    texture_t text;
    scale_t scale;
    life_t life;
    sfMusic *song;
    sfRenderWindow *window;
    rect_t rect;
    sfEvent event;
    int pause_menu;
    int menu;
} game_t;

void condition_win(game_t *game);

void condition_lose(game_t *game);

void square_attack(game_t *game);

void square_one_attack(game_t *game);

void square_two_attack(game_t *game);

void square_tree_attack(game_t *game);

void square_four_attack(game_t *game);

void fox_attack(game_t *game);

void init_acive_tower(game_t *game);

void create_sprite_five(game_t *game);

void condition_square(game_t *game, variables_t *var);

void condition_square_one(game_t *game, variables_t *var);

void condition_square_two(game_t *game, variables_t *var);

void condition_square_tree(game_t *game, variables_t *var);

void condition_square_four(game_t *game, variables_t *var);

void condition_menu(game_t *game);

void all_tower_pos_conditions(game_t *game);

void tower_pos_one(game_t *game);

void tower_one_pos(game_t *game);

void tower_pos_two(game_t *game);

void tower_two_pos(game_t *game);

void tower_pos_tree(game_t *game);

void tower_tree_pos(game_t *game);

void tower_pos_four(game_t *game);

void tower_four_pos(game_t *game);

void condition_tower_can(game_t *game);

void condition_tower_crossbow(game_t *game);

void condition_tower_can_two(game_t *game);

void condition_tower_magic(game_t *game);

void conditions_in_game(game_t *game, score_t *score);

void set_score(game_t *game);

void make_score(game_t *game, score_t *score);

void count_score(game_t *game);

void change_position_fox(game_t *game);

void move_rect_life_bar(game_t *game);

void button_exit(game_t *game);

void button_pause(game_t *game);

void draw_all_before_game(game_t *game);

void init_rect(game_t *game);

void init_rect_one(game_t *game);

void init_rect_two(game_t *game);

void init_scale_menu(game_t *game);

void init_scale(game_t *game);

void init_scale_one(game_t *game);

void init_scale_two(game_t *game);

void set_scale(game_t *game);

void set_scale_one(game_t *game);

void set_scale_two(game_t *game);

void init_variables(game_t *game);

void init_variables_one(game_t *game);

void init_variables_two(game_t *game);

void anime_sprite(sfIntRect *rect, int max_value, int length);

sfSprite *sprite_create(char *path, sfSprite *sprite,
sfIntRect rect, sfTexture *texture);

void create_sprite(game_t *game);

void set_position_menu(game_t *game);

void set_position(game_t *game);

void set_position_one(game_t *game);

void set_position_two(game_t *game);

void set_position_tree(game_t *game);

void init_positions(game_t *game);

void init_pos_tower_i(game_t *game);

void init_positions_one(game_t *game);

void init_positions_two(game_t *game);

void play_song(game_t *game);

void animated_all_the_sprites(game_t *game);

sfSprite *wall_paper(char *path_wallpaper);

void draw_all(game_t *game, score_t *score);

void draw_all_one(game_t *game, score_t *score);

void draw_all_two(game_t *game, score_t *score);

void set_texture_menu(game_t *game);

void set_texture(game_t *game);

void set_texture_one(game_t *game);

void set_texture_two(game_t *game);

void set_texture_tree(game_t *game);

void go_rigth_wildbord(game_t *game);

void go_rigth_rathian(game_t *game);

void go_rigth_diablos(game_t *game);

void destroy_all(game_t *game, score_t *score);

void destroy_all_one(game_t *game, score_t *score);

void destroy_all_two(game_t *game, score_t *score);

void analyse_event(sfRenderWindow *window, game_t *game);

char **my_str_to_word_array(char const *str);

char *my_strcat(char *dest, char const *src);

int my_putchar(char c);

char *int_to_str(int nb);

int my_put_nbr(int nb);

int my_putstr(char const *str);

int my_strlen(char const *str);

int my_getnbr(char *str);

long my_strcmp(char const *str1, char const *str2);

#endif/* !MY_H_ */

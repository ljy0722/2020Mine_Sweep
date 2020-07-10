#ifndef BLOCK_H
#define BLOCK_H
#include "./square.h"
#include <QtMath>
#include <QTime>
#include <qdebug.h>
class Block
{
public:
    Block(int row ,int col,int boom_num);
    ~Block();
    int get_col();
    int get_row();
    int get_boom_num();
    int get_flag_num();
    int get_time();

    void set_flag_num(int num);
    void change_flag_num(int d_num);
    void set_time(int time);
    void change_time(int d_time);
    //ccx 7.10
    void bset_show(int x, int y);
    void reset_visit(int x, int y);

    Square **p;
private:
    int row,col,boom_num;
    int time,flag;

};


#endif // BLOCK_H

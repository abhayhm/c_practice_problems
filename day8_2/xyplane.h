#ifndef __XYPLANE_H__
#define __XYPLANE_H__

/* Structure for X-Y plane */
typedef struct{
    int x_axis;
    int y_axis;
    int weight;
}xyplane;

/* Structure for line count */
typedef struct{
    unsigned int horizontal_lines;
    unsigned int vertical_lines;
}line_count;

/* Function declaration */
void read_coordinates(xyplane **, unsigned int);
xyplane *max_weight(xyplane **, unsigned int);
void count_stright_lines(xyplane **, unsigned int, line_count *);

#endif

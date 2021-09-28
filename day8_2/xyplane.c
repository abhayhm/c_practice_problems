#include <stdio.h>
#include <limits.h>
#include "xyplane.h"

/* Function to read coordinates and weight */
void read_coordinates(xyplane **plane, unsigned int size){
    for(unsigned int i = 0; i < size; ++i){
        /* Reading from user */
        printf("Enter the coordinates for point %u\n",i+1);
        printf("X-axis:");
        scanf("%d",&(plane[i]->x_axis));
        printf("Y-axis:");
        scanf("%d",&(plane[i]->y_axis));
        printf("Weight:");
        scanf("%d",&(plane[i]->weight)); 
    }
}

/* Function to find point with maximum weight */
xyplane *max_weight(xyplane **plane, unsigned int size){
    /* Temperary storage */
    xyplane *max_weight_ptr = NULL;
    int max_weight_value = INT_MIN;

    /* Finding max weight */
    for(unsigned int i = 0; i < size; ++i){
        if(max_weight_value < plane[i]->weight){
            max_weight_ptr = plane[i];
            max_weight_value = plane[i]->weight;
        }
    }
    return max_weight_ptr;
}

/* Function to count number of stright lines */
void count_stright_lines(xyplane **plane, unsigned int size, line_count *line){
    line->horizontal_lines = 0;
    line->vertical_lines = 0;

    for(unsigned int i = 0; i < size - 1; ++i){
        /* Counting number of stright horizontal lines */
        for(unsigned int j = 0; j < size; ++j){
            if(plane[i]->x_axis == plane[j]->x_axis){
                if(j > i){
                    ++(line->vertical_lines);
                }
                else if(j < i){
                    break;
                }
            }
        }
        
        /* Counting number of stright vertical lines */
        for(unsigned int j = 0; j < size; ++j){
            if(plane[i]->y_axis == plane[j]->y_axis){
                if(j > i){
                    ++(line->horizontal_lines);
                }
                else if(j < i){
                    break;
                }
            }
        }
    }
} 


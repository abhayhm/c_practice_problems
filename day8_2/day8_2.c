/* Name: Abhay HM
 * Date: 28/09/2021
 * Info: Program to count number stright lines in xy plane.
 */

#include <stdio.h>
#include <stdlib.h>
#include "xyplane.h"

int main(){
    unsigned int points = 0;
    xyplane **plane = NULL;
    xyplane *max_weight_ptr = NULL;
    line_count line_count_value;

    /* Reading from user */
    printf("Enter number of points:");
    scanf("%u",&points);

    /* Creating plane */
    plane = (xyplane **)calloc(points, sizeof(xyplane *));
	if(NULL == plane){
        printf("Unable to create xy plane\n");
        return 0;
    }

	for(unsigned int i = 0; i < points; ++i){
		plane[i] = (xyplane *)calloc(1, sizeof(xyplane));
		
		if(NULL == plane[i]){
			printf("Unable to create xyplane\n");
		}
	}

    /* Reading points */
    read_coordinates(plane, points);

    /* Finding point with max weight */
    max_weight_ptr = max_weight(plane, points);
    printf("Point having maximum weight is:[%d, %d]\n",max_weight_ptr->x_axis, max_weight_ptr->y_axis);
    printf("Weight: %d\n",max_weight_ptr->weight);

    /* Finding number of stright lines */
    count_stright_lines(plane, points, &line_count_value);
    printf("%u vertical line('s)\n",line_count_value.vertical_lines);
    printf("%u horizontal line('s)\n",line_count_value.horizontal_lines);

    /* Exit */
    return 0;
}


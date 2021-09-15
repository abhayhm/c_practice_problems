/* Name: Abhay HM
 * Date: 15/09/2021
 * Info: 
 */

#include <stdio.h>
#include "volume.h"

int main(){
    unsigned int edge = 0, radius = 0, height = 0, length = 0, width = 0, choice = 0;

    /* Menu for the user */
    printf("List of shapes for volume calculation:\n");
    printf("1) cube\n");
    printf("2) cuboid\n");
    printf("3) sphere\n");
    printf("4) cylinder\n");
    printf("5) cone\n");
    printf("Enter your choice:");
    scanf("%u",&choice);

    /* Case for selected shape */
    switch(choice){
        case 1:{
                   printf("Enter the edge of cube:");
                   scanf("%u",&edge);
                   
                   printf("Volume of cube is: %u\n",cube(edge));
               }break;

        case 2:{
                   printf("Enter the length of cuboid:");
                   scanf("%u",&length);
                   printf("Enter the width of cuboid:");
                   scanf("%u",&width);
                   printf("Enter the height of cuboid:");
                   scanf("%u",&height);

                   printf("Volume of cube is: %u\n",cuboid(length, width, height));
               }break;

        case 3:{
                   printf("Enter the radius of sphere:");
                   scanf("%u",&radius);
                   
                   printf("Volume of sphere is: %g\n",sphere(radius));
               }break;
               
        case 4:{
                   printf("Enter the radius of cylinder:");
                   scanf("%u",&radius);

                   printf("Enter the height of cylinder:");
                   scanf("%u",&height);
                   
                   printf("Volume of cylinder is: %g\n",cylinder(radius, height));
               }break;

        case 5:{
                   printf("Enter the radius of cone:");
                   scanf("%u",&radius);

                   printf("Enter the height of cone:");
                   scanf("%u",&height);
                   
                   printf("Volume of cylinder is: %g\n",cone(radius, height));
               }break;

        default:{
                    printf("Invalid choice\n");
                }break;
    }

    /* Exit */
    return 0;
}


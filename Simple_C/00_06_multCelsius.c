//
//  multCelsius.c
//  arrayFunc
//
//  Created by George Martinson on 21/02/2018.
//  Copyright © 2018 All rights reserved.
//

#include <stdio.h>

int main(int argc, char **argv)
{
    double t_c1 = 5, t_c2 = 12, t_c3 = 22.4;
    double cfac, t_f1, t_f2, t_f3;
    cfac = 9.0 / 5.0;
    
    t_f1 = t_c1 * cfac + 32;
    t_f2 = t_c2 * cfac + 32;
    t_f3 = t_c3 * cfac + 32;
    
    printf("cfac: %f\n",cfac);
    printf("%f celsius is %f farenheit\n",t_c1,t_f1);
    printf("%f celsius is %f farenheit\n",t_c2,t_f2);
    printf("%f celsius is %f farenheit\n",t_c3,t_f3);
    
    return 0;
}

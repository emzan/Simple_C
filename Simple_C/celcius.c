//
//  celcius.c
//  arrayFunc
//
//  Created by George Martinson on 21/02/2018.
//  Copyright © 2018 All rights reserved.
//

#include <stdio.h>

int main(int argc, char **argv)
{
    double t_c = 55;
    double t_f;
    
    t_f = t_c * 9/5 + 32;
    printf("%f celsius is %f farenheit\n",t_c,t_f);
    
    return 0;
}

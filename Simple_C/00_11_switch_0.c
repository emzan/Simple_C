//
//  00_11_switch_0.c
//  arrayFunc
//
//  Created by George Martinson on 22/02/2018.
//  Copyright © 2018 Emilio Zanetti. All rights reserved.
//

#include <stdio.h>

int main(){
    printf("Enter a character: ");
    int c = getc(stdin);
    printf("\n");
    
    switch (c) {
        case 'a':
            puts("Stuff for a!\n");
            
        case 'b':
            puts("Stuff for b!\n");
            break;
            
        default:
            puts("Stuff for everything else!\n");
            break;
    }
    return 0;
}

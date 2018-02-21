//
//  00_10_helloSwitch.c
//  arrayFunc
//
//  Created by George Martinson on 22/02/2018.
//  Copyright © 2018 All rights reserved.
//

#include <stdio.h>

int main(){
    printf("Enter a new character: ");
    int c = getc(stdin);
    printf("\n");
    
    switch (c) {
            case 'a':
            printf("You entered a!\n");
            break;
        case 'b':
            printf("You entered b!\n");
            break;
            
        default:
            printf("Invalid character!\n");
            break;
    }
    return 0;
}

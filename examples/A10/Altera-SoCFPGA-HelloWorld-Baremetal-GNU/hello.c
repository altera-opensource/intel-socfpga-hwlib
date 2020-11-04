/*
 * Copyright Altera 2013,2014
 * All Rights Reserved
 * File: hello.c
 *
 */

#include <stdio.h>
#include "alt_watchdog.h"

/* enable semihosting with gcc by defining an __auto_semihosting symbol */
int __auto_semihosting;

int main(int argc, char** argv) {
    /*
     * Disable watchdogs
    */

    alt_wdog_stop(ALT_WDOG0);
    alt_wdog_stop(ALT_WDOG1);

    printf("Hello Tim\n");
    return 0;
}

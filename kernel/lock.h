#ifndef LOCK_H
#define LOCK_H

#include <stdint.h>

typedef struct {
    int count;
    uint32_t flags;
} lock_t;

void lock_enter(lock_t *l);
void lock_leave(lock_t *l);

#endif

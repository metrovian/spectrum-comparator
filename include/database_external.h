#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <jansson.h>

extern int8_t database_external_massbank_migration(const char *name);
extern int8_t database_external_nmrshiftdb_migration(const char *name);
extern int8_t database_external_chemotion_migration(const char *name);
/* Copyright (C) 2017 Embecosm Limited and University of Bristol

   Contributor Graham Markall <graham.markall@embecosm.com>

   This file is part of the Bristol/Embecosm Embedded Benchmark Suite.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program. If not, see <http://www.gnu.org/licenses/>. */

#include <support.h>
#include <stdint.h>
#include <stdio.h>

void initialise_board()
{
}

uint32_t start_cycles;
uint32_t stop_cycles;

void start_trigger()
{
  //asm volatile ("csrr %0, mcycle"
  //              : "=r" (start_cycles));
}

void stop_trigger()
{
  //asm volatile ("csrr %0, mcycle"
  //              : "=r" (stop_cycles));
  printf("Cycle count: %d\n", 99); //stop_cycles - start_cycles);
}



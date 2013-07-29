/*
    Dijkstra.c is a part of Stabby
    Copyright (C) 2013 Michał Walczak

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see http://www.gnu.org/licenses/.
*/

#include "Stabby.h"
#include "IncludeGlobals.h"

DMap DMapCreate(void){
    // [TODO] Create an empty DMap with just data structures ready
}

void DMapAddPOI(DMap dmap, int position){
    // [TODO] Add given position to the value vector if it's not already in
}

void DMapRemPOI(DMap dmap, int position){
    // [TODO] Search the value vector and remove the position given
}

void DMapUpdate(DMap dmap){
    // [TODO] Function updates given DMap according to it's own POI vector
}

void DMapDestroy(DMap dmap){
    // [TODO] Free all vectors up.
}

void addToFrontier(vector_p frontier, int* value_map, int position){
    // [TODO] Function adds a tile position to the frontier, sorting it by value from lowest
}
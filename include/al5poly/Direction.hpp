/*
 * libal5poly is a game library abstraction library. xD
 * Copyright (C) 2011, 2012, 2015, 2016, 2020 Brandon McCaig
 *
 * This file is part of libal5poly.
 *
 * libal5poly is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * libal5poly is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with libal5poly.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DIRECTION_HPP
    #define DIRECTION_HPP

namespace al5poly
{
    enum Direction
    {
        AL5POLY_DIRECTION_NONE =   0,

        AL5POLY_DIRECTION_UP =     1,
        AL5POLY_DIRECTION_NORTH =  1,

        AL5POLY_DIRECTION_RIGHT =  2,
        AL5POLY_DIRECTION_EAST =   2,

        AL5POLY_DIRECTION_DOWN =   3,
        AL5POLY_DIRECTION_SOUTH =  3,

        AL5POLY_DIRECTION_LEFT =   4,
        AL5POLY_DIRECTION_WEST =   4
    };
}

#endif

/*
 * QEMU texture swizzling routines
 *
 * Copyright (c) 2013 espes
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License version 2 as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>
 *
 * Contributions after 2012-01-13 are licensed under the terms of the
 * GNU GPL, version 2 or (at your option) any later version.
 */

#ifndef HW_XBOX_SWIZZLE_H
#define HW_XBOX_SWIZZLE_H

void swizzle_rect(
    uint8_t *src_buf,
    unsigned int width,
    unsigned int height,
    uint8_t *dst_buf,
    unsigned int pitch,
    unsigned int bytes_per_pixel);

 void unswizzle_rect(
    uint8_t *src_buf,
    unsigned int width,
    unsigned int height,
    uint8_t *dst_buf,
    unsigned int pitch,
    unsigned int bytes_per_pixel);

#endif
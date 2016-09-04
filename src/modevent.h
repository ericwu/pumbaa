/**
 * @file modevent.h
 *
 * @section License
 * Copyright (C) 2016, Erik Moqvist
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * This file is part of the Pumbaa project.
 */

#ifndef __PUMBAA_MODEVENT_H__
#define __PUMBAA_MODEVENT_H__

extern const mp_obj_type_t module_event_class_event;

/**
 * class Event(object):
 *
 *     def __init__(self)
 *
 *     def read(self, mask=None)
 *
 *     def write(self, mask)
 *
 *     def size(self)
 */
struct class_event_t {
    mp_obj_base_t base;
    struct event_t event;
};

#endif

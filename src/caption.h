/*
    Copyright (C) 2010 Andrew Caudwell (acaudwell@gmail.com)

    This program is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation; either version
    3 of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef RCAPTION_H
#define RCAPTION_H

#include "core/display.h"
#include "core/fxfont.h"
#include "gource_settings.h"

class RCaption {    
    float alpha;
    float decay;
    
    vec2f pos;

    vec3f colour;
    
    FXFont font;
    FXFont font2;
    
public:
    std::string caption;
    time_t timestamp;

    RCaption(const std::string& caption, time_t timestamp, const FXFont& font);

    void setPos(const vec2f& pos);
    const vec2f& getPos();
    
    bool isFinished();
    
    void logic(float dt);

    void draw() const;    
};

#endif
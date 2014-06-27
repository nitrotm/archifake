/*
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __SURFACE_H_INCLUDE__
#define __SURFACE_H_INCLUDE__


class Surface {
public:
    Surface() {
    }

    virtual ~Surface() {
    }


    void create();
    void destroy();


    void animate(f64 t, f64 dt);
    void render();
};


#endif //__SURFACE_H_INCLUDE__
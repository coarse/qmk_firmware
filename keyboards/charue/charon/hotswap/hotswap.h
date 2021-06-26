/*
Copyright 2020 Michael Pio "Coarse" Mayol  <mfmayol@up.edu.ph>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "quantum.h"

#define ____ KC_NO

/* ANSI
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │Esc│! 1│@ 2│# 3│$ 4│% 5│^ 6│& 7│* 8│( 9│) 0│_ -│+ =│ Bckspc│
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┐
 * │Tab  │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │{ [│} ]│|   \│PgU│
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┼───┤
 * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │: ;│" '│   Enter│PgD│
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────┬───┼───┤
 * │Shift   │ Z │ X │ C │ V │ B │ N │ M │< ,│> .│? /│ Shift│ Up│End│
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴───┴───┼───┴┬─┬───┼───┼───┤
 * │Ctrl│ Opt│ Cmd│             Space           │FnPy│ │Lef│Dow│Rig│
 * └────┴────┴────┴─────────────────────────────┴────┴─┴───┴───┴───┘
 */

#define LAYOUT_65_ansi( \
    K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, \
    K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, \
    K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210,       K212, K213, K214, \
    K300,       K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314, \
    K400, K401, K402,                   K406,                   K410,       K412, K413, K414  \
) { \
    { K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, ____ }, \
    { K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114 }, \
    { K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, ____, K212, K213, K214 }, \
    { K300, ____, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314 }, \
    { K400, K401, K402, ____, ____, ____, K406, ____, ____, ____, K410, ____, K412, K413, K414 }  \
}

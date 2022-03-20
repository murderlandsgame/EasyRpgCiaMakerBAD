/*
 * This file is part of EasyRPG Player.
 *
 * EasyRPG Player is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EasyRPG Player is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
 */

#if defined(USE_LIBRETRO)

// Headers
#include "input_buttons.h"
#include "keys.h"
#include "libretro.h"

Input::ButtonMappingArray Input::GetDefaultButtonMappings() {
	// Basically the desktop keyboard mapping but with some functionality
	// disabled because it is provided by libretro or not usable on these
	// keys due to global hotkey pollution
	return {
		{UP, Keys::UP},
		{UP, Keys::KP8},
		{UP, Keys::W},
		{DOWN, Keys::DOWN},
		{DOWN, Keys::KP2},
		{DOWN, Keys::S},
		{LEFT, Keys::LEFT},
		{LEFT, Keys::KP4},
		{LEFT, Keys::A},
		{RIGHT, Keys::RIGHT},
		{RIGHT, Keys::KP6},
		{RIGHT, Keys::D},
		{DECISION, Keys::Z},
		{DECISION, Keys::Y},
		{DECISION, Keys::SPACE},
		{DECISION, Keys::RETURN},
		{DECISION, Keys::SELECT},
		{CANCEL, Keys::AC_BACK},
		{CANCEL, Keys::X},
		{CANCEL, Keys::C},
		{CANCEL, Keys::V},
		{CANCEL, Keys::B},
		{CANCEL, Keys::ESCAPE},
		{CANCEL, Keys::KP0},
		{SHIFT, Keys::LSHIFT},
		{SHIFT, Keys::RSHIFT},
		{N0, Keys::N0},
		{N0, Keys::KP0},
		{N1, Keys::N1},
		{N1, Keys::KP1},
		{N2, Keys::N2},
		{N2, Keys::KP2},
		{N3, Keys::N3},
		{N3, Keys::KP3},
		{N4, Keys::N4},
		{N4, Keys::KP4},
		{N5, Keys::N5},
		{N5, Keys::KP5},
		{N6, Keys::N6},
		{N6, Keys::KP6},
		{N7, Keys::N7},
		{N7, Keys::KP7},
		{N8, Keys::N8},
		{N8, Keys::KP8},
		{N9, Keys::N9},
		{N9, Keys::KP9},
		{PLUS, Keys::KP_ADD},
		{MINUS, Keys::KP_SUBTRACT},
		{MULTIPLY, Keys::KP_MULTIPLY},
		{DIVIDE, Keys::KP_DIVIDE},
		{PERIOD, Keys::KP_PERIOD},
		{PERIOD, Keys::PERIOD},
		{DEBUG_MENU, Keys::F10}, // remapped
		{DEBUG_THROUGH, Keys::LCTRL},
		{DEBUG_THROUGH, Keys::RCTRL},
		{SHOW_LOG, Keys::F3},
		{PAGE_UP, Keys::PGUP},
		{PAGE_DOWN, Keys::PGDN},

#if defined(USE_JOYSTICK) && defined(SUPPORT_JOYSTICK)
		{UP, Keys::JOY_DPAD_UP},
		{DOWN, Keys::JOY_DPAD_DOWN},
		{LEFT, Keys::JOY_DPAD_LEFT},
		{RIGHT, Keys::JOY_DPAD_RIGHT},
		{DECISION, Keys::JOY_A},
		{CANCEL, Keys::JOY_B},
		{SHIFT, Keys::JOY_X},
		{FAST_FORWARD, Keys::JOY_Y},
		{N0, Keys::JOY_STICK_LEFT},
		{N2, Keys::JOY_REAR_LEFT_2},
		{N4, Keys::JOY_REAR_LEFT_1},
		{N5, Keys::JOY_STICK_RIGHT},
		{N6, Keys::JOY_REAR_RIGHT_2},
		{N8, Keys::JOY_REAR_RIGHT_1},
		{TOGGLE_FPS, Keys::JOY_SHOULDER_LEFT},
		{DEBUG_THROUGH, Keys::JOY_SHOULDER_RIGHT},
		{SETTINGS_MENU, Keys::JOY_START},
		{RESET, Keys::JOY_BACK},
#endif

#if defined(USE_JOYSTICK_AXIS) && defined(SUPPORT_JOYSTICK_AXIS)
		{LEFT, Keys::JOY_STICK_LEFT_X_LEFT},
		{RIGHT, Keys::JOY_STICK_LEFT_X_RIGHT},
		{DOWN, Keys::JOY_STICK_LEFT_Y_DOWN},
		{UP, Keys::JOY_STICK_LEFT_Y_UP},
		{N1, Keys::JOY_STICK_RIGHT_X_LEFT},
		{N3, Keys::JOY_STICK_RIGHT_Y_DOWN},
		{N7, Keys::JOY_STICK_RIGHT_Y_UP},
		{N9, Keys::JOY_STICK_RIGHT_X_RIGHT},
		{FAST_FORWARD_PLUS, Keys::JOY_TRIGGER_RIGHT},
		{DEBUG_THROUGH, Keys::JOY_TRIGGER_LEFT}
#endif
	};
}

Input::DirectionMappingArray Input::GetDefaultDirectionMappings() {
	return {
		{ Direction::DOWN, DOWN },
		{ Direction::LEFT, LEFT },
		{ Direction::RIGHT, RIGHT },
		{ Direction::UP, UP },
	};
}

#endif

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

#ifndef EP_KEYS_H
#define EP_KEYS_H

// Headers
#include "system.h"
#include <lcf/enum_tags.h>

namespace Input {
	/**
	 * Keys namespace
	 */
	namespace Keys {
		enum InputKey : uint8_t {
			NONE,
			BACKSPACE,
			TAB,
			CLEAR,
			RETURN,
			PAUSE,
			ESCAPE,
			SPACE,
			PGUP,
			PGDN,
			ENDS,
			HOME,
			LEFT,
			UP,
			RIGHT,
			DOWN,
			SNAPSHOT,
			INSERT,
			DEL,
			SHIFT,
			LSHIFT,
			RSHIFT,
			CTRL,
			LCTRL,
			RCTRL,
			ALT,
			LALT,
			RALT,
			N0,
			N1,
			N2,
			N3,
			N4,
			N5,
			N6,
			N7,
			N8,
			N9,
			A,
			B,
			C,
			D,
			E,
			F,
			G,
			H,
			I,
			J,
			K,
			L,
			M,
			N,
			O,
			P,
			Q,
			R,
			S,
			T,
			U,
			V,
			W,
			X,
			Y,
			Z,
			LOS,
			ROS,
			MENU,
			KP0,
			KP1,
			KP2,
			KP3,
			KP4,
			KP5,
			KP6,
			KP7,
			KP8,
			KP9,
			KP_MULTIPLY,
			KP_ADD,
			KP_SUBTRACT,
			KP_PERIOD,
			KP_DIVIDE,
			COMMA,
			PERIOD,
			SLASH, // After "."
			F1,
			F2,
			F3,
			F4,
			F5,
			F6,
			F7,
			F8,
			F9,
			F10,
			F11,
			F12,
			CAPS_LOCK,
			NUM_LOCK,
			SCROLL_LOCK,
			AC_BACK,
			SELECT,
			LEFT_BRACKET, // After P: [, ], '\'
			RIGHT_BRACKET,
			BACKSLASH, // On some keyboards after '
			SEMICOLON, // After L: ;, '
			APOSTROPH,

#if defined(USE_MOUSE) && defined(SUPPORT_MOUSE)
			MOUSE_LEFT,
			MOUSE_RIGHT,
			MOUSE_MIDDLE,
			MOUSE_XBUTTON1,
			MOUSE_XBUTTON2,
			MOUSE_SCROLLUP,
			MOUSE_SCROLLDOWN,
#endif

#if defined(USE_JOYSTICK) && defined(SUPPORT_JOYSTICK)
			JOY_DPAD_UP,
			JOY_DPAD_DOWN,
			JOY_DPAD_LEFT,
			JOY_DPAD_RIGHT,
			JOY_A,
			JOY_B,
			JOY_X,
			JOY_Y,
			JOY_BACK,
			JOY_GUIDE, // Problematic: Opens Gamebar on Windows
			JOY_START,
			JOY_TOUCH, // Touchscreen input
			JOY_STICK_LEFT,
			JOY_STICK_RIGHT,
			JOY_SHOULDER_LEFT,
			JOY_SHOULDER_RIGHT,
			JOY_REAR_LEFT_1,
			JOY_REAR_LEFT_2,
			JOY_REAR_RIGHT_1,
			JOY_REAR_RIGHT_2,
			JOY_OTHER_1, // Additional buttons and fallback for SDL1
			JOY_OTHER_2,
			JOY_OTHER_3,
			JOY_OTHER_4,
			JOY_OTHER_5,
			JOY_OTHER_6,
			JOY_OTHER_7,
			JOY_OTHER_8,
			JOY_OTHER_9,
			JOY_OTHER_10,
			JOY_OTHER_11,
			JOY_OTHER_12,
			JOY_OTHER_13,
			JOY_OTHER_14,
			JOY_OTHER_15,
			JOY_OTHER_16,
			JOY_OTHER_17,
			JOY_OTHER_18,
			JOY_OTHER_19,
			JOY_OTHER_20,
			JOY_OTHER_21,
			JOY_OTHER_22,
			JOY_OTHER_23,
			JOY_OTHER_24,
#endif

#if defined(USE_JOYSTICK_AXIS)  && defined(SUPPORT_JOYSTICK_AXIS)
			JOY_STICK_LEFT_X_LEFT,
			JOY_STICK_LEFT_X_RIGHT,
			JOY_STICK_LEFT_Y_DOWN,
			JOY_STICK_LEFT_Y_UP,
			JOY_STICK_RIGHT_X_LEFT,
			JOY_STICK_RIGHT_X_RIGHT,
			JOY_STICK_RIGHT_Y_DOWN,
			JOY_STICK_RIGHT_Y_UP,
			JOY_TRIGGER_LEFT,
			JOY_TRIGGER_RIGHT,
#endif

#if defined(USE_TOUCH) && defined(SUPPORT_TOUCH)
			ONE_FINGER,
			TWO_FINGERS,
#endif

			KEYS_COUNT
		};

		constexpr auto kNames = lcf::makeEnumTags<InputKey>(
			"NONE",
			"BACKSPACE",
			"TAB",
			"CLEAR",
			"RETURN",
			"PAUSE",
			"ESCAPE",
			"SPACE",
			"PGUP",
			"PGDN",
			"ENDS",
			"HOME",
			"LEFT",
			"UP",
			"RIGHT",
			"DOWN",
			"SNAPSHOT",
			"INSERT",
			"DEL",
			"SHIFT",
			"LSHIFT",
			"RSHIFT",
			"CTRL",
			"LCTRL",
			"RCTRL",
			"ALT",
			"LALT",
			"RALT",
			"N0",
			"N1",
			"N2",
			"N3",
			"N4",
			"N5",
			"N6",
			"N7",
			"N8",
			"N9",
			"A",
			"B",
			"C",
			"D",
			"E",
			"F",
			"G",
			"H",
			"I",
			"J",
			"K",
			"L",
			"M",
			"N",
			"O",
			"P",
			"Q",
			"R",
			"S",
			"T",
			"U",
			"V",
			"W",
			"X",
			"Y",
			"Z",
			"LOS",
			"ROS",
			"MENU",
			"KP0",
			"KP1",
			"KP2",
			"KP3",
			"KP4",
			"KP5",
			"KP6",
			"KP7",
			"KP8",
			"KP9",
			"MULTIPLY",
			"ADD",
			"SUBTRACT",
			"PERIOD",
			"DIVIDE",
			"F1",
			"F2",
			"F3",
			"F4",
			"F5",
			"F6",
			"F7",
			"F8",
			"F9",
			"F10",
			"F11",
			"F12",
			"CAPS_LOCK",
			"NUM_LOCK",
			"SCROLL_LOCK",
			"AC_BACK",
			"SELECT",

#if defined(USE_MOUSE) && defined(SUPPORT_MOUSE)
			"MOUSE_LEFT",
			"MOUSE_RIGHT",
			"MOUSE_MIDDLE",
			"MOUSE_XBUTTON1",
			"MOUSE_XBUTTON2",
			"MOUSE_SCROLLUP",
			"MOUSE_SCROLLDOWN",
#endif

#if defined(USE_JOYSTICK) && defined(SUPPORT_JOYSTICK)
			"JOY_DPAD_UP",
			"JOY_DPAD_DOWN",
			"JOY_DPAD_LEFT",
			"JOY_DPAD_RIGHT",
			"JOY_A",
			"JOY_B",
			"JOY_X",
			"JOY_Y",
			"JOY_BACK",
			"JOY_GUIDE",
			"JOY_START",
			"JOY_TOUCH",
			"JOY_STICK_LEFT",
			"JOY_STICK_RIGHT",
			"JOY_SHOULDER_LEFT",
			"JOY_SHOULDER_RIGHT",
			"JOY_REAR_LEFT_1",
			"JOY_REAR_LEFT_2",
			"JOY_REAR_RIGHT_1",
			"JOY_REAR_RIGHT_2",
			"JOY_OTHER_1",
			"JOY_OTHER_2",
			"JOY_OTHER_3",
			"JOY_OTHER_4",
			"JOY_OTHER_5",
			"JOY_OTHER_6",
			"JOY_OTHER_7",
			"JOY_OTHER_8",
			"JOY_OTHER_9",
			"JOY_OTHER_10",
			"JOY_OTHER_11",
			"JOY_OTHER_12",
			"JOY_OTHER_13",
			"JOY_OTHER_14",
			"JOY_OTHER_15",
			"JOY_OTHER_16",
			"JOY_OTHER_17",
			"JOY_OTHER_18",
			"JOY_OTHER_19",
			"JOY_OTHER_20",
			"JOY_OTHER_21",
			"JOY_OTHER_22",
			"JOY_OTHER_23",
			"JOY_OTHER_24",
#endif

#if defined(USE_JOYSTICK_AXIS)  && defined(SUPPORT_JOYSTICK_AXIS)
			"JOY_STICK_LEFT_X_LEFT",
			"JOY_STICK_LEFT_X_RIGHT",
			"JOY_STICK_LEFT_Y_DOWN",
			"JOY_STICK_LEFT_Y_UP",
			"JOY_STICK_RIGHT_X_LEFT",
			"JOY_STICK_RIGHT_X_RIGHT",
			"JOY_STICK_RIGHT_Y_DOWN",
			"JOY_STICK_RIGHT_Y_UP",
			"JOY_TRIGGER_LEFT",
			"JOY_TRIGGER_RIGHT",
#endif

#if defined(USE_TOUCH) && defined(SUPPORT_TOUCH)
			"ONE_FINGER",
			"TWO_FINGERS",
#endif
			"KEYS_COUNT"
			);
	}
}

#endif

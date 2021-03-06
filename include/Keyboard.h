/*
 * =====================================================================================
 *
 *       Filename:  Keyboard.h
 *
 *    Description:  Our keyboard input function definitions
 *
 *        Version:  1.0
 *        Created:  07/03/2012 02:33:21 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Yamamushi (Jon Rumion)
 *   Organization:  The ASCII Project
 *
 *	  License:  GPLv3
 *
 *	  Copyright 2012 Jonathan Rumion
 *
 *   This file is part of The ASCII Project.
 *
 *   The ASCII Project is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   The ASCII Project is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with The ASCII Project.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 * =====================================================================================
 */

class Keyboard {

	int oldX, oldY;


	public:
		int curX, curY;
		int safX, safY;


		Keyboard(int x=MAIN_WIDTH/2, int y=MAIN_HEIGHT/2);
		void initKeyboard(int, int);

		bool handleKeys(Entity *target, TileMap *destination);

		void safeMoveCursor(int, int);
		void passSafeCursor();

		void moveCursor(int, int);

		void placeCursor(int, int);



};

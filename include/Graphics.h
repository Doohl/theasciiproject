/*
 * =====================================================================================
 *
 *       Filename:  Graphics.h
 *
 *    Description:  Our graphics handling library that relies on libtcod.
 *    		The intention is for this library to handle all reliance on
 *    		the libtcod graphics functions - thereby slowly modularilizing
 *    		the client to be rendered differently.
 *
 *        Version:  1.0
 *        Created:  07/05/2012
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



class GraphicsTCOD {


		TileMap *input;
		EntityMap *entMap;
		Entity *localPlayer;
		Entity *scan;
                float H, S, V, HD, SD, VD;
                float TH, TS, TV, THD, TSD, TVD;

	public:


		TCODConsole *output;

		GraphicsTCOD(TileMap *sourceMap, EntityMap *entMap, Entity *player);
		void init(TileMap *sourceMap, EntityMap *entMap, Entity *player);

		void render();
		void renderTiles();
		void renderEntities();

		void clearScreen();


};

























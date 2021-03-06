/*
 * =====================================================================================
 *
 *       Filename:  EntityMap.h
 *
 *    Description:  EntityMap is an object which stores the position of all
 *                  Entities on the "Map"
 *
 *        Version:  1.0
 *        Created:  07/11/2012
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



class EntityMap {

	private:

		int width, height;
                std::vector<Entity *> pos[MAP_WIDTH][MAP_HEIGHT];

		int colorTable[MAP_WIDTH][MAP_HEIGHT];
		char *symbolTable[MAP_WIDTH][MAP_HEIGHT];

		Entity *current;

	public:

		Entity *player;

		EntityMap(int x, int y);
		void initEntityMap(int x, int y);
		void refreshGraphicsMap();

		void addToMap(Entity *entity);
		void createEntity(int type);


		void initAllEnts(TileMap *destination);
		void refreshEntityMap();

		bool checkOccupied(int x, int y);
		Entity * outputLastEntity(int x, int y);

		int checkColor(int x, int y);

		void updateColorMap();



};

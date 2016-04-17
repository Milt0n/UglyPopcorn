/*
 This file is part of UglyPopCorn.
 
 UglyPopCorn is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 UglyPopCorn is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 
 Copyright 2012 Cédric L && Jean-Luc Z
 */

#ifndef __PROCESS_HPP__
#define __PROCESS_HPP__

void initProcess(int argc, char *argv[]);

void rootProcess(int f_iNbrPlayer);
void childProcess(int f_iIdProcess);

#endif

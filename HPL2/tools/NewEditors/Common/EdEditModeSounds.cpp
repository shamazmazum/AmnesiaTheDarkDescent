/*
 * Copyright © 2009-2020 Frictional Games
 *
 * This file is part of Amnesia: The Dark Descent.
 *
 * Amnesia: The Dark Descent is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * Amnesia: The Dark Descent is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Amnesia: The Dark Descent.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "../Common/EdEditModeSounds.h"

#include "../Common/Editor.h"
#include "../Common/EdActionHandler.h"
#include "../Common/EdWorld.h"

#include "../Common/EdObjSound.h"

#include "../Common/EdWindowViewport.h"
#include "../Common/EdWindowSounds.h"

//-----------------------------------------------------------------

///////////////////////////////////////////////////////////////////
// CONSTRUCTORS
///////////////////////////////////////////////////////////////////

//-----------------------------------------------------------------

cEdEditModeSounds::cEdEditModeSounds(iEditor* apEditor) : iEdEditModeScnObjCreator(apEditor, _W("Sounds"))
{
}

//-----------------------------------------------------------------

//-----------------------------------------------------------------

///////////////////////////////////////////////////////////////////
// PUBLIC METHODS
///////////////////////////////////////////////////////////////////

//-----------------------------------------------------------------

bool cEdEditModeSounds::SetUpCreationData(iEdObjectData* apData)
{
	if(iEdEditModeScnObjCreator::SetUpCreationData(apData)==false)
		return false;

	//cEdWindowSounds* pWin = (cEdWindowSounds*)GetEditorWindow();
	//apData->SetString(eSoundStr_Filename, cString::To8Char(pWin->GetSoundFile()));

	return true;
}

//-----------------------------------------------------------------

///////////////////////////////////////////////////////////////////
// PROTECTED METHODS
///////////////////////////////////////////////////////////////////

//-----------------------------------------------------------------

iEdObjectType* cEdEditModeSounds::CreateType()
{
	return hplNew(cTypeSound, ());
}

//-----------------------------------------------------------------

iEdWindow* cEdEditModeSounds::CreateWindow()
{
	return hplNew(cEdWindowSounds,(this));
}



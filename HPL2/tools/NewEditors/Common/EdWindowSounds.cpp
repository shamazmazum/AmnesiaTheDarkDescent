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

#include "../Common/EdWindowSounds.h"
#include "../Common/EdEditModeSounds.h"

#include "../Common/EdWorld.h"

//---------------------------------------------------------------------------

/////////////////////////////////////////////////////////////////////////////
// CONSTRUCTORS
/////////////////////////////////////////////////////////////////////////////

//---------------------------------------------------------------------------

cEdWindowSounds::cEdWindowSounds(iEdEditMode* apMode) : iEdScnObjCreatorPane(apMode)
{
}

//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

/////////////////////////////////////////////////////////////////////////////
// PROTECTED METHODS
/////////////////////////////////////////////////////////////////////////////

//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void cEdWindowSounds::OnCreateLayout()
{
	iEdScnObjCreatorPane::OnCreateLayout();

	cVector3f vPos = cVector3f(15,15,0.1f);

	AddNameControls();
	mpInpBaseName->SetPosition(vPos);
	vPos.y += mpInpBaseName->GetSize().y + 10;

	mpInpSound = CreateInputSound(vPos, _W("Sound file"),  GetBG());
}

//---------------------------------------------------------------------------

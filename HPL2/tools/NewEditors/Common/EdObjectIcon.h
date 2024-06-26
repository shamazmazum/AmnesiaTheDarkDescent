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

#ifndef HPLEDITOR_ENTITY_ICON_H
#define HPLEDITOR_ENTITY_ICON_H

//------------------------------------------------------------------

#include "../Common/StdAfx.h"
using namespace hpl;

//------------------------------------------------------------------

class iEdScnObject;
class iEdViewport;
class iEdEditMode;

//------------------------------------------------------------------

class cObjectIcon
{
public:
	cObjectIcon(iEdScnObject* apParent, const tString& asIconGfxName);
	~cObjectIcon();

	bool Check2DBoxIntersect(iEdViewport*, const cRect2l&);
	bool CheckRayIntersect(iEdViewport* , cVector3f* , tVector3fVec*, float* apT=NULL);

	void DrawIcon(iEdViewport* apViewport,
				  cRendererCallbackFunctions* apFunctions,
				  bool abIsSelected,
				  bool abIsActive,
				  const cColor& aColor,
				  const cColor& aDisabledCol=cColor(0.1f, 1));

	cRect2l GetIconClipRectangle(iEdViewport* apViewport, iEdScnObject* apEntity);

	cBoundingVolume* GetPickBV(iEdViewport* apViewport, const cVector3f& avSize=0.06f);

	void SetVisible(bool abX) { mbVisible = abX; }
protected:
	iEdScnObject* mpParent;
	cDummyRenderable* mpDummy;
	iTexture* mvIconGfx[2];

	cBoundingVolume mIconBV;
	bool mbVisible;
};

//-----------------------------------------------------------------------

#endif //HPLEDITOR_ENTITY_ICON_H

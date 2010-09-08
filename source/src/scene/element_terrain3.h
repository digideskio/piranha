//////////////////////////////////////////////////////////////////////////////
// Piranha, Copyright (c) 2004-2005 G-Truc Creation (www.g-truc.net)
// Under LGPL licence 
//////////////////////////////////////////////////////////////////////////////
//! \author Groove (groove@g-truc.net)
//! \date 12-29-2004
//! \file ./scene/element_terrain3.h
//! \brief 
//////////////////////////////////////////////////////////////////////////////

#ifndef __PIRANHA_SCENE_ELEMENT_TERRAIN3_H__
#define __PIRANHA_SCENE_ELEMENT_TERRAIN3_H__

#include "./element.h"
#include "../terrain/index.h"
#include "../gl/index.h"

namespace scene {

class CTerrain3 : public CElement
{
	friend class CManager;

private:
    terrain::CTerrain* m_pTerrain;
    float m_fTimeStart;
    gl::CFade* m_pFade1;

    CTerrain3 ();
    virtual ~CTerrain3 ();

public:
    virtual bool Load ();
    virtual void Begin ();
	virtual void End ();
    virtual bool IsEnd ();
    virtual void Update ();
    virtual void Render () const;
    virtual EType Type ();
    virtual bool HUD ();
};

}; // scene

#endif //__PIRANHA_SCENE_ELEMENT_TERRAIN3_H__
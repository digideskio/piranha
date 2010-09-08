//////////////////////////////////////////////////////////////////////////////
// Piranha, Copyright (c) 2004-2005 G-Truc Creation (www.g-truc.net)
// Under LGPL licence 
//////////////////////////////////////////////////////////////////////////////
//! \author Groove (groove@g-truc.net)
//! \date 11-15-2004
//! \file ./piranha/scene/element_fade.h
//! \brief 
//////////////////////////////////////////////////////////////////////////////

#ifndef __PIRANHA_SCENE_ELEMENT_FADE_H__
#define __PIRANHA_SCENE_ELEMENT_FADE_H__

#include "./element.h"

namespace scene {

class CFade : public CElement
{
	friend class CManager;

private:
    float m_fTimeStart;

    CFade ();
    virtual ~CFade ();

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

#endif //__PIRANHA_SCENE_ELEMENT_FADE_H__

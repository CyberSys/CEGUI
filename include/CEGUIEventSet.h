/************************************************************************
	filename: 	CEGUIEventSet.h
	created:	21/2/2004
	author:		Paul D Turner
	
	purpose:	Defines class for a named collection of Event objects
*************************************************************************/
/*************************************************************************
    Crazy Eddie's GUI System (http://crayzedsgui.sourceforge.net)
    Copyright (C)2004 Paul D Turner (crayzed@users.sourceforge.net)

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*************************************************************************/
#ifndef _CEGUIEventSet_h_
#define _CEGUIEventSet_h_

#include "CEGUIBase.h"
#include "CEGUIString.h"
#include "CEGUIEvent.h"
#include <map>


// Start of CEGUI namespace section
namespace CEGUI
{
/*!
\brief
	Class that collects together a set of Event objects.

	The EventSet used to collect Event objects together, and allow access
	to them by a unique name
*/
class CEGUIBASE_API EventSet
{
public:
	/*!
	\brief
		Constructor for EventSet objects
	*/
	EventSet(void);


	/*!
	\brief
		Destructor for EventSet objects
	*/
	virtual ~EventSet(void);


	/*!
	\brief
		Add a new Event to the EventSet with the given name.

	\param name
		String object containing the name to give the new Event.  The name must be unique for the EventSet.

	\return
		Nothing

	\exception AlreadyExistsException	Thrown if an Event already exists named \a name.
	*/
	void	addEvent(const String& name);


	/*!
	\brief
		Removes the Event with the given name.  All connections to the event are disconnected.

	\param name
		String object containing the name of the Event to remove.  If no such Event exists, nothing happens.

	\return
		Nothing.
	*/
	void	removeEvent(const String& name);


	/*!
	\brief
		Remove all Event objects from the EventSet

	\return
		Nothing
	*/
	void	removeAllEvents(void);


	/*!
	\brief
		Checks to see if an Event with the given name is present in the EventSet.

	\return
		true if an Event named \a name was found, or false if the Event was not found
	*/
	bool	isEventPresent(const String& name);


	/*!
	\brief
		Subscribes the the named Event.

	\param name
		String object containing the name of the Event to subscribe to.

	\param subscriber
		Function or object that is to be subscribed to the Event.

	\return
		Connection object that can be used to check the status of the Event connection and to disconnect (unsubscribe) from the Event.

	\exception UnknownObjectException	Thrown if an Event named \a name is not in the EventSet
	*/
	Event::Connection	subscribeEvent(const String& name, Event::Subscriber subscriber);


	/*!
	\brief
		Subscribes the the specified group of the named Event.

	\param name
		String object containing the name of the Event to subscribe to.

	\param group
		Group which is to be subscribed to.  Subscription groups are called in ascending order.

	\param subscriber
		Function or object that is to be subscribed to the Event.

	\return
		Connection object that can be used to check the status of the Event connection and to disconnect (unsubscribe) from the Event.

	\exception UnknownObjectException	Thrown if an Event named \a name is not in the EventSet
	*/
	Event::Connection	subscribeEvent(const String& name, Event::Group group, Event::Subscriber subscriber);


	/*!
	\brief
		Fires the named event passing the given EventArgs object.

	\param name
		String object holding the name of the Event that is to be fired (triggered)

	\param args
		The EventArgs (or derived) object that is to be bassed to each subscriber of the Event.

	\return
		Nothing.

	\exception UnknownObjectException	Thrown if no Event named \a name was found in the EventSet.
	*/
	void	fireEvent(const String& name, const EventArgs& args);

private:
	// Do not allow copying, assignment, or any other usage than simple creation.
	EventSet(EventSet& e) {}
	EventSet& operator=(EventSet& e) {return *this;}

	typedef std::map<String, Event*>	EventMap;
	EventMap	d_events;
};

} // End of  CEGUI namespace section

#endif	// end of guard _CEGUIEventSet_h_

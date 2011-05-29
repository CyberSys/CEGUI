// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "ItemListbox.pypp.hpp"

namespace bp = boost::python;

struct ItemListbox_wrapper : CEGUI::ItemListbox, bp::wrapper< CEGUI::ItemListbox > {

    ItemListbox_wrapper(::CEGUI::String const & type, ::CEGUI::String const & name )
    : CEGUI::ItemListbox( boost::ref(type), boost::ref(name) )
      , bp::wrapper< CEGUI::ItemListbox >(){
        // constructor
    
    }

    virtual ::CEGUI::Sizef getContentSize(  ) const  {
        if( bp::override func_getContentSize = this->get_override( "getContentSize" ) )
            return func_getContentSize(  );
        else{
            return this->CEGUI::ItemListbox::getContentSize(  );
        }
    }
    
    ::CEGUI::Sizef default_getContentSize(  ) const  {
        return CEGUI::ItemListbox::getContentSize( );
    }

    virtual void initialiseComponents(  ) {
        if( bp::override func_initialiseComponents = this->get_override( "initialiseComponents" ) )
            func_initialiseComponents(  );
        else{
            this->CEGUI::ItemListbox::initialiseComponents(  );
        }
    }
    
    void default_initialiseComponents(  ) {
        CEGUI::ItemListbox::initialiseComponents( );
    }

    virtual void layoutItemWidgets(  ) {
        if( bp::override func_layoutItemWidgets = this->get_override( "layoutItemWidgets" ) )
            func_layoutItemWidgets(  );
        else{
            this->CEGUI::ItemListbox::layoutItemWidgets(  );
        }
    }
    
    void default_layoutItemWidgets(  ) {
        CEGUI::ItemListbox::layoutItemWidgets( );
    }

    virtual void notifyItemClicked( ::CEGUI::ItemEntry * li ) {
        if( bp::override func_notifyItemClicked = this->get_override( "notifyItemClicked" ) )
            func_notifyItemClicked( boost::python::ptr(li) );
        else{
            this->CEGUI::ItemListbox::notifyItemClicked( boost::python::ptr(li) );
        }
    }
    
    void default_notifyItemClicked( ::CEGUI::ItemEntry * li ) {
        CEGUI::ItemListbox::notifyItemClicked( boost::python::ptr(li) );
    }

    virtual void notifyItemSelectState( ::CEGUI::ItemEntry * li, bool state ) {
        if( bp::override func_notifyItemSelectState = this->get_override( "notifyItemSelectState" ) )
            func_notifyItemSelectState( boost::python::ptr(li), state );
        else{
            this->CEGUI::ItemListbox::notifyItemSelectState( boost::python::ptr(li), state );
        }
    }
    
    void default_notifyItemSelectState( ::CEGUI::ItemEntry * li, bool state ) {
        CEGUI::ItemListbox::notifyItemSelectState( boost::python::ptr(li), state );
    }

    virtual bool testClassName_impl( ::CEGUI::String const & class_name ) const  {
        if( bp::override func_testClassName_impl = this->get_override( "testClassName_impl" ) )
            return func_testClassName_impl( boost::ref(class_name) );
        else{
            return this->CEGUI::ItemListbox::testClassName_impl( boost::ref(class_name) );
        }
    }
    
    bool default_testClassName_impl( ::CEGUI::String const & class_name ) const  {
        return CEGUI::ItemListbox::testClassName_impl( boost::ref(class_name) );
    }

    virtual void beginInitialisation(  ) {
        if( bp::override func_beginInitialisation = this->get_override( "beginInitialisation" ) )
            func_beginInitialisation(  );
        else{
            this->CEGUI::Window::beginInitialisation(  );
        }
    }
    
    void default_beginInitialisation(  ) {
        CEGUI::Window::beginInitialisation( );
    }

    virtual void cloneChildWidgetsTo( ::CEGUI::Window & target ) const  {
        if( bp::override func_cloneChildWidgetsTo = this->get_override( "cloneChildWidgetsTo" ) )
            func_cloneChildWidgetsTo( boost::ref(target) );
        else{
            this->CEGUI::Window::cloneChildWidgetsTo( boost::ref(target) );
        }
    }
    
    void default_cloneChildWidgetsTo( ::CEGUI::Window & target ) const  {
        CEGUI::Window::cloneChildWidgetsTo( boost::ref(target) );
    }

    virtual void clonePropertiesTo( ::CEGUI::Window & target ) const  {
        if( bp::override func_clonePropertiesTo = this->get_override( "clonePropertiesTo" ) )
            func_clonePropertiesTo( boost::ref(target) );
        else{
            this->CEGUI::Window::clonePropertiesTo( boost::ref(target) );
        }
    }
    
    void default_clonePropertiesTo( ::CEGUI::Window & target ) const  {
        CEGUI::Window::clonePropertiesTo( boost::ref(target) );
    }

    virtual void destroy(  ) {
        if( bp::override func_destroy = this->get_override( "destroy" ) )
            func_destroy(  );
        else{
            this->CEGUI::Window::destroy(  );
        }
    }
    
    void default_destroy(  ) {
        CEGUI::Window::destroy( );
    }

    virtual void endInitialisation(  ) {
        if( bp::override func_endInitialisation = this->get_override( "endInitialisation" ) )
            func_endInitialisation(  );
        else{
            this->CEGUI::ItemListBase::endInitialisation(  );
        }
    }
    
    void default_endInitialisation(  ) {
        CEGUI::ItemListBase::endInitialisation( );
    }

    virtual void fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        if( bp::override func_fireEvent = this->get_override( "fireEvent" ) )
            func_fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        else{
            this->CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
        }
    }
    
    void default_fireEvent( ::CEGUI::String const & name, ::CEGUI::EventArgs & args, ::CEGUI::String const & eventNamespace="" ) {
        CEGUI::EventSet::fireEvent( boost::ref(name), boost::ref(args), boost::ref(eventNamespace) );
    }

    virtual void getRenderingContext_impl( ::CEGUI::RenderingContext & ctx ) const  {
        if( bp::override func_getRenderingContext_impl = this->get_override( "getRenderingContext_impl" ) )
            func_getRenderingContext_impl( boost::ref(ctx) );
        else{
            this->CEGUI::Window::getRenderingContext_impl( boost::ref(ctx) );
        }
    }
    
    void default_getRenderingContext_impl( ::CEGUI::RenderingContext & ctx ) const  {
        CEGUI::Window::getRenderingContext_impl( boost::ref(ctx) );
    }

    virtual ::CEGUI::Rectf getUnclippedInnerRect_impl(  ) const  {
        if( bp::override func_getUnclippedInnerRect_impl = this->get_override( "getUnclippedInnerRect_impl" ) )
            return func_getUnclippedInnerRect_impl(  );
        else{
            return this->CEGUI::Window::getUnclippedInnerRect_impl(  );
        }
    }
    
    ::CEGUI::Rectf default_getUnclippedInnerRect_impl(  ) const  {
        return CEGUI::Window::getUnclippedInnerRect_impl( );
    }

    virtual bool isHit( ::CEGUI::Vector2f const & position, bool const allow_disabled=false ) const  {
        if( bp::override func_isHit = this->get_override( "isHit" ) )
            return func_isHit( boost::ref(position), allow_disabled );
        else{
            return this->CEGUI::Window::isHit( boost::ref(position), allow_disabled );
        }
    }
    
    bool default_isHit( ::CEGUI::Vector2f const & position, bool const allow_disabled=false ) const  {
        return CEGUI::Window::isHit( boost::ref(position), allow_disabled );
    }

    virtual void performChildWindowLayout(  ) {
        if( bp::override func_performChildWindowLayout = this->get_override( "performChildWindowLayout" ) )
            func_performChildWindowLayout(  );
        else{
            this->CEGUI::ItemListBase::performChildWindowLayout(  );
        }
    }
    
    void default_performChildWindowLayout(  ) {
        CEGUI::ItemListBase::performChildWindowLayout( );
    }

    virtual bool performCopy( ::CEGUI::Clipboard & clipboard ) {
        if( bp::override func_performCopy = this->get_override( "performCopy" ) )
            return func_performCopy( boost::ref(clipboard) );
        else{
            return this->CEGUI::Window::performCopy( boost::ref(clipboard) );
        }
    }
    
    bool default_performCopy( ::CEGUI::Clipboard & clipboard ) {
        return CEGUI::Window::performCopy( boost::ref(clipboard) );
    }

    virtual bool performCut( ::CEGUI::Clipboard & clipboard ) {
        if( bp::override func_performCut = this->get_override( "performCut" ) )
            return func_performCut( boost::ref(clipboard) );
        else{
            return this->CEGUI::Window::performCut( boost::ref(clipboard) );
        }
    }
    
    bool default_performCut( ::CEGUI::Clipboard & clipboard ) {
        return CEGUI::Window::performCut( boost::ref(clipboard) );
    }

    virtual bool performPaste( ::CEGUI::Clipboard & clipboard ) {
        if( bp::override func_performPaste = this->get_override( "performPaste" ) )
            return func_performPaste( boost::ref(clipboard) );
        else{
            return this->CEGUI::Window::performPaste( boost::ref(clipboard) );
        }
    }
    
    bool default_performPaste( ::CEGUI::Clipboard & clipboard ) {
        return CEGUI::Window::performPaste( boost::ref(clipboard) );
    }

    virtual void setLookNFeel( ::CEGUI::String const & look ) {
        if( bp::override func_setLookNFeel = this->get_override( "setLookNFeel" ) )
            func_setLookNFeel( boost::ref(look) );
        else{
            this->CEGUI::Window::setLookNFeel( boost::ref(look) );
        }
    }
    
    void default_setLookNFeel( ::CEGUI::String const & look ) {
        CEGUI::Window::setLookNFeel( boost::ref(look) );
    }

    virtual void setMargin( ::CEGUI::UBox const & margin ) {
        if( bp::override func_setMargin = this->get_override( "setMargin" ) )
            func_setMargin( boost::ref(margin) );
        else{
            this->CEGUI::Window::setMargin( boost::ref(margin) );
        }
    }
    
    void default_setMargin( ::CEGUI::UBox const & margin ) {
        CEGUI::Window::setMargin( boost::ref(margin) );
    }

    virtual void sizeToContent(  ) {
        if( bp::override func_sizeToContent = this->get_override( "sizeToContent" ) )
            func_sizeToContent(  );
        else{
            this->CEGUI::ItemListBase::sizeToContent(  );
        }
    }
    
    void default_sizeToContent(  ) {
        CEGUI::ItemListBase::sizeToContent( );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), boost::ref(subscriber_name) );
    }

    virtual ::CEGUI::RefCounted< CEGUI::BoundSlot > subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        if( bp::override func_subscribeScriptedEvent = this->get_override( "subscribeScriptedEvent" ) )
            return func_subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        else{
            return this->CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
        }
    }
    
    ::CEGUI::RefCounted< CEGUI::BoundSlot > default_subscribeScriptedEvent( ::CEGUI::String const & name, unsigned int group, ::CEGUI::String const & subscriber_name ) {
        return CEGUI::EventSet::subscribeScriptedEvent( boost::ref(name), group, boost::ref(subscriber_name) );
    }

    virtual void update( float elapsed ) {
        if( bp::override func_update = this->get_override( "update" ) )
            func_update( elapsed );
        else{
            this->CEGUI::Window::update( elapsed );
        }
    }
    
    void default_update( float elapsed ) {
        CEGUI::Window::update( elapsed );
    }

    virtual void writeXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        if( bp::override func_writeXMLToStream = this->get_override( "writeXMLToStream" ) )
            func_writeXMLToStream( boost::ref(xml_stream) );
        else{
            this->CEGUI::Window::writeXMLToStream( boost::ref(xml_stream) );
        }
    }
    
    void default_writeXMLToStream( ::CEGUI::XMLSerializer & xml_stream ) const  {
        CEGUI::Window::writeXMLToStream( boost::ref(xml_stream) );
    }

};

void register_ItemListbox_class(){

    { //::CEGUI::ItemListbox
        typedef bp::class_< ItemListbox_wrapper, bp::bases< CEGUI::ScrolledItemListBase >, boost::noncopyable > ItemListbox_exposer_t;
        ItemListbox_exposer_t ItemListbox_exposer = ItemListbox_exposer_t( "ItemListbox", "*!\n\
        \n\
            ItemListbox window class\n\
        *\n", bp::init< CEGUI::String const &, CEGUI::String const & >(( bp::arg("type"), bp::arg("name") ), "************************************************************************\n\
            Object Construction and Destruction\n\
        *************************************************************************\n\
        *!\n\
        \n\
            Constructor for the ItemListbox base class constructor.\n\
        *\n") );
        bp::scope ItemListbox_scope( ItemListbox_exposer );
        { //::CEGUI::ItemListbox::clearAllSelections
        
            typedef void ( ::CEGUI::ItemListbox::*clearAllSelections_function_type )(  ) ;
            
            ItemListbox_exposer.def( 
                "clearAllSelections"
                , clearAllSelections_function_type( &::CEGUI::ItemListbox::clearAllSelections )
                , "*!\n\
            \n\
                Clears all selections.\n\
            *\n" );
        
        }
        { //::CEGUI::ItemListbox::getContentSize
        
            typedef ::CEGUI::Sizef ( ::CEGUI::ItemListbox::*getContentSize_function_type )(  ) const;
            typedef ::CEGUI::Sizef ( ItemListbox_wrapper::*default_getContentSize_function_type )(  ) const;
            
            ItemListbox_exposer.def( 
                "getContentSize"
                , getContentSize_function_type(&::CEGUI::ItemListbox::getContentSize)
                , default_getContentSize_function_type(&ItemListbox_wrapper::default_getContentSize) );
        
        }
        { //::CEGUI::ItemListbox::getFirstSelectedItem
        
            typedef ::CEGUI::ItemEntry * ( ::CEGUI::ItemListbox::*getFirstSelectedItem_function_type )( ::size_t ) const;
            
            ItemListbox_exposer.def( 
                "getFirstSelectedItem"
                , getFirstSelectedItem_function_type( &::CEGUI::ItemListbox::getFirstSelectedItem )
                , ( bp::arg("start_index")=(::size_t)(0) )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                \n\
                    Returns a pointer to the first selected item\n\
            \n\
                @param start_index\n\
                    The index where the search should begin. If omitted the search will\n\
                    begin with the first item.\n\
            \n\
                @return\n\
                    A pointer to the first selected item in the listbox.\n\
                    If no item is selected the return value is 0.\n\
                    If  start_index is out of bounds the return value is 0.\n\
            \n\
                \note\n\
                    If multiselect is disabled then this does the equivalent of calling\n\
                    getLastSelectedItem.\n\
                    If multiselect is enabled it will search the array starting at  start_index\n\
                *\n" );
        
        }
        { //::CEGUI::ItemListbox::getLastSelectedItem
        
            typedef ::CEGUI::ItemEntry * ( ::CEGUI::ItemListbox::*getLastSelectedItem_function_type )(  ) const;
            
            ItemListbox_exposer.def( 
                "getLastSelectedItem"
                , getLastSelectedItem_function_type( &::CEGUI::ItemListbox::getLastSelectedItem )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                \n\
                    Returns a pointer to the last selected item.\n\
            \n\
                @return\n\
                    A pointer to the last selected item, 0 is none.\n\
                *\n" );
        
        }
        { //::CEGUI::ItemListbox::getNextSelectedItem
        
            typedef ::CEGUI::ItemEntry * ( ::CEGUI::ItemListbox::*getNextSelectedItem_function_type )(  ) const;
            
            ItemListbox_exposer.def( 
                "getNextSelectedItem"
                , getNextSelectedItem_function_type( &::CEGUI::ItemListbox::getNextSelectedItem )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                \n\
                    Returns a pointer to the next seleced item relative to a previous call to\n\
                    getFirstSelectedItem or getNextSelectedItem.\n\
            \n\
                @return\n\
                    A pointer to the next seleced item. If there are no further selected items\n\
                    the return value is 0.\n\
                    If multiselect is disabled the return value is 0.\n\
            \n\
                \note\n\
                    This member function will take on from where the last call to\n\
                    getFirstSelectedItem or getNextSelectedItem returned. So be sure to start with a\n\
                    call to getFirstSelectedItem.\n\
            \n\
                    This member function should be preferred over getNextSelectedItemAfter as it will\n\
                    perform better, especially on large lists.\n\
                *\n" );
        
        }
        { //::CEGUI::ItemListbox::getNextSelectedItemAfter
        
            typedef ::CEGUI::ItemEntry * ( ::CEGUI::ItemListbox::*getNextSelectedItemAfter_function_type )( ::CEGUI::ItemEntry const * ) const;
            
            ItemListbox_exposer.def( 
                "getNextSelectedItemAfter"
                , getNextSelectedItemAfter_function_type( &::CEGUI::ItemListbox::getNextSelectedItemAfter )
                , ( bp::arg("start_item") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                \n\
                    Returns a pointer to the next selected item after the item 'start_item' given.\n\
            \n\
                \note\n\
                    This member function will search the array from the beginning and will be slow\n\
                    for large lists, it will not advance the internal counter used by\n\
                    getFirstSelectedItem and getNextSelectedItem either.\n\
                *\n" );
        
        }
        { //::CEGUI::ItemListbox::getSelectedCount
        
            typedef ::size_t ( ::CEGUI::ItemListbox::*getSelectedCount_function_type )(  ) const;
            
            ItemListbox_exposer.def( 
                "getSelectedCount"
                , getSelectedCount_function_type( &::CEGUI::ItemListbox::getSelectedCount )
                , "************************************************************************\n\
                Accessors\n\
            *************************************************************************\n\
            *!\n\
            \n\
                Returns the number of selected items in this ItemListbox.\n\
            *\n" );
        
        }
        { //::CEGUI::ItemListbox::initialiseComponents
        
            typedef void ( ::CEGUI::ItemListbox::*initialiseComponents_function_type )(  ) ;
            typedef void ( ItemListbox_wrapper::*default_initialiseComponents_function_type )(  ) ;
            
            ItemListbox_exposer.def( 
                "initialiseComponents"
                , initialiseComponents_function_type(&::CEGUI::ItemListbox::initialiseComponents)
                , default_initialiseComponents_function_type(&ItemListbox_wrapper::default_initialiseComponents) );
        
        }
        { //::CEGUI::ItemListbox::isItemSelected
        
            typedef bool ( ::CEGUI::ItemListbox::*isItemSelected_function_type )( ::size_t ) const;
            
            ItemListbox_exposer.def( 
                "isItemSelected"
                , isItemSelected_function_type( &::CEGUI::ItemListbox::isItemSelected )
                , ( bp::arg("index") )
                , "*!\n\
            \n\
                Returns 'true' if the item at the given index is selectable and currently selected.\n\
            *\n" );
        
        }
        { //::CEGUI::ItemListbox::isMultiSelectEnabled
        
            typedef bool ( ::CEGUI::ItemListbox::*isMultiSelectEnabled_function_type )(  ) const;
            
            ItemListbox_exposer.def( 
                "isMultiSelectEnabled"
                , isMultiSelectEnabled_function_type( &::CEGUI::ItemListbox::isMultiSelectEnabled )
                , "*!\n\
            \n\
                Returns 'true' if multiple selections are allowed. 'false' if not.\n\
            *\n" );
        
        }
        { //::CEGUI::ItemListbox::layoutItemWidgets
        
            typedef void ( ::CEGUI::ItemListbox::*layoutItemWidgets_function_type )(  ) ;
            typedef void ( ItemListbox_wrapper::*default_layoutItemWidgets_function_type )(  ) ;
            
            ItemListbox_exposer.def( 
                "layoutItemWidgets"
                , layoutItemWidgets_function_type(&::CEGUI::ItemListbox::layoutItemWidgets)
                , default_layoutItemWidgets_function_type(&ItemListbox_wrapper::default_layoutItemWidgets) );
        
        }
        { //::CEGUI::ItemListbox::notifyItemClicked
        
            typedef void ( ::CEGUI::ItemListbox::*notifyItemClicked_function_type )( ::CEGUI::ItemEntry * ) ;
            typedef void ( ItemListbox_wrapper::*default_notifyItemClicked_function_type )( ::CEGUI::ItemEntry * ) ;
            
            ItemListbox_exposer.def( 
                "notifyItemClicked"
                , notifyItemClicked_function_type(&::CEGUI::ItemListbox::notifyItemClicked)
                , default_notifyItemClicked_function_type(&ItemListbox_wrapper::default_notifyItemClicked)
                , ( bp::arg("li") ) );
        
        }
        { //::CEGUI::ItemListbox::notifyItemSelectState
        
            typedef void ( ::CEGUI::ItemListbox::*notifyItemSelectState_function_type )( ::CEGUI::ItemEntry *,bool ) ;
            typedef void ( ItemListbox_wrapper::*default_notifyItemSelectState_function_type )( ::CEGUI::ItemEntry *,bool ) ;
            
            ItemListbox_exposer.def( 
                "notifyItemSelectState"
                , notifyItemSelectState_function_type(&::CEGUI::ItemListbox::notifyItemSelectState)
                , default_notifyItemSelectState_function_type(&ItemListbox_wrapper::default_notifyItemSelectState)
                , ( bp::arg("li"), bp::arg("state") ) );
        
        }
        { //::CEGUI::ItemListbox::selectAllItems
        
            typedef void ( ::CEGUI::ItemListbox::*selectAllItems_function_type )(  ) ;
            
            ItemListbox_exposer.def( 
                "selectAllItems"
                , selectAllItems_function_type( &::CEGUI::ItemListbox::selectAllItems )
                , "*!\n\
            \n\
                Select all items.\n\
                Does nothing if multiselect is disabled.\n\
            *\n" );
        
        }
        { //::CEGUI::ItemListbox::selectRange
        
            typedef void ( ::CEGUI::ItemListbox::*selectRange_function_type )( ::size_t,::size_t ) ;
            
            ItemListbox_exposer.def( 
                "selectRange"
                , selectRange_function_type( &::CEGUI::ItemListbox::selectRange )
                , ( bp::arg("a"), bp::arg("z") )
                , "*!\n\
                \n\
                    Select a range of items.\n\
            \n\
                @param a\n\
                    Start item. (inclusive)\n\
            \n\
                @param z\n\
                    End item. (inclusive)\n\
                *\n" );
        
        }
        { //::CEGUI::ItemListbox::setMultiSelectEnabled
        
            typedef void ( ::CEGUI::ItemListbox::*setMultiSelectEnabled_function_type )( bool ) ;
            
            ItemListbox_exposer.def( 
                "setMultiSelectEnabled"
                , setMultiSelectEnabled_function_type( &::CEGUI::ItemListbox::setMultiSelectEnabled )
                , ( bp::arg("state") )
                , "*!\n\
            \n\
                Set whether or not multiple selections should be allowed.\n\
            *\n" );
        
        }
        { //::CEGUI::ItemListbox::testClassName_impl
        
            typedef bool ( ::CEGUI::ItemListbox::*testClassName_impl_function_type )( ::CEGUI::String const & ) const;
            typedef bool ( ItemListbox_wrapper::*default_testClassName_impl_function_type )( ::CEGUI::String const & ) const;
            
            ItemListbox_exposer.def( 
                "testClassName_impl"
                , testClassName_impl_function_type(&::CEGUI::ItemListbox::testClassName_impl)
                , default_testClassName_impl_function_type(&ItemListbox_wrapper::default_testClassName_impl)
                , ( bp::arg("class_name") ) );
        
        }
        ItemListbox_exposer.add_static_property( "EventMultiSelectModeChanged"
                        , bp::make_getter( &CEGUI::ItemListbox::EventMultiSelectModeChanged
                                , bp::return_value_policy< bp::return_by_value >() ) );
        ItemListbox_exposer.add_static_property( "EventSelectionChanged"
                        , bp::make_getter( &CEGUI::ItemListbox::EventSelectionChanged
                                , bp::return_value_policy< bp::return_by_value >() ) );
        { //::CEGUI::Window::beginInitialisation
        
            typedef void ( ::CEGUI::Window::*beginInitialisation_function_type )(  ) ;
            typedef void ( ItemListbox_wrapper::*default_beginInitialisation_function_type )(  ) ;
            
            ItemListbox_exposer.def( 
                "beginInitialisation"
                , beginInitialisation_function_type(&::CEGUI::Window::beginInitialisation)
                , default_beginInitialisation_function_type(&ItemListbox_wrapper::default_beginInitialisation) );
        
        }
        { //::CEGUI::Window::cloneChildWidgetsTo
        
            typedef void ( ::CEGUI::Window::*cloneChildWidgetsTo_function_type )( ::CEGUI::Window & ) const;
            typedef void ( ItemListbox_wrapper::*default_cloneChildWidgetsTo_function_type )( ::CEGUI::Window & ) const;
            
            ItemListbox_exposer.def( 
                "cloneChildWidgetsTo"
                , cloneChildWidgetsTo_function_type(&::CEGUI::Window::cloneChildWidgetsTo)
                , default_cloneChildWidgetsTo_function_type(&ItemListbox_wrapper::default_cloneChildWidgetsTo)
                , ( bp::arg("target") ) );
        
        }
        { //::CEGUI::Window::clonePropertiesTo
        
            typedef void ( ::CEGUI::Window::*clonePropertiesTo_function_type )( ::CEGUI::Window & ) const;
            typedef void ( ItemListbox_wrapper::*default_clonePropertiesTo_function_type )( ::CEGUI::Window & ) const;
            
            ItemListbox_exposer.def( 
                "clonePropertiesTo"
                , clonePropertiesTo_function_type(&::CEGUI::Window::clonePropertiesTo)
                , default_clonePropertiesTo_function_type(&ItemListbox_wrapper::default_clonePropertiesTo)
                , ( bp::arg("target") ) );
        
        }
        { //::CEGUI::Window::destroy
        
            typedef void ( ::CEGUI::Window::*destroy_function_type )(  ) ;
            typedef void ( ItemListbox_wrapper::*default_destroy_function_type )(  ) ;
            
            ItemListbox_exposer.def( 
                "destroy"
                , destroy_function_type(&::CEGUI::Window::destroy)
                , default_destroy_function_type(&ItemListbox_wrapper::default_destroy) );
        
        }
        { //::CEGUI::ItemListBase::endInitialisation
        
            typedef void ( ::CEGUI::ItemListBase::*endInitialisation_function_type )(  ) ;
            typedef void ( ItemListbox_wrapper::*default_endInitialisation_function_type )(  ) ;
            
            ItemListbox_exposer.def( 
                "endInitialisation"
                , endInitialisation_function_type(&::CEGUI::ItemListBase::endInitialisation)
                , default_endInitialisation_function_type(&ItemListbox_wrapper::default_endInitialisation) );
        
        }
        { //::CEGUI::EventSet::fireEvent
        
            typedef void ( ::CEGUI::EventSet::*fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            typedef void ( ItemListbox_wrapper::*default_fireEvent_function_type )( ::CEGUI::String const &,::CEGUI::EventArgs &,::CEGUI::String const & ) ;
            
            ItemListbox_exposer.def( 
                "fireEvent"
                , fireEvent_function_type(&::CEGUI::EventSet::fireEvent)
                , default_fireEvent_function_type(&ItemListbox_wrapper::default_fireEvent)
                , ( bp::arg("name"), bp::arg("args"), bp::arg("eventNamespace")="" ) );
        
        }
        { //::CEGUI::Window::getRenderedStringParser
        
            typedef ::CEGUI::RenderedStringParser & ( ::CEGUI::Window::*getRenderedStringParser_function_type )(  ) const;
            
            ItemListbox_exposer.def( 
                "getRenderedStringParser"
                , getRenderedStringParser_function_type(&::CEGUI::Window::getRenderedStringParser)
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::CEGUI::Window::getRenderingContext_impl
        
            typedef void ( ::CEGUI::Window::*getRenderingContext_impl_function_type )( ::CEGUI::RenderingContext & ) const;
            typedef void ( ItemListbox_wrapper::*default_getRenderingContext_impl_function_type )( ::CEGUI::RenderingContext & ) const;
            
            ItemListbox_exposer.def( 
                "getRenderingContext_impl"
                , getRenderingContext_impl_function_type(&::CEGUI::Window::getRenderingContext_impl)
                , default_getRenderingContext_impl_function_type(&ItemListbox_wrapper::default_getRenderingContext_impl)
                , ( bp::arg("ctx") ) );
        
        }
        { //::CEGUI::Window::getUnclippedInnerRect_impl
        
            typedef ::CEGUI::Rectf ( ::CEGUI::Window::*getUnclippedInnerRect_impl_function_type )(  ) const;
            typedef ::CEGUI::Rectf ( ItemListbox_wrapper::*default_getUnclippedInnerRect_impl_function_type )(  ) const;
            
            ItemListbox_exposer.def( 
                "getUnclippedInnerRect_impl"
                , getUnclippedInnerRect_impl_function_type(&::CEGUI::Window::getUnclippedInnerRect_impl)
                , default_getUnclippedInnerRect_impl_function_type(&ItemListbox_wrapper::default_getUnclippedInnerRect_impl) );
        
        }
        { //::CEGUI::Window::isHit
        
            typedef bool ( ::CEGUI::Window::*isHit_function_type )( ::CEGUI::Vector2f const &,bool const ) const;
            typedef bool ( ItemListbox_wrapper::*default_isHit_function_type )( ::CEGUI::Vector2f const &,bool const ) const;
            
            ItemListbox_exposer.def( 
                "isHit"
                , isHit_function_type(&::CEGUI::Window::isHit)
                , default_isHit_function_type(&ItemListbox_wrapper::default_isHit)
                , ( bp::arg("position"), bp::arg("allow_disabled")=(bool const)(false) ) );
        
        }
        { //::CEGUI::ItemListBase::performChildWindowLayout
        
            typedef void ( ::CEGUI::ItemListBase::*performChildWindowLayout_function_type )(  ) ;
            typedef void ( ItemListbox_wrapper::*default_performChildWindowLayout_function_type )(  ) ;
            
            ItemListbox_exposer.def( 
                "performChildWindowLayout"
                , performChildWindowLayout_function_type(&::CEGUI::ItemListBase::performChildWindowLayout)
                , default_performChildWindowLayout_function_type(&ItemListbox_wrapper::default_performChildWindowLayout) );
        
        }
        { //::CEGUI::Window::performCopy
        
            typedef bool ( ::CEGUI::Window::*performCopy_function_type )( ::CEGUI::Clipboard & ) ;
            typedef bool ( ItemListbox_wrapper::*default_performCopy_function_type )( ::CEGUI::Clipboard & ) ;
            
            ItemListbox_exposer.def( 
                "performCopy"
                , performCopy_function_type(&::CEGUI::Window::performCopy)
                , default_performCopy_function_type(&ItemListbox_wrapper::default_performCopy)
                , ( bp::arg("clipboard") ) );
        
        }
        { //::CEGUI::Window::performCut
        
            typedef bool ( ::CEGUI::Window::*performCut_function_type )( ::CEGUI::Clipboard & ) ;
            typedef bool ( ItemListbox_wrapper::*default_performCut_function_type )( ::CEGUI::Clipboard & ) ;
            
            ItemListbox_exposer.def( 
                "performCut"
                , performCut_function_type(&::CEGUI::Window::performCut)
                , default_performCut_function_type(&ItemListbox_wrapper::default_performCut)
                , ( bp::arg("clipboard") ) );
        
        }
        { //::CEGUI::Window::performPaste
        
            typedef bool ( ::CEGUI::Window::*performPaste_function_type )( ::CEGUI::Clipboard & ) ;
            typedef bool ( ItemListbox_wrapper::*default_performPaste_function_type )( ::CEGUI::Clipboard & ) ;
            
            ItemListbox_exposer.def( 
                "performPaste"
                , performPaste_function_type(&::CEGUI::Window::performPaste)
                , default_performPaste_function_type(&ItemListbox_wrapper::default_performPaste)
                , ( bp::arg("clipboard") ) );
        
        }
        { //::CEGUI::Window::setLookNFeel
        
            typedef void ( ::CEGUI::Window::*setLookNFeel_function_type )( ::CEGUI::String const & ) ;
            typedef void ( ItemListbox_wrapper::*default_setLookNFeel_function_type )( ::CEGUI::String const & ) ;
            
            ItemListbox_exposer.def( 
                "setLookNFeel"
                , setLookNFeel_function_type(&::CEGUI::Window::setLookNFeel)
                , default_setLookNFeel_function_type(&ItemListbox_wrapper::default_setLookNFeel)
                , ( bp::arg("look") ) );
        
        }
        { //::CEGUI::Window::setMargin
        
            typedef void ( ::CEGUI::Window::*setMargin_function_type )( ::CEGUI::UBox const & ) ;
            typedef void ( ItemListbox_wrapper::*default_setMargin_function_type )( ::CEGUI::UBox const & ) ;
            
            ItemListbox_exposer.def( 
                "setMargin"
                , setMargin_function_type(&::CEGUI::Window::setMargin)
                , default_setMargin_function_type(&ItemListbox_wrapper::default_setMargin)
                , ( bp::arg("margin") ) );
        
        }
        { //::CEGUI::ItemListBase::sizeToContent
        
            typedef void ( ::CEGUI::ItemListBase::*sizeToContent_function_type )(  ) ;
            typedef void ( ItemListbox_wrapper::*default_sizeToContent_function_type )(  ) ;
            
            ItemListbox_exposer.def( 
                "sizeToContent"
                , sizeToContent_function_type(&::CEGUI::ItemListBase::sizeToContent)
                , default_sizeToContent_function_type(&ItemListbox_wrapper::default_sizeToContent) );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ItemListbox_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,::CEGUI::String const & ) ;
            
            ItemListbox_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&ItemListbox_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("subscriber_name") ) );
        
        }
        { //::CEGUI::EventSet::subscribeScriptedEvent
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::EventSet::*subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ItemListbox_wrapper::*default_subscribeScriptedEvent_function_type )( ::CEGUI::String const &,unsigned int,::CEGUI::String const & ) ;
            
            ItemListbox_exposer.def( 
                "subscribeScriptedEvent"
                , subscribeScriptedEvent_function_type(&::CEGUI::EventSet::subscribeScriptedEvent)
                , default_subscribeScriptedEvent_function_type(&ItemListbox_wrapper::default_subscribeScriptedEvent)
                , ( bp::arg("name"), bp::arg("group"), bp::arg("subscriber_name") ) );
        
        }
        { //::CEGUI::Window::update
        
            typedef void ( ::CEGUI::Window::*update_function_type )( float ) ;
            typedef void ( ItemListbox_wrapper::*default_update_function_type )( float ) ;
            
            ItemListbox_exposer.def( 
                "update"
                , update_function_type(&::CEGUI::Window::update)
                , default_update_function_type(&ItemListbox_wrapper::default_update)
                , ( bp::arg("elapsed") ) );
        
        }
        { //::CEGUI::Window::writeXMLToStream
        
            typedef void ( ::CEGUI::Window::*writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            typedef void ( ItemListbox_wrapper::*default_writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            ItemListbox_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type(&::CEGUI::Window::writeXMLToStream)
                , default_writeXMLToStream_function_type(&ItemListbox_wrapper::default_writeXMLToStream)
                , ( bp::arg("xml_stream") ) );
        
        }
    }

}

// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/FrameStamp>
#include <osg/Object>
#include <osgDB/ImagePager>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgDB::ImagePager)
	I_DeclaringFile("osgDB/ImagePager");
	I_BaseType(osg::NodeVisitor::ImageRequestHandler);
	I_Constructor0(____ImagePager,
	               "",
	               "");
	I_Method4(void, requestImageFile, IN, const std::string &, fileName, IN, osg::Object *, attachmentPoint, IN, double, timeToMergeBy, IN, const osg::FrameStamp *, framestamp,
	          Properties::VIRTUAL,
	          __void__requestImageFile__C5_std_string_R1__osg_Object_P1__double__C5_osg_FrameStamp_P1,
	          "",
	          "");
	I_Method0(bool, requiresUpdateSceneGraph,
	          Properties::VIRTUAL,
	          __bool__requiresUpdateSceneGraph,
	          "Return true if there are pending updates to the scene graph that require a call to updateSceneGraph(double). ",
	          "");
	I_Method1(void, updateSceneGraph, IN, double, currentFrameTime,
	          Properties::VIRTUAL,
	          __void__updateSceneGraph__double,
	          "Merge the changes to the scene graph. ",
	          "");
	I_Method0(int, cancel,
	          Properties::NON_VIRTUAL,
	          __int__cancel,
	          "",
	          "");
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgDB::ImagePager::ImageThread::Mode)
	I_DeclaringFile("osgDB/ImagePager");
	I_EnumLabel(osgDB::ImagePager::ImageThread::HANDLE_ALL_REQUESTS);
	I_EnumLabel(osgDB::ImagePager::ImageThread::HANDLE_NON_HTTP);
	I_EnumLabel(osgDB::ImagePager::ImageThread::HANDLE_ONLY_HTTP);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgDB::ImagePager::ImageThread)
	I_DeclaringFile("osgDB/ImagePager");
	I_BaseType(osg::Referenced);
	I_BaseType(OpenThreads::Thread);
	I_Constructor3(IN, osgDB::ImagePager *, pager, IN, osgDB::ImagePager::ImageThread::Mode, mode, IN, const std::string &, name,
	               ____ImageThread__ImagePager_P1__Mode__C5_std_string_R1,
	               "",
	               "");
	I_Constructor2(IN, const osgDB::ImagePager::ImageThread &, dt, IN, osgDB::ImagePager *, pager,
	               ____ImageThread__C5_ImageThread_R1__ImagePager_P1,
	               "",
	               "");
	I_Method1(void, setDone, IN, bool, done,
	          Properties::NON_VIRTUAL,
	          __void__setDone__bool,
	          "",
	          "");
	I_Method0(bool, getDone,
	          Properties::NON_VIRTUAL,
	          __bool__getDone,
	          "",
	          "");
	I_Method0(int, cancel,
	          Properties::VIRTUAL,
	          __int__cancel,
	          "Cancel the thread. ",
	          "Equivalent to SIGKILL.0 if normal, -1 if errno set, errno code otherwise.  ");
	I_Method0(void, run,
	          Properties::VIRTUAL,
	          __void__run,
	          "Thread's run method. ",
	          "Must be implemented by derived classes. This is where the action happens. ");
	I_SimpleProperty(bool, Done, 
	                 __bool__getDone, 
	                 __void__setDone__bool);
END_REFLECTOR

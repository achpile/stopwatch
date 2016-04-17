/***********************************************************************
     * File       : defines.hpp
     * Created    : Oct 09, 2014
     * Copyright  : (C) 2014 Achpile
     * Author     : Fedosov Alexander
     * Email      : achpile@gmail.com

***********************************************************************/
#ifndef __DEFINES
#define __DEFINES



/***********************************************************************
     * Function macros

***********************************************************************/
#define deleteList(list)       for (; !(list).empty(); delete (list).back(), (list).pop_back())



/***********************************************************************
     * Window

***********************************************************************/
#define WIDTH   250
#define HEIGHT  500
#define VISIBLE 15

#endif

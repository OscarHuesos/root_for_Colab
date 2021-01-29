#ifndef _XROOTD_FILELOCK1_H_
#define _XROOTD_FILELOCK1_H_
/******************************************************************************/
/*                                                                            */
/*                 X r d X r o o t d F i l e L o c k 1 . h h                  */
/*                                                                            */
/* (c) 2004 by the Board of Trustees of the Leland Stanford, Jr., University  */
/*   Produced by Andrew Hanushevsky for Stanford University under contract    */
/*              DE-AC02-76-SFO0515 with the Department of Energy              */
/*                                                                            */
/* This file is part of the XRootD software suite.                            */
/*                                                                            */
/* XRootD is free software: you can redistribute it and/or modify it under    */
/* the terms of the GNU Lesser General Public License as published by the     */
/* Free Software Foundation, either version 3 of the License, or (at your     */
/* option) any later version.                                                 */
/*                                                                            */
/* XRootD is distributed in the hope that it will be useful, but WITHOUT      */
/* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or      */
/* FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public       */
/* License for more details.                                                  */
/*                                                                            */
/* You should have received a copy of the GNU Lesser General Public License   */
/* along with XRootD in a file called COPYING.LESSER (LGPL license) and file  */
/* COPYING (GPL license).  If not, see <http://www.gnu.org/licenses/>.        */
/*                                                                            */
/* The copyright holder's institutional names and contributor's names may not */
/* be used to endorse or promote products derived from this software without  */
/* specific prior written permission of the institution or contributor.       */
/******************************************************************************/

#include "XrdSys/XrdSysPthread.hh"
#include "XrdXrootd/XrdXrootdFileLock.hh"

// This class implements a single server per host lock manager by simply using
// an in-memory hash table to keep track of file locks.
//
class XrdXrootdFileLock1 : XrdXrootdFileLock
{
public:

        int   Lock(const char *path, char mode, bool force);

        void  numLocks(const char *path, int &rcnt, int &wcnt);

        int Unlock(const char *path, char mode);

            XrdXrootdFileLock1() {}
           ~XrdXrootdFileLock1() {} // This object is never destroyed!
private:
static const char *TraceID;
static XrdSysMutex  LTMutex;
};
#endif

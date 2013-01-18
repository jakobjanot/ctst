#ifndef __CTST_MEMORY_MALLOC_H__
#define __CTST_MEMORY_MALLOC_H__
/*
  ctst - (c) 2007 Nicolas Lehuen
  This is released under the LGPL - see http://www.gnu.org/licenses/lgpl.html

  $Id: $

  This file defines special types for the storage implementation based on
  malloc/free.
*/
#define CTST_STORAGE_TYPE_MALLOC_STORAGE

typedef struct struct_ctst_node ctst_node;
typedef ctst_node* ctst_node_ref;

#include <storage.h>

#endif

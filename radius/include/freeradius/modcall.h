#ifndef FR_MODCALL_H
#define FR_MODCALL_H

/* modcall.h: the outside interface to the module-calling tree. Includes
 * functions to build the tree from the config file, and to call it by
 * feeding it REQUESTs.
 *
 * Version: $Id: 7486ef168b56ce0943cde8670fc15932f47b62a0 $ */

#include <freeradius/conffile.h> /* Need CONF_* definitions */
#include <freeradius/modules.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 *	For each authorize/authtype/etc, we have an ordered
 *	tree of instances to call.  This data structure keeps track
 *	of that order.
 */
typedef struct modcallable modcallable;

int modcall_fixup_update(vp_map_t *map, void *ctx);

int modcall(rlm_components_t component, modcallable *c, REQUEST *request);

/* Parse a module-method's config section (e.g. authorize{}) into a tree that
 * may be called with modcall() */
modcallable *compile_modgroup(modcallable *parent,
			      rlm_components_t component, CONF_SECTION *cs);

/* Create a single modcallable node that references a module instance. This
 * may be a CONF_SECTION containing action specifiers like "notfound = return"
 * or a simple CONF_PAIR, in which case the default actions are used. */
modcallable *compile_modsingle(TALLOC_CTX *ctx, modcallable **parent, rlm_components_t component, CONF_ITEM *ci,
			       char const **modname);

/*
 *	Do the second pass on compiling the modules.
 */
bool modcall_pass2(modcallable *mc);

/* Add an entry to the end of a modgroup */
void add_to_modcallable(modcallable *parent, modcallable *this);

void modcall_debug(modcallable *mc, int depth);

int modcall_pass2_condition(fr_cond_t *c);

#ifdef __cplusplus
}
#endif

#endif

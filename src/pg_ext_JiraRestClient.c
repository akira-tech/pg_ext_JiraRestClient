#include "postgres.h"
#include "pg_config.h"
#include "access/reloptions.h"

#if PG_VERSION_NUM >= 90300
 #include "access/htup_details.h"
#endif

#include "catalog/pg_foreign_table.h"
#include "catalog/pg_foreign_server.h"
#include "commands/defrem.h"
#include "commands/explain.h"
#include "foreign/fdwapi.h"
#include "foreign/foreign.h"
#include "funcapi.h"
#include "mb/pg_wchar.h"
#include "miscadmin.h"
#include "nodes/makefuncs.h"
#include "optimizer/cost.h"
#include "optimizer/pathnode.h"
#include "optimizer/planmain.h"
#include "optimizer/restrictinfo.h"
#include "parser/parsetree.h"
#include "storage/fd.h"
#include "utils/rel.h"
#include "utils/builtins.h"
#include "executor/spi.h"
#include "utils/fmgroids.h"
#include "catalog/pg_type.h"
#include "utils/xml.h"

#include "curl/curl.h"
#include "libjson-0.8/json.h"
#include "json_parser.h"
#include "serialize_quals.h"
#include "utils.h"

#include <libxml/parser.h>
#include <libxml/tree.h>


PG_MODULE_MAGIC;
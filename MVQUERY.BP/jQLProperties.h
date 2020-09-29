// Changes to this file should also be modified in com.jbase.util.jql.JQLConstants

#define JQLOPT_USE_SELECT                  1
#define JQLOPT_FETCH_ALL_VALUES               2
#define JQLOPT_USE_SQLSELECT               4
#define JQLOPT_LIMIT_WHERE                  8
#define JQLOPT_DONT_LIMIT                 16
#define JQLOPT_DONT_MAKE_ROWS              32
#define JQLOPT_TRANSLATE_DB2              64
#define JQLOPT_TRANSLATE_SQL_SERVER          128
#define JQLOPT_SYSTEM_QUERY                256   // Must be used with JQLOPT_USE_SQLSELECT and refers to a prop. below
#define JQLOPT_FORCE_SELECT                512   // switch on trigers in no active select list (if file has triggers)
#define JQLOPT_USE_SQLDELETE            1024   // Delete,  suports clear file, where but no sub queries
#define JQLOPT_USE_SQLINSERT            2048   // Insert,  add new data
#define JQLOPT_USE_SQLUPDATE            4096   // Update, change existing data
#define JQLOPT_USE_SQLCREATETABLE         8192   // Simple create table command
#define JQLOPT_USE_SQLDROPTABLE           16384   // drop table command
#define JQLOPT_USE_SQLBEGINTRANS        32768   // BEGIN TRANSACTION
#define JQLOPT_USE_SQLCOMMITTRANS        65536   // COMMIT TRANSACTION
#define JQLOPT_USE_SQLROLLBACKTRANS       131072   // ROLLBACK TRANSACTION
#define JQLOPT_USE_SQLSAVETRANS          262144   // SAVE TRANSACTION
#define JQLOPT_USE_SQLPREPARE          524288   // Ran via SQL PREPARE/BIND , 
#define JQLOPT_USE_SQLCREATEDICTTABLE   1048576   // Create dictionary table command
#define JQLOPT_USE_SQLCREATEPROC      2097152 // Creats a stored procedure ( subroutine for now )
#define JQLOPT_USE_SQLALTERTABLE      4194304 // Alter table,
#define JQLOPT_USE_SQLCREATEUSER      8388608 // Create user,  adds a new user and password
#define JQLOPT_USE_SQLALTERUSER         16777216 // Alter user,   changes password for an existion user
#define JQLOPT_USE_SQLDROPUSER         33554432 // drop user,   remove a use from the system
#define JQLOPT_USE_SQLDESCRIBE         67108864 // Describe table command

// Note: JQLOPT_USE_SQL = (JQLOPT_USE_SQLSELECT|JQLOPT_USE_SQLDELETE|...)
#define JQLOPT_USE_SQL               2096132   // We are running a command as jSQL

#define FIRST_STMT_PROPERTY                  1000
#define STMT_PROPERTY_HEADING               1000
#define STMT_PROPERTY_FOOTING               1001
#define STMT_PROPERTY_GRAND_TOTAL            1003
#define STMT_PROPERTY_LPTR                  1004
#define STMT_PROPERTY_COL_HDR_SUPP            1005
#define STMT_PROPERTY_COL_SPACES            1006
#define STMT_PROPERTY_COL_SUPP               1007
#define STMT_PROPERTY_COUNT_SUPP            1008
#define STMT_PROPERTY_EXECUTE_COUNT            1009
#define STMT_PROPERTY_DBL_SPACE               1010
#define STMT_PROPERTY_DET_SUPP               1011
#define STMT_PROPERTY_HDR_SUPP               1012
#define STMT_PROPERTY_ID_SUPP               1013
#define STMT_PROPERTY_MARGIN               1014
#define STMT_PROPERTY_NOPAGE               1015
#define STMT_PROPERTY_NOSPLIT               1016
#define STMT_PROPERTY_ONLY                  1017
#define STMT_PROPERTY_OUTCOLS               1018
#define STMT_PROPERTY_VERT                  1019
#define STMT_PROPERTY_TOTAL_WIDTH            1020
#define STMT_PROPERTY_FILE_NAME               1021
#define STMT_PROPERTY_BINARY_MODE            1022
#define STMT_PROPERTY_ASCII                  1023
#define STMT_PROPERTY_EBCDIC               1024
#define STMT_PROPERTY_TAPELABEL               1025
#define STMT_PROPERTY_WITHIN               1026
#define STMT_PROPERTY_UNIQUE               1027
#define STMT_PROPERTY_NONULLS               1028
#define STMT_PROPERTY_APPLY_OCONV            1029
#define STMT_PROPERTY_APPLY_FORMAT            1030
#define STMT_PROPERTY_SYSTEM_QUERY_TABLE_TYPES  1031
#define STMT_PROPERTY_SYSTEM_QUERY_SCHEMAS      1032
#define STMT_PROPERTY_SYSTEM_QUERY_TABLES      1033
#define STMT_PROPERTY_SYSTEM_QUERY_COLUMNS       1034
#define LAST_STMT_PROPERTY                  1034

#define FIRST_COL_PROPERTY                  100
#define COL_PROPERTY_HEADING               100
#define COL_PROPERTY_FORMATTED_HEADING         101
#define COL_PROPERTY_WIDTH                  102
#define COL_PROPERTY_HEADING_WIDTH            103
#define COL_PROPERTY_VALUETYPE               104
#define COL_PROPERTY_MVGROUPNAME            105
#define COL_PROPERTY_SVGROUPNAME            106
#define COL_PROPERTY_DICT_IID               107
#define COL_PROPERTY_UPDATEABLE               108
#define COL_PROPERTY_AGGREGATE               109
#define COL_PROPERTY_AGGREGATE_SEPARATOR      110
#define COL_PROPERTY_VISIBLE               111
#define COL_PROPERTY_JUSTIFATION            112
#define LAST_COL_PROPERTY                  112

#define BREAK_OPTIONS_B                        1
#define BREAK_OPTIONS_D                        2
#define BREAK_OPTIONS_L                        4
#define BREAK_OPTIONS_N                        8
#define BREAK_OPTIONS_O                       16
#define BREAK_OPTIONS_P                       32
#define BREAK_OPTIONS_R                       64
#define BREAK_OPTIONS_T                      128
#define BREAK_OPTIONS_U                      256
#define BREAK_OPTIONS_V                     1024
#define BREAK_OPTIONS_LR                  2048
#define BREAK_OPTIONS_SUP                  4096

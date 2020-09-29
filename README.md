# MVQUERY

This is a very beta jql to json tool.  It will take any jql statement and product json output.

Note: This only works on jBASE 5.7+


## Installation

You will either git clone this repository or download it and unpack it.  Once you have done this create
a F pointer pointing at the project.  The root directory is the dictionary and the directory MVQUERY.BP
is the data section.  You then compile the two main programs and create the WDB.RESOURCE entry.

Warning:  There is NO security attached to the demostration MVQUERY endpoint.  It is recommended you 
add some type of security.  

```
ED MD MVQUERY.BP
1>F
2><path to git project or project>/MVQUERY.BP
3><path to git project or project>
FI

BASIC MVQUERY.BP MVJQLTOJSON.RTNE
CATALOG MVQUERY.BP MVJQLTOJSON.RTNE
BASIC MVQUERY.BP MVQUERY.RTNE
CATALOG MVQUERY.BP MVQUERY.RTNE

ED WDB.RESOURCE API*MVQUERY
1>P
2>MV QUERY RTNE
3>MVQUERY.RTNE
4>
5>1
6>1
FI
```

## Usage

```
curl http://<ip>:<port>/api/mvquery?query=SORT MD
```

You can also test the function from jsh

```
MVQUERY.RTNE [SORT MD
```


## Extended Schema

To facilitate multi-value collections a schema design is implemented.  Put a item SCHEMA.JSON
into the dictionary of a file.

```
{
    "Attribute": {
        "group": "Collectionname",
        "type": "array or collection"
    }
}
```

### Collection

When assigned to a collection an array of objects will be generated. The array will be named the group name.
Each array entry will be a object associated to each value in the attributes.  Each dictionary item assigned
to the group will be a field/pair in that object.  This function converts pick collections into typical
json array object groups.

### Array

When assigned to an array that attribute will generate a an array named by the group name.  All values
will be shown as a string value in that array.

## Data Conversion

Very simple data conversions are done.  In the future the plan is to add more data type fields to the schema file
to assist with data type conversions.

1. DICT<7>[1,2]="MD" - Data will be a number versus a string.  All $, in the data will be removed.
2. Everything else is displayed as a string and the data is left as is

### DEMO.FILE example

```
MAKE-DEMO-FILE
<name the file DEMO.FILE>

ED DICT DEMO.FILE SCHEMA.JSON
{
    "11": {
       "group": "products",
       "type": "collection"
    },
    "12": {
       "group": "products",
       "type": "collection"
    },
    "13": {
       "group": "products",
       "type": "collection"
    },
    "14": {
       "group": "products",
       "type": "collection"
    }
 }
 FI
 
 
 jsh JBASEDEV ~ -->MVQUERY.RTNE [LIST DEMO.FILE "0001" LASTNAME OS HARDWARE
Content-type: application/json
Cache-Control: no-cache

{
        "result":[
                {
                        "DEMO_FILE":"0001",
                        "LASTNAME":"MURPHY",
                        "products":[
                                {
                                        "OS":"TRU64",
                                        "HARDWARE":"ASUS"
                                },
                                {
                                        "OS":"LINUX RH7",
                                        "HARDWARE":"COMPAQ"
                                },
                                {
                                        "OS":"LINUX RH7",
                                        "HARDWARE":"DIGITAL"
                                },
                                {
                                        "OS":"CENTOS7",
                                        "HARDWARE":"ZSERIES"
                                }
                        ]
                }
        ],
        "runtime":8,
        "numitems":1,
        "resultmsg":"",
        "ranquery":"LIST DEMO.FILE \"0001\" LASTNAME OS HARDWARE"
}
jsh JBASEDEV ~ -->
```


## Todo

* Create additional data type schema entries to convert data
  * DATE
  * TIME
* Subvalue groups
* Pagination
* Plugin authentication

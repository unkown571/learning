#ifndef SALES_ITEM_H
#define SALES_ITEM_H

/*
 * A header provides a centralized location for related declarations.
 * Headers normally contain class definition, extern variable declarations,
 * and function declarations.
 *
 * Because headers are included in multiple source files, they should not
 * contain definitions of variables or functions.
 *
 * There are three exceptions to the rule that headers should not contain
 * definitions: classes, const objects whose value is known at compile time,
 * and inline functions are all defined in headers.
 *
 * These entities are defined in headers because the compiler needs their
 * definition to generate code. Because, by default, const objects are local
 * to the file in which they are defined, it is legal to put their definition
 * in a header file.
 *
 * When a const is initialized by a value that is not constant expression, then
 * it should not be defined in header file. Instead, as with other variable, the
 * const should be defined and initialized in a source file. An extern 
 * declaration for that const should be made in the header, enabling multiple
 * files to share that variable.
 */
class Sales_item {

};

#endif /* SALES_ITEM_H */

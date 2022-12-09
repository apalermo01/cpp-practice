#include <iostream>


/*
 * Type aliases
 * any valid type can be aliased so we can refer to it with a different identifier
 *
 * syntax:
 * typedef existing_type new_type_name;
 *
 * Some examples:
 */

void type_name_examples(){
	typedef char C;
	typedef unsigned int WORD;
	typedef char * pChar;
	typedef char field [50];	
	/*
	 * defines 4 aliases
	 * char is now C
	 * unsigned int is now WORD
	 * char* is now pChar
	 * char[50] is now field
	 */

	// we can now declare things using these aliases
	C mychar, anotherchar, *ptcl;
	WORD myword;
	pChar ptc2;
	field name;

	/*
	 * antoher syntax:
	 * using new_type_name = existing_type;
	 */

	using C = char;
	using WORD = unsigned int;
	using pChar = char *;
	using field = char[50];
}

void unions(){
	/*
	 * allows a portion of memory to be accessed as different data types 
	 * similar to structs but different function
	 * 
	 * union type_name {
	 * 		member_type1 member_name1;
	 * 		member_type2 member_name2;
	 * 		...
	 * } object_names
	 *
	 * This creates a union type whose members all occupy the same space in memory 
	 */

	union mytypes_t {
		char c;
		int i;
		float f;
	} mytypes; 

	// declares an object called mytypes with 3 members:
	// mytypes.c, mytypes.i, and mytypes.f
	
	/*
	 * SINCE ALL THESE REFER TO THE SAME LOCATION IN MEMORY,
	 * MODIFYING ANY ONE OF THESE MEMBERS WILL AFFECT THE OTHER 2
	 */
}

void anonymous_unions() {
	/*
	 * When unions belong to a class or struct, they can be declared with no name
	 */

	struct book1_no_anon {
		char title[50];
		char author[50];
		union {
			float dollars;
			int yen;
		} price;
	} book1;
	
	/*
	 * access dollars in book1 with: book1.price.dollars
	 */

	struct book2_anon {
		char title[50];
		char author[50];
		union {
			float dollars;
			int yen;
		}
	} book2;

	/*
	 * access dollars in book2 with book2.dollars
	 */
}


void enumerated_types() {
	/*
	 * defined with a set of custom identifiers (enumerators) as possible values
	 *
	 * enum type_name {
	 * 		value1;
	 * 		value2;
	 * 		...
	 * } object_names;
	 */ 

	enum colors_t {black, blue, green, cyan, red, purple, yellow, white};

	/*
	 * notice that there was no implicit type with this delcaration
	 *
	 * under the hood, all these are converted to integers
	 */ 

	/*
	 * we can specify what the integer value should be for each category
	 */ 

	enum months_t {january=1, february, march, april, may,
				   june, july, august, september, october,
				   november, december} y2k;
	
}
int main(){
	type_name_examples();
}

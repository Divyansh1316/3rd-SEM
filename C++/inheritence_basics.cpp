/* Types of inheritance:
1. Single level
    A derived class with only one base class.
2. Multi level
    Deriving class from an already derived class.
3. Multiple
    A derived class with more than one base class.
4. Heirarchial
    Several derived class from a single base class.
5. Hybrid
    Combination of multiple and multi level inheritance.
*/

/* Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}

Note:
1. Default visibility mode is private.
2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
3. Private Visibility Mode: Public members of the base class become private members of the derived class
4. Private members are never inherited

                            Public Derivation      	Private Derivation    	Protected Derivation
Private members           	  Not Inherited           Not Inherited            Not Inherited
Protected members           	Protected               Private                  Protected
Public members           	     Public	                Private                  Protected
*/
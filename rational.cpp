//Christopher Clarizio
//Class inplementation for the interface rational.h

#include "rational.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

Rational::Rational(){ numer = 1; denom = 1; }
Rational::Rational( int a, int b ){ numer = a; denom = b; }
Rational::~Rational(){ }
int Rational::getNumer(){ return numer; }
int Rational::getDenom(){ return denom; }
int Rational::gcd( int num, int den ){ return abs( den == 0 ? num : gcd( den, num % den ) ); }
void Rational::simplify(){ numer = numer / gcd( numer, denom ); denom = denom / gcd( numer, denom ); }
void Rational::setNumer( int a ){ numer = a; }
void Rational::setDenom( int b ){ denom = b; }
void Rational::print(){ cout << numer << "/" << denom << "\n"; }
Rational Rational::add( Rational a ){ Rational s( ( numer * a.getDenom() ) + ( denom * a.getNumer() ), ( denom * a.getDenom() ) ); simplify(); return s; }
Rational Rational::subtract( Rational a ){ Rational d( ( numer * a.getDenom() ) - ( denom * a.getNumer() ), ( denom * a.getDenom() ) ); simplify(); return d; }
Rational Rational::multiply( Rational a ){ Rational p( ( numer * a.getNumer() ), ( denom * a.getDenom() ) ); simplify(); return p; }
Rational Rational::divide( Rational a ){ Rational q( ( numer * a.getDenom() ), ( denom * a.getNumer() ) ); simplify(); return q; }

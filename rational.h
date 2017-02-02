// rational.h
class Rational {
  public:
    Rational();
    Rational(int, int);
    ~Rational();
    int getNumer();
    int getDenom();
    void simplify();
    int gcd(int, int);
    void setNumer(int);
    void setDenom(int);
    void print();
    Rational add(Rational);
    Rational subtract(Rational);
    Rational multiply(Rational);
    Rational divide(Rational);
  private:
    int numer;
    int denom;
};


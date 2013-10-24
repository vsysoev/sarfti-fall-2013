//������ ��������� �� ���������


#include <iostream>
#include <conio.h>
using namespace std;
 
class F {
  public:
    F() {f = 0;}
    int f;
    void increase_f() {
      f += 1;
      cout << "f = " << f << endl;
    }
};
class K {
  public:
    K() {k = 0;}
    int k;
    void increase_k() {
      k += 1;
      cout << "k = " << k << endl;
    }
};
class D {
  public:
    D() {d = 0;}
    int d;
    void increase_d() {
      d += 1;
      cout << "d = " << d << endl;
    }
};
class E {
  public:
    E() {e = 0;}
    int e;
    void increase_e() {
      e += 1;
      cout << "e = " << e << endl;
    }
};
class B {
  public:
    B() {}
    void link(K &k) {this->k = &k;}
    void link(D &d) {this->d = &d;}
    void link(E &e) {this->e = &e;}
    K* increase_bk() {return k;}
    D* increase_bd() {return d;}
    E* increase_be() {return e;}
  private:
    K* k;
    D* d;
    E* e;
};
class C {
  public:
    C() {}
    void link(F &f) {this->f = &f;}
    F* increase_cf() {return f;}
  private:
    F* f;
};
class J {
  public:
    J() {j = 0;}
    int j;
    void increase_j() {
      j += 1;
      cout << "j = " << j << endl;
    }
 
};
class A {
  public:
    A() {}
    void link(B &b) {this->b = &b;}
    void link(C &c) {this->c = &c;}
    void link(J &j) {this->j = &j;}
    B* increase_ab() {return b;}
    C* increase_ac() {return c;}
    J* increase_aj() {return j;}
  private:
    B* b;
    C* c;
    J* j;
};
 
int main()
{
  cout << "aggregation 1\n";
  K k; D d; E e; F f; B b; C c; J j; A a;
  a.link(b); a.link(c); a.link(j);
  b.link(k); b.link(d); b.link(e);
  c.link(f);
 
  a.increase_ac()->increase_cf()->increase_f();
  a.increase_ab()->increase_bk()->increase_k();
  a.increase_ab()->increase_bd()->increase_d();
  a.increase_ab()->increase_be()->increase_e();
  a.increase_aj()->increase_j();
  return 0;
  getch ();
}
#include <tool.h>

int main(void)
{
	// 1
	Greeter g;
	g.sayHello();
	
	// 2
	Point p(12,34,45);
	std::stringstream sa;
	sa << "p: " << p;
	Debug::log(sa);
	
	Vector2 v1(3,1);
	Vector2 v2(1,2);
	Vector2 v3 = v1 + v2;
	double l3 = v3.getLength();
	std::stringstream ss;
	ss << "v1: " << v1 << " v2: " << v2 << " v3: " << v3 << " (length: " << l3 << ")";
	Debug::log(ss);
	
	Vector2* vp = new Vector2(16,9);
	std::stringstream sp;
	sp << "vp: " << *vp << " length: " << vp->getLength();
	Debug::log(sp);
	
	// 3
	std::string s = "Waiting";
	s.append(" a little bit...");
	Debug::log(s);
	
	// some hacky wait routine
	unsigned int n=999999999;
	while (n) {
		n--;
	}
	
	// 4
	g.sayGoodbye();
	
	return 0;
}


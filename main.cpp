#include "echolog.h"

int main() {

	float x = 12423423423.353f;
	
	for (int i = 0; i < 10; i++) {
		echolog::log_decorated(ECHO_COLOR_MAGENTA, ECHO_COLOR_CYAN, ECHO_STYLE_BLINKING | ECHO_STYLE_ITALIC, "foo", 123, "asdas", "sdf", 123, x);
		echolog::log_raw("foo", 123, "qweq");
	}

}
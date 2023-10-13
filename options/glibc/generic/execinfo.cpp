#include <execinfo.h>
#include <bits/ensure.h>
#include <mlibc/charset.hpp>

int backtrace(void **, int) {
	mlibc::infoLogger() << "backtrace: Not implemented" << frg::endlog;
	return 0;
}

char **backtrace_symbols(void *const *, int) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}

void backtrace_symbols_fd(void *const *, int, int) {
	__ensure(!"Not implemented");
	__builtin_unreachable();
}

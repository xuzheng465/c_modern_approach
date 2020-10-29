"""
measure time decorator.

"""

import time


def measure_time(f):
    def timed(*args, **kw):
        start = time.time()
        result = f(*args, **kw)
        end = time.time()

        print(f'{f.__name__} ({args}, {kw}) {end - start:2.2f}')
        return result

    return timed


@measure_time
def foo():
    for x in range(1000000):
        x += 1


if __name__ == '__main__':
    foo()

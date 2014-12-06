all:
	ghc -O2 -dynamic -shared -fPIC -o libEval.so Eval.hs -L/usr/lib/ghc -lHSrts-ghc7.4.1 -I/usr/lib/ghc/include/
	gcc -o testm main.c -L/usr/lib/ghc/integer-gmp-0.4.0.0/ -lHSinteger-gmp-0.4.0.0-ghc7.4.1 -L. -lEval -L/usr/lib/ghc/ -lHSrts-ghc7.4.1

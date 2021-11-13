Appname = mycp

Sources += main.c

Sources += mycp.c

all:
	gcc $(Sources) -o $(Appname)

install: 
	cp $(Appname) /usr/bin
	
uninstall:
	rm -f /usr/bin/$(Appname)

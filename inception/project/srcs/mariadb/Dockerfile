# https://wiki.alpinelinux.org/wiki/MariaDB
FROM	alpine:3.15

RUN		apk update && apk add --no-cache --quiet --update mariadb mariadb-client

RUN		mkdir -p /var/lib/mysqld /run/mysqld
COPY	./create_db.sql /tmp/create_db.sql
COPY	./setup.sh ./

RUN		mariadb-install-db --datadir=/var/lib/mysql \
			--auth-root-authentication-method=normal
RUN		chown -R mysql:mysql /var/lib/mysql /run/mysqld

ENTRYPOINT [ "sh", "setup.sh" ]
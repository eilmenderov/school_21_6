FROM	alpine:3.15

RUN		apk update && apk add --no-cache --quiet --update bash curl less 	\
			mariadb-client redis php7 php7-phar php7-json php7-curl 		\
			php7-fpm php7-mysqli php7-iconv

RUN		mkdir -p /var/www/wordpress /usr/local/bin/wp

# https://wp-cli.org/
RUN		curl https://raw.githubusercontent.com/wp-cli/builds/gh-pages/phar/wp-cli.phar \
			--output /usr/bin/wp --silent
RUN		chmod +x ./usr/bin/wp

# https://wordpress.org/download/releases/
RUN		wp core download --version=5.8.1 --path=/var/www/wordpress
WORKDIR /var/www/wordpress

COPY	./wp-config /config/wp-config
COPY	./setup.sh /usr/local/bin/setup.sh
RUN		chmod +x /usr/local/bin/setup.sh

ENTRYPOINT [ "sh", "/usr/local/bin/setup.sh" ]

FROM	alpine:3.15

RUN		apk upgrade && apk add --no-cache --quiet --update curl php7 \
			php7-session php7-fpm php7-mysqli

COPY	./setup.sh /usr/bin/local/setup.sh
RUN		chmod +x /usr/bin/local/setup.sh

WORKDIR /var/www/wordpress
ENTRYPOINT [ "sh", "/usr/bin/local/setup.sh" ]
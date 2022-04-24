FROM	alpine:3.15

RUN		apk update && apk add --no-cache --quiet --update redis

COPY	./setup.sh ./setup.sh
RUN		chmod +x ./setup.sh

ENTRYPOINT [ "sh", "./setup.sh" ]

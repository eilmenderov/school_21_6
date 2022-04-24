FROM	alpine:3.15

RUN		apk update && apk add --no-cache --quiet --update bash vsftpd

COPY	./vsftpd.conf /etc/vsftpd/vsftpd.conf
RUN		chmod +x /etc/vsftpd/vsftpd.conf

COPY	./setup.sh ./
RUN     chmod +x setup.sh

EXPOSE	21

ENTRYPOINT [ "sh", "setup.sh" ]
FROM	debian:buster

RUN		apt-get update && apt-get -y upgrade && apt-get -y install prometheus

COPY	./prometheus.yml /etc/prometheus/prometheus.yml
RUN		chmod +x /etc/prometheus/prometheus.yml

COPY	./setup.sh ./setup.sh
RUN 	chmod +x ./setup.sh

ENTRYPOINT [ "sh", "setup.sh" ]
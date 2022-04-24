FROM    alpine:3.15

RUN             apk update && apk add --no-cache --quiet --update nginx openssl

RUN             mkdir -p /etc/nginx/ssl /var/run/nginx
# SUBJ opts: https://www.ibm.com/docs/en/ibm-mq/7.5?topic=certificates-distinguished-names
RUN     openssl req -x509 -nodes \
                        -out /etc/nginx/ssl/vleida.42.fr.crt \
                        -keyout /etc/nginx/ssl/vleida.42.fr.key \
                        -subj "/C=FR/ST=IDF/L=Paris/O=42/OU=42/CN=vleida.42.fr/UID=vleida"

COPY    ./nginx.conf /etc/nginx/http.d/default.conf

RUN             ln -sf /dev/stdout /var/log/nginx/access.log \
                        && ln -sf /dev/stderr /var/log/nginx/error.log

EXPOSE  443

CMD     [ "nginx", "-g", "daemon off;" ]
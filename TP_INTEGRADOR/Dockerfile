FROM ubuntu:latest

WORKDIR /home

RUN apt-get update -y \
  && apt install -y --no-install-recommends build-essential \
  && apt-get install -y --no-install-recommends manpages-dev \
  && apt install -y --no-install-recommends flex \
  && apt install -y --no-install-recommends bison \
  && rm -rf /var/lib/apt/lists/*


# docker build --rm . -t ssl_tp_integrador
# docker run -ti --rm -v "$(pwd)":/home --name ssl_tp_integrador ssl_tp_integrador

# lex main.l && gcc ./*.c -o lex -lm
# ./lex
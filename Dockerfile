FROM gcc:4.9
COPY . /essai
WORKDIR /essai
RUN gcc -o myapp essai.c
CMD ["./myapp"]

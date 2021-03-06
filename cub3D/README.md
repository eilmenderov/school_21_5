# 3D-game - cub3D
## Introduction
This project is inspired by the world-famous Wolfenstein 3D game, whichwas the first FPS ever. It will enable you to explore ray-casting. Your goal will be tomake a dynamic view inside a maze, in which you’ll have to find your way.

### This group project was written by [Avchar](https://github.com/Avchar) and [lex-cmd](https://github.com/lex-cmd)

###  Usage:
* ```make bonus``` - to compile project
* ```./cub3D_bonus ./maps/map.cub``` - to start project
* or 
```
make bonus && ./cub3D_bonus ./maps/map.cub
```
* you can change the map according to the following rules:
```
* only one player on the map
* map must be closed(without holes)
* '1' - wall
* '0' - floor
* 'N' or 'S' or 'W' or 'E' - player start position
* "NO", "SO", "WE", "EA" - the path to the wall textures
* also you can change floor(F) and ceil(C) colors
```
## Example
![cub3D](./cub3D.png)

<h3>You are allowed to use the following functions:</h3>

<ul>
	<li><a href="https://www.opennet.ru/man.shtml?topic=strerror&russian=0&category=&submit=%F0%CF%CB%C1%DA%C1%D4%D8+man">-- strerror -- (возвращают строку, описывающую ошибку #include string.h)</a></li>
	<li><a href="http://ru.manpages.org/errno/3">-- errno -- (код последней ошибки #include errno.h)</a></li>
	<li><a href="https://www.opennet.ru/man.shtml?topic=printf&russian=0&category=&submit=%F0%CF%CB%C1%DA%C1%D4%D8+man">-- printf -- (#include stdio.h)</a></li>
	<li><a href="https://www.opennet.ru/man.shtml?topic=malloc&russian=0&category=&submit=%F0%CF%CB%C1%DA%C1%D4%D8+man">-- malloc --</a></li>
	<li><a href="http://www.c-cpp.ru/content/free">-- free --</a></li>
	<li><a href="https://www.opennet.ru/man.shtml?topic=write&russian=0&category=&submit=%F0%CF%CB%C1%DA%C1%D4%D8+man">-- write --</a></li>
	<li><a href="http://ru.manpages.org/open/2">-- open -- (открывае/создает файл  #include fcntl.h)</a></li>
	<li><a href="http://ru.manpages.org/read/2">-- read -- (читает из файловго дескриптора #include unistd.h)</a></li>
	<li><a href="http://ru.manpages.org/close/2">-- close -- (закрывает файловый дескриптор #include unistd.h)</a></li>
	<li><a href="https://www.opennet.ru/man.shtml?topic=exit&russian=0&category=&submit=%F0%CF%CB%C1%DA%C1%D4%D8+man">-- exit -- (функция, завершающая работу программы #include unistd.h)</a></li>
	<li><a herf="http://manpages.org/mathh">All functions of the mathlibrary (-lm man 3 math)</a></li>
	<li><a herf="https://harm-smits.github.io/42docs/libs/minilibx">All functions of the MinilibX</a></li>
</ul>

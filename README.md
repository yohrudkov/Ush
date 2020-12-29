<h1 align="center"> Ush </h1> <br>

<p align="center"> Command-line interpreter. </p>

<p align="center">
    <a href="https://github.com/yohrudkov">
        <img alt="yohrudkov GitHub main page"
        title="Main page"
        src="https://github.githubassets.com/images/modules/logos_page/GitHub-Logo.png"
        width="140">
    </a>
</p>

## Table of Contents

- [Introduction](#Introduction)
- [Build Process](#Build-Process)
    - [Description](#Description)
    - [Compilation](#Compilation)
    - [Initiation](#Initiation)
- [Authors](#Authors)
- [License](#License)
- [Acknowledgments](#Acknowledgments)

## Introduction

The command shell provides communication between the user and the operating system environment.
It is a specialized software product that provides the execution of commands and obtaining the results of their execution.

## Build Process

### Description

Implemented shell contain:
* have the default prompt looks *`u$h>`*, followed by a space character;
* deal only with one line user input;
* implement builtin commands without flags: *`export`*, *`unset`*, *`exit`*, *`fg`*;
* implement the following builtin commands with flags:
    * *`env`* with *`-i`*, *`-P`*, *`-u`*;
    * *`cd`*  with *`-s`*, *`-P`* and *`-`* argument;
    * *`pwd`* with *`-L`*, *`-P`*;
    * *`which`* with *`-a`*, *`-s`*;
    * *`echo`* with *`-n`*, *`-e`*, *`-E`*.
* implement custom builtin commands: *`jobs`*, *`kill`*, *`change`*, *`next`*, *`true`*, *`false`*, *`chdir`*;
* call the builtin command instead of the binary program if there is a name match among them;
* run programs located in the directories listed in the *`PATH`* variable;
* manage signals *`CTRL + D`*, *`CTRL + C`* and *`CTRL + Z`*;
* implement the command separator *`;`*;
* manage these expansions correctly:
    * he tilde expansion *`~`* with the following tilde-prefixes: \
        *`~`*, *`~/dir_name`*, *`~username/dir_name`*, *`~+/dir_name`*, *`~-/dir_name`*;
    * the basic form of parameter expansion *`${parameter}`*;
    * the two-level-nested command substitution *`$(command)`*.
* allow users to customize promp;
* implement command editing. Move the cursor using the *`Arrow`* keys;
* support of the nested command substitution;
* add support of shell functions *`tripple_ls() { ls; ls; ls; }`*;
* add support of pipes *`|`*.

<p align="center">
    <img alt="Example"
    title="Example"
    src="https://github.com/yohrudkov/Ush/blob/main/resources/example.jpg?raw=true"
    width="400">
</p>

### Compilation

To compile Ush project, run the following *`make`* Makefile.

### Initiation

To begin to use Ush project, run the following *`./ush`* exe file.

## Authors

- Yaroslav Ohrudkov - *Program development* - [yohrudkov](https://github.com/yohrudkov)
- Andrey Basisty - *Program development* - [vorobeyka](https://github.com/vorobeyka)

## License

Collision is an open-sourced software licensed under the [MIT license](https://en.wikipedia.org/wiki/MIT_License). \
[Copyright (c) 2020 yohrudkov](https://github.com/yohrudkov/Ush/blob/main/LICENSE).

## Acknowledgments

Thanks [Ucode IT academy](https://ucode.world/ru/) for the training program provided.

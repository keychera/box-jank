# box-jank

```sh
# init relevant submodules
bb prep.bb

lein repl

lein with-profile +once run

lein with-profile +release compile
```

learning from: https://github.com/Ravbug/sdl3-sample and just peeking each satellites' CMakeList options

sudo apt install -y build-essential cmake gdb

https://stackoverflow.com/questions/27379818/git-possible-to-use-same-submodule-working-copy-by-multiple-projects


# vendor deps

```sh
git submodule add -b odoyle-jank https://github.com/keychera/odoyle-rules git-deps/odoyle-jank
( git submodule add https://github.com/libsdl-org/SDL git-deps/sdl3; cd git-deps/sdl3; git reset --hard "release-3.4.20")
git submodule add https://github.com/libsdl-org/SDL_image git-deps/sdl3-image
git submodule add https://github.com/libsdl-org/SDL_mixer git-deps/sdl3-mixer
git submodule add https://github.com/libsdl-org/SDL_ttf git-deps/sdl3-ttf
```
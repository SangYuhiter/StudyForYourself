# 1.install the vim-plug
github:https://github.com/junegunn/vim-plug
```
curl -fLo ~/.vim/autoload/plug.vim --create-dirs https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
```

# 2.copy the .vimrc .vim to ~/
```
cp .vimrc ~/
cp .vim ~/

# mkdir for backup swp undo
mkdir -p ~/.vim/.backup
mkdir -p ~/.vim/.swp
mkdir -p ~/.vim/.undo
```

# 3.vim init
entry vim,then input vim-plug order:
:PlugInstall

# 4.install some useful tools
sudo apt install ctags cscope

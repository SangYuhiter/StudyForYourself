# 0.install ubuntu tools
look at the UbuntuInit/README.md

# 1.install useful tools

switch the software source
tsinghua: https://mirrors.tuna.tsinghua.edu.cn/help/ubuntu/
```Bash
# back up the source file
sudo cp /etc/apt/sources.list /etc/apt/sources.list.bak
# copy the tsinghua source
sudo cp ./sources.list.tsinghua /etc/apt/
# using tsinghua soure override the source file
sudo cp /etc/apt/sources.list.tsinghua /etc/apt/sources.list
# update the source
sudo apt update
```

- basic:      ```sudo apt install git git-email make gcc curl```
- vim-edit:   ```sudo apt install vim ctags cscope```
- terminal:   ```sudo apt install byobu```
- info-check: ```sudo apt install tree```

# 2.Linux kernel compile
dependencies:   ```sudo apt install make gcc clang bison dwarves jfsutils reiserfsprogs xfsprogs btrfs-progs quota libelf-dev libssl-dev```
```
cp /boot/config-$(uname -r) .config
make menuconfig
make -j4
```
# 3.bashrc useful commond
```
# cctags to generate the cscope
alias cctags='ctags -L ctags.txt --c++-kinds=+px --fields=+iaKSz --extra=+q;cscope -bkq -i ctags.txt'

# accerlate the repo use tsinghua source
export REPO_URL='https://mirrors.tuna.tsinghua.edu.cn/git/git-repo'

# jobs list
alias jobs='jobs -l'

# find file in AOSP root
alias findaosp='find $(croot && pwd) -name'

# source .bashrc
source ~/.bashrc
```
# 4.useful shell script
## (1).cctagsfiles.sh---get the ctags file list
use as below
```
~/cctagsfiles.sh > ctags.txt
cctags
```

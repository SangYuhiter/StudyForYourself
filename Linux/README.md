# 0.install ubuntu tools
look at the UbuntuInit/README.md

# 1.install useful tools

- basic:      ```sudo apt install git make gcc curl```
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

"基本配置
"不与 Vi 兼容（采用 Vim 自己的操作命令）
set nocompatible

"语法高亮
syntax on

"在底部显示，当前处于命令模式还是插入模式
set showmode

"命令模式下，在底部显示，当前键入的指令
set showcmd

"支持使用鼠标
"set mouse=a

"使用 utf-8 编码
set encoding=utf-8

"启用256色
set t_Co=256

"开启文件类型检查，并且载入与该类型对应的缩进规则
filetype indent on

"--------------------------------------------------------

"缩进
"按下回车键后，下一行的缩进会自动跟上一行的缩进保持一致
set autoindent

"按下 Tab 键时，Vim 显示的空格数
set tabstop=4

"在文本上按下>>（增加一级缩进）、<<（取消一级缩进）或者==（取消全部缩进）时，每一级的字符数
set shiftwidth=4

" Tab 键在不同的编辑器缩进不一致，该设置自动将 Tab 转为空格
set expandtab

"Tab 转为多少个空格
set softtabstop=4

"-------------------------------------------------------

"外观
"显示行号
set number

"显示光标所在的当前行的行号，其他行都为相对于该行的相对行号
"set relativenumber

"光标所在的当前行高亮
set cursorline

"光标所在的当前列高亮
"set cursorcolumn

"设置行宽，即一行显示多少个字符
set textwidth=80

"自动折行，即太长的行分成几行显示
"set wrap

"只有遇到指定的符号（比如空格、连词号和其他标点符号），才发生折行。也就是说，不会在单词内部折行
set linebreak

"指定折行处与编辑窗口的右边缘之间空出的字符数
set wrapmargin=2

"垂直滚动时，光标距离顶部/底部的位置（单位：行）
set scrolloff=5

"水平滚动时，光标距离行首或行尾的位置（单位：字符）。该配置在不折行时比较有用
set sidescrolloff=15

"是否显示状态栏。0 表示不显示，1 表示只在多窗口时显示，2 表示显示
set laststatus=2

"在状态栏显示光标的当前位置（位于哪一行哪一列）
set  ruler

"------------------------------------------------------

"搜索
"光标遇到圆括号、方括号、大括号时，自动高亮对应的另一个圆括号、方括号和大括号
set showmatch

"搜索时，高亮显示匹配结果
set hlsearch

"输入搜索模式时，每输入一个字符，就自动跳到第一个匹配的结果
set incsearch

"搜索时忽略大小写
set ignorecase

"如果同时打开了ignorecase，那么对于只有一个大写字母的搜索词，将大小写敏感；其他情况都是大小写不敏感。比如，搜索Test时，将不匹配test；搜索test时，将匹配Test
set smartcase

"-----------------------------------------------------

"编辑
"打开英语单词的拼写检查
"set spell spelllang=en_us

"不创建备份文件。默认情况下，文件保存时，会额外创建一个备份文件，它的文件名是在原文件名的末尾，再添加一个波浪号（~）
set nobackup

"不创建交换文件。交换文件主要用于系统崩溃时恢复文件，文件名的开头是.、结尾是.swp
set noswapfile

"保留撤销历史
"Vim 会在编辑时保存操作历史，用来供用户撤消更改。默认情况下，操作记录只在本次编辑时有效，一旦编辑结束、文件关闭，操作历史就消失了
"打开这个设置，可以在文件关闭后，操作记录保留在一个文件里面，继续存在。这意味着，重新打开一个文件，可以撤销上一次编辑时的操作。撤消文件是跟原文件保存在一起的隐藏文件，文件名以.un~开头
set undofile

"设置备份文件、交换文件、操作历史文件的保存位置
"结尾的//表示生成的文件名带有绝对路径，路径中用%替换目录分隔符，这样可以防止文件重名
set backupdir=~/.vim/.backup//
set directory=~/.vim/.swp//
set undodir=~/.vim/.undo//

"自动切换工作目录。这主要用在一个 Vim 会话之中打开多个文件的情况，默认的工作目录是打开的第一个文件的目录。该配置可以将工作目录自动切换到，正在编辑的文件的目录
set autochdir

"出错时，不要发出响声
set noerrorbells

"出错时，发出视觉提示，通常是屏幕闪烁
"set visualbell
set novisualbell

"Vim 需要记住多少次历史操作
set history=1000

"打开文件监视。如果在编辑过程中文件发生外部改变（比如被别的编辑器编辑了），就会发出提示
set autoread

"如果行尾有多余的空格（包括 Tab 键），该配置将让这些空格显示成可见的小方块
"set listchars=tab:>-,trail:-
"set list

"命令模式下，底部操作指令按下 Tab 键自动补全。第一次按下 Tab，会显示所有匹配的操作指令的清单；第二次按下 Tab，会依次选择各个指令
set wildmenu
set wildmode=longest:list,full

"-------------------------------------------------------------------------------------------
"vim 插件配置

call plug#begin('~/.vim/plugged')
    Plug 'preservim/nerdtree'
    Plug 'yegappan/taglist'
call plug#end()

"nerdtree 配置
",d映射打开目录树
map ,d :NERDTreeToggle<CR>
"隐藏文件夹可见
let NERDTreeShowHidden=1
"目录树放在右侧
let NERDTreeWinPos=1

"taglist 配置
",t映射打开taglist
map ,t :TlistToggle<CR>
let Tlist_Show_One_File=1    "只显示当前文件的tags
let Tlist_WinWidth=40        "设置taglist宽度
let Tlist_Exit_OnlyWindow=1  "tagList窗口是最后一个窗口，则退出Vim
"let Tlist_Use_Right_Window=1 "在Vim窗口右侧显示taglist窗口
set tags=tags
set tags+=./tags    " add current directory's generated tags file
set tags+=~/program/tags " add new tags file

"cscope 配置
if has("cscope")
    "设置cscope二进制可执行文件的绝对路径
    set csprg=/usr/bin/cscope
    "优先搜索cscope的符号文件
    set csto=0
    "使用:cstag命令代替:tag/ctrl - ]/vim -t等命令，如果vim加载了cscope的数据库
    ":cstag命令实际执行的是”cs find g”
    set cst 
    "不打印cscope所产生的额外信息，也就是在加载cscope数据库时不打印冗余的log
    set nocsverb
    "加载当前路径的cscope数据库文件
    if filereadable("cscope.out")
        cs add cscope.out
    "如果cscope.out不存在于当前路径，加载环境变量CSCOPE_DB指定路径的cscope符号数
    "据库
    elseif $CSCOPE_DB != ""
        cs add $CSCOPE_DB
    endif
    "恢复csverb的初始值
    set csverb
endif

"cscope 键位映射
nmap :cs find :cs f

nmap <C-\>s :cs find s <C-R>=expand("<cword>")<CR><CR>
nmap <C-\>g :cs find g <C-R>=expand("<cword>")<CR><CR>
nmap <C-\>c :cs find c <C-R>=expand("<cword>")<CR><CR>
nmap <C-\>t :cs find t <C-R>=expand("<cword>")<CR><CR>
nmap <C-\>e :cs find e <C-R>=expand("<cword>")<CR><CR>
nmap <C-\>f :cs find f <C-R>=expand("<cfile>")<CR><CR>
nmap <C-\>i :cs find i ^<C-R>=expand("<cfile>")<CR>$<CR>
nmap <C-\>d :cs find d <C-R>=expand("<cword>")<CR><CR>
nmap <C-\>S :cs find t struct <C-R>=expand("<cword>")<CR> {<CR>

"-------------------------------------------------------------------------------------------
"自动添加文件头
autocmd BufNewFile *.c,*.cpp,*.sh,*.py,*.java exec ":call SetTitle()"
"定义函数SetTitle,自动添加文件头
func SetTitle()
    if(&filetype == 'c' || &filetype == 'cpp')
        call setline(1, "/*************************************************************************")
        call setline(2, "\ @File Name    : ".expand("%"))
        call setline(3, "\ @Author       : SangYu")
        call setline(4, "\ @Email        : sangyu.code@gmail.com")
        call setline(5, "\ @Created Time : ".strftime("%c"))
        call setline(6, "\ @Description  : ")
        call setline(7, " ************************************************************************/")
        call setline(8, "")
    endif
    if(&filetype == 'python')
        call setline(1, "\#!/usr/bin/env python")
        call setline(2, "\# -*- coding=utf8 -*-")
        call setline(3, "\"\"\"")
        call setline(4, "\# File Name    : ".expand("%"))
        call setline(5, "\# Author       : SangYu")
        call setline(6, "\# Email        : sangyu.code@gmail.com")
        call setline(7, "\# Created Time : ".strftime("%c"))
        call setline(8, "\# Description  : ")
        call setline(9, "\"\"\"")
        call setline(10, "")
        call setline(11, "if __name__ == \"__main__\":")
        call setline(12, "    pass")
        call setline(13, "")
    endif
	if &filetype == 'shell'  
		call setline(1, "\#!/bin/sh")
		call setline(2, "\# File Name    : ".expand("%"))
		call setline(3, "\# Author       : SangYu")
        call setline(4, "\# Email        : sangyu.code@gmail.com")
		call setline(5, "\# Created Time : ".strftime("%c"))
		call setline(6, "\# Description  : ")
		call setline(7, "")
    endif
    if &filetype == 'java'  
        call setline(1, "//coding=utf8")  
        call setline(2, "/**")  
        call setline(3, "\ *\ @File Name    : ".expand("%"))  
        call setline(4, "\ *\ @Author       : SangYu")  
        call setline(5, "\ *\ @Email        : sangyu.code@gmail.com")
        call setline(6, "\ *\ @Created Time : ".strftime("%c"))  
        call setline(7, "\ *\ @Description  : ")  
        call setline(8, "\ */")  
        call setline(9, "")  
    endif
endfunc
"自动将光标移动到文件末尾
autocmd BufNewfile * normal G

"让vimrc配置变更立即生效
autocmd BufWritePost $MYVIMRC source $MYVIMRC

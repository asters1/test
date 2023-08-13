""设置行号
set number
""设置语法高亮
syntax on
""设置相对行号
set relativenumber
""在光标处显示一条线
""set cursorline
""设置字不会超出屏幕，会换行显示，但是仍然在同一行
set wrap
""显示自己输入了什么命令
set showcmd
""在输入命令时，按tab可以有选项提示
set wildmenu
""设置文件格式为utf-8
set encoding=utf-8
""设置搜索高亮
set hlsearch
""设置搜索输入时，高亮可以同步
set incsearch
""搜索忽略大小写
set ignorecase
""搜索只认大写
set smartcase
""更改末尾空格显示
set scrolloff=4
""设置按p可以直接从系统剪切板粘贴
""set clipboard=unnamedcol
"
""==============
""===
""===	map
""===
""==============


map sh :set nosplitright<CR>:vsplit<CR>
map sj :set splitright<CR>:vsplit<CR>
map sk :set nosplitbelow<CR>:split<CR>
map sl :set splitbelow<CR>:split<CR>

map <C-h> <C-w>h
map <C-j> <C-w>l
map <C-l> <C-w>j
map <C-k> <C-w>k
"
"
""==============
""===
""===	noremap
""===
""==============
""方向键(移动)
""
""	      ^
""	      k
""
""	<h         j>
""	
""	      l
""	      v
""
noremap j l
noremap l j
noremap H 7h
noremap J 7l
noremap L 7j
noremap K 7k
noremap ff magg=G`a
noremap tn :tabe<CR>
noremap t, :-tabnext<CR>
noremap t. :+tabnext<CR>
nnoremap q ZZ
nnoremap Q ZZ
noremap . $
noremap , 0
noremap n nzz
noremap N Nzz
noremap <space><CR> :nohlsearch<CR>
nnoremap U vU
nnoremap <C-S> <ESC>:w<CR>
nnoremap <C-q> <ESC>:q!<CR>
"
""==============
""===
""===	inoremap
""===
""==============
inoremap <c-s> <ESC>:w<CR>i
inoremap <C-q> <ESC>:q!<CR>
inoremap <C-z> <ESC>ui
"
""==============
""===
""===	exec
""===
""==============
exec "nohlsearch"
"
""==============
""===
""===	auto
""===
""==============
"
au BufReadPost * if line("'\"") > 1 && line("'\"") <= line("$") | exe "normal! g'\"" | endif





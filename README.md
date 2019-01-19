# trytest
this project should't do anything beside of testing new code.

# created project:

### *****check git config -l user.name and user.email 1st****************
### reset user.name and user.email:
 	git config --global --unset user.name
	git config --global --unset user.email
### permission denied to other user git:
	https://www.youtube.com/watch?v=aSTTJd5JMXg
	search: manage window credentials
	change the name and email.
### shcool:
	 git config --global user.name "TWQ1765"
	 git config --global user.email "www.taaadaaa@qq.com"
### personal:
	 git config --global user.name "tada1765"
	 git config --global user.email "www.tada1765@gmail.com"
*********************************************************************

ceedling new <project_name> // ceedling new trytest

cd <project_name>
###
:extension:
  :executable: .exe
###
cat >.gitignore << EOF
build/*
!build/Readme.txt
EOF
###
echo "Do not remove me!" > build/Readme.txt
cp build/Readme.txt test/support/
###
git init
git add --all
git status
git commit -m "Created the <project_name> project"
###
// no need anymore
// :environment:
// :module_generator:
// :naming: bumpy

ceedling module:create[project_name]
###
git add --all
git status
git commit -m "added c.file and h.file."


### ******the success created project should look like***********
	C:\Student\tryingCreateProject

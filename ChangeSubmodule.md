# submodule url 및 특정 revision 변경 
1. myproject/.gitmodules 수정
  * url 수정
```
https://github.com/mavlink/mavlink -> https://github.com/jeyong/mavlink
```
2. 기존 git submodule 초기화
```bash
> git submodule deinit -f .
```
3. 변경된 url로 submodule 가져오기
```bash
> git submodule sync
> git submodule update --init --recursive
```
4. submodule 디렉토리로 이동하여 원하는 branch로 이동하여
```
> cd mavlink
> git fetch
> git checkout my_branch
```
5. git commit (myproject)
```bash
> cd myproject
> git commit -am "change submodule url and revision"
> git push
```

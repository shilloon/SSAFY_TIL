# DAY1
## Git 사용법

> Remote Reppository
>> git remote add origin (원격 저장소 URL)
>> - 로컬 저장소에 원격 저장소 추가
>> - Origin = 원격 저장소 별칭 (변경 가능)
>> - git remote -v를 통해 등록된 저장소 목록 확인
>> - git remote rm (원격 저장소 이름)를 통해 원격 저장소 삭제
--------------------------------
> Push
>> git push origin(저장소 별칭) master
>> - 원격 저장소에 Commit 목록을 업로드
>> - 해당 Brunch에 저장
--------------------------------
> Pull
>> git pull origin(저장소 별칭) master
>> - 원격 저장소의 변경사항만 받아옴 (Update)
--------------------------------
> Clone
>> git clone (원격 저장소 URL)
>> - 원격 저장소 전체 복제 (Download)
>> - 이미 git init 되어 있음
--------------------------------
> .gitignore
>> - gitignore에 저장된 파일들은 추적되지 않음
>> - 이밎 git의 관리를 받은 이력이 있다면 gitignore에 작성해도 적용되지 않음
>> - [google] https://www.topal.com/developers/gitignore (gitignore 목록 생성 사이트)
--------------------------------
> README.md
>> - 프로젝트 문서 파일
>> - 문서 작성
--------------------------------
> Revert
>> git revert <commit id>
>> - git log --oneline를 통해 commit id 코드를 알아낼 수 있음
>> - commit된 해당 파일을 삭제 가능함
--------------------------------
> Reset
>> git reset [Option] <commit id>
>> - --soft를 통해 commit이전으로 되돌림 (staging area)
>> - --mixed를 통해 add이전으로 되돌림 (working directory)
>> - --hard를 통해 (commit의 기록이 남지 않음)
--------------------------------
>  git reflog
>> - reset한 내역과 commit id들을 볼 수 있음
>> - git reset --hard <복구할려는 commit id>를 통해 Reset 복구 가능

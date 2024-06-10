#Github
## 关键字查询
1. ***awesome***  去此标签类别查询项目
2. ***tutorial***  查询书籍  资料  文档
3. ***sample***   查询对应的技术样例
---
## github三要素
* ***Repository***  仓库
  1. 仓库是github项目管理存储的基本单位
  2. 一个仓库存储一个项目  一个用户可以拥有多个仓库  一般仓库分为public  private
* ***Commit***  提交
  1. 程序员在整个开发周期  有大量对代码资源的迭代和修改  都可以通过commit的方式来进行记录  便于程序员回溯代码  即使这些代码被删除提交便于使用者观察整个工程的开发流程以及设计流程
* ***Branch***  分支
  1. 在仓库中可以包含多个分支  分支才是代码文件的第一存储单位  默认的仓库主分支为  master / main 
  2. 不仅可以管理代码存储  还可以多人协作开发
---
## 仓库内容
* **Code** 资源存储  代码资源  二进制  项目管理脚本  许可证等
* **issues**  使用时遇到的bug  问题  进行提交  等待反馈
* **README** 使用markdown语言  工程自述文件  开发进度  版本更新  使用介绍
* **LICENSE**  许可证  GPL 2.0 3.0  Apahce 2.0   Mit 这些许可证  给使用者最大使用权限以及最小的限制
---
## Git软件  分布式版本控制系统
* **仓库管理软件**  使用git管理私人代码或者企业代码
---
## 设备认证
* 如何让网站的账户与设备绑定  后续完成代码的管理  上传下载
  1. ```git init  //创建本地仓库  后续对仓库的操作  都要在仓库位置```
  2. ```git config --list  //查看git配置文件```
  3. ```git config --global user.email "邮箱"```
  4. ```git config --global user.name "名字"```
  5. ```ssh-keygen -t -res -C "注册邮箱" //创建本地密文```
* 去对应目录查找密文文件
  1. ```rsa.pub 复制密文 粘贴 settings -> SSH key and GPG -> new sshkey -> 粘贴```
  2. ```ssh -T git@github.com //测试关联是够成功```
* 为目标仓库器别名  定位目标仓库  后续上传
  1. ```git remote add origin "ssh地址"  //为ssh仓库地址创建别名为orgin```
  2. ```git remote remove origin //删除origin别名```
  3. ```git remote add origin "ssh地址"  //为ssh仓库地址创建别名为origin```
---
## 本地设备与云端仓库的交互逻辑
  1. ```git add code.c //将code.c到git缓冲区里```
  2. ```git commit "提交说明" //提交记录  code.c到本地仓库```
  3. ```git push origin master  //推到到云端仓库里```
  4. ```git add //添加内容```
  5. ```git rm //删除本地文件 并删除库数据```
  6. ```git restore //恢复被删除(仓库存在)```
  7. ```git status``` //查看状态
---
##  代码更新的依赖关系被破坏
  1. 本地内容要比云端新  完成更新替换  但是如果直接修改云端内容  导致本地内容无法再次提交
  2. 先拉取git pull 云端内容  与本地内容合并或操作  再次推即可
  3. ```gti pull --rebase origin master```
  4. ```git rebase --skip //忽略本地内容  保留云端内容```
  5. ```git rebase --abort  //忽略云端内容  保留本地内容```
  6. ```git rebase --continue //双端 git都保留```
## 下载开源代码
  1. ```git clone "http仓库地址" //下载开源项目code资源```
---
## 分支Branch
  1. 关于分支的相关命令  创建分支  选择分支  合并分支等等
---



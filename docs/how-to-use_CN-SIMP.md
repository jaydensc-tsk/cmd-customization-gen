*此文件也提供 日文、英语 和 繁中版本。 *

# 欢迎

欢迎阅读本文档，在开始之前，让我们先做一些准备工作。

# 准备工作

## 获取工具

您可以从 /release 或发布页面下载该工具。

## 验证文件

要验证文件是否为官方版本，请执行以下 gpg 命令：

```CMD copy

gpg --verify cmd-gen_[版本号].exe.sig

```
您将看到类似以下内容：

```CMD
gpg: assuming signed data in 'cmd-gen_1.0.1_26023.exe'
gpg: Signature made Sun Feb 22 15:33:31 2026 HKT
gpg:                using RSA key 2B440DB0DB471D46E859C0C6162FD5566BCC32D1
gpg: Good signature from "kungjaydensc-tsk <kungjayden0331@gmail.com>" [unknown]
gpg: WARNING: This key is not certified with a trusted signature!
gpg:          There is no indication that the signature belongs to the owner.
Primary key fingerprint: 2B44 0DB0 DB47 1D46 E859  C0C6 162F D556 6BCC 32D1

```

![pic](/assets/gpgsign.png)

![pic](/assets/gpgsign_pic1.png)

请检查密钥 ID/密钥指纹、签名者姓名、电子邮件地址以及签名是否有效。

正常情况下，密钥 ID/密钥指纹为“2B44 0DB0 DB47 1D46 E859 C0C6 162F D556 6BCC 32D1”，签名者名称为“kungjaydensc-tsk”，邮箱为“kungjayden0331@gmail.com”，签名应该没问题。

至此，您已完成所有准备工作！

# 开始使用

## 基本教程

打开工具后，您会看到类似这样的界面：

![pic](/assets/main_menu.png)

这是工具的主菜单！您可以看到三个选项：“生成脚本”、“关于”和“退出”，输入选项前的数字即可进入。

正常情况下，您可以在生成菜单的选项中看到类似这样的提示：

![pic](/assets/hint.png)

不过我们会在下一节课中详细解释。

小贴士：别忘了选择选项 6（“生成”）来查看和复制脚本！

## 选项和菜单

除了我们刚才提到的主菜单之外，还有两个菜单：“生成菜单”和“完成菜单”。

![pic](assets/gene_menu)

![assets])(assets/donemenu)

我们将解释生成菜单中的一些选项。

### 选项 3 提示

这是我们解释的第一个选项。此选项用于更改命令提示符 (cmd) 中命令前的文本，所有占位符都可以在[此处](https://learn.microsoft.com/zh-tw/windows-server/administration/windows-commands/prompt)查看。

### 选项 6 生成

使用此选项查看您的脚本。

# 故障排除
## 工具被阻塞

![pic](/assets/windef_err_sol_pic1.png)

这不是我们的错，您可以按照以下步骤解决：

1.

![1.点击圈出的位置](/assets/windef_err_sol_pic2.png)

2.

![2.点击…… [circled](/assets/windef_err_sol_pic3.png)

有时它会对文件进行快速扫描，正常情况下，完成此步骤后即可运行该工具。

## 脚本生成不正确

1. 检查您的工具版本，如果是最新版本，请提交新的 issue，因为有时我可能会漏掉空格或其他内容。

2. 如果不是最新版本，请尝试更新，这可能会解决问题。
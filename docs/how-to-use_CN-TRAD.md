*此文件也提供 日文、英語 和 簡中版本。*


# 歡迎

歡迎閱讀本文檔，在開始之前，讓我們先做一些準備。

# 準備工作

## 取得工具

您可以從 /release 或發布頁面下載工具。

## 驗證文件

若要驗證檔案是否為官方版本，請執行下列 gpg 指令：

```CMD copy

gpg --verify cmd-gen_[版本號碼].exe.sig

```
您將看到類似以下內容：

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

請檢查金鑰 ID/金鑰指紋、簽署者姓名、電子郵件地址以及簽章是否有效。

正常情況下，密鑰 ID/密鑰指紋為“2B44 0DB0 DB47 1D46 E859 C0C6 162F D556 6BCC 32D1”，簽署者名稱為“kungjaydensc-tsk”，郵箱為“kungjayden0331@gmail.com”，郵箱為“kungjayden0331@gmail.com”，郵箱為應該簽名。

至此，您已完成所有準備！

# 開始使用

## 基本教程

打開工具後，您會看到類似這樣的介面：

![pic](/assets/main_menu.png)

這是工具的主選單！您可以看到三個選項：“生成腳本”、“關於”和“退出”，輸入選項前的數字即可進入。

正常情況下，您可以在產生選單的選項中看到類似這樣的提示：

![pic](/assets/hint.png)

不過我們會在下一堂課詳細解釋。

小貼士：別忘了選擇選項 6（「生成」）來檢視和複製腳本！

## 選項和選單

除了我們剛才提到的主選單之外，還有兩個選單：「產生選單」和「完成選單」。

![pic](assets/gene_menu)

![assets])(assets/donemenu)

我們將解釋生成選單中的一些選項。

### 選項 3 提示

這是我們解釋的第一個選項。此選項用於更改命令提示字元 (cmd) 中命令前的文本，所有佔位符都可以在[此處](https://learn.microsoft.com/zh-tw/windows-server/administration/windows-commands/prompt)查看。

### 選項 6 生成

使用此選項查看您的腳本。

# 故障排除
## 工具被阻塞

![pic](/assets/windef_err_sol_pic1.png)

這不是我們的錯，您可以按照以下步驟解決：

1.

![1.點選圈選的位置](/assets/windef_err_sol_pic2.png)

2.

![2.點選… [circled](/assets/windef_err_sol_pic3.png)

有時它會對文件進行快速掃描，正常情況下，完成此步驟後即可運行該工具。

## 腳本產生不正確

1. 檢查您的工具版本，如果是最新版本，請提交新的 issue，因為有時我可能會漏掉空格或其他內容。

2. 如果不是最新版本，請嘗試更新，這可能會解決問題。
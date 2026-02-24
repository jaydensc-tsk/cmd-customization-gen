
*此文件也提供 日文、英語 和 簡中版本。*

# 歡迎來到「[cmd-customization-gen](https://github.com/jaydensc-tsk/cmd-customization-gen/)」倉庫

# 1-用途

這是一個工具，用於產生一個腳本，該腳本允許您在啟動命令時使用自訂標題列、自訂提示符並列印一段可自訂的文字。

有關其工作原理，請參閱[§2-工作原理](/docs/README.md#2-how-it-work)

有關如何使用，請參閱[§3-使用方法](/docs/README.md#3-how-to-use)和[這份文檔](/docs/how-to-use.md)

有關常見問題解答，請參閱[這份文檔](/docs/FAQ.md)

# 2-工作原理

它主要使用批次腳本檔案中的`prompt`、`title`、`echo`和`color`命令。

# 3-使用方法

打開工具後，您會看到類似這樣的介面：

![pic](/assets/main_menu.png)

這是工具的主選單！您可以在這裡看到三個選項：「產生腳本」、「關於」和「退出」。輸入選項前的數字即可進入。

通常情況下，您可以在「產生腳本」選單的選項中看到類似這樣的提示：

![pic](/assets/hint.png)

專業提示：別忘了輸入選項 6（「生成」）來查看和複製腳本！

# 4-故障排除

## 工具被阻塞

![pic](/assets/windef_err_sol_pic1.png)

這不是我們的問題，您可以按照以下步驟解決：

1.

![1. 點選圈選的位置](/assets/windef_err_sol_pic2.png)

2.

![2. 點選圈起來的位置](/assets/windef_err_sol_pic3.png)

有時它會對文件進行快速掃描，通常情況下，完成此步驟後即可運行該工具。

## 腳本產生不正確

1. 檢查您的工具版本，如果是最新版本，請提交新的 issue，因為有時我可能會漏掉空格或其他錯誤。

2. 如果不是最新版本，請嘗試更新，這可能會解決問題。
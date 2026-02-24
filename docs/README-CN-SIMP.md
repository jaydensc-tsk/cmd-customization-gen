*此文件也提供 日文、英语 和 繁中版本。 *

# 欢迎来到「[cmd-customization-gen](https://github.com/jaydensc-tsk/cmd-customization-gen/)」仓库

# 1-用途

这是一个工具，用于产生一个脚本，该脚本允许您在启动命令时使用自订标题列、自订提示符并列印一段可自订的文字。

有关其工作原理，请参阅[§2-工作原理](/docs/README.md#2-how-it-work)

有关如何使用，请参阅[§3-使用方法](/docs/README.md#3-how-to-use)和[这份文档](/docs/how-to-use.md)

有关常见问题解答，请参阅[这份文档](/docs/FAQ.md)

# 2-工作原理

它主要使用批次脚本档案中的`prompt`、`title`、`echo`和`color`命令。

# 3-使用方法

打开工具后，您会看到类似这样的介面：

![pic](/assets/main_menu.png)

这是工具的主选单！您可以在这里看到三个选项：「产生脚本」、「关于」和「退出」。输入选项前的数字即可进入。

通常情况下，您可以在「产生脚本」选单的选项中看到类似这样的提示：

![pic](/assets/hint.png)

专业提示：别忘了输入选项 6（「生成」）来查看和复制脚本！

# 4-故障排除

## 工具被阻塞

![pic](/assets/windef_err_sol_pic1.png)

这不是我们的问题，您可以按照以下步骤解决：

1.

![1. 点选圈选的位置](/assets/windef_err_sol_pic2.png)

2.

![2. 点选圈起来的位置](/assets/windef_err_sol_pic3.png)

有时它会对文件进行快速扫描，通常情况下，完成此步骤后即可运行该工具。

## 脚本产生不正确

1. 检查您的工具版本，如果是最新版本，请提交新的 issue，因为有时我可能会漏掉空格或其他错误。

2. 如果不是最新版本，请尝试更新，这可能会解决问题。
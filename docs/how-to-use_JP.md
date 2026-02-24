*このドキュメントは、英語、簡体字中国語、繁体字中国語でもご利用いただけます。*
# ようこそ
このドキュメントへようこそ。始める前に、まずいくつか準備をしましょう。
# 準備ジョブ
## ツールを入手
ツールは /release またはリリースページからダウンロードできます
## ファイルの検証
ファイルが正規のものかどうかを確認するには、以下の gpg コマンドを実行してください:
```CMD copy
gpg --verify cmd-gen_[バージョン番号].exe.sig
```
次のような出力が得られます:
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

鍵ID/鍵のフィンガープリント、署名者の名前、メールアドレス、そして署名が正しいかどうかを確認してください。

通常、キーID/キーフィンガープリントは「2B44 0DB0 DB47 1D46 E859 C0C6 162F D556 6BCC 32D1」、署名者名は「kungjaydensc-tsk」、メールアドレスは「kungjayden0331@gmail.com」で、署名は正常に動作するはずです。

これで準備作業はすべて完了です！
# 使用開始
## 基本チュートリアル
ツールを開くと、このような画面が表示されます。
![pic](/assets/main_menu.png)
これがツールのメインメニューです！「gen script」「about」「quit」の3つのオプションがあり、オプションの前に数字を入力することで終了できます。

通常、生成メニューのオプションに以下のようなヒントが表示されます。

![pic](/assets/hint.png)
詳しくは次のセッションで説明します。

プロのヒント：スクリプトを表示・コピーするには、オプション6（「生成」）を入力するのを忘れないでください！
## オプションとメニュー
先ほど説明したメインメニューの他に、「生成メニュー（生成メニュー）」と「完了メニュー」の2つのメニューがあります。
![pic](assets/gene_menu)
![assets])(assets/donemenu)
genメニューのオプションをいくつか説明します。

### オプション3 prompt
これが最初に説明するオプションです。このオプションは、コマンドの前のテキストを変更します。すべてのプレースホルダーは[こちら](https://learn.microsoft.com/zh-tw/windows-server/administration/windows-commands/prompt)で確認できます。
### オプション6 generate
このオプションを使用してスクリプトを表示します。
# トラブルシューティング
## ツールがブロックされました
![pic](/assets/windef_err_sol_pic1.png)

これは弊社の責任ではありません。以下の手順で修正できます。

1.

![1.丸で囲んだ部分をクリック](/assets/windef_err_sol_pic2.png)

2.

![2. 丸で囲んだ部分をクリック](/assets/windef_err_sol_pic3.png)

場合によってはファイルの高速スキャンが行われますが、通常はこの手順を実行するとツールを実行できます。
## スクリプトが正しく生成されません
1. ツールのバージョンを確認してください。最新バージョンの場合は、新しい問題を報告してください。スペースなどを見落とすことがあるためです。

2. 最新バージョンでない場合は、アップデートしてみてください。問題が解決する可能性があります。
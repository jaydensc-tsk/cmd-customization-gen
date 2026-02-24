*this file also available in JP,CN-TRAD. and CN-SIMP.*
# Welcome
Welcome to the document,before we start,let do some perparation first.
# perparetion-job
## get-the-tool
you can get the tool by download it form the /release or from the releases page
## verify-file
for verify if the file offcial,do the gpg command below:
```CMD copy
gpg --verify cmd-gen_[version number].exe.sig
```
you will got something like this:
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

check the keyid/key fingerprint,signer's name,email and the do the signature is good.

in normal,the keyid/key fingerprint is"2B44 0DB0 DB47 1D46 E859  C0C6 162F D556 6BCC 32D1",signer'name is"kungjaydensc-tsk" with email "kungjayden0331@gmail.com",and the sign should be good.

at now,you have done all of the preparation jobs!
# Start-using
## Basic-tutorial
when you open the tool,you can see thing like this
![pic](/assets/main_menu.png)
this is the main menu of the tool! at there,you can see 3 option in there:"gen script","about" and "quit",you can enterng the number before a option to enter it.

in normal,you can see hint like this in the options in the gen menu:

![pic](/assets/hint.png)
but we'll explain it futher in the next session

pro tips: dont forgot to enter the option 6 ("generate") to view &copy the script!
## options & menus
exept the main menu we jst mentioned,there still have 2 menu:"generate menu(gen menu)" and done menu.
![pic](assets/gene_menu)
![assets])(assets/donemenu)
we're going to explain some options in gen menu there

### option3-prompt
this is the first option we explain,this option is changing the text in cmd that before the command,and all placeholder can checked at [there](https://learn.microsoft.com/zh-tw/windows-server/administration/windows-commands/prompt)
### opiton6-generate
use this option to view your script
# trobleshooting
## tool-got-blocked
![pic](/assets/windef_err_sol_pic1.png)

it's not our fault,you can fix in by doing the step below

1.

![1.click the place that circled](/assets/windef_err_sol_pic2.png)

2.

![2.click the place that circled](/assets/windef_err_sol_pic3.png)

sometime it ll' do a fast scan to the file,in normal,it ll' let u run the tool after doing ths step
## script generate not properly
1. check your tool's version ,if its the newest version, open a new issue,because sometime i can miss a space of else

2.if it not the he newest version,try update it,this may fix the issue
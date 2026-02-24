*this file also available in JP,CN-TRAD. and CN-SIMP.*
# Welcome
Welcome to the document,before we start,let do some perparation first.
# perparetion
## get-the tool
you can get the tool by download it form the /rel or from the releases page
## verify-file
for verify if the file offcial,do the gpg command below:
```CMD copy
gpg --verify cmd-gen_[version number].exe.sig
```
you will got something like this
```CMD
gpg: assuming signed data in 'cmd-gen_1.0.1_26023.exe'
gpg: Signature made Sun Feb 22 15:33:31 2026 HKT
gpg:                using RSA key 2B440DB0DB471D46E859C0C6162FD5566BCC32D1
gpg: Good signature from "kungjaydensc-tsk <kungjayden0331@gmail.com>" [unknown]
gpg: WARNING: This key is not certified with a trusted signature!
gpg:          There is no indication that the signature belongs to the owner.
Primary key fingerprint: 2B44 0DB0 DB47 1D46 E859  C0C6 162F D556 6BCC 32D1
```
[pic](/assets/gpgsign)
[pic](/assets/gpgsign_pic1)
check the keyid/key fingerprint,signer's name,email and the signature is good.
in normal,the keyid/key fingerprint is"2B44 0DB0 DB47 1D46 E859  C0C6 162F D556 6BCC 32D1",signer'name is"kungjaydensc-tsk" with email "kungjayden0331@gmail.com",and the sign should be good.
at now,you have done all of the preparation step!
# Start using
#
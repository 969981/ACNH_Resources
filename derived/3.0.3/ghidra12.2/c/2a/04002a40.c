
uint FUN_04002a40(char *param_1,ulong param_2,char *param_3)

{
  uint uVar1;
  size_t __maxlen;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_68 [24];
  
  __maxlen = 0;
  if (param_1 != (char *)0x0) {
    __maxlen = param_2;
  }
  uVar2 = vsnprintf(param_1,__maxlen,param_3,auStack_68 + 0x18);
  uVar3 = uVar2;
  if (param_2 <= uVar2 && param_1 != (char *)0x0) {
    uVar3 = 0x80000007;
  }
  uVar1 = 0x80000004;
  if (-1 < (int)uVar2) {
    uVar1 = uVar3;
  }
  return uVar1;
}


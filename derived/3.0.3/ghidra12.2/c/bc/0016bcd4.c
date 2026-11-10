
undefined8 FUN_0016bcd4(long param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 0x9ab) & 1) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x280) = 0xf;
  if (param_4 == (char *)0x0) {
    sVar1 = 0;
  }
  else {
    sVar1 = strlen(param_4);
  }
  uVar2 = FUN_001716a8(param_1,param_2,param_3,param_4,sVar1,1);
  if ((int)uVar2 == 0) {
    *(byte *)(param_1 + 0x9ab) = *(byte *)(param_1 + 0x9ab) | 1;
  }
  return uVar2;
}


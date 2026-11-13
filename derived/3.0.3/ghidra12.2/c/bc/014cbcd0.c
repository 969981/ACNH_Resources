
uint FUN_014cbcd0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *local_30;
  char *pcStack_28;
  
  if (*(int *)(param_1 + 0xb58) == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0xa2c) >> 2 & 1) != 0) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "EnableEmoticonUI";
    uVar2 = FUN_0274bce0(param_1 + 0x5d0,&local_30);
    if ((0 < (int)uVar2) && (*(int *)(param_1 + 0xb58) == 3)) {
      plVar3 = (long *)FUN_014e7558(uVar2,*(undefined4 *)(param_1 + 0xbcc));
      uVar1 = 0;
      if (plVar3 != (long *)0x0) {
        uVar1 = (**(code **)(*plVar3 + 0x3f0))();
      }
      goto LAB_014cbd4c;
    }
  }
  uVar1 = 0;
LAB_014cbd4c:
  return uVar1 & 1;
}


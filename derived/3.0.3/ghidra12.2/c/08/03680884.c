
undefined8 FUN_03680884(long param_1)

{
  undefined8 uVar1;
  
  FUN_03f2e80c(param_1 + 0x1b0);
  if ((*(byte *)(param_1 + 0x1b8) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x1b8) = *(byte *)(param_1 + 0x1b8) & 0xf8 | 4;
    if (*(long *)(param_1 + 0x1d8) == 0) {
      if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_036808f8;
    }
    else {
      FUN_03f45838(param_1 + 0x1c8);
      if (*(long *)(param_1 + 0x1c0) == 0) {
        *(undefined4 *)(param_1 + 0x1bc) = 0xe;
        goto LAB_036808f8;
      }
    }
    if (DAT_05b05848 != 0) {
      FUN_03f350f4(DAT_05b05848,param_1 + 0x1b0);
    }
  }
LAB_036808f8:
  if ((*(char *)(param_1 + 0x1a8) == '\0') ||
     ((*(int *)(param_1 + 0xe8) == 0 && (*(int *)(*(long *)(param_1 + 0xb8) + 0x100) == 0)))) {
    uVar1 = 1;
  }
  else {
    FUN_03f2aea0(param_1 + 0x98,0xffffffff,1);
    uVar1 = 0;
  }
  return uVar1;
}


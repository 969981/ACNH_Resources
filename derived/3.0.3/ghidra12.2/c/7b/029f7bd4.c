
void FUN_029f7bd4(long param_1)

{
  if ((*(byte *)(param_1 + 0x38) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xf8 | 4;
    if (*(long *)(param_1 + 0x58) == 0) {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_029f7c3c;
    }
    else {
      FUN_03f45838(param_1 + 0x48);
      if (*(long *)(param_1 + 0x40) == 0) {
        *(undefined4 *)(param_1 + 0x3c) = 0xe;
        goto LAB_029f7c3c;
      }
    }
    if (DAT_05b05848 != 0) {
      FUN_03f350f4(DAT_05b05848,param_1 + 0x30);
    }
  }
LAB_029f7c3c:
  if ((*(byte *)(param_1 + 0x70) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) & 0xf8 | 4;
    if (*(long *)(param_1 + 0x90) == 0) {
      if (*(long *)(param_1 + 0x78) == 0) {
        return;
      }
    }
    else {
      FUN_03f45838(param_1 + 0x80);
      if (*(long *)(param_1 + 0x78) == 0) {
        *(undefined4 *)(param_1 + 0x74) = 0xe;
        return;
      }
    }
    if (DAT_05b05848 != 0) {
      FUN_03f350f4(DAT_05b05848,param_1 + 0x68);
      return;
    }
  }
  return;
}


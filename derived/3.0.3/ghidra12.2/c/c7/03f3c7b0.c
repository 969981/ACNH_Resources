
void FUN_03f3c7b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04ba8fc0;
  if (param_1[0xc] != 0) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    param_1[0xc] = 0;
  }
  if (param_1[10] != 0) {
    *(undefined4 *)(param_1 + 9) = 0;
    param_1[10] = 0;
  }
  if (param_1[0x10] != 0) {
    *(undefined4 *)(param_1 + 0xf) = 0;
    param_1[0x10] = 0;
  }
  if (param_1[0xe] != 0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    param_1[0xe] = 0;
  }
  if ((*(byte *)(param_1 + 3) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf8 | 4;
    if (param_1[7] == 0) {
      if (param_1[4] == 0) goto LAB_03f3c868;
    }
    else {
      FUN_03f45838(param_1 + 5);
      if (param_1[4] == 0) {
        *(undefined4 *)((long)param_1 + 0x1c) = 0xe;
        goto LAB_03f3c868;
      }
    }
    if (DAT_05b05848 != 0) {
      FUN_03f350f4(DAT_05b05848,param_1 + 2);
    }
  }
LAB_03f3c868:
  FUN_03f2d448(param_1 + 2);
  return;
}


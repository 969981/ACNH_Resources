
void FUN_03f3dadc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04ba8fe0;
  if (param_1[0xe] != 0) {
    param_1[0xe] = 0;
    if ((*(byte *)(param_1 + 8) >> 1 & 1) != 0) {
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf8 | 4;
      if (param_1[0xc] == 0) {
        if (param_1[9] == 0) goto LAB_03f3db60;
      }
      else {
        FUN_03f45838(param_1 + 10);
        if (param_1[9] == 0) {
          *(undefined4 *)((long)param_1 + 0x44) = 0xe;
          goto LAB_03f3db60;
        }
      }
      if (DAT_05b05848 != 0) {
        FUN_03f350f4(DAT_05b05848,param_1 + 7);
      }
    }
  }
LAB_03f3db60:
  FUN_038e1c80(param_1 + 0x5b);
  param_1[0x52] = &PTR_LAB_04ba9010;
  param_1[0x3f] = &PTR_LAB_04ba92f0;
  if (*(int *)(param_1 + 0x47) != 7) {
    if (param_1[0x43] != 0) {
      FUN_03f42ca4(param_1[0x43],param_1 + 0x3f,1);
    }
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    *(undefined4 *)(param_1 + 0x47) = 7;
  }
  FUN_038e1c80(param_1 + 0x4a);
  param_1[0x2c] = &PTR_LAB_04ba92f0;
  if (*(int *)(param_1 + 0x34) != 7) {
    if (param_1[0x30] != 0) {
      FUN_03f42ca4(param_1[0x30],param_1 + 0x2c,1);
    }
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    *(undefined4 *)(param_1 + 0x34) = 7;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
  }
  FUN_038e1c80(param_1 + 0x37);
  param_1[0x19] = &PTR_LAB_04ba92f0;
  if (*(int *)(param_1 + 0x21) != 7) {
    if (param_1[0x1d] != 0) {
      FUN_03f42ca4(param_1[0x1d],param_1 + 0x19,1);
    }
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x21) = 7;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
  }
  FUN_038e1c80(param_1 + 0x24);
  FUN_03f2d448(param_1 + 7);
  return;
}


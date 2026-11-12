
void FUN_0081c0c8(undefined8 param_1,long *param_2)

{
  byte bVar1;
  
  if (*param_2 != 0) {
    *(undefined1 *)(*param_2 + 0x160) = 1;
    *param_2 = 0;
  }
  bVar1 = *(byte *)(param_2 + 3);
  if (((bVar1 >> 1 & 1) == 0) && ((char)param_2[1] == '\0')) {
    return;
  }
  if ((bVar1 >> 1 & 1) != 0) {
    *(byte *)(param_2 + 3) = bVar1 & 0xf8 | 4;
    if (param_2[7] == 0) {
      if (param_2[4] == 0) goto LAB_0081c150;
    }
    else {
      FUN_03f45838(param_2 + 5);
      if (param_2[4] == 0) {
        *(undefined4 *)((long)param_2 + 0x1c) = 0xe;
        goto LAB_0081c150;
      }
    }
    if (DAT_05b05848 != 0) {
      FUN_03f350f4(DAT_05b05848,param_2 + 2);
    }
  }
LAB_0081c150:
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined4 *)(param_2 + 9) = 0xffffffff;
  return;
}


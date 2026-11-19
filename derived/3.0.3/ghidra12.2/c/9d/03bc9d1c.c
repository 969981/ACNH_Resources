
void FUN_03bc9d1c(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  
  *param_1 = param_2;
  lVar2 = *param_3;
  param_1[1] = lVar2;
  if (lVar2 == 0) {
    *(undefined1 *)(param_1 + 2) = 0xff;
  }
  else {
    *(byte *)(param_1 + 2) = *(byte *)(lVar2 + 0x2c) & 1;
    if ((*(byte *)(lVar2 + 0x2c) >> 2 & 1) != 0) {
      bVar1 = *(byte *)((long)param_1 + 0x11) | 1;
      goto LAB_03bc9d64;
    }
  }
  bVar1 = *(byte *)((long)param_1 + 0x11) & 0xfe;
LAB_03bc9d64:
  *(byte *)((long)param_1 + 0x11) = bVar1;
  param_1[5] = 0;
  return;
}


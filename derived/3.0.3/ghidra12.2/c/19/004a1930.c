
undefined8 FUN_004a1930(ulong *param_1,byte *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 0x80) {
    *param_2 = (byte)uVar1;
    return 1;
  }
  if (uVar1 >> 0xe == 0) {
    *param_2 = (byte)(uVar1 >> 8) | 0x80;
    param_2[1] = (byte)*param_1;
    return 2;
  }
  if (uVar1 >> 0x15 == 0) {
    *param_2 = (byte)(uVar1 >> 0x10) | 0xc0;
    param_2[1] = (byte)(*param_1 >> 8);
    param_2[2] = (byte)*param_1;
    return 3;
  }
  if (uVar1 >> 0x1b == 0) {
    *param_2 = (byte)(uVar1 >> 0x18) | 0xe0;
    param_2[1] = (byte)(*param_1 >> 0x10);
    param_2[2] = (byte)(*param_1 >> 8);
    param_2[3] = (byte)*param_1;
    return 4;
  }
  if (uVar1 >> 0x23 == 0) {
    *param_2 = (byte)(uVar1 >> 0x20) | 0xe8;
    param_2[1] = (byte)(*param_1 >> 0x18);
    param_2[2] = (byte)(*param_1 >> 0x10);
    param_2[3] = (byte)(*param_1 >> 8);
    param_2[4] = (byte)*param_1;
    return 5;
  }
  if (uVar1 >> 0x28 == 0) {
    *param_2 = 0xf8;
    param_2[1] = (byte)*(undefined4 *)((long)param_1 + 4);
    param_2[2] = (byte)(*param_1 >> 0x18);
    param_2[3] = (byte)(*param_1 >> 0x10);
    param_2[4] = (byte)(*param_1 >> 8);
    param_2[5] = (byte)*param_1;
    return 6;
  }
  if (uVar1 >> 0x3b == 0) {
    *param_2 = (byte)(uVar1 >> 0x38) | 0xf0;
    param_2[1] = (byte)*(undefined2 *)((long)param_1 + 6);
    param_2[2] = (byte)(*param_1 >> 0x28);
    param_2[3] = (byte)*(undefined4 *)((long)param_1 + 4);
    param_2[4] = (byte)(*param_1 >> 0x18);
    param_2[5] = (byte)(*param_1 >> 0x10);
    param_2[6] = (byte)(*param_1 >> 8);
    param_2[7] = (byte)*param_1;
    return 8;
  }
  *param_2 = 0xf9;
  param_2[1] = *(byte *)((long)param_1 + 7);
  param_2[2] = (byte)*(undefined2 *)((long)param_1 + 6);
  param_2[3] = (byte)(*param_1 >> 0x28);
  param_2[4] = (byte)*(undefined4 *)((long)param_1 + 4);
  param_2[5] = (byte)(*param_1 >> 0x18);
  param_2[6] = (byte)(*param_1 >> 0x10);
  param_2[7] = (byte)(*param_1 >> 8);
  param_2[8] = (byte)*param_1;
  return 9;
}


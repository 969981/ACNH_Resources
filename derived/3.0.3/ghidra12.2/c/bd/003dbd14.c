
undefined8 FUN_003dbd14(byte *param_1,long *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_130 [256];
  
  if (param_1[2] != 0) {
    return 1;
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[3] = 0;
  bVar1 = (**(code **)(*param_2 + 0x10))(param_2,auStack_130,0);
  *param_1 = bVar1 & 1;
  param_1[1] = *(byte *)(param_3 + 0x31);
  if (((bVar1 & 1) == 0) || (*(long *)(param_1 + 8) == 0)) {
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    uVar3 = 0;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_3 + 0x18);
  }
  else {
    uVar2 = FUN_003dbde0(param_1,0,param_2,param_3);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  param_1[2] = 1;
  return 1;
}


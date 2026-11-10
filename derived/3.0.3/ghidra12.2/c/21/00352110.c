
void FUN_00352110(byte *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  
  if ((*param_1 & 1) != 0) {
    (*param_3)(*(undefined8 *)(param_1 + 0x40),param_4);
    (*param_3)(*(undefined8 *)(param_1 + 0x48),param_4);
  }
  pbVar2 = param_1 + 8;
  lVar1 = *(long *)pbVar2;
  if (lVar1 != 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      lVar1 = 0;
      uVar3 = 0;
      do {
        FUN_00347c8c(*(long *)(param_1 + 8) + lVar1,param_2);
        uVar3 = uVar3 + 1;
        lVar1 = lVar1 + 0x48;
      } while (uVar3 < *(uint *)(param_1 + 0x28));
      lVar1 = *(long *)pbVar2;
    }
    (*param_3)(lVar1,param_4);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    (*param_3)(*(long *)(param_1 + 0x10),param_4);
  }
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2c] = 0xff;
  param_1[0x2d] = 0xff;
  param_1[0x2e] = 0xff;
  param_1[0x2f] = 0xff;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  pbVar2[0] = 0;
  pbVar2[1] = 0;
  pbVar2[2] = 0;
  pbVar2[3] = 0;
  pbVar2[4] = 0;
  pbVar2[5] = 0;
  pbVar2[6] = 0;
  pbVar2[7] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}


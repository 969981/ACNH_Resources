
bool FUN_02292108(long param_1,uint *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_2;
  if ((int)uVar2 < 2) {
    param_1 = param_1 + 8;
    lVar1 = param_1 + (ulong)uVar2 * 0xd8;
    if (1 < uVar2) {
      lVar1 = param_1;
    }
    *(undefined4 *)(lVar1 + 8) = *param_3;
    *(undefined4 *)(lVar1 + 0xc) = param_3[1];
    *(undefined4 *)(lVar1 + 0x10) = param_3[2];
    uVar3 = *param_2;
    lVar1 = param_1 + (ulong)uVar3 * 0xd8;
    if (1 < uVar3) {
      lVar1 = param_1;
    }
    *(uint *)(lVar1 + 0x1c) = uVar3;
    lVar1 = param_1 + (ulong)*param_2 * 0xd8;
    if (1 < *param_2) {
      lVar1 = param_1;
    }
    *(undefined4 *)(lVar1 + 0x20) = *param_4;
    lVar1 = param_1 + (ulong)*param_2 * 0xd8;
    if (1 < *param_2) {
      lVar1 = param_1;
    }
    *(undefined4 *)(lVar1 + 0x24) = *param_5;
    lVar1 = param_1 + (ulong)*param_2 * 0xd8;
    if (1 < *param_2) {
      lVar1 = param_1;
    }
    *(undefined4 *)(lVar1 + 0x14) = *param_6;
  }
  return (int)uVar2 < 2;
}


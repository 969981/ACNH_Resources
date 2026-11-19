
ulong FUN_03c359f0(ulong *param_1,byte *param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  if (param_3 == 0) {
    param_1[3] = 0;
    param_1[4] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return 0xffffffffffffffb8;
  }
  param_1[3] = (ulong)param_2;
  param_1[4] = (ulong)(param_2 + 8);
  if (param_3 < 8) {
    param_1[2] = (ulong)param_2;
    uVar2 = (ulong)*param_2;
    *param_1 = uVar2;
    switch(param_3) {
    case 7:
      uVar2 = uVar2 | (ulong)param_2[6] << 0x30;
      *param_1 = uVar2;
    case 6:
      uVar2 = uVar2 + ((ulong)param_2[5] << 0x28);
      *param_1 = uVar2;
    case 5:
      uVar2 = uVar2 + ((ulong)param_2[4] << 0x20);
      *param_1 = uVar2;
    case 4:
      uVar2 = uVar2 + (ulong)param_2[3] * 0x1000000;
      *param_1 = uVar2;
    case 3:
      uVar2 = uVar2 + (ulong)param_2[2] * 0x10000;
      *param_1 = uVar2;
    case 2:
      *param_1 = uVar2 + (ulong)param_2[1] * 0x100;
    }
    if (param_2[param_3 - 1] == 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      return 0xffffffffffffffec;
    }
    iVar1 = (int)LZCOUNT((uint)param_2[param_3 - 1]) + (int)param_3 * -8 + 0x29;
  }
  else {
    param_1[2] = (ulong)(param_2 + (param_3 - 8));
    *param_1 = *(ulong *)(param_2 + (param_3 - 8));
    if (param_2[param_3 - 1] == 0) {
      *(undefined4 *)(param_1 + 1) = 0;
      return 0xffffffffffffffff;
    }
    iVar1 = (int)LZCOUNT((uint)param_2[param_3 - 1]) + -0x17;
  }
  *(int *)(param_1 + 1) = iVar1;
  return param_3;
}


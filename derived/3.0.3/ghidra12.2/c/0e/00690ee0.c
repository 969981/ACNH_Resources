
void FUN_00690ee0(int *param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  if (param_2 != param_3) {
    iVar2 = 0;
    do {
      uVar3 = *param_2;
      if (uVar3 != 0) {
        uVar3 = uVar3 - 1 & (uVar3 ^ 0xffffffffffffffff);
        *(ulong **)(param_1 + 2) = param_2;
        *(ulong **)(param_1 + 4) = param_3;
        uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
        uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
        uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f;
        uVar3 = uVar3 + (uVar3 >> 8);
        lVar1 = uVar3 + (uVar3 >> 0x10);
        *param_1 = ((int)((ulong)lVar1 >> 0x20) + (int)lVar1 & 0x7fU) + iVar2;
        *(ulong *)(param_1 + 6) = *param_2 - 1 & *param_2;
        return;
      }
      param_2 = param_2 + 1;
      iVar2 = iVar2 + 0x40;
    } while (param_2 != param_3);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = -1;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}


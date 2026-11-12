
void FUN_00690f80(uint *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  uint *puVar5;
  ulong uVar6;
  
  uVar2 = *param_1 & 0xffffffc0;
  uVar3 = *(ulong *)(param_1 + 6);
  if (uVar3 != 0) {
    uVar6 = uVar3 - 1 & (uVar3 ^ 0xffffffffffffffff);
    uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f;
    uVar6 = uVar6 + (uVar6 >> 8);
    lVar1 = uVar6 + (uVar6 >> 0x10);
    *param_1 = ((int)((ulong)lVar1 >> 0x20) + (int)lVar1 & 0x7fU) + uVar2;
    *(ulong *)(param_1 + 6) = uVar3 - 1 & uVar3;
    return;
  }
  puVar5 = param_1 + 2;
  puVar4 = *(ulong **)puVar5;
  do {
    puVar4 = puVar4 + 1;
    *(ulong **)puVar5 = puVar4;
    if (puVar4 == *(ulong **)(param_1 + 4)) {
      puVar5[0] = 0;
      puVar5[1] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *param_1 = 0xffffffff;
      param_1[6] = 0;
      param_1[7] = 0;
      return;
    }
    uVar2 = uVar2 + 0x40;
    *param_1 = uVar2;
    uVar3 = *puVar4;
  } while (uVar3 == 0);
  uVar3 = uVar3 - 1 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
  uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f;
  uVar3 = uVar3 + (uVar3 >> 8);
  lVar1 = uVar3 + (uVar3 >> 0x10);
  *param_1 = ((int)((ulong)lVar1 >> 0x20) + (int)lVar1 & 0x7fU) + uVar2;
  *(ulong *)(param_1 + 6) = *puVar4 - 1 & *puVar4;
  return;
}


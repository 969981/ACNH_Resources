
void FUN_03bef0a0(long *param_1,long param_2,uint *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  *param_1 = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if (*(int *)(param_2 + 4) == 0) {
    uVar3 = 0;
  }
  else {
    param_1[1] = param_2 + 0x30;
    uVar3 = (ulong)*(uint *)(param_2 + 4);
  }
  lVar1 = param_2 + 0x30 + uVar3 * 4;
  if (*param_3 == 0) {
    uVar3 = 0;
  }
  else {
    param_1[2] = lVar1;
    uVar3 = (ulong)*param_3;
  }
  lVar1 = lVar1 + uVar3 * 4;
  iVar5 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    param_1[3] = lVar1;
    uVar2 = *(uint *)(param_2 + 8);
    lVar1 = lVar1 + (ulong)uVar2 * 2 + ((ulong)uVar2 & 1) * 2;
    iVar5 = 0;
    if (uVar2 != 0) {
      param_1[4] = lVar1;
      iVar5 = *(int *)(param_2 + 8);
    }
  }
  if (iVar5 != *(int *)(param_2 + 0xc)) {
    *(int *)(param_1 + 5) = (int)lVar1 + iVar5 * 0x20;
  }
  uVar4 = (ulong)(uint)(*(int *)(param_2 + 0x2c) + (int)param_2);
  uVar6 = *(ulong *)PTR_DAT_04bb38c8 | uVar4;
  uVar3 = uVar6 + 0x100000000;
  if (*(ulong *)PTR_DAT_04bb38c0 <= uVar4) {
    uVar3 = uVar6;
  }
  if (*(int *)(param_2 + 0x14) == 0) {
    uVar4 = 0;
  }
  else {
    param_1[6] = uVar3;
    uVar4 = (ulong)*(uint *)(param_2 + 0x14);
  }
  lVar1 = uVar3 + uVar4 * 8;
  if (*(int *)(param_2 + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    param_1[7] = lVar1;
    uVar2 = *(uint *)(param_2 + 0x18);
  }
  lVar1 = lVar1 + (ulong)uVar2 * 0xc;
  if (*(int *)(param_2 + 0x1c) == 0) {
    uVar2 = 0;
  }
  else {
    param_1[8] = lVar1;
    uVar2 = *(uint *)(param_2 + 0x1c);
  }
  lVar1 = lVar1 + (ulong)uVar2 * 0x18;
  if (*(int *)(param_2 + 0x20) == 0) {
    uVar3 = 0;
  }
  else {
    param_1[9] = lVar1;
    uVar3 = (ulong)*(uint *)(param_2 + 0x20);
  }
  lVar1 = lVar1 + uVar3 * 0x10;
  if (*(int *)(param_2 + 0x24) != 0) {
    param_1[10] = lVar1;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    param_1[0xb] = lVar1 + (ulong)*(uint *)(param_2 + 0x24) * 0x14;
  }
  return;
}


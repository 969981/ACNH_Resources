
void FUN_003aa384(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  uVar1 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  if ((int)uVar3 < 1) {
    uVar2 = 0;
  }
  if ((int)uVar2 <= (int)uVar1) {
    uVar2 = uVar1;
  }
  uVar1 = (int)(uVar1 + 0x1f) >> 3 & 0xfffffffc;
  uVar4 = (long)(int)param_1[2] * 0xc + 7U & 0xfffffffffffffff8;
  lVar5 = (long)(int)uVar1;
  if ((char)param_1[3] == '\0' || *(char *)((long)param_1 + 0xd) == '\0') {
    uVar4 = 0;
  }
  *(ulong *)(param_1 + 0x10) = (ulong)uVar2 * 4;
  param_1[0x12] = 8;
  param_1[0x13] = 0;
  *(long *)(param_1 + 8) = lVar5;
  param_1[10] = 8;
  param_1[0xb] = 0;
  *(ulong *)(param_1 + 0x18) = uVar4;
  param_1[0x1a] = 8;
  param_1[0x1b] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 8;
  param_1[7] = 0;
  if (uVar1 != 0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *(long *)(param_1 + 4) = lVar5;
  }
  if (uVar2 != 0) {
    uVar6 = lVar5 + 7U & 0xfffffffffffffff8;
    *(ulong *)(param_1 + 0x16) = uVar6;
    lVar5 = uVar6 + (ulong)uVar2 * 4;
    *(long *)(param_1 + 4) = lVar5;
    param_1[6] = 8;
    param_1[7] = 0;
  }
  if (uVar4 != 0) {
    uVar6 = lVar5 + 7U & 0xfffffffffffffff8;
    *(ulong *)(param_1 + 0x1e) = uVar6;
    *(ulong *)(param_1 + 4) = uVar6 + uVar4;
    param_1[6] = 8;
    param_1[7] = 0;
  }
  return;
}


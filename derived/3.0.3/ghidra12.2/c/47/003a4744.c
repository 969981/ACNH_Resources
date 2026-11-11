
void FUN_003a4744(uint *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = param_1[1];
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  uVar1 = *param_1;
  if ((int)*param_1 <= (int)uVar3) {
    uVar1 = uVar3;
  }
  lVar4 = (long)(int)uVar3 * 0x30;
  uVar6 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  *(long *)(param_1 + 8) = lVar4;
  param_1[10] = 8;
  param_1[0xb] = 0;
  *(ulong *)(param_1 + 0x10) = uVar6;
  param_1[0x12] = 8;
  param_1[0x13] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  uVar5 = (long)(int)param_1[2] * 0xc + 7U & 0xfffffffffffffff8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 8;
  param_1[7] = 0;
  if ((char)param_1[3] == '\0' || *(char *)((long)param_1 + 0xd) == '\0') {
    uVar5 = 0;
  }
  lVar2 = 0;
  if (*(char *)((long)param_1 + 0xe) != '\0') {
    lVar2 = (long)(int)uVar3 << 4;
  }
  *(ulong *)(param_1 + 0x18) = uVar5;
  param_1[0x1a] = 8;
  param_1[0x1b] = 0;
  *(long *)(param_1 + 0x20) = lVar2;
  param_1[0x22] = 0x10;
  param_1[0x23] = 0;
  if (uVar3 == 0) {
    lVar4 = 0;
  }
  else {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *(long *)(param_1 + 4) = lVar4;
  }
  if (uVar1 != 0) {
    *(long *)(param_1 + 0x16) = lVar4;
    lVar4 = lVar4 + uVar6;
    *(long *)(param_1 + 4) = lVar4;
    param_1[6] = 8;
    param_1[7] = 0;
  }
  if (uVar5 != 0) {
    uVar6 = lVar4 + 7U & 0xfffffffffffffff8;
    *(ulong *)(param_1 + 0x1e) = uVar6;
    lVar4 = uVar6 + uVar5;
    *(long *)(param_1 + 4) = lVar4;
    param_1[6] = 8;
    param_1[7] = 0;
  }
  if (lVar2 != 0) {
    uVar5 = lVar4 + 0xfU & 0xfffffffffffffff0;
    *(ulong *)(param_1 + 0x26) = uVar5;
    *(ulong *)(param_1 + 4) = uVar5 + lVar2;
    param_1[6] = 0x10;
    param_1[7] = 0;
  }
  return;
}


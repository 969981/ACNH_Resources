
void FUN_003a97d8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = param_1[2];
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  uVar1 = *param_1;
  if ((int)*param_1 <= (int)param_1[1]) {
    uVar1 = param_1[1];
  }
  uVar6 = (long)(int)uVar2 + 7U & 0xfffffffffffffff8;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0xffffffff;
  param_1[0x29] = 0xffffffff;
  lVar3 = (long)(int)uVar2 << 2;
  uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  *(long *)(param_1 + 10) = lVar3;
  param_1[0xc] = 8;
  param_1[0xd] = 0;
  *(ulong *)(param_1 + 0x12) = uVar7;
  param_1[0x14] = 8;
  param_1[0x15] = 0;
  *(ulong *)(param_1 + 0x1a) = uVar6;
  param_1[0x1c] = 8;
  param_1[0x1d] = 0;
  uVar5 = (long)(int)param_1[3] * 0xc + 7U & 0xfffffffffffffff8;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 8;
  param_1[9] = 0;
  if ((char)param_1[4] == '\0' || *(char *)((long)param_1 + 0x11) == '\0') {
    uVar5 = 0;
  }
  *(ulong *)(param_1 + 0x22) = uVar5;
  param_1[0x24] = 8;
  param_1[0x25] = 0;
  if (uVar2 == 0) {
    lVar3 = 0;
  }
  else {
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *(long *)(param_1 + 6) = lVar3;
  }
  if (uVar1 != 0) {
    uVar4 = lVar3 + 7U & 0xfffffffffffffff8;
    *(ulong *)(param_1 + 0x18) = uVar4;
    lVar3 = uVar4 + uVar7;
    *(long *)(param_1 + 6) = lVar3;
    param_1[8] = 8;
    param_1[9] = 0;
  }
  if (uVar6 != 0) {
    uVar7 = lVar3 + 7U & 0xfffffffffffffff8;
    *(ulong *)(param_1 + 0x20) = uVar7;
    lVar3 = uVar7 + uVar6;
    *(long *)(param_1 + 6) = lVar3;
    param_1[8] = 8;
    param_1[9] = 0;
  }
  if (uVar5 != 0) {
    uVar6 = lVar3 + 7U & 0xfffffffffffffff8;
    *(ulong *)(param_1 + 0x28) = uVar6;
    *(ulong *)(param_1 + 6) = uVar6 + uVar5;
    param_1[8] = 8;
    param_1[9] = 0;
  }
  return;
}


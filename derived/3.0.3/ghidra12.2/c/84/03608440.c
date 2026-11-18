
void FUN_03608440(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar3 = *(ulong *)(param_1 + -0x30);
  lVar1 = *(long *)(param_1 + -0x2538);
  uVar4 = lVar1 - uVar3;
  uVar2 = (uVar4 & 0xfffffffffffffffc) + uVar3;
  if ((uVar4 & 4) != 0) {
    uVar2 = uVar2 - 4;
  }
  if (uVar2 == 0xffffffffffffffff) {
LAB_03608484:
    uVar2 = 0;
  }
  else if (uVar2 == uVar3) {
    if ((long)uVar3 < 0) goto LAB_03608484;
    uVar2 = *(ulong *)(param_1 + 0x28);
  }
  else {
    uVar2 = uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
  }
  uVar5 = (uVar4 & 0xffffffffffffff80) + uVar3;
  if ((uVar4 & 0x80) != 0) {
    uVar5 = uVar5 - 0x80;
  }
  if (uVar5 != 0xffffffffffffffff) {
    if (uVar5 != uVar3) {
      uVar5 = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
      goto LAB_036084cc;
    }
    if (-1 < (long)uVar3) {
      uVar5 = *(ulong *)(param_1 + 0x20);
      goto LAB_036084cc;
    }
  }
  uVar5 = 0;
LAB_036084cc:
  lVar6 = *(long *)(param_1 + 0x10);
  uVar4 = lVar1 - lVar6;
  if (((int)lVar6 - (int)uVar3 & 4U) != 0) {
    uVar4 = (lVar1 - lVar6) + 4;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (int)(uVar4 >> 3);
  *(ulong *)(param_1 + 0x20) = uVar5;
  *(ulong *)(param_1 + 0x28) = uVar2;
  *(long *)(param_1 + 0x10) = lVar1;
  uVar2 = lVar6 - *(long *)(param_1 + -0x30);
  lVar1 = (*(long *)(param_1 + -0x2538) - lVar6) + (uVar2 & 0x7f);
  if ((uVar2 & 0x80) != 0) {
    lVar1 = lVar1 + 0x80;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (int)((ulong)lVar1 >> 8);
  return;
}



void FUN_034c506c(long param_1,long param_2)

{
  ulong *puVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  puVar1 = (ulong *)(param_1 + 0xffc);
  if (*(char *)(param_1 + 0xff8) == '\0') {
    bVar3 = *(int *)(param_2 + 8) == 0xf;
    *(bool *)(param_1 + 0xff9) = bVar3;
    if (!bVar3) {
      iVar2 = *(int *)(param_1 + 0x1004);
      goto joined_r0x034c50f0;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1004);
    *(bool *)(param_1 + 0xff9) = 0x18 < iVar2;
    if (iVar2 < 0x19) {
joined_r0x034c50f0:
      if ((iVar2 < 0x18) && (3 < iVar2 % 6)) {
        uVar4 = *puVar1;
        uVar7 = *(ulong *)(param_1 + 0x1004);
        uVar5 = uVar4 >> 0x20;
        if (iVar2 % 6 != 5) {
          uVar5 = (ulong)((int)(uVar4 >> 0x20) + 1);
        }
      }
      else {
        uVar7 = *(ulong *)(param_1 + 0x1004);
        uVar5 = *puVar1 >> 0x20;
        uVar4 = *puVar1 + 1;
      }
      uVar7 = (ulong)((int)uVar7 + 1) | uVar7 & 0xffffffff00000000;
      goto LAB_034c5134;
    }
  }
  if (*(int *)(param_1 + 0x1008) < 3) {
    lVar6 = *(long *)(param_1 + 0x1004);
    uVar5 = *puVar1 >> 0x20;
    uVar4 = *puVar1 + 1;
  }
  else {
    uVar4 = *puVar1;
    lVar6 = *(long *)(param_1 + 0x1004);
    uVar5 = uVar4 >> 0x20;
    if (*(int *)(param_1 + 0x1008) == 3) {
      uVar5 = (ulong)((int)(uVar4 >> 0x20) + 1);
    }
  }
  uVar7 = lVar6 + 0x100000000;
LAB_034c5134:
  *puVar1 = uVar4 & 0xffffffff | uVar5 << 0x20;
  *(ulong *)(param_1 + 0x1004) = uVar7;
  return;
}



void FUN_03b68e50(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  
  puVar4 = PTR_DAT_04bd1e70;
  plVar5 = (long *)(param_2 + 8);
  if (*plVar5 == 0 && *(long *)(param_2 + 0x10) == 0) {
    return;
  }
  uVar6 = 0;
  while( true ) {
    uVar1 = (uint)uVar6;
    if (((ulong)plVar5[uVar6 >> 6] >> (uVar6 & 0x3f) & 1) != 0) break;
    uVar1 = (uint)uVar6 + 1;
    uVar6 = (ulong)uVar1;
    if (uVar1 == 0x60) {
      return;
    }
  }
  do {
    uVar11 = uVar6;
    if (uVar1 == 0x60) {
      return;
    }
    uVar7 = (uint)uVar11;
    if (*(char *)(*(long *)puVar4 + 1) == '\0') {
LAB_03b68f10:
      lVar8 = 0;
    }
    else {
      lVar10 = *(long *)(*(long *)puVar4 + 0x1a0);
      uVar1 = uVar7 & 0xffff;
      if ((*(int *)(lVar10 + 0x24) <= (int)uVar1) || (*(char *)(lVar10 + 0x10) == '\0'))
      goto LAB_03b68f10;
      lVar8 = 0;
      if (((uVar1 != 0xffff) &&
          (*(long *)(lVar10 + 0x18) != 0 && (int)uVar1 < *(int *)(lVar10 + 0x30))) &&
         (lVar8 = *(long *)(lVar10 + 0x18) + (ulong)uVar1 * 0x120,
         *(ushort *)(lVar8 + 0x118) != uVar1)) {
        lVar8 = 0;
      }
    }
    if (*(int *)(param_1 + 0xe0) < *(int *)(param_1 + 0xe4)) {
      *(long *)(*(long *)(param_1 + 0xe8) + (long)*(int *)(param_1 + 0xe0) * 8) = lVar8;
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
    }
    if ((int)uVar7 < 0x60) {
      uVar7 = 0x5f;
    }
    do {
      uVar9 = (uint)uVar11;
      uVar2 = uVar9 + 1;
      uVar6 = (ulong)uVar2;
      uVar1 = uVar7 + 1;
      if (uVar7 == uVar9) break;
      uVar3 = uVar9 + 0x40;
      if (-1 < (int)uVar2) {
        uVar3 = uVar2;
      }
      uVar11 = (ulong)uVar2;
      uVar1 = uVar2;
    } while (((ulong)plVar5[(int)uVar3 >> 6] >> ((ulong)(uVar9 + 1) & 0x3f) & 1) == 0);
  } while( true );
}


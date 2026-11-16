
void FUN_02946b00(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  puVar3 = PTR_DAT_04bb47b8;
  lVar6 = (long)(int)*(uint *)(param_1 + 0x3bc);
  *(byte *)(param_1 + 0x275) = *(byte *)(param_1 + 0x275) & 0xfd;
  lVar5 = *(long *)puVar3;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (*(uint *)(lVar5 + 8) <= *(uint *)(param_1 + 0x3bc) || lVar7 == 0) {
    lVar6 = 0;
  }
  *(undefined1 *)(lVar7 + lVar6 * 0x18 + 0xc) = 0;
  plVar9 = *(long **)puVar3;
  uVar2 = *(uint *)(param_1 + 0x3bc);
  uVar4 = (**(code **)(*plVar9 + 0x58))(plVar9);
  if ((uVar4 & 1) != 0) {
    lVar6 = plVar9[4];
    uVar1 = uVar2;
    if (*(uint *)(plVar9 + 3) <= uVar2) {
      uVar1 = 0;
    }
    if (*(uint *)(plVar9 + 1) <= uVar2) {
      uVar2 = 0;
    }
    lVar5 = lVar6 + (long)(int)uVar1 * 0x30;
    plVar9 = (long *)(plVar9[2] + (long)(int)uVar2 * 0x18);
    if ((*(long *)(lVar5 + 8) != *plVar9 || *(long *)(lVar5 + 0x10) != plVar9[1]) ||
        *(long *)(lVar5 + 0x18) != plVar9[2]) {
      lVar7 = *plVar9;
      lVar8 = plVar9[2];
      *(long *)(lVar5 + 0x10) = plVar9[1];
      *(long *)(lVar5 + 0x18) = lVar8;
      *(long *)(lVar5 + 8) = lVar7;
      *(undefined1 *)(lVar6 + (long)(int)uVar1 * 0x30 + 0x20) = 1;
    }
  }
  *(byte *)(param_1 + 0x275) = *(byte *)(param_1 + 0x275) | 4;
  lVar6 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar6 = *(long *)(param_1 + 0x70) + 0x278;
  }
  if (*(int *)(lVar6 + 8) == 5) {
    return;
  }
  FUN_03ebb160(lVar6,5);
  return;
}


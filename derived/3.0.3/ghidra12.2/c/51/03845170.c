
undefined8 FUN_03845170(long param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  uint *puVar11;
  
  lVar6 = *(long *)(*(long *)PTR_DAT_04bb49b0 + 8);
  uVar2 = *(uint *)(lVar6 + 0x560);
  uVar3 = *(uint *)(lVar6 + 0x534);
  if (uVar2 < uVar3) {
    iVar7 = -uVar2;
    iVar9 = -1;
    uVar8 = *(ulong *)PTR_DAT_04bb38c0;
    uVar10 = *(ulong *)PTR_DAT_04bb38c8;
    puVar11 = (uint *)(*(long *)(lVar6 + 0x548) + (ulong)uVar2 * 0xc);
    do {
      pcVar5 = (char *)(uVar10 | *puVar11);
      pcVar1 = pcVar5 + 0x100000000;
      if (uVar8 <= *puVar11) {
        pcVar1 = pcVar5;
      }
      if ((pcVar1 != (char *)0x0) && (iVar4 = strcmp("StartSec",pcVar1), iVar4 == 0)) {
        *(int *)(param_1 + 0x20) = -iVar7;
        if (iVar7 == 1) goto LAB_03845248;
        iVar9 = -*(int *)(lVar6 + 0x560) - iVar7;
        break;
      }
      iVar7 = iVar7 + -1;
      puVar11 = puVar11 + 3;
    } while (-uVar3 != iVar7);
  }
  else {
    iVar9 = -1;
  }
  *(int *)(param_1 + 0x20) = iVar9;
LAB_03845248:
  uVar2 = *(uint *)(lVar6 + 0x560);
  uVar3 = *(uint *)(lVar6 + 0x534);
  if (uVar2 < uVar3) {
    iVar7 = -uVar2;
    iVar9 = -1;
    uVar8 = *(ulong *)PTR_DAT_04bb38c0;
    uVar10 = *(ulong *)PTR_DAT_04bb38c8;
    puVar11 = (uint *)(*(long *)(lVar6 + 0x548) + (ulong)uVar2 * 0xc);
    do {
      pcVar5 = (char *)(uVar10 | *puVar11);
      pcVar1 = pcVar5 + 0x100000000;
      if (uVar8 <= *puVar11) {
        pcVar1 = pcVar5;
      }
      if ((pcVar1 != (char *)0x0) && (iVar4 = strcmp("Vol2",pcVar1), iVar4 == 0)) {
        *(int *)(param_1 + 0x24) = -iVar7;
        if (iVar7 == 1) goto LAB_038452f8;
        iVar9 = -*(int *)(lVar6 + 0x560) - iVar7;
        break;
      }
      iVar7 = iVar7 + -1;
      puVar11 = puVar11 + 3;
    } while (-uVar3 != iVar7);
  }
  else {
    iVar9 = -1;
  }
  *(int *)(param_1 + 0x24) = iVar9;
LAB_038452f8:
  uVar2 = *(uint *)(lVar6 + 0x560);
  uVar3 = *(uint *)(lVar6 + 0x534);
  if (uVar2 < uVar3) {
    iVar7 = -uVar2;
    iVar9 = -1;
    uVar8 = *(ulong *)PTR_DAT_04bb38c0;
    uVar10 = *(ulong *)PTR_DAT_04bb38c8;
    puVar11 = (uint *)(*(long *)(lVar6 + 0x548) + (ulong)uVar2 * 0xc);
    do {
      pcVar5 = (char *)(uVar10 | *puVar11);
      pcVar1 = pcVar5 + 0x100000000;
      if (uVar8 <= *puVar11) {
        pcVar1 = pcVar5;
      }
      if ((pcVar1 != (char *)0x0) && (iVar4 = strcmp("Vol3",pcVar1), iVar4 == 0)) {
        *(int *)(param_1 + 0x28) = -iVar7;
        if (iVar7 == 1) goto LAB_038453a8;
        iVar9 = -*(int *)(lVar6 + 0x560) - iVar7;
        break;
      }
      iVar7 = iVar7 + -1;
      puVar11 = puVar11 + 3;
    } while (-uVar3 != iVar7);
  }
  else {
    iVar9 = -1;
  }
  *(int *)(param_1 + 0x28) = iVar9;
LAB_038453a8:
  uVar2 = *(uint *)(lVar6 + 0x560);
  uVar3 = *(uint *)(lVar6 + 0x534);
  if (uVar2 < uVar3) {
    iVar7 = -uVar2;
    iVar9 = -1;
    uVar8 = *(ulong *)PTR_DAT_04bb38c0;
    uVar10 = *(ulong *)PTR_DAT_04bb38c8;
    puVar11 = (uint *)(*(long *)(lVar6 + 0x548) + (ulong)uVar2 * 0xc);
    do {
      pcVar5 = (char *)(uVar10 | *puVar11);
      pcVar1 = pcVar5 + 0x100000000;
      if (uVar8 <= *puVar11) {
        pcVar1 = pcVar5;
      }
      if ((pcVar1 != (char *)0x0) && (iVar4 = strcmp("UIPanningEnable",pcVar1), iVar4 == 0)) {
        *(int *)(param_1 + 0x2c) = -iVar7;
        if (iVar7 == 1) goto LAB_03845458;
        iVar9 = -*(int *)(lVar6 + 0x560) - iVar7;
        break;
      }
      iVar7 = iVar7 + -1;
      puVar11 = puVar11 + 3;
    } while (-uVar3 != iVar7);
  }
  else {
    iVar9 = -1;
  }
  *(int *)(param_1 + 0x2c) = iVar9;
LAB_03845458:
  uVar2 = *(uint *)(lVar6 + 0x568);
  uVar3 = *(uint *)(lVar6 + 0x530);
  if ((uVar2 < uVar3) && (*(long *)(lVar6 + 0x540) != 0)) {
    iVar7 = -uVar2;
    iVar9 = -1;
    uVar8 = *(ulong *)PTR_DAT_04bb38c0;
    uVar10 = *(ulong *)PTR_DAT_04bb38c8;
    puVar11 = (uint *)(*(long *)(lVar6 + 0x540) + (ulong)uVar2 * 0xc);
    do {
      pcVar5 = (char *)(uVar10 | *puVar11);
      pcVar1 = pcVar5 + 0x100000000;
      if (uVar8 <= *puVar11) {
        pcVar1 = pcVar5;
      }
      if ((pcVar1 != (char *)0x0) && (iVar4 = strcmp("ManualDuckingName",pcVar1), iVar4 == 0)) {
        *(int *)(param_1 + 0x30) = -iVar7;
        if (iVar7 == 1) {
          return 1;
        }
        iVar9 = -*(int *)(lVar6 + 0x568) - iVar7;
        break;
      }
      iVar7 = iVar7 + -1;
      puVar11 = puVar11 + 3;
    } while (-uVar3 != iVar7);
  }
  else {
    iVar9 = -1;
  }
  *(int *)(param_1 + 0x30) = iVar9;
  return 1;
}



void FUN_026c3400(long param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  byte *pbVar10;
  long lVar11;
  byte *pbVar12;
  code *pcVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  byte local_14 [4];
  
  plVar9 = *(long **)PTR_DAT_04bb27d0;
  if ((*(long *)PTR_DAT_04bb2118 == 0) || (lVar11 = *(long *)PTR_DAT_04bb26e0, lVar11 == 0)) {
    uVar8 = *(uint *)(param_1 + 0x43c);
    *(uint *)(param_1 + 0x43c) = uVar8 & 0xffffffc0 | uVar8 & 0xf | (uVar8 >> 4 & 1) << 5;
LAB_026c34ac:
    uVar8 = *(uint *)(param_1 + 0x43c);
    if ((*(long *)PTR_DAT_04bb3240 == 0) ||
       (lVar11 = *(long *)(*(long *)PTR_DAT_04bb3240 + 0x1da0), lVar11 == 0)) {
      bVar4 = false;
      if ((uVar8 >> 6 & 1) != 0) goto LAB_026c34e8;
LAB_026c36d4:
      iVar6 = *(int *)(param_1 + 0x440);
      if (0 < iVar6) {
        *(int *)(param_1 + 0x440) = iVar6 + -1;
        iVar6 = iVar6 + -1;
      }
    }
    else {
      bVar4 = *(char *)(lVar11 + 0x520d) != '\0';
      if ((uVar8 >> 6 & 1) == 0) goto LAB_026c36d4;
LAB_026c34e8:
      lVar11 = *(long *)PTR_DAT_04bb39b0;
      if (lVar11 == 0) {
        pbVar10 = PTR_DAT_04bb32e0;
LAB_026c3550:
        pbVar12 = pbVar10;
        if (7 < *pbVar10) {
          pbVar12 = PTR_DAT_04bb5038;
        }
        if ((plVar9 == (long *)0x0) || (7 >= *pbVar10)) goto LAB_026c36a4;
LAB_026c3648:
        lVar11 = *plVar9;
        bVar3 = *(byte *)(lVar11 + 0x473);
        pbVar10 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar11 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar1 = (uint *)(lVar11 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar10 = (byte *)(lVar11 + 0x471);
          }
        }
        local_14[0] = *pbVar10;
        if (7 < local_14[0]) goto LAB_026c369c;
      }
      else {
        pbVar12 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar11 + 0x15c) != 0) {
          pbVar12 = (byte *)(lVar11 + 0x158);
        }
        if (7 < *pbVar12) {
          if ((*(int *)(lVar11 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_026c3550;
          }
          if (plVar9 != (long *)0x0) goto LAB_026c3648;
LAB_026c369c:
          pbVar12 = PTR_DAT_04bb5038;
        }
LAB_026c36a4:
        local_14[0] = *pbVar12;
        if (7 < local_14[0]) {
          local_14[0] = 0xff;
        }
      }
      uVar5 = FUN_00a738a0(local_14,0);
      if ((uVar5 & 1) == 0) goto LAB_026c36d4;
      iVar6 = 3;
      *(undefined4 *)(param_1 + 0x440) = 3;
    }
    uVar7 = 0x40;
    if (!bVar4 && ((uint)(0 < iVar6) & uVar8 >> 6) == 0) {
      uVar7 = 0;
    }
    *(uint *)(param_1 + 0x43c) = uVar7 | *(uint *)(param_1 + 0x43c) & 0xffffffbf;
  }
  else {
    iVar6 = *(int *)(lVar11 + 0x32c);
    if (iVar6 == 0) {
LAB_026c35a0:
      uVar8 = *(uint *)(param_1 + 0x43c);
      *(uint *)(param_1 + 0x43c) = uVar8 & 0xffffffc0 | uVar8 & 0xf | (uVar8 >> 4 & 1) << 5;
    }
    else if (iVar6 == 0x120) {
      if ((*(char *)(lVar11 + 0x335) != '\0') &&
         (((*(int *)(*(long *)PTR_DAT_04bb2258 + 0x32c) == 1 ||
           (*(char *)(*(long *)(*(long *)PTR_DAT_04bb2258 + 0x330) + 0x104) != '\0')) &&
          (*(int *)(lVar11 + 0x344) == 0)))) goto LAB_026c35a0;
    }
    else if (iVar6 == 0x100) {
      iVar6 = *(int *)(*(long *)PTR_DAT_04bb2258 + 0x32c);
      if (((*(char *)(lVar11 + 0x335) != '\0') &&
          ((iVar6 == 1 || (*(char *)(*(long *)(*(long *)PTR_DAT_04bb2258 + 0x330) + 0x104) != '\0'))
          )) || ((*(char *)(lVar11 + 0x336) != '\0' && (iVar6 == 2)))) goto LAB_026c35a0;
    }
    iVar6 = *(int *)(lVar11 + 0x32c);
    if (iVar6 == 0) goto LAB_026c34ac;
    if (iVar6 == 0x120) {
      if (((*(char *)(lVar11 + 0x335) != '\0') &&
          ((*(int *)(*(long *)PTR_DAT_04bb2258 + 0x32c) == 1 ||
           (*(char *)(*(long *)(*(long *)PTR_DAT_04bb2258 + 0x330) + 0x104) != '\0')))) &&
         (*(int *)(lVar11 + 0x344) == 0)) goto LAB_026c34ac;
    }
    else if (iVar6 == 0x100) {
      iVar6 = *(int *)(*(long *)PTR_DAT_04bb2258 + 0x32c);
      if (((*(char *)(lVar11 + 0x335) != '\0') &&
          ((iVar6 == 1 || (*(char *)(*(long *)(*(long *)PTR_DAT_04bb2258 + 0x330) + 0x104) != '\0'))
          )) || ((*(char *)(lVar11 + 0x336) != '\0' && (iVar6 == 2)))) goto LAB_026c34ac;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x10);
  plVar9 = (long *)(param_1 + 0x50) + (ulong)uVar8 * 2;
  if (0x1e < uVar8) {
    plVar9 = (long *)(param_1 + 0x50);
  }
  pcVar13 = (code *)*plVar9;
  uVar5 = plVar9[1];
  if ((pcVar13 != (code *)0x0) || (uVar5 != 0 && (uVar5 & 1) != 0)) {
    if ((uVar5 & 1) != 0) {
      pcVar13 = *(code **)(pcVar13 + *(long *)(param_1 + ((long)uVar5 >> 1)));
    }
    (*pcVar13)();
    uVar8 = *(uint *)(param_1 + 0x10);
  }
  if ((uVar8 == 0xffffffff) && (*(char *)(param_1 + 0x28) != '\0')) {
    puVar16 = (undefined1 *)(param_1 + 0x29);
    *puVar16 = 1;
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x14) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    uVar8 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x10) = uVar8;
    if (uVar8 == 0xffffffff) {
      *puVar16 = 0;
      goto LAB_026c3818;
    }
    uVar14 = *(uint *)(param_1 + 0x30);
    lVar11 = *(long *)(param_1 + 0x38);
    uVar7 = uVar8;
    if (uVar14 <= uVar8) {
      uVar7 = 0;
    }
    puVar15 = *(undefined8 **)(lVar11 + (long)(int)uVar7 * 0x40);
    if (puVar15 != (undefined8 *)0x0) {
      (*(code *)*puVar15)();
      uVar8 = *(uint *)(param_1 + 0x10);
      goto LAB_026c37c8;
    }
    *puVar16 = 0;
  }
  else {
LAB_026c37c8:
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (uVar8 == 0xffffffff) goto LAB_026c3818;
    uVar14 = *(uint *)(param_1 + 0x30);
    lVar11 = *(long *)(param_1 + 0x38);
  }
  if (uVar14 <= uVar8) {
    uVar8 = 0;
  }
  lVar11 = *(long *)(lVar11 + (long)(int)uVar8 * 0x40);
  if ((lVar11 != 0) && ((**(code **)(lVar11 + 8))(), *(char *)(param_1 + 0x29) != '\0')) {
    return;
  }
LAB_026c3818:
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}


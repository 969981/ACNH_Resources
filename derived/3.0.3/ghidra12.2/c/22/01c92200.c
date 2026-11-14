
void FUN_01c92200(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  byte bVar20;
  undefined *local_50;
  char *pcStack_48;
  
  *(undefined1 *)(param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0xb2) = 0xff;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  puVar4 = PTR_DAT_04bb49f0;
  lVar15 = *(long *)PTR_DAT_04bb49f0;
  *(undefined8 *)(param_1 + 200) = 0;
  plVar10 = *(long **)(lVar15 + 8);
  lVar13 = *plVar10;
  lVar14 = plVar10[1];
  if (lVar13 == 0 && lVar14 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    return;
  }
  lVar11 = *(long *)(param_1 + 0x10);
  uVar6 = *(uint *)(param_1 + 8);
  if (uVar6 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  }
  else {
    uVar18 = 0;
    uVar16 = 0xffffffff;
    do {
      plVar10 = (long *)(lVar11 + (long)(int)uVar18 * 0x58);
      lVar2 = *plVar10;
      lVar3 = plVar10[1];
      if (lVar2 == lVar13 && lVar3 == lVar14) {
        *(uint *)(param_1 + 0x18) = uVar18;
        if (uVar18 == 0xffffffff) {
          return;
        }
        lVar13 = (long)(int)uVar18;
        lVar14 = *(long *)(lVar15 + 0x10);
        if (uVar6 <= uVar18) {
          lVar13 = 0;
        }
        plVar10 = (long *)(lVar11 + lVar13 * 0x58 + 0x18);
        if (*plVar10 == lVar14) {
          return;
        }
        *plVar10 = lVar14;
        *(undefined4 *)(lVar11 + lVar13 * 0x58 + 0x50) = 0x1e;
        goto LAB_01c924dc;
      }
      uVar17 = uVar18;
      if (lVar2 != 0 || lVar3 != 0) {
        uVar17 = 0xffffffff;
      }
      if (uVar16 != 0xffffffff) {
        uVar17 = uVar16;
      }
      uVar18 = uVar18 + 1;
      uVar16 = uVar17;
    } while (uVar6 != uVar18);
    *(uint *)(param_1 + 0x18) = uVar17;
    if (uVar17 != 0xffffffff) goto LAB_01c922d8;
  }
  uVar17 = 0;
LAB_01c922d8:
  if (uVar6 <= uVar17) {
    uVar17 = 0;
  }
  plVar10 = (long *)(lVar11 + (long)(int)uVar17 * 0x58);
  *plVar10 = lVar13;
  plVar10[1] = lVar14;
  uVar6 = *(uint *)(param_1 + 0x18);
  lVar13 = *(long *)puVar4;
  if (uVar6 != 0xffffffff) {
    lVar14 = *(long *)(param_1 + 0x10);
    if (*(uint *)(param_1 + 8) <= uVar6) {
      uVar6 = 0;
    }
    plVar10 = (long *)(lVar14 + (long)(int)uVar6 * 0x58 + 0x18);
    if (*plVar10 != *(long *)(lVar13 + 0x10)) {
      *plVar10 = *(long *)(lVar13 + 0x10);
      *(undefined4 *)(lVar14 + (long)(int)uVar6 * 0x58 + 0x50) = 0x1e;
      lVar13 = *(long *)puVar4;
      *(undefined1 *)(param_1 + 0xf5) = 1;
    }
  }
  pbVar19 = (byte *)(lVar11 + (long)(int)uVar17 * 0x58 + 0x10);
  bVar20 = *pbVar19;
  lVar14 = *(long *)PTR_DAT_04bb46b0;
  local_50 = (undefined *)**(long **)(lVar13 + 8);
  pcStack_48 = (char *)(*(long **)(lVar13 + 8))[1];
  if (*(long *)(lVar14 + 8) != 0) {
    lVar13 = (**(code **)(*(long *)**(undefined8 **)(lVar14 + 0x10) + 0x18))();
    uVar8 = FUN_02818404(lVar13 + 0x1e34c0,&local_50);
    if ((uVar8 & 1) != 0) {
      uVar5 = FUN_028189c8(lVar13 + 0x1e34c0,&local_50);
      lVar13 = FUN_026eed64(lVar14,uVar5);
      if (lVar13 != 0) {
        if ((*(long **)(lVar13 + 0x18320) == (long *)0x0) ||
           (puVar9 = (undefined8 *)**(long **)(lVar13 + 0x18320), puVar9 == (undefined8 *)0x0)) {
          uVar6 = 1;
        }
        else {
          uVar6 = (**(code **)*puVar9)();
          uVar6 = uVar6 ^ 1;
        }
        local_50 = PTR_DAT_04bb2020 + 0x10;
        pcStack_48 = "FriendListMainSwitch";
        iVar7 = FUN_0274bbb0(*(long *)(lVar13 + 0x18308) + *(long *)(lVar13 + 0x18300),&local_50);
        bVar20 = bVar20 & 0xfe | iVar7 != 0;
        if ((((uVar6 & 1) == 0) && (*(long *)(lVar13 + 0x18320) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar13 + 0x18320) + 8), puVar9 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar9)();
        }
      }
    }
  }
  uVar8 = nn::pctl::IsFreeCommunicationAvailable();
  bVar1 = 0x40;
  if ((uVar8 & 1) == 0) {
    bVar1 = 0;
  }
  *pbVar19 = bVar1 | bVar20 & 0xbf;
  iVar7 = *(int *)(param_1 + 0x20);
  if (iVar7 != 0) {
    lVar13 = *(long *)(param_1 + 0x28);
    iVar12 = 0;
    do {
      lVar14 = lVar13 + (long)iVar12 * 0x50;
      *(undefined8 *)(lVar14 + 0x40) = 0;
      *(undefined1 *)(lVar14 + 0x48) = 0;
      iVar12 = iVar12 + 1;
    } while (iVar7 != iVar12);
  }
LAB_01c924dc:
  *(undefined1 *)(param_1 + 0xf5) = 1;
  return;
}


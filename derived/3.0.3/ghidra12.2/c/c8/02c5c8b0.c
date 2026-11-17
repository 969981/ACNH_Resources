
/* WARNING: Removing unreachable block (ram,0x02c5c96c) */
/* WARNING: Removing unreachable block (ram,0x02c5c984) */

void FUN_02c5c8b0(long param_1)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  byte bVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  long *plVar15;
  undefined *local_a0;
  undefined2 local_98;
  undefined8 local_94;
  undefined1 local_8c;
  undefined **local_88;
  undefined1 *local_80;
  int local_78;
  undefined1 auStack_74 [7];
  undefined1 local_6d;
  undefined1 local_68;
  
  puVar5 = PTR_DAT_04bb2230;
  puVar1 = (uint *)(param_1 + 0x1c1b4);
  lVar10 = *(long *)PTR_DAT_04bb2230;
  if (lVar10 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(lVar10 + 0x28);
  }
  local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
  uVar4 = *puVar1;
  if (DAT_05739db8 != 0) {
    lVar2 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar2 = 0;
    }
    if (*(char *)(lVar2 + 0x68) != '\0') {
      *(undefined1 *)(lVar2 + 0x69) = 1;
      lVar10 = *(long *)puVar5;
    }
  }
  *(byte *)(lVar12 + 0x12) = (byte)(uVar4 >> 0x1f);
  if (lVar10 == 0) {
    lVar10 = 0;
    if (cRam0000000000000078 != '\0') goto LAB_02c5c924;
LAB_02c5c9a4:
    bVar8 = 1;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x28);
    if (*(char *)(lVar10 + 0x78) == '\0') goto LAB_02c5c9a4;
LAB_02c5c924:
    bVar8 = (**(code **)(*(long *)(lVar10 + 0x70) + 0x18))((long *)(lVar10 + 0x70));
    *(undefined1 *)(lVar10 + 0x78) = 0;
  }
  puVar6 = PTR_DAT_04bb7400;
  plVar15 = (long *)(lVar10 + 0x88);
  *(byte *)(lVar10 + 0x79) = bVar8 & 1;
  local_94 = *(undefined8 *)(lVar10 + 0x7c);
  local_6d = 0;
  local_a0 = puVar6 + 0x10;
  local_8c = *(undefined1 *)(lVar10 + 0x84);
  local_98 = *(undefined2 *)(lVar10 + 0x78);
  local_78 = 8;
  local_88 = &PTR_LAB_04937050;
  local_80 = auStack_74;
  (**(code **)(*plVar15 + 0x18))(plVar15);
  puVar14 = *(undefined1 **)(lVar10 + 0x90);
  if (auStack_74 != puVar14) {
    (**(code **)(*(long *)(lVar10 + 0x88) + 0x18))(plVar15);
    lVar12 = 0;
    do {
      if (*(char *)(*(long *)(lVar10 + 0x90) + lVar12) == '\0') goto LAB_02c5ca7c;
      lVar2 = *(long *)(lVar10 + 0x90) + lVar12;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_02c5ca7c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_02c5ca7c;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_02c5ca7c:
    iVar3 = (int)lVar12;
    if (local_78 <= (int)lVar12) {
      iVar3 = local_78 + -1;
    }
    memcpy(auStack_74,puVar14,(long)iVar3);
    auStack_74[iVar3] = 0;
  }
  puVar14 = local_80;
  local_88 = &PTR_LAB_04908da0;
  local_68 = *(undefined1 *)(lVar10 + 0xa8);
  if ((int)uVar4 < 0) goto LAB_02c5cc58;
  plVar15 = (long *)(param_1 + 0x20288);
  uVar4 = *puVar1;
  bVar7 = *(short *)(param_1 + 0x202ac) != 2;
  if (uVar4 != 0) {
    if (bVar7) {
LAB_02c5cbb0:
      plVar15 = (long *)(param_1 + 0x1c1c8) + (ulong)uVar4 * 4;
      if (499 < uVar4) {
        plVar15 = (long *)(param_1 + 0x1c1c8);
      }
      (**(code **)(*plVar15 + 0x18))(plVar15);
      puVar9 = (undefined1 *)plVar15[1];
      if (local_80 != puVar9) {
        lVar10 = 0;
        do {
          if (puVar9[lVar10] == '\0') goto LAB_02c5cc28;
          if (puVar9[lVar10 + 1] == '\0') goto LAB_02c5cc1c;
          if (puVar9[lVar10 + 2] == '\0') goto LAB_02c5cc24;
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        goto LAB_02c5cc0c;
      }
    }
    else {
      plVar15 = (long *)(param_1 + 0x1c1c8) + (ulong)(uVar4 - 1) * 4;
      if (500 < uVar4) {
        plVar15 = (long *)(param_1 + 0x1c1c8);
      }
      (**(code **)(*plVar15 + 0x18))(plVar15);
      puVar9 = (undefined1 *)plVar15[1];
      if (local_80 != puVar9) {
        lVar10 = 0;
        do {
          if (puVar9[lVar10] == '\0') goto LAB_02c5cc28;
          if (puVar9[lVar10 + 1] == '\0') goto LAB_02c5cc1c;
          if (puVar9[lVar10 + 2] == '\0') goto LAB_02c5cc24;
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
LAB_02c5cc0c:
        lVar10 = 0;
        goto LAB_02c5cc28;
      }
    }
    local_68 = 0;
    goto LAB_02c5cc58;
  }
  if (bVar7) goto LAB_02c5cbb0;
  (**(code **)(*plVar15 + 0x18))(plVar15);
  puVar9 = *(undefined1 **)(param_1 + 0x20290);
  if (puVar14 == puVar9) {
    local_68 = 1;
    goto LAB_02c5cc58;
  }
  (**(code **)(*plVar15 + 0x18))(plVar15);
  lVar10 = 0;
  do {
    if (*(char *)(*(long *)(param_1 + 0x20290) + lVar10) == '\0') goto LAB_02c5ccd8;
    lVar12 = *(long *)(param_1 + 0x20290) + lVar10;
    if (*(char *)(lVar12 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_02c5ccd8;
    }
    if (*(char *)(lVar12 + 2) == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_02c5ccd8;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_02c5ccd8:
  iVar3 = (int)lVar10;
  if (local_78 <= (int)lVar10) {
    iVar3 = local_78 + -1;
  }
  memcpy(puVar14,puVar9,(long)iVar3);
  puVar14 = puVar14 + iVar3;
  local_68 = 1;
  goto LAB_02c5cc50;
LAB_02c5cc1c:
  lVar10 = lVar10 + 1;
  goto LAB_02c5cc28;
LAB_02c5cc24:
  lVar10 = lVar10 + 2;
LAB_02c5cc28:
  puVar14 = local_80;
  iVar3 = (int)lVar10;
  if (local_78 <= (int)lVar10) {
    iVar3 = local_78 + -1;
  }
  memcpy(local_80,puVar9,(long)iVar3);
  local_68 = 0;
  puVar14 = puVar14 + iVar3;
LAB_02c5cc50:
  *puVar14 = 0;
LAB_02c5cc58:
  FUN_0338f830(*(undefined8 *)(*(long *)puVar5 + 0x28),0,&local_a0);
  if (((*(long *)puVar5 != 0) &&
      (plVar15 = *(long **)(*(long *)puVar5 + 0x460), plVar15 != (long *)0x0)) &&
     (puVar11 = (undefined8 *)*plVar15, puVar11 != (undefined8 *)0x0)) {
    uVar13 = *(undefined8 *)(param_1 + 0x1c1b8);
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(param_1 + 0x1c1c0);
    *puVar11 = uVar13;
  }
  *puVar1 = 0xffffffff;
  return;
}



void FUN_01dd2480(long param_1,ulong *param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  
  if (*(char *)((long)param_2 + 0xd) == '\0') {
    uVar17 = *param_2;
    if (uVar17 != *(ulong *)(param_1 + 200)) {
      iVar4 = *(int *)(*(long *)(param_1 + 0xe0) + 0x20);
      if (iVar4 == 0) {
        return;
      }
      plVar11 = *(long **)(*(long *)(param_1 + 0xe0) + 0x28);
      lVar10 = (long)iVar4 * 8;
      while( true ) {
        lVar10 = lVar10 + -8;
        lVar18 = *plVar11;
        if (uVar17 == *(ulong *)(lVar18 + 0x20)) break;
        plVar11 = plVar11 + 1;
        if (*(ulong *)(lVar18 + 0x20) < uVar17 || lVar10 == 0) {
          return;
        }
      }
      goto LAB_01dd24dc;
    }
    lVar18 = *(long *)(param_1 + 0xd8);
  }
  else {
    uVar17 = 0;
    lVar18 = *(long *)(param_1 + 0xf0);
  }
  if (lVar18 == 0) {
    return;
  }
LAB_01dd24dc:
  lVar10 = *(long *)(param_1 + 0x58);
  if (*(int *)(lVar10 + 0xe8) != 0) {
    if (0 < *(int *)(lVar10 + 0xe8)) {
      lVar12 = 0;
      puVar9 = *(undefined8 **)(lVar10 + 0xf8);
      do {
        puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0xf0) + lVar12 * 8);
        lVar12 = lVar12 + 1;
        *puVar13 = puVar9;
        *(undefined8 **)(lVar10 + 0xf8) = puVar13;
        puVar9 = puVar13;
      } while (lVar12 < *(int *)(lVar10 + 0xe8));
    }
    *(undefined4 *)(lVar10 + 0xe8) = 0;
  }
  lVar10 = *(long *)(lVar10 + 0x3a438);
  if (*(int *)(lVar10 + 0x50) != 0) {
    if (*(long *)(lVar10 + 0x48) != lVar10 + 0x40) {
      lVar14 = (long)*(int *)(lVar10 + 0x54);
      lVar16 = *(long *)(lVar10 + 0x48) - lVar14;
      lVar12 = lVar16 + lVar14;
      do {
        lVar12 = *(long *)(lVar12 + 8);
        if (*(long *)(lVar16 + 0x6f8) != 0) {
          *(undefined1 *)(*(long *)(lVar16 + 0x6f8) + 0x5a) = 1;
        }
        lVar16 = lVar12 - lVar14;
      } while (lVar16 != (lVar10 + 0x40) - lVar14);
    }
  }
  FUN_01d6bde0(*(undefined8 *)(param_1 + 0x60));
  if (*(int *)(lVar18 + 0x28) != 0) {
    plVar11 = *(long **)(lVar18 + 0x30);
    lVar10 = (long)*(int *)(lVar18 + 0x28) << 3;
    do {
      plVar15 = (long *)*plVar11;
      if (*plVar15 == 0) break;
      plVar11 = plVar11 + 1;
      lVar10 = lVar10 + -8;
      *(byte *)(plVar15 + 0x30e) = *(byte *)(plVar15 + 0x30e) & 0xf3;
    } while (lVar10 != 0);
  }
  puVar8 = PTR_DAT_04bb36f8;
  puVar7 = PTR_DAT_04bb2698;
  cVar2 = *(char *)((long)param_2 + 0xc);
  uVar6 = param_2[1];
  piVar1 = (int *)(lVar18 + 0x9c);
  if (cVar2 != '\0') {
    piVar1 = (int *)(lVar18 + 0x98);
  }
  uVar5 = 0;
  if (*(int *)(DAT_053807b0 + 0x4c) != 0) {
    uVar5 = (*piVar1 + -1) / *(int *)(DAT_053807b0 + 0x4c);
  }
  if ((int)uVar6 <= (int)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU))) {
    lVar10 = *(long *)(param_1 + 0x60);
    lVar18 = *(long *)PTR_DAT_04bb2698;
    if (lVar18 == 0) {
      puVar9 = malloc(0x30);
    }
    else {
      plVar11 = *(long **)(*(long *)PTR_DAT_04bb36f8 + 8);
      if (plVar11 == (long *)0x0) {
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar11 = (long *)(lVar18 + 8);
        if (lVar12 != 0) {
          plVar11 = (long *)(lVar12 + 0xa8);
        }
        plVar11 = (long *)*plVar11;
      }
      puVar9 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x30,8);
    }
    *(int *)(puVar9 + 2) = (int)uVar6;
    puVar9[4] = 0;
    puVar9[5] = 0;
    *(char *)((long)puVar9 + 0x14) = cVar2;
    *puVar9 = &PTR_LAB_04a59ea8;
    puVar9[1] = uVar17;
    plVar15 = (long *)(lVar10 + 8);
    lVar18 = *plVar15;
    plVar11 = (long *)((long)*(int *)(lVar10 + 0x1c) + (long)puVar9);
    *plVar15 = (long)plVar11;
    *plVar11 = lVar18;
    plVar11[1] = (long)plVar15;
    if (lVar18 != 0) {
      *(long **)(lVar18 + 8) = plVar11;
    }
    lVar12 = *(long *)puVar7;
    *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
    lVar18 = *(long *)(param_1 + 0x60);
    uVar6 = param_2[1];
    uVar3 = *(undefined1 *)((long)param_2 + 0xc);
    if (lVar12 == 0) {
      puVar9 = malloc(0x30);
    }
    else {
      plVar11 = *(long **)(*(long *)puVar8 + 8);
      if (plVar11 == (long *)0x0) {
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar11 = (long *)(lVar12 + 8);
        if (lVar10 != 0) {
          plVar11 = (long *)(lVar10 + 0xa8);
        }
        plVar11 = (long *)*plVar11;
      }
      puVar9 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x30,8);
    }
    *(int *)(puVar9 + 2) = (int)uVar6;
    puVar9[4] = 0;
    puVar9[5] = 0;
    *(undefined1 *)((long)puVar9 + 0x14) = uVar3;
    *puVar9 = &PTR_LAB_04a59ef8;
    puVar9[1] = uVar17;
    plVar15 = (long *)(lVar18 + 8);
    lVar10 = *plVar15;
    plVar11 = (long *)((long)*(int *)(lVar18 + 0x1c) + (long)puVar9);
    *plVar15 = (long)plVar11;
    *plVar11 = lVar10;
    plVar11[1] = (long)plVar15;
    if (lVar10 != 0) {
      *(long **)(lVar10 + 8) = plVar11;
    }
    lVar10 = *(long *)puVar7;
    *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + 1;
    uVar6 = param_2[1];
    lVar18 = *(long *)(param_1 + 0x60);
    uVar3 = *(undefined1 *)((long)param_2 + 0xc);
    if (lVar10 == 0) {
      puVar9 = malloc(0x30);
    }
    else {
      plVar11 = *(long **)(*(long *)puVar8 + 8);
      if (plVar11 == (long *)0x0) {
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar11 = (long *)(lVar10 + 8);
        if (lVar12 != 0) {
          plVar11 = (long *)(lVar12 + 0xa8);
        }
        plVar11 = (long *)*plVar11;
      }
      puVar9 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x30,8);
    }
    puVar9[4] = 0;
    puVar9[5] = 0;
    *(int *)(puVar9 + 2) = (int)uVar6 + 1;
    *(undefined1 *)((long)puVar9 + 0x14) = uVar3;
    *puVar9 = &PTR_LAB_04a59ea8;
    puVar9[1] = uVar17;
    plVar15 = (long *)(lVar18 + 8);
    lVar10 = *plVar15;
    plVar11 = (long *)((long)*(int *)(lVar18 + 0x1c) + (long)puVar9);
    *plVar15 = (long)plVar11;
    *plVar11 = lVar10;
    plVar11[1] = (long)plVar15;
    if (lVar10 != 0) {
      *(long **)(lVar10 + 8) = plVar11;
    }
    lVar10 = *(long *)puVar7;
    *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + 1;
    uVar6 = param_2[1];
    lVar18 = *(long *)(param_1 + 0x60);
    uVar3 = *(undefined1 *)((long)param_2 + 0xc);
    if (lVar10 == 0) {
      puVar9 = malloc(0x30);
    }
    else {
      plVar11 = *(long **)(*(long *)puVar8 + 8);
      if (plVar11 == (long *)0x0) {
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar11 = (long *)(lVar10 + 8);
        if (lVar12 != 0) {
          plVar11 = (long *)(lVar12 + 0xa8);
        }
        plVar11 = (long *)*plVar11;
      }
      puVar9 = (undefined8 *)(**(code **)(*plVar11 + 0x30))(plVar11,0x30,8);
    }
    *(int *)(puVar9 + 2) = (int)uVar6 + 1;
    puVar9[4] = 0;
    puVar9[5] = 0;
    *(undefined1 *)((long)puVar9 + 0x14) = uVar3;
    *puVar9 = &PTR_LAB_04a59ed0;
    puVar9[1] = uVar17;
    plVar15 = (long *)(lVar18 + 8);
    lVar10 = *plVar15;
    plVar11 = (long *)((long)*(int *)(lVar18 + 0x1c) + (long)puVar9);
    *plVar15 = (long)plVar11;
    *plVar11 = lVar10;
    plVar11[1] = (long)plVar15;
    if (lVar10 != 0) {
      *(long **)(lVar10 + 8) = plVar11;
    }
    *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + 1;
  }
  return;
}


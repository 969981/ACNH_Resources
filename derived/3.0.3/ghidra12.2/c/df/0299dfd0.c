
void FUN_0299dfd0(long param_1)

{
  char *pcVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  int iVar19;
  uint uVar20;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined *local_1c8;
  undefined1 *puStack_1c0;
  undefined1 *local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [256];
  undefined8 local_a8;
  long *local_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined1 *puStack_70;
  
  pcVar1 = (char *)(param_1 + 0x62d30);
  pcVar5 = (char *)(param_1 + 0x2624);
  lVar9 = (long)(*(long *)PTR_DAT_04bb29d0 *
                 (*(long *)(*(long *)PTR_DAT_04bd1e70 + 8) +
                 (ulong)*(uint *)(*(long *)PTR_DAT_04bd1e70 + 4)) * 5) / 1000;
  uVar13 = 0xffffffff;
  do {
    uVar20 = uVar13 + 1;
    lVar12 = *(long *)(param_1 + 0xa0);
    iVar15 = 0;
    if (uVar20 < *(uint *)(param_1 + 0x98)) {
      iVar15 = uVar13 + 1;
    }
    lVar11 = lVar12 + (long)iVar15 * 400;
    *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
    *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
    *(undefined1 *)(lVar11 + 0x160) = 0;
    *(undefined1 *)(lVar11 + 0x163) = 0;
    *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
    *(undefined1 *)(lVar11 + 8) = 0;
    *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
    *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
    *(undefined8 *)(lVar11 + 0x30) = 0;
    *(undefined1 *)(lVar11 + 0x120) = 0;
    *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
    *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
    *(undefined2 *)(lVar11 + 0x161) = 0;
    *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 300) = 0xffffffff;
    *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
    *(long *)(lVar11 + 0x20) = 0;
    if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
      lVar17 = lVar12 + (long)iVar15 * 400;
      piVar2 = (int *)(lVar17 + 0x58);
      plVar14 = (long *)(lVar17 + 0x60);
      plVar16 = *(long **)(lVar11 + 0x50);
      do {
        plVar8 = (long *)plVar16[1];
        plVar18 = plVar8;
        if (*plVar16 != 0) {
          *(long **)(*plVar16 + 8) = plVar8;
          plVar18 = (long *)plVar16[1];
        }
        if (plVar18 != (long *)0x0) {
          *plVar18 = *plVar16;
        }
        *plVar16 = 0;
        plVar16[1] = 0;
        *piVar2 = *piVar2 + -1;
        plVar16[-1] = *plVar14;
        *plVar14 = (long)(plVar16 + -1);
        plVar16 = plVar8;
      } while (plVar8 != (long *)(lVar11 + 0x48));
    }
    local_1d0 = 0;
    *(undefined4 *)(lVar12 + (long)iVar15 * 400 + 0x40) = 0xffffffff;
    FUN_029a7d90(param_1,lVar11,&local_1d0);
    *(undefined1 *)(lVar11 + 0x120) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined4 *)(lVar11 + 0x14) = 0;
    *(long *)(lVar11 + 0x20) = lVar9;
    uVar13 = uVar20;
  } while (uVar20 != 0x84);
  iVar15 = 0;
  uVar13 = 0x84;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  do {
    iVar19 = 0;
    do {
      lVar12 = *(long *)(param_1 + 0xa0);
      iVar7 = 0;
      if (uVar13 + 1 < *(uint *)(param_1 + 0x98)) {
        iVar7 = uVar13 + 1;
      }
      lVar11 = lVar12 + (long)iVar7 * 400;
      *(long *)(lVar11 + 0x20) = 0;
      *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
      *(undefined1 *)(lVar11 + 0x160) = 0;
      *(undefined1 *)(lVar11 + 0x163) = 0;
      *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
      *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
      *(undefined1 *)(lVar11 + 8) = 0;
      *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
      *(undefined8 *)(lVar11 + 0x30) = 0;
      *(undefined1 *)(lVar11 + 0x120) = 0;
      *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
      *(undefined2 *)(lVar11 + 0x161) = 0;
      *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
      *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
      *(undefined8 *)(lVar11 + 300) = 0xffffffff;
      *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
      if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
        lVar17 = lVar12 + (long)iVar7 * 400;
        piVar2 = (int *)(lVar17 + 0x58);
        plVar14 = (long *)(lVar17 + 0x60);
        plVar16 = *(long **)(lVar11 + 0x50);
        do {
          plVar8 = (long *)plVar16[1];
          plVar18 = plVar8;
          if (*plVar16 != 0) {
            *(long **)(*plVar16 + 8) = plVar8;
            plVar18 = (long *)plVar16[1];
          }
          if (plVar18 != (long *)0x0) {
            *plVar18 = *plVar16;
          }
          *plVar16 = 0;
          plVar16[1] = 0;
          *piVar2 = *piVar2 + -1;
          plVar16[-1] = *plVar14;
          *plVar14 = (long)(plVar16 + -1);
          plVar16 = plVar8;
        } while (plVar8 != (long *)(lVar11 + 0x48));
      }
      local_1cc = 0;
      *(undefined4 *)(lVar12 + (long)iVar7 * 400 + 0x40) = 0xffffffff;
      local_1a8[0] = 0;
      uStack_1b0 = 0x10000000000;
      puStack_1c0 = &DAT_0405db6e;
      local_1c8 = puVar3;
      local_1b8 = local_1a8;
      FUN_02a21700(&local_1b8,&local_1c8,2,&local_1cc);
      local_a8 = 0;
      local_a0 = (long *)0x0;
      local_98 = 0xff;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      puStack_70 = local_1b8;
      local_78 = puVar3;
      uVar10 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_78);
      plVar14 = (long *)0x0;
      if (((uVar10 & 1) != 0) && (plVar14 = local_a0, local_a0 != (long *)0x0)) {
        if (*(uint *)(local_a0 + 3) == 0) {
          plVar14 = (long *)0x0;
        }
        else {
          plVar14 = (long *)((ulong)*(uint *)(local_a0 + 3) + (long)local_a0);
          if (*plVar14 != 0x101feff464e494d) {
            plVar14 = (long *)0x0;
          }
        }
      }
      *(undefined4 *)(lVar11 + 0xc) = 0;
      if (*(int *)(param_1 + 0xe8) == 0) {
        if (((*(char *)(param_1 + 0x2794) != '\0') &&
            (*(int *)(param_1 + 0x2720) == *(int *)(lVar11 + 0x18))) && (*pcVar5 != '\0')) {
          *(undefined4 *)(param_1 + 0x2628) = 0;
          *(undefined4 *)(param_1 + 0x2718) = 0;
        }
      }
      else if (((*(char *)(param_1 + 0x62ea0) != '\0') &&
               (*(int *)(param_1 + 0x62e2c) == *(int *)(lVar11 + 0x18))) && (*pcVar1 != '\0')) {
        *(undefined4 *)(param_1 + 0x62d34) = 0;
        *(undefined4 *)(param_1 + 0x62e24) = 0;
      }
      if (plVar14 != (long *)0x0) {
        *(undefined4 *)(lVar11 + 0x124) = *(undefined4 *)((long)plVar14 + 0x14);
        *(int *)(lVar11 + 0x128) = (int)plVar14[3];
        *(undefined4 *)(lVar11 + 300) = *(undefined4 *)((long)plVar14 + 0x1c);
      }
      *(undefined4 *)(lVar11 + 0x14) = 0;
      *(undefined4 *)(lVar11 + 0x10) = 0;
      uVar13 = uVar13 + 2;
      *(long *)(lVar11 + 0x20) = lVar9;
      *(undefined1 *)(lVar11 + 0x120) = 0;
      lVar12 = *(long *)(param_1 + 0xa0);
      uVar20 = uVar13;
      if (*(uint *)(param_1 + 0x98) <= uVar13) {
        uVar20 = 0;
      }
      lVar11 = lVar12 + (long)(int)uVar20 * 400;
      *(long *)(lVar11 + 0x20) = 0;
      *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
      *(undefined1 *)(lVar11 + 0x160) = 0;
      *(undefined1 *)(lVar11 + 0x163) = 0;
      *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
      *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
      *(undefined1 *)(lVar11 + 8) = 0;
      *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
      *(undefined8 *)(lVar11 + 0x30) = 0;
      *(undefined1 *)(lVar11 + 0x120) = 0;
      *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
      *(undefined2 *)(lVar11 + 0x161) = 0;
      *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 300) = 0xffffffff;
      *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
      *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
      if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
        lVar17 = lVar12 + (long)(int)uVar20 * 400;
        piVar2 = (int *)(lVar17 + 0x58);
        plVar14 = (long *)(lVar17 + 0x60);
        plVar16 = *(long **)(lVar11 + 0x50);
        do {
          plVar8 = (long *)plVar16[1];
          plVar18 = plVar8;
          if (*plVar16 != 0) {
            *(long **)(*plVar16 + 8) = plVar8;
            plVar18 = (long *)plVar16[1];
          }
          if (plVar18 != (long *)0x0) {
            *plVar18 = *plVar16;
          }
          *plVar16 = 0;
          plVar16[1] = 0;
          *piVar2 = *piVar2 + -1;
          plVar16[-1] = *plVar14;
          *plVar14 = (long)(plVar16 + -1);
          plVar16 = plVar8;
        } while (plVar8 != (long *)(lVar11 + 0x48));
      }
      *(undefined4 *)(lVar12 + (long)(int)uVar20 * 400 + 0x40) = 0xffffffff;
      local_1a8[0] = 0;
      local_1cc = 0;
      puVar4 = PTR_DAT_04bb2020 + 0x10;
      uStack_1b0 = 0x10000000000;
      puStack_1c0 = &DAT_0405db6e;
      local_1c8 = puVar4;
      local_1b8 = local_1a8;
      FUN_02a21700(&local_1b8,&local_1c8,2,&local_1cc);
      local_a8 = 0;
      local_a0 = (long *)0x0;
      local_98 = 0xff;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      puStack_70 = local_1b8;
      local_78 = puVar4;
      uVar10 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_78);
      plVar14 = (long *)0x0;
      if (((uVar10 & 1) != 0) && (plVar14 = local_a0, local_a0 != (long *)0x0)) {
        if (*(uint *)(local_a0 + 3) == 0) {
          plVar14 = (long *)0x0;
        }
        else {
          plVar14 = (long *)((ulong)*(uint *)(local_a0 + 3) + (long)local_a0);
          if (*plVar14 != 0x101feff464e494d) {
            plVar14 = (long *)0x0;
          }
        }
      }
      *(undefined4 *)(lVar11 + 0xc) = 0;
      if (*(int *)(param_1 + 0xe8) == 0) {
        if (((*(char *)(param_1 + 0x2794) != '\0') &&
            (*(int *)(param_1 + 0x2720) == *(int *)(lVar11 + 0x18))) && (*pcVar5 != '\0')) {
          *(undefined4 *)(param_1 + 0x2628) = 0;
          *(undefined4 *)(param_1 + 0x2718) = 0;
        }
      }
      else if (((*(char *)(param_1 + 0x62ea0) != '\0') &&
               (*(int *)(param_1 + 0x62e2c) == *(int *)(lVar11 + 0x18))) && (*pcVar1 != '\0')) {
        *(undefined4 *)(param_1 + 0x62d34) = 0;
        *(undefined4 *)(param_1 + 0x62e24) = 0;
      }
      if (plVar14 != (long *)0x0) {
        *(undefined4 *)(lVar11 + 0x124) = *(undefined4 *)((long)plVar14 + 0x14);
        *(int *)(lVar11 + 0x128) = (int)plVar14[3];
        *(undefined4 *)(lVar11 + 300) = *(undefined4 *)((long)plVar14 + 0x1c);
      }
      iVar19 = iVar19 + 1;
      *(undefined4 *)(lVar11 + 0x10) = 0;
      *(undefined4 *)(lVar11 + 0x14) = 0;
      *(long *)(lVar11 + 0x20) = lVar9;
      *(undefined1 *)(lVar11 + 0x120) = 0;
    } while (iVar19 != 6);
    iVar15 = iVar15 + 1;
  } while (iVar15 != 8);
  iVar15 = 0;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  do {
    lVar12 = *(long *)(param_1 + 0xa0);
    iVar19 = 0;
    if (uVar13 + 1 < *(uint *)(param_1 + 0x98)) {
      iVar19 = uVar13 + 1;
    }
    lVar11 = lVar12 + (long)iVar19 * 400;
    *(long *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
    *(undefined1 *)(lVar11 + 0x160) = 0;
    *(undefined1 *)(lVar11 + 0x163) = 0;
    *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
    *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
    *(undefined1 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
    *(undefined8 *)(lVar11 + 0x30) = 0;
    *(undefined1 *)(lVar11 + 0x120) = 0;
    *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
    *(undefined2 *)(lVar11 + 0x161) = 0;
    *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
    *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
    *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
    *(undefined8 *)(lVar11 + 300) = 0xffffffff;
    if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
      lVar17 = lVar12 + (long)iVar19 * 400;
      piVar2 = (int *)(lVar17 + 0x58);
      plVar14 = (long *)(lVar17 + 0x60);
      plVar16 = *(long **)(lVar11 + 0x50);
      do {
        plVar8 = (long *)plVar16[1];
        plVar18 = plVar8;
        if (*plVar16 != 0) {
          *(long **)(*plVar16 + 8) = plVar8;
          plVar18 = (long *)plVar16[1];
        }
        if (plVar18 != (long *)0x0) {
          *plVar18 = *plVar16;
        }
        *plVar16 = 0;
        plVar16[1] = 0;
        *piVar2 = *piVar2 + -1;
        plVar16[-1] = *plVar14;
        *plVar14 = (long)(plVar16 + -1);
        plVar16 = plVar8;
      } while (plVar8 != (long *)(lVar11 + 0x48));
    }
    local_1cc = 0;
    *(undefined4 *)(lVar12 + (long)iVar19 * 400 + 0x40) = 0xffffffff;
    local_1a8[0] = 0;
    uStack_1b0 = 0x10000000000;
    puStack_1c0 = &DAT_0405db6e;
    local_1c8 = puVar3;
    local_1b8 = local_1a8;
    FUN_02a21700(&local_1b8,&local_1c8,2,&local_1cc);
    local_a8 = 0;
    local_a0 = (long *)0x0;
    local_98 = 0xff;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    puStack_70 = local_1b8;
    local_78 = puVar3;
    uVar10 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_78);
    plVar14 = (long *)0x0;
    if (((uVar10 & 1) != 0) && (plVar14 = local_a0, local_a0 != (long *)0x0)) {
      if (*(uint *)(local_a0 + 3) == 0) {
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = (long *)((ulong)*(uint *)(local_a0 + 3) + (long)local_a0);
        if (*plVar14 != 0x101feff464e494d) {
          plVar14 = (long *)0x0;
        }
      }
    }
    *(undefined4 *)(lVar11 + 0xc) = 0;
    if (*(int *)(param_1 + 0xe8) == 0) {
      if (((*(char *)(param_1 + 0x2794) != '\0') &&
          (*(int *)(param_1 + 0x2720) == *(int *)(lVar11 + 0x18))) && (*pcVar5 != '\0')) {
        *(undefined4 *)(param_1 + 0x2628) = 0;
        *(undefined4 *)(param_1 + 0x2718) = 0;
      }
    }
    else if (((*(char *)(param_1 + 0x62ea0) != '\0') &&
             (*(int *)(param_1 + 0x62e2c) == *(int *)(lVar11 + 0x18))) && (*pcVar1 != '\0')) {
      *(undefined4 *)(param_1 + 0x62d34) = 0;
      *(undefined4 *)(param_1 + 0x62e24) = 0;
    }
    if (plVar14 != (long *)0x0) {
      *(undefined4 *)(lVar11 + 0x124) = *(undefined4 *)((long)plVar14 + 0x14);
      *(int *)(lVar11 + 0x128) = (int)plVar14[3];
      *(undefined4 *)(lVar11 + 300) = *(undefined4 *)((long)plVar14 + 0x1c);
    }
    *(undefined4 *)(lVar11 + 0x14) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    uVar13 = uVar13 + 2;
    *(long *)(lVar11 + 0x20) = lVar9;
    *(undefined1 *)(lVar11 + 0x120) = 0;
    lVar12 = *(long *)(param_1 + 0xa0);
    uVar20 = uVar13;
    if (*(uint *)(param_1 + 0x98) <= uVar13) {
      uVar20 = 0;
    }
    lVar11 = lVar12 + (long)(int)uVar20 * 400;
    *(long *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
    *(undefined1 *)(lVar11 + 0x160) = 0;
    *(undefined1 *)(lVar11 + 0x163) = 0;
    *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
    *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
    *(undefined1 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
    *(undefined8 *)(lVar11 + 0x30) = 0;
    *(undefined1 *)(lVar11 + 0x120) = 0;
    *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
    *(undefined2 *)(lVar11 + 0x161) = 0;
    *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
    *(undefined8 *)(lVar11 + 300) = 0xffffffff;
    *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
    if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
      lVar17 = lVar12 + (long)(int)uVar20 * 400;
      piVar2 = (int *)(lVar17 + 0x58);
      plVar14 = (long *)(lVar17 + 0x60);
      plVar16 = *(long **)(lVar11 + 0x50);
      do {
        plVar8 = (long *)plVar16[1];
        plVar18 = plVar8;
        if (*plVar16 != 0) {
          *(long **)(*plVar16 + 8) = plVar8;
          plVar18 = (long *)plVar16[1];
        }
        if (plVar18 != (long *)0x0) {
          *plVar18 = *plVar16;
        }
        *plVar16 = 0;
        plVar16[1] = 0;
        *piVar2 = *piVar2 + -1;
        plVar16[-1] = *plVar14;
        *plVar14 = (long)(plVar16 + -1);
        plVar16 = plVar8;
      } while (plVar8 != (long *)(lVar11 + 0x48));
    }
    *(undefined4 *)(lVar12 + (long)(int)uVar20 * 400 + 0x40) = 0xffffffff;
    local_1a8[0] = 0;
    local_1cc = 0;
    puVar4 = PTR_DAT_04bb2020 + 0x10;
    uStack_1b0 = 0x10000000000;
    puStack_1c0 = &DAT_0405db6e;
    local_1c8 = puVar4;
    local_1b8 = local_1a8;
    FUN_02a21700(&local_1b8,&local_1c8,2,&local_1cc);
    local_a8 = 0;
    local_a0 = (long *)0x0;
    local_98 = 0xff;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    puStack_70 = local_1b8;
    local_78 = puVar4;
    uVar10 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_78);
    plVar14 = (long *)0x0;
    if (((uVar10 & 1) != 0) && (plVar14 = local_a0, local_a0 != (long *)0x0)) {
      if (*(uint *)(local_a0 + 3) == 0) {
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = (long *)((ulong)*(uint *)(local_a0 + 3) + (long)local_a0);
        if (*plVar14 != 0x101feff464e494d) {
          plVar14 = (long *)0x0;
        }
      }
    }
    *(undefined4 *)(lVar11 + 0xc) = 0;
    if (*(int *)(param_1 + 0xe8) == 0) {
      if (((*(char *)(param_1 + 0x2794) != '\0') &&
          (*(int *)(param_1 + 0x2720) == *(int *)(lVar11 + 0x18))) && (*pcVar5 != '\0')) {
        *(undefined4 *)(param_1 + 0x2628) = 0;
        *(undefined4 *)(param_1 + 0x2718) = 0;
      }
    }
    else if (((*(char *)(param_1 + 0x62ea0) != '\0') &&
             (*(int *)(param_1 + 0x62e2c) == *(int *)(lVar11 + 0x18))) && (*pcVar1 != '\0')) {
      *(undefined4 *)(param_1 + 0x62d34) = 0;
      *(undefined4 *)(param_1 + 0x62e24) = 0;
    }
    if (plVar14 != (long *)0x0) {
      *(undefined4 *)(lVar11 + 0x124) = *(undefined4 *)((long)plVar14 + 0x14);
      *(int *)(lVar11 + 0x128) = (int)plVar14[3];
      *(undefined4 *)(lVar11 + 300) = *(undefined4 *)((long)plVar14 + 0x1c);
    }
    iVar15 = iVar15 + 1;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined4 *)(lVar11 + 0x14) = 0;
    *(long *)(lVar11 + 0x20) = lVar9;
    *(undefined1 *)(lVar11 + 0x120) = 0;
  } while (iVar15 != 10);
  iVar15 = 0;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  do {
    uVar20 = uVar13;
    lVar12 = *(long *)(param_1 + 0xa0);
    iVar19 = 0;
    if (uVar20 + 1 < *(uint *)(param_1 + 0x98)) {
      iVar19 = uVar20 + 1;
    }
    lVar11 = lVar12 + (long)iVar19 * 400;
    *(long *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
    *(undefined1 *)(lVar11 + 0x160) = 0;
    *(undefined1 *)(lVar11 + 0x163) = 0;
    *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
    *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
    *(undefined1 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
    *(undefined8 *)(lVar11 + 0x30) = 0;
    *(undefined1 *)(lVar11 + 0x120) = 0;
    *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
    *(undefined2 *)(lVar11 + 0x161) = 0;
    *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
    *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
    *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
    *(undefined8 *)(lVar11 + 300) = 0xffffffff;
    if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
      lVar17 = lVar12 + (long)iVar19 * 400;
      piVar2 = (int *)(lVar17 + 0x58);
      plVar14 = (long *)(lVar17 + 0x60);
      plVar16 = *(long **)(lVar11 + 0x50);
      do {
        plVar8 = (long *)plVar16[1];
        plVar18 = plVar8;
        if (*plVar16 != 0) {
          *(long **)(*plVar16 + 8) = plVar8;
          plVar18 = (long *)plVar16[1];
        }
        if (plVar18 != (long *)0x0) {
          *plVar18 = *plVar16;
        }
        *plVar16 = 0;
        plVar16[1] = 0;
        *piVar2 = *piVar2 + -1;
        plVar16[-1] = *plVar14;
        *plVar14 = (long)(plVar16 + -1);
        plVar16 = plVar8;
      } while (plVar8 != (long *)(lVar11 + 0x48));
    }
    local_1cc = 0;
    *(undefined4 *)(lVar12 + (long)iVar19 * 400 + 0x40) = 0xffffffff;
    local_1a8[0] = 0;
    uStack_1b0 = 0x10000000000;
    puStack_1c0 = &DAT_0405db6e;
    local_1c8 = puVar3;
    local_1b8 = local_1a8;
    FUN_02a21700(&local_1b8,&local_1c8,2,&local_1cc);
    local_a8 = 0;
    local_a0 = (long *)0x0;
    local_98 = 0xff;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    puStack_70 = local_1b8;
    local_78 = puVar3;
    uVar10 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_78);
    plVar14 = (long *)0x0;
    if (((uVar10 & 1) != 0) && (plVar14 = local_a0, local_a0 != (long *)0x0)) {
      if (*(uint *)(local_a0 + 3) == 0) {
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = (long *)((ulong)*(uint *)(local_a0 + 3) + (long)local_a0);
        if (*plVar14 != 0x101feff464e494d) {
          plVar14 = (long *)0x0;
        }
      }
    }
    *(undefined4 *)(lVar11 + 0xc) = 0;
    if (*(int *)(param_1 + 0xe8) == 0) {
      if (((*(char *)(param_1 + 0x2794) != '\0') &&
          (*(int *)(param_1 + 0x2720) == *(int *)(lVar11 + 0x18))) && (*pcVar5 != '\0')) {
        *(undefined4 *)(param_1 + 0x2628) = 0;
        *(undefined4 *)(param_1 + 0x2718) = 0;
      }
    }
    else if (((*(char *)(param_1 + 0x62ea0) != '\0') &&
             (*(int *)(param_1 + 0x62e2c) == *(int *)(lVar11 + 0x18))) && (*pcVar1 != '\0')) {
      *(undefined4 *)(param_1 + 0x62d34) = 0;
      *(undefined4 *)(param_1 + 0x62e24) = 0;
    }
    if (plVar14 != (long *)0x0) {
      *(undefined4 *)(lVar11 + 0x124) = *(undefined4 *)((long)plVar14 + 0x14);
      *(int *)(lVar11 + 0x128) = (int)plVar14[3];
      *(undefined4 *)(lVar11 + 300) = *(undefined4 *)((long)plVar14 + 0x1c);
    }
    *(undefined4 *)(lVar11 + 0x14) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    uVar13 = uVar20 + 2;
    *(long *)(lVar11 + 0x20) = lVar9;
    *(undefined1 *)(lVar11 + 0x120) = 0;
    lVar12 = *(long *)(param_1 + 0xa0);
    uVar6 = uVar13;
    if (*(uint *)(param_1 + 0x98) <= uVar13) {
      uVar6 = 0;
    }
    lVar11 = lVar12 + (long)(int)uVar6 * 400;
    *(long *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
    *(undefined1 *)(lVar11 + 0x160) = 0;
    *(undefined1 *)(lVar11 + 0x163) = 0;
    *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
    *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
    *(undefined1 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
    *(undefined8 *)(lVar11 + 0x30) = 0;
    *(undefined1 *)(lVar11 + 0x120) = 0;
    *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
    *(undefined2 *)(lVar11 + 0x161) = 0;
    *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
    *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
    *(undefined8 *)(lVar11 + 300) = 0xffffffff;
    if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
      lVar17 = lVar12 + (long)(int)uVar6 * 400;
      piVar2 = (int *)(lVar17 + 0x58);
      plVar14 = (long *)(lVar17 + 0x60);
      plVar16 = *(long **)(lVar11 + 0x50);
      do {
        plVar8 = (long *)plVar16[1];
        plVar18 = plVar8;
        if (*plVar16 != 0) {
          *(long **)(*plVar16 + 8) = plVar8;
          plVar18 = (long *)plVar16[1];
        }
        if (plVar18 != (long *)0x0) {
          *plVar18 = *plVar16;
        }
        *plVar16 = 0;
        plVar16[1] = 0;
        *piVar2 = *piVar2 + -1;
        plVar16[-1] = *plVar14;
        *plVar14 = (long)(plVar16 + -1);
        plVar16 = plVar8;
      } while (plVar8 != (long *)(lVar11 + 0x48));
    }
    *(undefined4 *)(lVar12 + (long)(int)uVar6 * 400 + 0x40) = 0xffffffff;
    local_1a8[0] = 0;
    local_1cc = 0;
    puVar4 = PTR_DAT_04bb2020 + 0x10;
    uStack_1b0 = 0x10000000000;
    puStack_1c0 = &DAT_0405db6e;
    local_1c8 = puVar4;
    local_1b8 = local_1a8;
    FUN_02a21700(&local_1b8,&local_1c8,2,&local_1cc);
    local_a8 = 0;
    local_a0 = (long *)0x0;
    local_98 = 0xff;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    puStack_70 = local_1b8;
    local_78 = puVar4;
    uVar10 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_78);
    plVar14 = (long *)0x0;
    if (((uVar10 & 1) != 0) && (plVar14 = local_a0, local_a0 != (long *)0x0)) {
      if (*(uint *)(local_a0 + 3) == 0) {
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = (long *)((ulong)*(uint *)(local_a0 + 3) + (long)local_a0);
        if (*plVar14 != 0x101feff464e494d) {
          plVar14 = (long *)0x0;
        }
      }
    }
    *(undefined4 *)(lVar11 + 0xc) = 0;
    if (*(int *)(param_1 + 0xe8) == 0) {
      if (((*(char *)(param_1 + 0x2794) != '\0') &&
          (*(int *)(param_1 + 0x2720) == *(int *)(lVar11 + 0x18))) && (*pcVar5 != '\0')) {
        *(undefined4 *)(param_1 + 0x2628) = 0;
        *(undefined4 *)(param_1 + 0x2718) = 0;
      }
    }
    else if (((*(char *)(param_1 + 0x62ea0) != '\0') &&
             (*(int *)(param_1 + 0x62e2c) == *(int *)(lVar11 + 0x18))) && (*pcVar1 != '\0')) {
      *(undefined4 *)(param_1 + 0x62d34) = 0;
      *(undefined4 *)(param_1 + 0x62e24) = 0;
    }
    if (plVar14 != (long *)0x0) {
      *(undefined4 *)(lVar11 + 0x124) = *(undefined4 *)((long)plVar14 + 0x14);
      *(int *)(lVar11 + 0x128) = (int)plVar14[3];
      *(undefined4 *)(lVar11 + 300) = *(undefined4 *)((long)plVar14 + 0x1c);
    }
    iVar15 = iVar15 + 1;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined4 *)(lVar11 + 0x14) = 0;
    *(long *)(lVar11 + 0x20) = lVar9;
    *(undefined1 *)(lVar11 + 0x120) = 0;
  } while (iVar15 != 7);
  lVar12 = *(long *)(param_1 + 0xa0);
  uVar13 = uVar20 + 3;
  if (*(uint *)(param_1 + 0x98) <= uVar13) {
    uVar13 = 0;
  }
  lVar11 = lVar12 + (long)(int)uVar13 * 400;
  *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
  *(undefined1 *)(lVar11 + 0x160) = 0;
  *(undefined1 *)(lVar11 + 0x163) = 0;
  *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
  *(undefined1 *)(lVar11 + 8) = 0;
  *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
  *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(undefined1 *)(lVar11 + 0x120) = 0;
  *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
  *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
  *(undefined2 *)(lVar11 + 0x161) = 0;
  *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 300) = 0xffffffff;
  *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
  *(long *)(lVar11 + 0x20) = 0;
  if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
    lVar17 = lVar12 + (long)(int)uVar13 * 400;
    piVar2 = (int *)(lVar17 + 0x58);
    plVar14 = (long *)(lVar17 + 0x60);
    plVar16 = *(long **)(lVar11 + 0x50);
    do {
      plVar8 = (long *)plVar16[1];
      plVar18 = plVar8;
      if (*plVar16 != 0) {
        *(long **)(*plVar16 + 8) = plVar8;
        plVar18 = (long *)plVar16[1];
      }
      if (plVar18 != (long *)0x0) {
        *plVar18 = *plVar16;
      }
      *plVar16 = 0;
      plVar16[1] = 0;
      *piVar2 = *piVar2 + -1;
      plVar16[-1] = *plVar14;
      *plVar14 = (long)(plVar16 + -1);
      plVar16 = plVar8;
    } while (plVar8 != (long *)(lVar11 + 0x48));
  }
  local_1d4 = 0;
  *(undefined4 *)(lVar12 + (long)(int)uVar13 * 400 + 0x40) = 0xffffffff;
  FUN_029a7d90(param_1,lVar11,&local_1d4);
  *(undefined1 *)(lVar11 + 0x120) = 0;
  *(undefined4 *)(lVar11 + 0x10) = 0;
  uVar13 = uVar20 + 4;
  *(undefined4 *)(lVar11 + 0x14) = 0;
  *(long *)(lVar11 + 0x20) = lVar9;
  lVar12 = *(long *)(param_1 + 0xa0);
  if (*(uint *)(param_1 + 0x98) <= uVar13) {
    uVar13 = 0;
  }
  lVar11 = lVar12 + (long)(int)uVar13 * 400;
  *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
  *(undefined1 *)(lVar11 + 0x160) = 0;
  *(undefined1 *)(lVar11 + 0x163) = 0;
  *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
  *(undefined1 *)(lVar11 + 8) = 0;
  *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
  *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
  *(undefined1 *)(lVar11 + 0x120) = 0;
  *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
  *(undefined2 *)(lVar11 + 0x161) = 0;
  *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 300) = 0xffffffff;
  *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
  *(long *)(lVar11 + 0x20) = 0;
  if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
    lVar17 = lVar12 + (long)(int)uVar13 * 400;
    piVar2 = (int *)(lVar17 + 0x58);
    plVar14 = (long *)(lVar17 + 0x60);
    plVar16 = *(long **)(lVar11 + 0x50);
    do {
      plVar8 = (long *)plVar16[1];
      plVar18 = plVar8;
      if (*plVar16 != 0) {
        *(long **)(*plVar16 + 8) = plVar8;
        plVar18 = (long *)plVar16[1];
      }
      if (plVar18 != (long *)0x0) {
        *plVar18 = *plVar16;
      }
      *plVar16 = 0;
      plVar16[1] = 0;
      *piVar2 = *piVar2 + -1;
      plVar16[-1] = *plVar14;
      *plVar14 = (long)(plVar16 + -1);
      plVar16 = plVar8;
    } while (plVar8 != (long *)(lVar11 + 0x48));
  }
  local_1d4 = 0;
  *(undefined4 *)(lVar12 + (long)(int)uVar13 * 400 + 0x40) = 0xffffffff;
  FUN_029a7d90(param_1,lVar11,&local_1d4);
  *(undefined1 *)(lVar11 + 0x120) = 0;
  *(undefined4 *)(lVar11 + 0x10) = 0;
  *(undefined4 *)(lVar11 + 0x14) = 0;
  *(long *)(lVar11 + 0x20) = lVar9;
  uVar13 = uVar20 + 5;
  lVar12 = *(long *)(param_1 + 0xa0);
  if (*(uint *)(param_1 + 0x98) <= uVar13) {
    uVar13 = 0;
  }
  lVar11 = lVar12 + (long)(int)uVar13 * 400;
  *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
  *(undefined1 *)(lVar11 + 0x160) = 0;
  *(undefined1 *)(lVar11 + 0x163) = 0;
  *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
  *(undefined1 *)(lVar11 + 8) = 0;
  *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
  *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(undefined1 *)(lVar11 + 0x120) = 0;
  *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
  *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
  *(undefined2 *)(lVar11 + 0x161) = 0;
  *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 300) = 0xffffffff;
  *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
  *(long *)(lVar11 + 0x20) = 0;
  if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
    lVar17 = lVar12 + (long)(int)uVar13 * 400;
    piVar2 = (int *)(lVar17 + 0x58);
    plVar14 = (long *)(lVar17 + 0x60);
    plVar16 = *(long **)(lVar11 + 0x50);
    do {
      plVar8 = (long *)plVar16[1];
      plVar18 = plVar8;
      if (*plVar16 != 0) {
        *(long **)(*plVar16 + 8) = plVar8;
        plVar18 = (long *)plVar16[1];
      }
      if (plVar18 != (long *)0x0) {
        *plVar18 = *plVar16;
      }
      *plVar16 = 0;
      plVar16[1] = 0;
      *piVar2 = *piVar2 + -1;
      plVar16[-1] = *plVar14;
      *plVar14 = (long)(plVar16 + -1);
      plVar16 = plVar8;
    } while (plVar8 != (long *)(lVar11 + 0x48));
  }
  local_1d8 = 0;
  *(undefined4 *)(lVar12 + (long)(int)uVar13 * 400 + 0x40) = 0xffffffff;
  FUN_029a7d90(param_1,lVar11,&local_1d8);
  *(undefined1 *)(lVar11 + 0x120) = 0;
  *(undefined4 *)(lVar11 + 0x10) = 0;
  uVar13 = uVar20 + 6;
  *(undefined4 *)(lVar11 + 0x14) = 0;
  *(long *)(lVar11 + 0x20) = lVar9;
  lVar12 = *(long *)(param_1 + 0xa0);
  if (*(uint *)(param_1 + 0x98) <= uVar13) {
    uVar13 = 0;
  }
  lVar11 = lVar12 + (long)(int)uVar13 * 400;
  *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
  *(undefined1 *)(lVar11 + 0x160) = 0;
  *(undefined1 *)(lVar11 + 0x163) = 0;
  *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
  *(undefined1 *)(lVar11 + 8) = 0;
  *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
  *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
  *(undefined1 *)(lVar11 + 0x120) = 0;
  *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
  *(undefined2 *)(lVar11 + 0x161) = 0;
  *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 300) = 0xffffffff;
  *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
  *(long *)(lVar11 + 0x20) = 0;
  if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
    lVar17 = lVar12 + (long)(int)uVar13 * 400;
    piVar2 = (int *)(lVar17 + 0x58);
    plVar14 = (long *)(lVar17 + 0x60);
    plVar16 = *(long **)(lVar11 + 0x50);
    do {
      plVar8 = (long *)plVar16[1];
      plVar18 = plVar8;
      if (*plVar16 != 0) {
        *(long **)(*plVar16 + 8) = plVar8;
        plVar18 = (long *)plVar16[1];
      }
      if (plVar18 != (long *)0x0) {
        *plVar18 = *plVar16;
      }
      *plVar16 = 0;
      plVar16[1] = 0;
      *piVar2 = *piVar2 + -1;
      plVar16[-1] = *plVar14;
      *plVar14 = (long)(plVar16 + -1);
      plVar16 = plVar8;
    } while (plVar8 != (long *)(lVar11 + 0x48));
  }
  local_1d8 = 0;
  *(undefined4 *)(lVar12 + (long)(int)uVar13 * 400 + 0x40) = 0xffffffff;
  FUN_029a7d90(param_1,lVar11,&local_1d8);
  *(undefined1 *)(lVar11 + 0x120) = 0;
  *(undefined4 *)(lVar11 + 0x10) = 0;
  uVar13 = uVar20 + 7;
  *(undefined4 *)(lVar11 + 0x14) = 0;
  *(long *)(lVar11 + 0x20) = lVar9;
  lVar12 = *(long *)(param_1 + 0xa0);
  if (*(uint *)(param_1 + 0x98) <= uVar13) {
    uVar13 = 0;
  }
  lVar11 = lVar12 + (long)(int)uVar13 * 400;
  *(long *)(lVar11 + 0x20) = 0;
  *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
  *(undefined1 *)(lVar11 + 0x160) = 0;
  *(undefined1 *)(lVar11 + 0x163) = 0;
  *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
  *(undefined1 *)(lVar11 + 8) = 0;
  *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(undefined1 *)(lVar11 + 0x120) = 0;
  *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
  *(undefined2 *)(lVar11 + 0x161) = 0;
  *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 300) = 0xffffffff;
  *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
  *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
  if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
    lVar17 = lVar12 + (long)(int)uVar13 * 400;
    piVar2 = (int *)(lVar17 + 0x58);
    plVar14 = (long *)(lVar17 + 0x60);
    plVar16 = *(long **)(lVar11 + 0x50);
    do {
      plVar8 = (long *)plVar16[1];
      plVar18 = plVar8;
      if (*plVar16 != 0) {
        *(long **)(*plVar16 + 8) = plVar8;
        plVar18 = (long *)plVar16[1];
      }
      if (plVar18 != (long *)0x0) {
        *plVar18 = *plVar16;
      }
      *plVar16 = 0;
      plVar16[1] = 0;
      *piVar2 = *piVar2 + -1;
      plVar16[-1] = *plVar14;
      *plVar14 = (long)(plVar16 + -1);
      plVar16 = plVar8;
    } while (plVar8 != (long *)(lVar11 + 0x48));
  }
  *(undefined4 *)(lVar12 + (long)(int)uVar13 * 400 + 0x40) = 0xffffffff;
  local_1b8 = local_1a8;
  uStack_1b0 = 0x10000000000;
  local_1a8[0] = 0;
  local_1cc = 0;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  puStack_1c0 = &DAT_0405db6e;
  local_1c8 = puVar3;
  FUN_02a21700(&local_1b8,&local_1c8,2,&local_1cc);
  local_a8 = 0;
  local_a0 = (long *)0x0;
  local_98 = 0xff;
  local_80 = 0;
  local_90 = 0;
  uStack_88 = 0;
  puStack_70 = local_1b8;
  local_78 = puVar3;
  uVar10 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_78);
  plVar14 = (long *)0x0;
  if (((uVar10 & 1) != 0) && (plVar14 = local_a0, local_a0 != (long *)0x0)) {
    if (*(uint *)(local_a0 + 3) == 0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)((ulong)*(uint *)(local_a0 + 3) + (long)local_a0);
      if (*plVar14 != 0x101feff464e494d) {
        plVar14 = (long *)0x0;
      }
    }
  }
  *(undefined4 *)(lVar11 + 0xc) = 0;
  if (*(int *)(param_1 + 0xe8) == 0) {
    if (((*(char *)(param_1 + 0x2794) != '\0') &&
        (*(int *)(param_1 + 0x2720) == *(int *)(lVar11 + 0x18))) && (*pcVar5 != '\0')) {
      *(undefined4 *)(param_1 + 0x2628) = 0;
      *(undefined4 *)(param_1 + 0x2718) = 0;
    }
  }
  else if (((*(char *)(param_1 + 0x62ea0) != '\0') &&
           (*(int *)(param_1 + 0x62e2c) == *(int *)(lVar11 + 0x18))) && (*pcVar1 != '\0')) {
    *(undefined4 *)(param_1 + 0x62d34) = 0;
    *(undefined4 *)(param_1 + 0x62e24) = 0;
  }
  if (plVar14 != (long *)0x0) {
    *(undefined4 *)(lVar11 + 0x124) = *(undefined4 *)((long)plVar14 + 0x14);
    *(int *)(lVar11 + 0x128) = (int)plVar14[3];
    *(undefined4 *)(lVar11 + 300) = *(undefined4 *)((long)plVar14 + 0x1c);
  }
  *(undefined1 *)(lVar11 + 0x120) = 0;
  *(undefined4 *)(lVar11 + 0x10) = 0;
  uVar13 = uVar20 + 8;
  *(undefined4 *)(lVar11 + 0x14) = 0;
  *(long *)(lVar11 + 0x20) = lVar9;
  lVar12 = *(long *)(param_1 + 0xa0);
  if (*(uint *)(param_1 + 0x98) <= uVar13) {
    uVar13 = 0;
  }
  lVar11 = lVar12 + (long)(int)uVar13 * 400;
  *(long *)(lVar11 + 0x20) = 0;
  *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
  *(undefined1 *)(lVar11 + 0x160) = 0;
  *(undefined1 *)(lVar11 + 0x163) = 0;
  *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
  *(undefined1 *)(lVar11 + 8) = 0;
  *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(undefined1 *)(lVar11 + 0x120) = 0;
  *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
  *(undefined2 *)(lVar11 + 0x161) = 0;
  *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 300) = 0xffffffff;
  *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
  *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
  if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
    lVar17 = lVar12 + (long)(int)uVar13 * 400;
    piVar2 = (int *)(lVar17 + 0x58);
    plVar14 = (long *)(lVar17 + 0x60);
    plVar16 = *(long **)(lVar11 + 0x50);
    do {
      plVar8 = (long *)plVar16[1];
      plVar18 = plVar8;
      if (*plVar16 != 0) {
        *(long **)(*plVar16 + 8) = plVar8;
        plVar18 = (long *)plVar16[1];
      }
      if (plVar18 != (long *)0x0) {
        *plVar18 = *plVar16;
      }
      *plVar16 = 0;
      plVar16[1] = 0;
      *piVar2 = *piVar2 + -1;
      plVar16[-1] = *plVar14;
      *plVar14 = (long)(plVar16 + -1);
      plVar16 = plVar8;
    } while (plVar8 != (long *)(lVar11 + 0x48));
  }
  *(undefined4 *)(lVar12 + (long)(int)uVar13 * 400 + 0x40) = 0xffffffff;
  local_1b8 = local_1a8;
  uStack_1b0 = 0x10000000000;
  local_1a8[0] = 0;
  local_1cc = 0;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  puStack_1c0 = &DAT_0405db6e;
  local_1c8 = puVar3;
  FUN_02a21700(&local_1b8,&local_1c8,2,&local_1cc);
  local_a8 = 0;
  local_a0 = (long *)0x0;
  local_98 = 0xff;
  local_80 = 0;
  local_90 = 0;
  uStack_88 = 0;
  puStack_70 = local_1b8;
  local_78 = puVar3;
  uVar10 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_78);
  plVar14 = (long *)0x0;
  if (((uVar10 & 1) != 0) && (plVar14 = local_a0, local_a0 != (long *)0x0)) {
    if (*(uint *)(local_a0 + 3) == 0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)((ulong)*(uint *)(local_a0 + 3) + (long)local_a0);
      if (*plVar14 != 0x101feff464e494d) {
        plVar14 = (long *)0x0;
      }
    }
  }
  *(undefined4 *)(lVar11 + 0xc) = 0;
  if (*(int *)(param_1 + 0xe8) == 0) {
    if (((*(char *)(param_1 + 0x2794) != '\0') &&
        (*(int *)(param_1 + 0x2720) == *(int *)(lVar11 + 0x18))) && (*pcVar5 != '\0')) {
      *(undefined4 *)(param_1 + 0x2628) = 0;
      *(undefined4 *)(param_1 + 0x2718) = 0;
    }
  }
  else if (((*(char *)(param_1 + 0x62ea0) != '\0') &&
           (*(int *)(param_1 + 0x62e2c) == *(int *)(lVar11 + 0x18))) && (*pcVar1 != '\0')) {
    *(undefined4 *)(param_1 + 0x62d34) = 0;
    *(undefined4 *)(param_1 + 0x62e24) = 0;
  }
  if (plVar14 != (long *)0x0) {
    *(undefined4 *)(lVar11 + 0x124) = *(undefined4 *)((long)plVar14 + 0x14);
    *(int *)(lVar11 + 0x128) = (int)plVar14[3];
    *(undefined4 *)(lVar11 + 300) = *(undefined4 *)((long)plVar14 + 0x1c);
  }
  *(undefined1 *)(lVar11 + 0x120) = 0;
  *(undefined4 *)(lVar11 + 0x10) = 0;
  uVar13 = uVar20 + 9;
  *(undefined4 *)(lVar11 + 0x14) = 0;
  *(long *)(lVar11 + 0x20) = lVar9;
  lVar12 = *(long *)(param_1 + 0xa0);
  if (*(uint *)(param_1 + 0x98) <= uVar13) {
    uVar13 = 0;
  }
  lVar11 = lVar12 + (long)(int)uVar13 * 400;
  *(long *)(lVar11 + 0x20) = 0;
  *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
  *(undefined1 *)(lVar11 + 0x160) = 0;
  *(undefined1 *)(lVar11 + 0x163) = 0;
  *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
  *(undefined1 *)(lVar11 + 8) = 0;
  *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(undefined1 *)(lVar11 + 0x120) = 0;
  *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
  *(undefined2 *)(lVar11 + 0x161) = 0;
  *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 300) = 0xffffffff;
  *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
  *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
  if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
    lVar17 = lVar12 + (long)(int)uVar13 * 400;
    piVar2 = (int *)(lVar17 + 0x58);
    plVar14 = (long *)(lVar17 + 0x60);
    plVar16 = *(long **)(lVar11 + 0x50);
    do {
      plVar8 = (long *)plVar16[1];
      plVar18 = plVar8;
      if (*plVar16 != 0) {
        *(long **)(*plVar16 + 8) = plVar8;
        plVar18 = (long *)plVar16[1];
      }
      if (plVar18 != (long *)0x0) {
        *plVar18 = *plVar16;
      }
      *plVar16 = 0;
      plVar16[1] = 0;
      *piVar2 = *piVar2 + -1;
      plVar16[-1] = *plVar14;
      *plVar14 = (long)(plVar16 + -1);
      plVar16 = plVar8;
    } while (plVar8 != (long *)(lVar11 + 0x48));
  }
  *(undefined4 *)(lVar12 + (long)(int)uVar13 * 400 + 0x40) = 0xffffffff;
  local_1b8 = local_1a8;
  uStack_1b0 = 0x10000000000;
  local_1a8[0] = 0;
  local_1cc = 0;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  puStack_1c0 = &DAT_0405db6e;
  local_1c8 = puVar3;
  FUN_02a21700(&local_1b8,&local_1c8,2,&local_1cc);
  local_a8 = 0;
  local_a0 = (long *)0x0;
  local_98 = 0xff;
  local_80 = 0;
  local_90 = 0;
  uStack_88 = 0;
  puStack_70 = local_1b8;
  local_78 = puVar3;
  uVar10 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_78);
  plVar14 = (long *)0x0;
  if (((uVar10 & 1) != 0) && (plVar14 = local_a0, local_a0 != (long *)0x0)) {
    if (*(uint *)(local_a0 + 3) == 0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)((ulong)*(uint *)(local_a0 + 3) + (long)local_a0);
      if (*plVar14 != 0x101feff464e494d) {
        plVar14 = (long *)0x0;
      }
    }
  }
  *(undefined4 *)(lVar11 + 0xc) = 0;
  if (*(int *)(param_1 + 0xe8) == 0) {
    if (((*(char *)(param_1 + 0x2794) != '\0') &&
        (*(int *)(param_1 + 0x2720) == *(int *)(lVar11 + 0x18))) && (*pcVar5 != '\0')) {
      *(undefined4 *)(param_1 + 0x2628) = 0;
      *(undefined4 *)(param_1 + 0x2718) = 0;
    }
  }
  else if (((*(char *)(param_1 + 0x62ea0) != '\0') &&
           (*(int *)(param_1 + 0x62e2c) == *(int *)(lVar11 + 0x18))) && (*pcVar1 != '\0')) {
    *(undefined4 *)(param_1 + 0x62d34) = 0;
    *(undefined4 *)(param_1 + 0x62e24) = 0;
  }
  if (plVar14 != (long *)0x0) {
    *(undefined4 *)(lVar11 + 0x124) = *(undefined4 *)((long)plVar14 + 0x14);
    *(int *)(lVar11 + 0x128) = (int)plVar14[3];
    *(undefined4 *)(lVar11 + 300) = *(undefined4 *)((long)plVar14 + 0x1c);
  }
  *(undefined1 *)(lVar11 + 0x120) = 0;
  *(undefined4 *)(lVar11 + 0x10) = 0;
  uVar20 = uVar20 + 10;
  *(undefined4 *)(lVar11 + 0x14) = 0;
  *(long *)(lVar11 + 0x20) = lVar9;
  lVar12 = *(long *)(param_1 + 0xa0);
  uVar13 = uVar20;
  if (*(uint *)(param_1 + 0x98) <= uVar20) {
    uVar13 = 0;
  }
  lVar11 = lVar12 + (long)(int)uVar13 * 400;
  *(long *)(lVar11 + 0x20) = 0;
  *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
  *(undefined1 *)(lVar11 + 0x160) = 0;
  *(undefined1 *)(lVar11 + 0x163) = 0;
  *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
  *(undefined1 *)(lVar11 + 8) = 0;
  *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(undefined1 *)(lVar11 + 0x120) = 0;
  *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
  *(undefined2 *)(lVar11 + 0x161) = 0;
  *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
  *(undefined8 *)(lVar11 + 300) = 0xffffffff;
  *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
  *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
  if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
    lVar17 = lVar12 + (long)(int)uVar13 * 400;
    piVar2 = (int *)(lVar17 + 0x58);
    plVar14 = (long *)(lVar17 + 0x60);
    plVar16 = *(long **)(lVar11 + 0x50);
    do {
      plVar8 = (long *)plVar16[1];
      plVar18 = plVar8;
      if (*plVar16 != 0) {
        *(long **)(*plVar16 + 8) = plVar8;
        plVar18 = (long *)plVar16[1];
      }
      if (plVar18 != (long *)0x0) {
        *plVar18 = *plVar16;
      }
      *plVar16 = 0;
      plVar16[1] = 0;
      *piVar2 = *piVar2 + -1;
      plVar16[-1] = *plVar14;
      *plVar14 = (long)(plVar16 + -1);
      plVar16 = plVar8;
    } while (plVar8 != (long *)(lVar11 + 0x48));
  }
  *(undefined4 *)(lVar12 + (long)(int)uVar13 * 400 + 0x40) = 0xffffffff;
  local_1b8 = local_1a8;
  uStack_1b0 = 0x10000000000;
  local_1a8[0] = 0;
  local_1cc = 0;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  puStack_1c0 = &DAT_0405db6e;
  local_1c8 = puVar3;
  FUN_02a21700(&local_1b8,&local_1c8,2,&local_1cc);
  local_a8 = 0;
  local_a0 = (long *)0x0;
  local_98 = 0xff;
  local_80 = 0;
  local_90 = 0;
  uStack_88 = 0;
  puStack_70 = local_1b8;
  local_78 = puVar3;
  uVar10 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_78);
  plVar14 = (long *)0x0;
  if ((uVar10 & 1) != 0) {
    if ((local_a0 == (long *)0x0) || (*(uint *)(local_a0 + 3) == 0)) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)((ulong)*(uint *)(local_a0 + 3) + (long)local_a0);
      if (*plVar14 != 0x101feff464e494d) {
        plVar14 = (long *)0x0;
      }
    }
  }
  *(undefined4 *)(lVar11 + 0xc) = 0;
  if (*(int *)(param_1 + 0xe8) == 0) {
    if (((*(char *)(param_1 + 0x2794) != '\0') &&
        (*(int *)(param_1 + 0x2720) == *(int *)(lVar11 + 0x18))) && (*pcVar5 != '\0')) {
      *(undefined4 *)(param_1 + 0x2628) = 0;
      *(undefined4 *)(param_1 + 0x2718) = 0;
    }
  }
  else if (((*(char *)(param_1 + 0x62ea0) != '\0') &&
           (*(int *)(param_1 + 0x62e2c) == *(int *)(lVar11 + 0x18))) && (*pcVar1 != '\0')) {
    *(undefined4 *)(param_1 + 0x62d34) = 0;
    *(undefined4 *)(param_1 + 0x62e24) = 0;
  }
  if (plVar14 != (long *)0x0) {
    *(undefined4 *)(lVar11 + 0x124) = *(undefined4 *)((long)plVar14 + 0x14);
    *(int *)(lVar11 + 0x128) = (int)plVar14[3];
    *(undefined4 *)(lVar11 + 300) = *(undefined4 *)((long)plVar14 + 0x1c);
  }
  *(undefined1 *)(lVar11 + 0x120) = 0;
  *(undefined4 *)(lVar11 + 0x10) = 0;
  iVar15 = 0;
  *(undefined4 *)(lVar11 + 0x14) = 0;
  *(long *)(lVar11 + 0x20) = lVar9;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  do {
    iVar19 = 0;
    do {
      lVar12 = *(long *)(param_1 + 0xa0);
      iVar7 = 0;
      if (uVar20 + 1 < *(uint *)(param_1 + 0x98)) {
        iVar7 = uVar20 + 1;
      }
      lVar11 = lVar12 + (long)iVar7 * 400;
      *(long *)(lVar11 + 0x20) = 0;
      *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
      *(undefined1 *)(lVar11 + 0x160) = 0;
      *(undefined1 *)(lVar11 + 0x163) = 0;
      *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
      *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
      *(undefined1 *)(lVar11 + 8) = 0;
      *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
      *(undefined8 *)(lVar11 + 0x30) = 0;
      *(undefined1 *)(lVar11 + 0x120) = 0;
      *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
      *(undefined2 *)(lVar11 + 0x161) = 0;
      *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
      *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
      *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
      *(undefined8 *)(lVar11 + 300) = 0xffffffff;
      if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
        lVar17 = lVar12 + (long)iVar7 * 400;
        piVar2 = (int *)(lVar17 + 0x58);
        plVar14 = (long *)(lVar17 + 0x60);
        plVar16 = *(long **)(lVar11 + 0x50);
        do {
          plVar8 = (long *)plVar16[1];
          plVar18 = plVar8;
          if (*plVar16 != 0) {
            *(long **)(*plVar16 + 8) = plVar8;
            plVar18 = (long *)plVar16[1];
          }
          if (plVar18 != (long *)0x0) {
            *plVar18 = *plVar16;
          }
          *plVar16 = 0;
          plVar16[1] = 0;
          *piVar2 = *piVar2 + -1;
          plVar16[-1] = *plVar14;
          *plVar14 = (long)(plVar16 + -1);
          plVar16 = plVar8;
        } while (plVar8 != (long *)(lVar11 + 0x48));
      }
      local_1cc = 0;
      *(undefined4 *)(lVar12 + (long)iVar7 * 400 + 0x40) = 0xffffffff;
      local_1a8[0] = 0;
      uStack_1b0 = 0x10000000000;
      puStack_1c0 = &DAT_0405db6e;
      local_1c8 = puVar3;
      local_1b8 = local_1a8;
      FUN_02a21700(&local_1b8,&local_1c8,2,&local_1cc);
      local_a8 = 0;
      local_a0 = (long *)0x0;
      local_98 = 0xff;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      puStack_70 = local_1b8;
      local_78 = puVar3;
      uVar10 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_78);
      plVar14 = (long *)0x0;
      if (((uVar10 & 1) != 0) && (plVar14 = local_a0, local_a0 != (long *)0x0)) {
        if (*(uint *)(local_a0 + 3) == 0) {
          plVar14 = (long *)0x0;
        }
        else {
          plVar14 = (long *)((ulong)*(uint *)(local_a0 + 3) + (long)local_a0);
          if (*plVar14 != 0x101feff464e494d) {
            plVar14 = (long *)0x0;
          }
        }
      }
      *(undefined4 *)(lVar11 + 0xc) = 0;
      if (*(int *)(param_1 + 0xe8) == 0) {
        if (((*(char *)(param_1 + 0x2794) != '\0') &&
            (*(int *)(param_1 + 0x2720) == *(int *)(lVar11 + 0x18))) && (*pcVar5 != '\0')) {
          *(undefined4 *)(param_1 + 0x2628) = 0;
          *(undefined4 *)(param_1 + 0x2718) = 0;
        }
      }
      else if (((*(char *)(param_1 + 0x62ea0) != '\0') &&
               (*(int *)(param_1 + 0x62e2c) == *(int *)(lVar11 + 0x18))) && (*pcVar1 != '\0')) {
        *(undefined4 *)(param_1 + 0x62d34) = 0;
        *(undefined4 *)(param_1 + 0x62e24) = 0;
      }
      if (plVar14 != (long *)0x0) {
        *(undefined4 *)(lVar11 + 0x124) = *(undefined4 *)((long)plVar14 + 0x14);
        *(int *)(lVar11 + 0x128) = (int)plVar14[3];
        *(undefined4 *)(lVar11 + 300) = *(undefined4 *)((long)plVar14 + 0x1c);
      }
      *(undefined4 *)(lVar11 + 0x14) = 0;
      *(undefined4 *)(lVar11 + 0x10) = 0;
      uVar20 = uVar20 + 2;
      *(long *)(lVar11 + 0x20) = lVar9;
      *(undefined1 *)(lVar11 + 0x120) = 0;
      lVar12 = *(long *)(param_1 + 0xa0);
      uVar13 = uVar20;
      if (*(uint *)(param_1 + 0x98) <= uVar20) {
        uVar13 = 0;
      }
      lVar11 = lVar12 + (long)(int)uVar13 * 400;
      *(long *)(lVar11 + 0x20) = 0;
      *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
      *(undefined1 *)(lVar11 + 0x160) = 0;
      *(undefined1 *)(lVar11 + 0x163) = 0;
      *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
      *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
      *(undefined1 *)(lVar11 + 8) = 0;
      *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
      *(undefined8 *)(lVar11 + 0x30) = 0;
      *(undefined1 *)(lVar11 + 0x120) = 0;
      *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
      *(undefined2 *)(lVar11 + 0x161) = 0;
      *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
      *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
      *(undefined8 *)(lVar11 + 300) = 0xffffffff;
      *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
      if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
        lVar17 = lVar12 + (long)(int)uVar13 * 400;
        piVar2 = (int *)(lVar17 + 0x58);
        plVar14 = (long *)(lVar17 + 0x60);
        plVar16 = *(long **)(lVar11 + 0x50);
        do {
          plVar8 = (long *)plVar16[1];
          plVar18 = plVar8;
          if (*plVar16 != 0) {
            *(long **)(*plVar16 + 8) = plVar8;
            plVar18 = (long *)plVar16[1];
          }
          if (plVar18 != (long *)0x0) {
            *plVar18 = *plVar16;
          }
          *plVar16 = 0;
          plVar16[1] = 0;
          *piVar2 = *piVar2 + -1;
          plVar16[-1] = *plVar14;
          *plVar14 = (long)(plVar16 + -1);
          plVar16 = plVar8;
        } while (plVar8 != (long *)(lVar11 + 0x48));
      }
      *(undefined4 *)(lVar12 + (long)(int)uVar13 * 400 + 0x40) = 0xffffffff;
      local_1a8[0] = 0;
      local_1cc = 0;
      puVar4 = PTR_DAT_04bb2020 + 0x10;
      uStack_1b0 = 0x10000000000;
      puStack_1c0 = &DAT_0405db6e;
      local_1c8 = puVar4;
      local_1b8 = local_1a8;
      FUN_02a21700(&local_1b8,&local_1c8,2,&local_1cc);
      local_a8 = 0;
      local_a0 = (long *)0x0;
      local_98 = 0xff;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      puStack_70 = local_1b8;
      local_78 = puVar4;
      uVar10 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_78);
      plVar14 = (long *)0x0;
      if (((uVar10 & 1) != 0) && (plVar14 = local_a0, local_a0 != (long *)0x0)) {
        if (*(uint *)(local_a0 + 3) == 0) {
          plVar14 = (long *)0x0;
        }
        else {
          plVar14 = (long *)((ulong)*(uint *)(local_a0 + 3) + (long)local_a0);
          if (*plVar14 != 0x101feff464e494d) {
            plVar14 = (long *)0x0;
          }
        }
      }
      *(undefined4 *)(lVar11 + 0xc) = 0;
      if (*(int *)(param_1 + 0xe8) == 0) {
        if (((*(char *)(param_1 + 0x2794) != '\0') &&
            (*(int *)(param_1 + 0x2720) == *(int *)(lVar11 + 0x18))) && (*pcVar5 != '\0')) {
          *(undefined4 *)(param_1 + 0x2628) = 0;
          *(undefined4 *)(param_1 + 0x2718) = 0;
        }
      }
      else if (((*(char *)(param_1 + 0x62ea0) != '\0') &&
               (*(int *)(param_1 + 0x62e2c) == *(int *)(lVar11 + 0x18))) && (*pcVar1 != '\0')) {
        *(undefined4 *)(param_1 + 0x62d34) = 0;
        *(undefined4 *)(param_1 + 0x62e24) = 0;
      }
      if (plVar14 != (long *)0x0) {
        *(undefined4 *)(lVar11 + 0x124) = *(undefined4 *)((long)plVar14 + 0x14);
        *(int *)(lVar11 + 0x128) = (int)plVar14[3];
        *(undefined4 *)(lVar11 + 300) = *(undefined4 *)((long)plVar14 + 0x1c);
      }
      iVar19 = iVar19 + 1;
      *(undefined4 *)(lVar11 + 0x10) = 0;
      *(undefined4 *)(lVar11 + 0x14) = 0;
      *(long *)(lVar11 + 0x20) = lVar9;
      *(undefined1 *)(lVar11 + 0x120) = 0;
    } while (iVar19 != 3);
    iVar15 = iVar15 + 1;
  } while (iVar15 != 6);
  iVar15 = 0;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  do {
    lVar12 = *(long *)(param_1 + 0xa0);
    iVar19 = 0;
    if (uVar20 + 1 < *(uint *)(param_1 + 0x98)) {
      iVar19 = uVar20 + 1;
    }
    lVar11 = lVar12 + (long)iVar19 * 400;
    *(long *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
    *(undefined1 *)(lVar11 + 0x160) = 0;
    *(undefined1 *)(lVar11 + 0x163) = 0;
    *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
    *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
    *(undefined1 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
    *(undefined8 *)(lVar11 + 0x30) = 0;
    *(undefined1 *)(lVar11 + 0x120) = 0;
    *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
    *(undefined2 *)(lVar11 + 0x161) = 0;
    *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
    *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
    *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
    *(undefined8 *)(lVar11 + 300) = 0xffffffff;
    if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
      lVar17 = lVar12 + (long)iVar19 * 400;
      piVar2 = (int *)(lVar17 + 0x58);
      plVar14 = (long *)(lVar17 + 0x60);
      plVar16 = *(long **)(lVar11 + 0x50);
      do {
        plVar8 = (long *)plVar16[1];
        plVar18 = plVar8;
        if (*plVar16 != 0) {
          *(long **)(*plVar16 + 8) = plVar8;
          plVar18 = (long *)plVar16[1];
        }
        if (plVar18 != (long *)0x0) {
          *plVar18 = *plVar16;
        }
        *plVar16 = 0;
        plVar16[1] = 0;
        *piVar2 = *piVar2 + -1;
        plVar16[-1] = *plVar14;
        *plVar14 = (long)(plVar16 + -1);
        plVar16 = plVar8;
      } while (plVar8 != (long *)(lVar11 + 0x48));
    }
    local_1cc = 0;
    *(undefined4 *)(lVar12 + (long)iVar19 * 400 + 0x40) = 0xffffffff;
    local_1a8[0] = 0;
    uStack_1b0 = 0x10000000000;
    puStack_1c0 = &DAT_0405db6e;
    local_1c8 = puVar3;
    local_1b8 = local_1a8;
    FUN_02a21700(&local_1b8,&local_1c8,2,&local_1cc);
    local_a8 = 0;
    local_a0 = (long *)0x0;
    local_98 = 0xff;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    puStack_70 = local_1b8;
    local_78 = puVar3;
    uVar10 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_78);
    plVar14 = (long *)0x0;
    if (((uVar10 & 1) != 0) && (plVar14 = local_a0, local_a0 != (long *)0x0)) {
      if (*(uint *)(local_a0 + 3) == 0) {
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = (long *)((ulong)*(uint *)(local_a0 + 3) + (long)local_a0);
        if (*plVar14 != 0x101feff464e494d) {
          plVar14 = (long *)0x0;
        }
      }
    }
    *(undefined4 *)(lVar11 + 0xc) = 0;
    if (*(int *)(param_1 + 0xe8) == 0) {
      if (((*(char *)(param_1 + 0x2794) != '\0') &&
          (*(int *)(param_1 + 0x2720) == *(int *)(lVar11 + 0x18))) && (*pcVar5 != '\0')) {
        *(undefined4 *)(param_1 + 0x2628) = 0;
        *(undefined4 *)(param_1 + 0x2718) = 0;
      }
    }
    else if (((*(char *)(param_1 + 0x62ea0) != '\0') &&
             (*(int *)(param_1 + 0x62e2c) == *(int *)(lVar11 + 0x18))) && (*pcVar1 != '\0')) {
      *(undefined4 *)(param_1 + 0x62d34) = 0;
      *(undefined4 *)(param_1 + 0x62e24) = 0;
    }
    if (plVar14 != (long *)0x0) {
      *(undefined4 *)(lVar11 + 0x124) = *(undefined4 *)((long)plVar14 + 0x14);
      *(int *)(lVar11 + 0x128) = (int)plVar14[3];
      *(undefined4 *)(lVar11 + 300) = *(undefined4 *)((long)plVar14 + 0x1c);
    }
    *(undefined4 *)(lVar11 + 0x14) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    uVar20 = uVar20 + 2;
    *(long *)(lVar11 + 0x20) = lVar9;
    *(undefined1 *)(lVar11 + 0x120) = 0;
    lVar12 = *(long *)(param_1 + 0xa0);
    uVar13 = uVar20;
    if (*(uint *)(param_1 + 0x98) <= uVar20) {
      uVar13 = 0;
    }
    lVar11 = lVar12 + (long)(int)uVar13 * 400;
    *(long *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
    *(undefined1 *)(lVar11 + 0x160) = 0;
    *(undefined1 *)(lVar11 + 0x163) = 0;
    *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
    *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
    *(undefined1 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
    *(undefined8 *)(lVar11 + 0x30) = 0;
    *(undefined1 *)(lVar11 + 0x120) = 0;
    *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
    *(undefined2 *)(lVar11 + 0x161) = 0;
    *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
    *(undefined8 *)(lVar11 + 300) = 0xffffffff;
    *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
    if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
      lVar17 = lVar12 + (long)(int)uVar13 * 400;
      piVar2 = (int *)(lVar17 + 0x58);
      plVar14 = (long *)(lVar17 + 0x60);
      plVar16 = *(long **)(lVar11 + 0x50);
      do {
        plVar8 = (long *)plVar16[1];
        plVar18 = plVar8;
        if (*plVar16 != 0) {
          *(long **)(*plVar16 + 8) = plVar8;
          plVar18 = (long *)plVar16[1];
        }
        if (plVar18 != (long *)0x0) {
          *plVar18 = *plVar16;
        }
        *plVar16 = 0;
        plVar16[1] = 0;
        *piVar2 = *piVar2 + -1;
        plVar16[-1] = *plVar14;
        *plVar14 = (long)(plVar16 + -1);
        plVar16 = plVar8;
      } while (plVar8 != (long *)(lVar11 + 0x48));
    }
    *(undefined4 *)(lVar12 + (long)(int)uVar13 * 400 + 0x40) = 0xffffffff;
    local_1a8[0] = 0;
    local_1cc = 0;
    puVar4 = PTR_DAT_04bb2020 + 0x10;
    uStack_1b0 = 0x10000000000;
    puStack_1c0 = &DAT_0405db6e;
    local_1c8 = puVar4;
    local_1b8 = local_1a8;
    FUN_02a21700(&local_1b8,&local_1c8,2,&local_1cc);
    local_a8 = 0;
    local_a0 = (long *)0x0;
    local_98 = 0xff;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    puStack_70 = local_1b8;
    local_78 = puVar4;
    uVar10 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_78);
    plVar14 = (long *)0x0;
    if (((uVar10 & 1) != 0) && (plVar14 = local_a0, local_a0 != (long *)0x0)) {
      if (*(uint *)(local_a0 + 3) == 0) {
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = (long *)((ulong)*(uint *)(local_a0 + 3) + (long)local_a0);
        if (*plVar14 != 0x101feff464e494d) {
          plVar14 = (long *)0x0;
        }
      }
    }
    *(undefined4 *)(lVar11 + 0xc) = 0;
    if (*(int *)(param_1 + 0xe8) == 0) {
      if (((*(char *)(param_1 + 0x2794) != '\0') &&
          (*(int *)(param_1 + 0x2720) == *(int *)(lVar11 + 0x18))) && (*pcVar5 != '\0')) {
        *(undefined4 *)(param_1 + 0x2628) = 0;
        *(undefined4 *)(param_1 + 0x2718) = 0;
      }
    }
    else if (((*(char *)(param_1 + 0x62ea0) != '\0') &&
             (*(int *)(param_1 + 0x62e2c) == *(int *)(lVar11 + 0x18))) && (*pcVar1 != '\0')) {
      *(undefined4 *)(param_1 + 0x62d34) = 0;
      *(undefined4 *)(param_1 + 0x62e24) = 0;
    }
    if (plVar14 != (long *)0x0) {
      *(undefined4 *)(lVar11 + 0x124) = *(undefined4 *)((long)plVar14 + 0x14);
      *(int *)(lVar11 + 0x128) = (int)plVar14[3];
      *(undefined4 *)(lVar11 + 300) = *(undefined4 *)((long)plVar14 + 0x1c);
    }
    iVar15 = iVar15 + 1;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined4 *)(lVar11 + 0x14) = 0;
    *(long *)(lVar11 + 0x20) = lVar9;
    *(undefined1 *)(lVar11 + 0x120) = 0;
  } while (iVar15 != 0x10);
  iVar15 = 0;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  do {
    lVar12 = *(long *)(param_1 + 0xa0);
    iVar19 = 0;
    if (uVar20 + 1 < *(uint *)(param_1 + 0x98)) {
      iVar19 = uVar20 + 1;
    }
    lVar11 = lVar12 + (long)iVar19 * 400;
    *(long *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
    *(undefined1 *)(lVar11 + 0x160) = 0;
    *(undefined1 *)(lVar11 + 0x163) = 0;
    *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
    *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
    *(undefined1 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
    *(undefined8 *)(lVar11 + 0x30) = 0;
    *(undefined1 *)(lVar11 + 0x120) = 0;
    *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
    *(undefined2 *)(lVar11 + 0x161) = 0;
    *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
    *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
    *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
    *(undefined8 *)(lVar11 + 300) = 0xffffffff;
    if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
      lVar17 = lVar12 + (long)iVar19 * 400;
      piVar2 = (int *)(lVar17 + 0x58);
      plVar14 = (long *)(lVar17 + 0x60);
      plVar16 = *(long **)(lVar11 + 0x50);
      do {
        plVar8 = (long *)plVar16[1];
        plVar18 = plVar8;
        if (*plVar16 != 0) {
          *(long **)(*plVar16 + 8) = plVar8;
          plVar18 = (long *)plVar16[1];
        }
        if (plVar18 != (long *)0x0) {
          *plVar18 = *plVar16;
        }
        *plVar16 = 0;
        plVar16[1] = 0;
        *piVar2 = *piVar2 + -1;
        plVar16[-1] = *plVar14;
        *plVar14 = (long)(plVar16 + -1);
        plVar16 = plVar8;
      } while (plVar8 != (long *)(lVar11 + 0x48));
    }
    local_1cc = 0;
    *(undefined4 *)(lVar12 + (long)iVar19 * 400 + 0x40) = 0xffffffff;
    local_1a8[0] = 0;
    uStack_1b0 = 0x10000000000;
    puStack_1c0 = &DAT_0405db6e;
    local_1c8 = puVar3;
    local_1b8 = local_1a8;
    FUN_02a21700(&local_1b8,&local_1c8,2,&local_1cc);
    local_a8 = 0;
    local_a0 = (long *)0x0;
    local_98 = 0xff;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    puStack_70 = local_1b8;
    local_78 = puVar3;
    uVar10 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_78);
    plVar14 = (long *)0x0;
    if (((uVar10 & 1) != 0) && (plVar14 = local_a0, local_a0 != (long *)0x0)) {
      if (*(uint *)(local_a0 + 3) == 0) {
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = (long *)((ulong)*(uint *)(local_a0 + 3) + (long)local_a0);
        if (*plVar14 != 0x101feff464e494d) {
          plVar14 = (long *)0x0;
        }
      }
    }
    *(undefined4 *)(lVar11 + 0xc) = 0;
    if (*(int *)(param_1 + 0xe8) == 0) {
      if (((*(char *)(param_1 + 0x2794) != '\0') &&
          (*(int *)(param_1 + 0x2720) == *(int *)(lVar11 + 0x18))) && (*pcVar5 != '\0')) {
        *(undefined4 *)(param_1 + 0x2628) = 0;
        *(undefined4 *)(param_1 + 0x2718) = 0;
      }
    }
    else if (((*(char *)(param_1 + 0x62ea0) != '\0') &&
             (*(int *)(param_1 + 0x62e2c) == *(int *)(lVar11 + 0x18))) && (*pcVar1 != '\0')) {
      *(undefined4 *)(param_1 + 0x62d34) = 0;
      *(undefined4 *)(param_1 + 0x62e24) = 0;
    }
    if (plVar14 != (long *)0x0) {
      *(undefined4 *)(lVar11 + 0x124) = *(undefined4 *)((long)plVar14 + 0x14);
      *(int *)(lVar11 + 0x128) = (int)plVar14[3];
      *(undefined4 *)(lVar11 + 300) = *(undefined4 *)((long)plVar14 + 0x1c);
    }
    *(undefined4 *)(lVar11 + 0x14) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    uVar20 = uVar20 + 2;
    *(long *)(lVar11 + 0x20) = lVar9;
    *(undefined1 *)(lVar11 + 0x120) = 0;
    lVar12 = *(long *)(param_1 + 0xa0);
    uVar13 = uVar20;
    if (*(uint *)(param_1 + 0x98) <= uVar20) {
      uVar13 = 0;
    }
    lVar11 = lVar12 + (long)(int)uVar13 * 400;
    *(long *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x140) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x148) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x150) = 0xfffeffffffff;
    *(undefined1 *)(lVar11 + 0x160) = 0;
    *(undefined1 *)(lVar11 + 0x163) = 0;
    *(undefined8 *)(lVar11 + 0x180) = 0xfffeffffffff;
    *(undefined8 *)(lVar11 + 0x170) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x178) = 0xffffffffffffffff;
    *(undefined1 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
    *(undefined8 *)(lVar11 + 0x30) = 0;
    *(undefined1 *)(lVar11 + 0x120) = 0;
    *(undefined8 *)(lVar11 + 0x164) = 0xffffffffffffffff;
    *(undefined2 *)(lVar11 + 0x161) = 0;
    *(undefined8 *)(lVar11 + 0x134) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x124) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(lVar11 + 0x14) = 0xffffffff00000000;
    *(undefined8 *)(lVar11 + 300) = 0xffffffff;
    *(undefined2 *)(lVar11 + 0x122) = 0xfffe;
    if (*(long **)(lVar11 + 0x50) != (long *)(lVar11 + 0x48)) {
      lVar17 = lVar12 + (long)(int)uVar13 * 400;
      piVar2 = (int *)(lVar17 + 0x58);
      plVar14 = (long *)(lVar17 + 0x60);
      plVar16 = *(long **)(lVar11 + 0x50);
      do {
        plVar8 = (long *)plVar16[1];
        plVar18 = plVar8;
        if (*plVar16 != 0) {
          *(long **)(*plVar16 + 8) = plVar8;
          plVar18 = (long *)plVar16[1];
        }
        if (plVar18 != (long *)0x0) {
          *plVar18 = *plVar16;
        }
        *plVar16 = 0;
        plVar16[1] = 0;
        *piVar2 = *piVar2 + -1;
        plVar16[-1] = *plVar14;
        *plVar14 = (long)(plVar16 + -1);
        plVar16 = plVar8;
      } while (plVar8 != (long *)(lVar11 + 0x48));
    }
    *(undefined4 *)(lVar12 + (long)(int)uVar13 * 400 + 0x40) = 0xffffffff;
    local_1a8[0] = 0;
    local_1cc = 0;
    puVar4 = PTR_DAT_04bb2020 + 0x10;
    uStack_1b0 = 0x10000000000;
    puStack_1c0 = &DAT_0405db6e;
    local_1c8 = puVar4;
    local_1b8 = local_1a8;
    FUN_02a21700(&local_1b8,&local_1c8,2,&local_1cc);
    local_a8 = 0;
    local_a0 = (long *)0x0;
    local_98 = 0xff;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    puStack_70 = local_1b8;
    local_78 = puVar4;
    uVar10 = FUN_02a0c5d4(*(long *)PTR_DAT_04bb26a8 + 0xa5968,&local_a8,&local_78);
    plVar14 = (long *)0x0;
    if (((uVar10 & 1) != 0) && (plVar14 = local_a0, local_a0 != (long *)0x0)) {
      if (*(uint *)(local_a0 + 3) == 0) {
        plVar14 = (long *)0x0;
      }
      else {
        plVar14 = (long *)((ulong)*(uint *)(local_a0 + 3) + (long)local_a0);
        if (*plVar14 != 0x101feff464e494d) {
          plVar14 = (long *)0x0;
        }
      }
    }
    *(undefined4 *)(lVar11 + 0xc) = 0;
    if (*(int *)(param_1 + 0xe8) == 0) {
      if (((*(char *)(param_1 + 0x2794) != '\0') &&
          (*(int *)(param_1 + 0x2720) == *(int *)(lVar11 + 0x18))) && (*pcVar5 != '\0')) {
        *(undefined4 *)(param_1 + 0x2628) = 0;
        *(undefined4 *)(param_1 + 0x2718) = 0;
      }
    }
    else if (((*(char *)(param_1 + 0x62ea0) != '\0') &&
             (*(int *)(param_1 + 0x62e2c) == *(int *)(lVar11 + 0x18))) && (*pcVar1 != '\0')) {
      *(undefined4 *)(param_1 + 0x62d34) = 0;
      *(undefined4 *)(param_1 + 0x62e24) = 0;
    }
    if (plVar14 != (long *)0x0) {
      *(undefined4 *)(lVar11 + 0x124) = *(undefined4 *)((long)plVar14 + 0x14);
      *(int *)(lVar11 + 0x128) = (int)plVar14[3];
      *(undefined4 *)(lVar11 + 300) = *(undefined4 *)((long)plVar14 + 0x1c);
    }
    iVar15 = iVar15 + 1;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined4 *)(lVar11 + 0x14) = 0;
    *(long *)(lVar11 + 0x20) = lVar9;
    *(undefined1 *)(lVar11 + 0x120) = 0;
  } while (iVar15 != 6);
  return;
}


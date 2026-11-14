
void FUN_0173c7c0(long *param_1)

{
  undefined *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  uint *puVar15;
  ushort uVar16;
  bool bVar17;
  uint *puVar18;
  long *plVar19;
  long lVar20;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  uint local_6c;
  undefined8 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  
  lVar14 = param_1[0xc];
  if (lVar14 != 0) {
    *(uint *)(lVar14 + 0x11a0) = *(uint *)(lVar14 + 0x11a0) | 0x2000;
  }
  (**(code **)(*param_1 + 0x120))(param_1);
  puVar9 = PTR_DAT_04bb30c8;
  puVar8 = PTR_DAT_04bb30c0;
  if ((long *)param_1[0x16] != param_1 + 0x15) {
    lVar14 = (long)*(int *)((long)param_1 + 0xbc);
    plVar19 = (long *)(param_1[0x16] - lVar14);
    puVar1 = PTR_DAT_04bb2e38 + 0x10;
    do {
      if (((*puVar9 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar9), iVar10 != 0)) {
        *(undefined **)puVar8 = puVar1;
        __cxa_guard_release(puVar9);
      }
      if ((plVar19 != (long *)0x0) &&
         (uVar12 = (**(code **)(*plVar19 + 0x10))(plVar19,puVar8), (uVar12 & 1) != 0)) {
        *(undefined4 *)(plVar19 + 0x5f) = *(undefined4 *)((long)param_1 + 0x234);
        break;
      }
      plVar19 = (long *)(*(long *)((long)plVar19 + lVar14 + 8) - lVar14);
    } while (plVar19 != (long *)((long)(param_1 + 0x15) - lVar14));
  }
  puVar8 = PTR_DAT_04bb43c0;
  puVar2 = (undefined2 *)PTR_DAT_04bb37e0;
  if ((undefined2 *)param_1[0x45] != (undefined2 *)0x0) {
    puVar2 = (undefined2 *)param_1[0x45];
  }
  uVar7 = *puVar2;
  uVar5 = *(undefined1 *)(puVar2 + 1);
  uVar6 = *(undefined1 *)((long)puVar2 + 3);
  uVar4 = *(uint *)(puVar2 + 2);
  lVar20 = *(long *)PTR_DAT_04bb43c0;
  local_60 = uVar7;
  local_5e = uVar5;
  local_5d = uVar6;
  local_5c = uVar4;
  uVar11 = FUN_0277d6c4(&local_60);
  lVar14 = *(long *)puVar8;
  if (lVar14 == 0) {
    return;
  }
  lVar20 = *(long *)(lVar20 + 0x57e58);
  uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
  if (*(uint *)(lVar20 + 0x1d8) <= uVar11) {
    return;
  }
  if (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar11 * 8) == 0) {
    return;
  }
  local_68 = 0;
  local_70 = uVar7;
  local_6e = uVar5;
  local_6d = uVar6;
  local_6c = uVar4;
  uVar11 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar8 == 0) {
LAB_0173ca64:
    puVar15 = (uint *)0x0;
    bVar17 = true;
    uVar16 = 0xbc;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar11) ||
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar11 * 8) == 0)) goto LAB_0173ca64;
    lVar14 = *(long *)PTR_DAT_04bc0428;
    uVar11 = FUN_0277d6c4(&local_60);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar11) ||
       (puVar15 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar11 * 8),
       puVar15 == (uint *)0x0)) goto LAB_0173ca64;
    uVar16 = 0;
    uVar11 = *puVar15;
    if ((uVar11 == 0) || (puVar15 == (uint *)(ulong)uVar11)) {
LAB_0173cb84:
      bVar17 = false;
    }
    else {
      puVar18 = (uint *)((long)puVar15 - (long)(ulong)uVar11);
      uVar16 = 0;
      if (*puVar18 == 0) goto LAB_0173cb84;
      uVar11 = puVar18[1];
      if ((uVar11 == 0) || ((ulong)(ushort)puVar18[2] == 0)) {
LAB_0173cb80:
        uVar16 = 0;
        goto LAB_0173cb84;
      }
      lVar14 = 0xc;
      if (*(char *)((long)puVar18 + 10) != '\0') {
        lVar14 = 0x1c;
      }
      lVar14 = (long)puVar18 + lVar14 + (ulong)(ushort)puVar18[2] * 8;
      if (lVar14 == 0) goto LAB_0173cb80;
      uVar3 = 0;
      if ((ulong)uVar11 != 0) {
        uVar3 = (uint)((ulong)((long)puVar15 - lVar14) / (ulong)uVar11);
      }
      if (*puVar18 <= uVar3) {
        uVar3 = 0xffffffff;
      }
      if (*(uint *)PTR_DAT_04bc00c8 <= uVar3) goto LAB_0173cb80;
      uVar16 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2);
      if (uVar16 < 0xbd) goto LAB_0173cb84;
      bVar17 = false;
      uVar16 = 0;
    }
  }
  if (uVar16 != 0x2c) {
    return;
  }
  lVar14 = param_1[0xc];
  if (lVar14 == 0) {
    return;
  }
  local_54 = 0x2c;
  if (bVar17) {
    local_58 = 0xbc;
  }
  else {
    uVar11 = *puVar15;
    local_58 = 0;
    if ((uVar11 != 0) && (puVar15 != (uint *)(ulong)uVar11)) {
      puVar18 = (uint *)((long)puVar15 - (long)(ulong)uVar11);
      local_58 = 0;
      if (*puVar18 != 0) {
        uVar11 = puVar18[1];
        if ((uVar11 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
          lVar20 = 0xc;
          if (*(char *)((long)puVar18 + 10) != '\0') {
            lVar20 = 0x1c;
          }
          lVar20 = (long)puVar18 + lVar20 + (ulong)(ushort)puVar18[2] * 8;
          if (lVar20 != 0) {
            uVar3 = 0;
            if ((ulong)uVar11 != 0) {
              uVar3 = (uint)((ulong)((long)puVar15 - lVar20) / (ulong)uVar11);
            }
            if (*puVar18 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_58 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2)
               , local_58 < 0xbd)) goto LAB_0173cb30;
          }
        }
        local_58 = 0;
      }
    }
  }
LAB_0173cb30:
  uVar4 = uVar4 & 0xf;
  if (local_58 != 0x2c) {
    uVar4 = 0;
  }
  uVar13 = FUN_016dc47c(uVar4);
  FUN_0073d870(lVar14,uVar13,6,0,0);
  return;
}


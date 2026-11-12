
/* WARNING: Removing unreachable block (ram,0x00ad8db4) */

void FUN_00ad8904(long *param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  byte bVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  int local_180 [2];
  undefined *local_178;
  undefined1 *puStack_170;
  undefined *local_168;
  undefined1 *puStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined2 local_14c;
  undefined4 local_148;
  undefined *local_140;
  undefined1 *local_138;
  undefined4 local_130;
  undefined1 local_12c [127];
  undefined1 local_ad;
  undefined *local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined1 local_94 [63];
  undefined1 local_55;
  
  uVar12 = (**(code **)(*param_1 + 0x60))();
  if ((uVar12 & 1) == 0) {
LAB_00ad8b88:
    *(undefined4 *)(param_1 + 0x16) = 1;
    return;
  }
  lVar19 = *(long *)(*(long *)(param_1[1] + 0x290) + 0x10);
  if (lVar19 == 0) {
    plVar14 = *(long **)(*(long *)(param_1[1] + 0x290) + 0x20);
    if (plVar14 == (long *)0x0) {
      lVar19 = 0;
    }
    else {
      lVar19 = *plVar14;
    }
  }
  local_55 = 0;
  local_98 = 0x40;
  local_130 = 0x80;
  local_a0 = local_94;
  local_94[0] = 0;
  local_a8 = PTR_DAT_04bb2bc0 + 0x10;
  local_ad = 0;
  local_12c[0] = 0;
  local_138 = local_12c;
  local_140 = PTR_DAT_04bb2d88 + 0x10;
  uVar12 = FUN_00ad8430(&local_a8,&local_140,param_1 + 0x17);
  puVar6 = PTR_DAT_04bb28f8;
  if (((uVar12 & 1) == 0) ||
     (uVar9 = FUN_01be5d00(*(undefined8 *)PTR_DAT_04bb28f8,&local_a8), 0xb < uVar9))
  goto LAB_00ad8b88;
  if ((1 << (ulong)(uVar9 & 0x1f) & 0xc1fU) == 0) {
    if (uVar9 != 6) goto LAB_00ad8b88;
    *(undefined4 *)(*(long *)(param_1[1] + 0x2a0) + 8) = 1;
    local_178 = PTR_DAT_04bb2020;
    local_150 = 0x10101;
    *(undefined1 *)((long)param_1 + 0x152) = 0;
    puVar6 = PTR_DAT_04bb6538;
    local_158 = 0;
    local_14c = 0;
    local_148 = 0;
    bVar16 = *(byte *)(param_1[1] + 0x2a8);
    local_178 = local_178 + 0x10;
    puStack_160 = local_a0;
    puStack_170 = local_138;
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    local_180[0] = CONCAT31(local_180[0]._1_3_,bVar16);
    local_168 = local_178;
    FUN_02dfa190(*(undefined8 *)PTR_DAT_04bb6538,local_180);
    plVar14 = *(long **)puVar6;
    if (4 < (int)plVar14[0x15] - 3U) {
      if (((int)plVar14[0x15] == 5) || ((int)plVar14[0x15] == 2)) {
        FUN_0386b170(plVar14[0x13],plVar14);
        *(undefined1 *)((long)plVar14 + 0x165) = 1;
        goto LAB_00ad8dfc;
      }
      if ((6 < *(uint *)(plVar14 + 0x15)) ||
         ((1 << (ulong)(*(uint *)(plVar14 + 0x15) & 0x1f) & 0x58U) == 0)) goto LAB_00ad8dfc;
    }
    (**(code **)(*plVar14 + 0xa8))(plVar14);
LAB_00ad8dfc:
    *(undefined1 *)(*(long *)(param_1[1] + 0x288) + 0xca) = 1;
    return;
  }
  *(undefined4 *)(*(long *)(param_1[1] + 0x2a0) + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x152) = 1;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  piVar5 = (int *)PTR_DAT_04bb3238;
  if (param_1[1] == 0) {
    lVar18 = *(long *)PTR_DAT_04bb3968;
    lVar15 = 0;
LAB_00ad8adc:
    bVar8 = true;
LAB_00ad8bb0:
    uVar20 = *(uint *)(lVar18 + 0xd20);
    piVar5 = (int *)(lVar18 + 0xa20) + uVar20;
    if (0x11 < uVar20) {
      piVar5 = (int *)(lVar18 + 0xa20);
    }
    piVar1 = (int *)PTR_DAT_04bb3238;
    if (uVar20 != 0xffffffff) {
      piVar1 = piVar5;
    }
    if (*piVar1 != 0) {
      if ((*(uint *)(lVar19 + 0x48) < 10) &&
         (bVar7 = true, (1 << (ulong)(*(uint *)(lVar19 + 0x48) & 0x1f) & 0x2a8U) != 0)) {
        *(undefined1 *)(lVar19 + 0x2475) = 1;
      }
      else {
        bVar7 = *(char *)(lVar19 + 0x2475) != '\0';
      }
      *(bool *)(param_1 + 0x2a) = bVar7;
    }
    *(undefined4 *)(lVar18 + 0xd20) = 0xffffffff;
    if (!bVar8) {
      *(undefined4 *)(lVar18 + 0xce8) = *(undefined4 *)(lVar15 + 0x230);
      uVar17 = 0;
      if (param_1[1] != 0) {
        uVar17 = *(undefined8 *)(param_1[1] + 0x290);
      }
      *(undefined8 *)(*(long *)puVar6 + 200) = uVar17;
    }
  }
  else {
    lVar15 = *(long *)(param_1[1] + 0x48);
    lVar18 = *(long *)PTR_DAT_04bb3968;
    if (lVar15 == 0) goto LAB_00ad8adc;
    if (*(int *)(lVar15 + 0x15c) != 10) {
      bVar8 = false;
      goto LAB_00ad8bb0;
    }
    uVar20 = *(uint *)(lVar18 + 0xd20);
    uVar12 = (ulong)uVar20;
    piVar1 = (int *)(lVar18 + 0xa20);
    local_180[0] = *(int *)(lVar15 + 0x230);
    piVar4 = piVar1 + uVar12;
    if (0x11 < uVar20) {
      piVar4 = piVar1;
    }
    piVar3 = (int *)PTR_DAT_04bb3238;
    if (uVar20 != 0xffffffff) {
      piVar3 = piVar4;
    }
    if (*piVar3 == *(int *)PTR_DAT_04bb3238) {
      FUN_020afba4(lVar18,local_180);
      uVar12 = (ulong)*(uint *)(lVar18 + 0xd20);
    }
    piVar4 = piVar1 + uVar12;
    if (0x11 < (uint)uVar12) {
      piVar4 = piVar1;
    }
    if ((uint)uVar12 != 0xffffffff) {
      piVar5 = piVar4;
    }
    if ((*piVar5 != local_180[0]) || (*(int *)(lVar18 + 0xce8) != 0)) {
      if ((*(uint *)(lVar19 + 0x48) < 10) &&
         (bVar8 = true, (1 << (ulong)(*(uint *)(lVar19 + 0x48) & 0x1f) & 0x2a8U) != 0)) {
        *(undefined1 *)(lVar19 + 0x2475) = 1;
      }
      else {
        bVar8 = *(char *)(lVar19 + 0x2475) != '\0';
      }
      *(bool *)(param_1 + 0x2a) = bVar8;
    }
    *(undefined4 *)(lVar18 + 0xce8) = 0;
  }
  if ((char)param_1[0x2a] == '\0') {
    FUN_00ad8794(param_1,&local_a8,&local_140);
  }
  puVar6 = PTR_DAT_04bb27c0;
  lVar15 = *(long *)(param_1[1] + 0x288);
  if (*(char *)(lVar15 + 0xca) != '\0') goto LAB_00ad8d80;
  lVar15 = *(long *)PTR_DAT_04bb27c0;
  if (lVar15 != 0) {
    uVar20 = *(uint *)PTR_DAT_04bb32f8;
    if ((((uVar20 == 0) ||
         (plVar14 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                              ((ulong)(uVar20 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
        ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar20)) {
      plVar14 = (long *)0x0;
    }
    if ((*(int *)(lVar15 + 0x288) == 1) || (*(int *)(lVar15 + 0x288) == -1)) {
      plVar13 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar15 = *(long *)puVar6;
      iVar10 = (**(code **)(*plVar13 + 0x60))();
      if (iVar10 < 0x11) {
        uVar20 = 1;
      }
      else {
        if (4 < *(uint *)(lVar15 + 0x5e8)) goto LAB_00ad8cfc;
        uVar20 = 0x1aU >> (ulong)(*(uint *)(lVar15 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_00ad8cfc:
      uVar20 = 0;
    }
    if (plVar14 != (long *)0x0) {
      lVar15 = plVar14[0x2a];
      if (((*PTR_DAT_04bb3280 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar10 != 0)) {
        *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3280);
      }
      uVar12 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb3278);
      uVar2 = 0;
      if ((int)lVar15 == 1) {
        uVar2 = uVar20;
      }
      if ((((uVar12 & 1) != 0) && (uVar2 != 0)) &&
         (uVar12 = FUN_00901fc8(plVar14), (uVar12 & 1) != 0)) {
        uVar11 = FUN_00901c6c(plVar14);
        *(undefined4 *)(lVar19 + 0x2408) = uVar11;
      }
    }
  }
  lVar15 = *(long *)(param_1[1] + 0x288);
LAB_00ad8d80:
  *(undefined1 *)(lVar15 + 0xca) = 1;
  if (uVar9 == 6) {
    return;
  }
  lVar19 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0xa0);
  if (lVar19 == 0) {
    return;
  }
  *(undefined4 *)(lVar19 + 0x220) = 2;
  *(undefined1 *)(lVar19 + 0x224) = 1;
  return;
}


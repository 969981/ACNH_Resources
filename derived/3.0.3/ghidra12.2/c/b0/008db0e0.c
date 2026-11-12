
void FUN_008db0e0(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  long *plVar15;
  uint *puVar16;
  char *pcVar17;
  undefined8 local_138;
  undefined4 local_130;
  undefined *local_128;
  char *local_120;
  int local_118;
  char local_114 [31];
  undefined1 local_f5;
  undefined *local_f0;
  char *local_e8;
  int local_e0;
  char local_dc [31];
  undefined1 local_bd;
  undefined *local_b8;
  char *local_b0;
  int local_a8;
  char local_a4 [31];
  undefined1 local_85;
  undefined **local_80;
  undefined8 *puStack_78;
  
  puVar4 = PTR_DAT_04bb2028;
  local_85 = 0;
  local_a8 = 0x20;
  local_b0 = local_a4;
  local_a4[0] = '\0';
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  local_b8 = puVar1;
  pcVar8 = (char *)FUN_008aedc0();
  local_e0 = 0x20;
  local_bd = 0;
  local_e8 = local_dc;
  if (local_dc != pcVar8) {
    lVar12 = 0;
    do {
      if (pcVar8[lVar12] == '\0') {
LAB_008db19c:
        iVar5 = (int)lVar12;
joined_r0x008db1a0:
        if (0x1f < iVar5) {
          iVar5 = 0x1f;
        }
        goto LAB_008db1a8;
      }
      if (pcVar8[lVar12 + 1] == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_008db19c;
      }
      if (pcVar8[lVar12 + 2] == '\0') {
        iVar5 = (int)lVar12 + 2;
        goto joined_r0x008db1a0;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    iVar5 = 0;
LAB_008db1a8:
    memcpy(local_dc,pcVar8,(long)iVar5);
    local_dc[iVar5] = '\0';
    pcVar8 = local_e8;
  }
  pcVar17 = local_e8;
  local_118 = 0x20;
  local_f5 = 0;
  local_128 = PTR_DAT_04bb2a08 + 0x10;
  pcVar8[(long)local_e0 + -1] = '\0';
  local_120 = local_114;
  local_f0 = puVar1;
  if (local_114 != local_e8) {
    (**(code **)(puVar4 + 0x28))(&local_f0);
    lVar12 = 0;
    do {
      if (local_e8[lVar12] == '\0') goto LAB_008db260;
      if (local_e8[lVar12 + 1] == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_008db260;
      }
      if (local_e8[lVar12 + 2] == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_008db260;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_008db260:
    iVar5 = (int)lVar12;
    if (local_118 <= (int)lVar12) {
      iVar5 = local_118 + -1;
    }
    memcpy(local_114,pcVar17,(long)iVar5);
    local_114[iVar5] = '\0';
  }
  local_128 = puVar4 + 0x10;
  if (((DAT_04ced5e0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04ced5e0), iVar5 != 0)) {
    DAT_04ced5d0 = PTR_DAT_04bb2020 + 0x10;
    DAT_04ced5d8 = &DAT_040e917b;
    __cxa_guard_release(&DAT_04ced5e0);
  }
  pcVar8 = local_120;
  (**(code **)(local_128 + 0x18))(&local_128);
  lVar12 = 0;
  do {
    if (local_120[lVar12] == '\0') goto LAB_008db30c;
    if (local_120[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_008db30c;
    }
    if (local_120[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_008db30c;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_008db30c:
  uVar7 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
  (**(code **)(DAT_04ced5d0 + 0x18))(&DAT_04ced5d0);
  lVar12 = 0;
  do {
    if (DAT_04ced5d8[lVar12] == '\0') goto LAB_008db36c;
    if (DAT_04ced5d8[lVar12 + 1] == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_008db36c;
    }
    if (DAT_04ced5d8[lVar12 + 2] == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_008db36c;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  lVar12 = 0;
LAB_008db36c:
  uVar13 = (uint)lVar12;
  if ((int)(local_118 - uVar7) <= (int)(uint)lVar12) {
    uVar13 = local_118 + ~uVar7;
  }
  if (0 < (int)uVar13) {
    (**(code **)(DAT_04ced5d0 + 0x18))(&DAT_04ced5d0);
    memcpy(pcVar8 + uVar7,DAT_04ced5d8,(ulong)uVar13);
    pcVar8[(int)(uVar13 + uVar7)] = '\0';
  }
  (**(code **)(DAT_04ced5d0 + 0x18))(&DAT_04ced5d0);
  local_138 = *(undefined8 *)(param_1 + 0x2a8);
  local_130 = *(undefined4 *)(param_1 + 0x2b0);
  puVar9 = (undefined4 *)FUN_0252d9bc(0);
  puVar1 = PTR_DAT_04bb27c0;
  if (puVar9 != (undefined4 *)0x0) {
    local_130 = puVar9[2];
    local_138 = CONCAT44((float)puVar9[1] + 0.1,*puVar9);
  }
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) {
LAB_008db570:
    uVar7 = *(uint *)PTR_DAT_04bb3238;
  }
  else {
    uVar7 = *(uint *)PTR_DAT_04bb32f8;
    if ((((uVar7 == 0) ||
         (plVar15 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                              ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar15 == (long *)0x0)) ||
        ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar15 + 0x46) != uVar7)) {
      plVar15 = (long *)0x0;
    }
    if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
      plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar12 = *(long *)puVar1;
      iVar5 = (**(code **)(*plVar10 + 0x60))();
      if (iVar5 < 0x11) {
        uVar7 = 1;
      }
      else {
        if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_008db4b4;
        uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      }
      if (plVar15 != (long *)0x0) goto LAB_008db4c8;
      goto LAB_008db570;
    }
LAB_008db4b4:
    uVar7 = 0;
    if (plVar15 == (long *)0x0) goto LAB_008db570;
LAB_008db4c8:
    lVar12 = plVar15[0x2a];
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar11 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb3278);
    puVar4 = PTR_DAT_04bb3238;
    uVar13 = 0;
    if ((int)lVar12 == 1) {
      uVar13 = uVar7;
    }
    if (((uVar11 & 1) == 0) || (uVar13 == 0)) goto LAB_008db570;
    plVar10 = (long *)plVar15[0x51];
    puStack_78 = &local_138;
    local_80 = &PTR_FUN_04926ac8;
    if (plVar10 == plVar15 + 0x50) {
      puVar16 = (uint *)puVar4;
    }
    else {
      puVar16 = (uint *)(plVar10 + -1);
      do {
        uVar11 = (*(code *)*local_80)(&local_80,puVar16);
        if ((uVar11 & 1) != 0) goto LAB_008db6dc;
        plVar10 = (long *)plVar10[1];
        puVar16 = (uint *)(plVar10 + -1);
      } while (puVar16 != (uint *)(plVar15 + 0x4f));
      puVar16 = (uint *)puVar4;
    }
LAB_008db6dc:
    uVar7 = *puVar16;
  }
  if ((uVar7 != 0) && (lVar12 = *(long *)puVar1, lVar12 != 0)) {
    plVar15 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) + (ulong)(uVar7 >> 0x14) * 8);
    if ((plVar15 == (long *)0x0) ||
       (((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar15 + 0x46) != uVar7)))) {
      plVar15 = (long *)0x0;
    }
    if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
      plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar12 = *(long *)puVar1;
      iVar5 = (**(code **)(*plVar10 + 0x60))();
      if (iVar5 < 0x11) {
        uVar7 = 1;
      }
      else {
        if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_008db610;
        uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_008db610:
      uVar7 = 0;
    }
    if (plVar15 != (long *)0x0) {
      lVar12 = plVar15[0x2a];
      uVar13 = *(uint *)(plVar15 + 0x49);
      if (((*PTR_DAT_04bb32b0 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb32b0), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb32a8 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb32b0);
      }
      uVar6 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb32a8);
      pcVar8 = local_b0;
      if ((((int)lVar12 == 1) && ((uVar7 & uVar6) != 0)) && ((uVar13 >> 4 & 1) != 0)) {
        (**(code **)(plVar15[0x31] + 0x18))(plVar15 + 0x31);
        pcVar17 = (char *)plVar15[0x32];
        if (pcVar8 != pcVar17) {
          (**(code **)(plVar15[0x31] + 0x18))(plVar15 + 0x31);
          lVar12 = 0;
          do {
            if (*(char *)(plVar15[0x32] + lVar12) == '\0') goto LAB_008db6f4;
            lVar2 = plVar15[0x32] + lVar12;
            if (*(char *)(lVar2 + 1) == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_008db6f4;
            }
            if (*(char *)(lVar2 + 2) == '\0') {
              lVar12 = lVar12 + 2;
              goto LAB_008db6f4;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          lVar12 = 0;
LAB_008db6f4:
          iVar5 = (int)lVar12;
          if (local_a8 <= (int)lVar12) {
            iVar5 = local_a8 + -1;
          }
          memcpy(pcVar8,pcVar17,(long)iVar5);
          pcVar8[iVar5] = '\0';
        }
      }
    }
  }
  if (*local_b0 != '\0') goto LAB_008db728;
  (**(code **)(local_128 + 0x18))(&local_128);
  uVar7 = FUN_006bd550(local_120,0);
  pcVar8 = local_b0;
  iVar5 = *(int *)(param_1 + 0x305b0);
  if (iVar5 == 0) {
LAB_008db8ec:
    (**(code **)(local_f0 + 0x18))(&local_f0);
    uVar7 = FUN_006bd550(local_e8,0);
    pcVar8 = local_b0;
    iVar5 = *(int *)(param_1 + 0x305b0);
    if (iVar5 == 0) goto LAB_008db728;
    uVar13 = 0;
    iVar14 = iVar5 + -1;
    if (iVar14 == 0 || iVar5 < 1) {
      lVar12 = *(long *)(param_1 + 0x305b8);
    }
    else {
      lVar12 = *(long *)(param_1 + 0x305b8);
      do {
        iVar5 = iVar14 + uVar13;
        if (iVar5 < 0 != SCARRY4(iVar14,uVar13)) {
          iVar5 = iVar5 + 1;
        }
        uVar6 = iVar5 >> 1;
        uVar3 = *(uint *)(*(long *)(lVar12 + (long)(int)uVar6 * 8) + 0x18);
        if (uVar3 == uVar7) goto joined_r0x008db978;
        if (uVar3 < uVar7) {
          uVar13 = uVar6 + 1;
        }
        else {
          iVar14 = uVar6 - 1;
        }
      } while ((int)uVar13 < iVar14);
    }
    uVar6 = uVar13;
    if (*(uint *)(*(long *)(lVar12 + (long)(int)uVar13 * 8) + 0x18) != uVar7) goto LAB_008db728;
joined_r0x008db978:
    if ((((int)uVar6 < 0) || (**(long **)(lVar12 + (ulong)uVar6 * 8) == 0)) ||
       ((**(code **)(local_f0 + 0x18))(&local_f0), pcVar17 = local_e8, pcVar8 == local_e8))
    goto LAB_008db728;
    (**(code **)(local_f0 + 0x18))(&local_f0);
    lVar12 = 0;
    do {
      if (local_e8[lVar12] == '\0') goto LAB_008db9fc;
      if (local_e8[lVar12 + 1] == '\0') goto LAB_008db9f0;
      if (local_e8[lVar12 + 2] == '\0') goto LAB_008db9f8;
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
  }
  else {
    uVar13 = 0;
    iVar14 = iVar5 + -1;
    if (iVar14 == 0 || iVar5 < 1) {
      lVar12 = *(long *)(param_1 + 0x305b8);
    }
    else {
      lVar12 = *(long *)(param_1 + 0x305b8);
      do {
        iVar5 = iVar14 + uVar13;
        if (iVar5 < 0 != SCARRY4(iVar14,uVar13)) {
          iVar5 = iVar5 + 1;
        }
        uVar6 = iVar5 >> 1;
        uVar3 = *(uint *)(*(long *)(lVar12 + (long)(int)uVar6 * 8) + 0x18);
        if (uVar3 == uVar7) goto joined_r0x008db870;
        if (uVar3 < uVar7) {
          uVar13 = uVar6 + 1;
        }
        else {
          iVar14 = uVar6 - 1;
        }
      } while ((int)uVar13 < iVar14);
    }
    uVar6 = uVar13;
    if (*(uint *)(*(long *)(lVar12 + (long)(int)uVar13 * 8) + 0x18) != uVar7) goto LAB_008db8ec;
joined_r0x008db870:
    if (((int)uVar6 < 0) || (**(long **)(lVar12 + (ulong)uVar6 * 8) == 0)) goto LAB_008db8ec;
    (**(code **)(local_128 + 0x18))(&local_128);
    pcVar17 = local_120;
    if (pcVar8 == local_120) goto LAB_008db728;
    (**(code **)(local_128 + 0x18))(&local_128);
    lVar12 = 0;
    do {
      if (local_120[lVar12] == '\0') goto LAB_008db9fc;
      if (local_120[lVar12 + 1] == '\0') goto LAB_008db9f0;
      if (local_120[lVar12 + 2] == '\0') goto LAB_008db9f8;
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
  }
  lVar12 = 0;
LAB_008db9fc:
  iVar5 = (int)lVar12;
  if (local_a8 <= (int)lVar12) {
    iVar5 = local_a8 + -1;
  }
  memcpy(pcVar8,pcVar17,(long)iVar5);
  pcVar8[iVar5] = '\0';
LAB_008db728:
  pcVar17 = *(char **)(param_2 + 8);
  (**(code **)(local_b8 + 0x18))(&local_b8);
  pcVar8 = local_b0;
  if (pcVar17 != local_b0) {
    (**(code **)(local_b8 + 0x18))(&local_b8);
    lVar12 = 0;
    do {
      if (local_b0[lVar12] == '\0') goto LAB_008db808;
      if (local_b0[lVar12 + 1] == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_008db808;
      }
      if (local_b0[lVar12 + 2] == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_008db808;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_008db808:
    iVar5 = (int)lVar12;
    if (*(int *)(param_2 + 0x10) <= (int)lVar12) {
      iVar5 = *(int *)(param_2 + 0x10) + -1;
    }
    memcpy(pcVar17,pcVar8,(long)iVar5);
    pcVar17[iVar5] = '\0';
  }
  return;
LAB_008db9f0:
  lVar12 = lVar12 + 1;
  goto LAB_008db9fc;
LAB_008db9f8:
  lVar12 = lVar12 + 2;
  goto LAB_008db9fc;
}


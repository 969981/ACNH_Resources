
void FUN_028e03f0(ulong *param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  char cVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  int *piVar18;
  undefined8 local_c0;
  undefined1 *local_b8;
  undefined *local_b0;
  undefined1 *local_a8;
  int local_a0;
  undefined1 local_9c [63];
  undefined1 local_5d;
  undefined8 local_58;
  
  puVar5 = PTR_DAT_04bb30a0;
  uVar2 = *(uint *)((long)param_1 + 0xc);
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar2);
  if (uVar2 < *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x100)) {
    lVar8 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb30a0 + 0x108) + (long)(int)uVar2 * 8);
  }
  else {
    lVar8 = 0;
  }
  plVar9 = (long *)(**(code **)(*(long *)(lVar8 + 0x30) + 0xf0))();
  local_a0 = 0x40;
  local_5d = 0;
  local_b0 = PTR_DAT_04bb2f70 + 0x10;
  local_a8 = local_9c;
  (**(code **)(*plVar9 + 0x18))();
  puVar17 = (undefined1 *)plVar9[1];
  if (local_9c != puVar17) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
    lVar8 = 0;
    do {
      if (*(char *)(plVar9[1] + lVar8) == '\0') goto LAB_028e04ec;
      lVar1 = plVar9[1] + lVar8;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_028e04ec;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_028e04ec;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_028e04ec:
    iVar14 = (int)lVar8;
    if (local_a0 <= (int)lVar8) {
      iVar14 = local_a0 + -1;
    }
    memcpy(local_9c,puVar17,(long)iVar14);
    local_9c[iVar14] = 0;
  }
  puVar4 = PTR_DAT_04bb2bc0;
  lVar8 = 0;
  local_b0 = PTR_DAT_04bb2bc0 + 0x10;
  local_a8[(long)local_a0 + -1] = 0;
  do {
    if (local_a8[lVar8] == '\0') goto LAB_028e057c;
    if (local_a8[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_028e057c;
    }
    if (local_a8[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_028e057c;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  lVar8 = 0;
LAB_028e057c:
  iVar12 = (int)lVar8;
  iVar14 = iVar12;
  if (1 < iVar12) {
    iVar14 = 2;
  }
  local_a8[iVar12 - iVar14] = 0;
  puVar3 = PTR_DAT_04bb2020;
  local_c0 = PTR_DAT_04bb2020 + 0x10;
  local_b8 = &DAT_040b6d0d;
  (**(code **)(puVar4 + 0x28))(&local_b0);
  (**(code **)(local_b0 + 0x18))(&local_b0);
  puVar17 = local_a8;
  (**(code **)(local_c0 + 0x18))(&local_c0);
  if (puVar17 == local_b8) {
LAB_028e0624:
    local_58 = *param_1;
    *(undefined8 *)((long)param_1 + 0xfc) = 0;
    uVar16 = *(undefined8 *)puVar5;
    *(undefined8 *)((long)param_1 + 0xf4) = 0;
    *(undefined8 *)((long)param_1 + 0xec) = 0;
    *(undefined8 *)((long)param_1 + 0xe4) = 0;
    piVar18 = (int *)((long)param_1 + 0xdc);
    piVar18[0] = 0;
    piVar18[1] = 0;
    *(undefined8 *)((long)param_1 + 0x104) = 0;
    *(undefined8 *)((long)param_1 + 300) = 0;
    *(undefined8 *)((long)param_1 + 0x134) = 0;
    *(undefined8 *)((long)param_1 + 0x11c) = 0;
    *(undefined8 *)((long)param_1 + 0x124) = 0;
    *(undefined8 *)((long)param_1 + 0x10c) = 0;
    *(undefined8 *)((long)param_1 + 0x114) = 0;
    if ((char)(local_58 >> 0x20) < '\x05') {
      lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_58);
      local_c0 = (undefined *)(lVar8 + -0x15180);
      local_58 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c0);
    }
    uVar10 = local_58 >> 0x10;
    uVar15 = local_58 >> 0x30;
    uVar11 = local_58 >> 0x18;
    local_58._0_6_ = CONCAT24(5,(uint)local_58);
    local_58 = CONCAT26((short)uVar15,(undefined6)local_58) & 0xff00ffffffffffff;
    cVar7 = FUN_00a8ae20(uVar16,uVar10,uVar11,2);
    if ((cVar7 == '\x02') && (uVar15 = FUN_03782f00(), (uVar15 & 1) != 0)) {
      local_c0 = puVar3 + 0x10;
      local_b8 = &DAT_040b6d0d;
      (**(code **)(local_b0 + 0x18))(&local_b0);
      (**(code **)(local_b0 + 0x18))(&local_b0);
      puVar17 = local_a8;
      (**(code **)(local_c0 + 0x18))(&local_c0);
      if (puVar17 == local_b8) {
LAB_028e0740:
        lVar8 = *(long *)puVar5;
        if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar8 + 0x653a0))) {
          local_c0._0_4_ = uVar2;
          local_58._0_4_ = uVar2;
          (**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x108) +
                                                      (long)(int)uVar2 * 8) + 0xd8) + 0x90) + 0xf0))
                    ();
          local_c0 = (undefined *)((ulong)local_c0._4_4_ << 0x20);
          lVar8 = *(long *)puVar5;
        }
        iVar14 = 1;
        if ((int)param_1[0x24] - 1U < 2) {
          iVar14 = 2;
        }
        *(int *)((long)param_1 + 0x124) = iVar14;
        if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar8 + 0x653a0))) {
          local_c0._0_4_ = uVar2;
          local_58._0_4_ = uVar2;
          (**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x108) +
                                                      (long)(int)uVar2 * 8) + 0xd8) + 0x98) + 0xf0))
                    ();
          iVar14 = *(int *)((long)param_1 + 0x124);
          lVar8 = *(long *)puVar5;
        }
        iVar12 = 1;
        if (iVar14 - 1U < 2) {
          iVar12 = 2;
        }
        *(int *)(param_1 + 0x25) = iVar12;
        if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar8 + 0x653a0))) {
          local_c0._0_4_ = uVar2;
          local_58._0_4_ = uVar2;
          (**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x108) +
                                                      (long)(int)uVar2 * 8) + 0xd8) + 0xa0) + 0xf0))
                    ();
          iVar12 = (int)param_1[0x25];
          lVar8 = *(long *)puVar5;
        }
        iVar14 = 1;
        if (iVar12 - 1U < 2) {
          iVar14 = 2;
        }
        *(int *)((long)param_1 + 300) = iVar14;
        if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar8 + 0x653a0))) {
          local_c0._0_4_ = uVar2;
          local_58._0_4_ = uVar2;
          (**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x108) +
                                                      (long)(int)uVar2 * 8) + 0xd8) + 0xa8) + 0xf0))
                    ();
          iVar14 = *(int *)((long)param_1 + 300);
          lVar8 = *(long *)puVar5;
        }
        iVar12 = 1;
        if (iVar14 - 1U < 2) {
          iVar12 = 2;
        }
        *(int *)(param_1 + 0x26) = iVar12;
        if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar8 + 0x653a0))) {
          local_c0._0_4_ = uVar2;
          local_58._0_4_ = uVar2;
          (**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x108) +
                                                      (long)(int)uVar2 * 8) + 0xd8) + 0xb0) + 0xf0))
                    ();
          iVar12 = (int)param_1[0x26];
          lVar8 = *(long *)puVar5;
        }
        iVar14 = 1;
        if (iVar12 - 1U < 2) {
          iVar14 = 2;
        }
        *(int *)((long)param_1 + 0x134) = iVar14;
        if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar8 + 0x653a0))) {
          local_c0._0_4_ = uVar2;
          local_58._0_4_ = uVar2;
          (**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x108) +
                                                      (long)(int)uVar2 * 8) + 0xd8) + 0xb8) + 0xf0))
                    ();
          iVar14 = *(int *)((long)param_1 + 0x134);
          lVar8 = *(long *)puVar5;
        }
        iVar12 = 1;
        if (iVar14 - 1U < 2) {
          iVar12 = 2;
        }
        *(int *)(param_1 + 0x27) = iVar12;
        if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar8 + 0x653a0))) {
          local_c0._0_4_ = uVar2;
          local_58._0_4_ = uVar2;
          (**(code **)(*(long *)**(undefined8 **)
                                  (*(long *)(*(long *)(lVar8 + 0x108) + (long)(int)uVar2 * 8) + 0xd8
                                  ) + 0xf0))();
          iVar12 = (int)param_1[0x27];
          lVar8 = *(long *)puVar5;
        }
        iVar14 = 1;
        if (iVar12 - 1U < 2) {
          iVar14 = 2;
        }
        *piVar18 = iVar14;
        if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar8 + 0x653a0))) {
          local_c0._0_4_ = uVar2;
          local_58._0_4_ = uVar2;
          (**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x108) +
                                                      (long)(int)uVar2 * 8) + 0xd8) + 8) + 0xf0))();
          iVar14 = *piVar18;
          lVar8 = *(long *)puVar5;
        }
        iVar12 = 1;
        if (iVar14 - 1U < 2) {
          iVar12 = 2;
        }
        *(int *)(param_1 + 0x1c) = iVar12;
        if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar8 + 0x653a0))) {
          local_c0._0_4_ = uVar2;
          local_58._0_4_ = uVar2;
          (**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x108) +
                                                      (long)(int)uVar2 * 8) + 0xd8) + 0x10) + 0xf0))
                    ();
          iVar12 = (int)param_1[0x1c];
          lVar8 = *(long *)puVar5;
        }
        local_58 = CONCAT44(local_58._4_4_,uVar2);
        iVar14 = 1;
        if (iVar12 - 1U < 2) {
          iVar14 = 2;
        }
        *(int *)((long)param_1 + 0xe4) = iVar14;
        if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar8 + 0x653a0))) {
          local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar2);
          (**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x108) +
                                                      (long)(int)uVar2 * 8) + 0xd8) + 0x18) + 0xf0))
                    ();
          iVar14 = *(int *)((long)param_1 + 0xe4);
        }
        if (iVar14 - 1U < 2) {
          uVar13 = 3;
        }
        else {
          uVar13 = 4;
        }
        *(undefined4 *)(param_1 + 0x1d) = uVar13;
      }
      else {
        uVar15 = 0;
        bVar6 = true;
        do {
          if (local_a8[uVar15] != local_b8[uVar15]) {
            return;
          }
          if (local_a8[uVar15] == '\0') {
            if (!bVar6) {
              return;
            }
            goto LAB_028e0740;
          }
          bVar6 = uVar15 < 0x80000;
          uVar15 = uVar15 + 1;
        } while (uVar15 != 0x80001);
      }
    }
  }
  else {
    uVar15 = 0;
    bVar6 = true;
    do {
      if (local_a8[uVar15] != local_b8[uVar15]) {
        return;
      }
      if (local_a8[uVar15] == '\0') {
        if (!bVar6) {
          return;
        }
        goto LAB_028e0624;
      }
      bVar6 = uVar15 < 0x80000;
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x80001);
  }
  return;
}


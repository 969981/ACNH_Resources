
void FUN_028deee0(ulong *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  uint *puVar13;
  int *piVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  char *pcVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined1 *puVar26;
  undefined8 local_d8;
  char *local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined *local_b8;
  char *local_b0;
  int local_a8;
  char local_a4 [63];
  undefined1 local_65;
  
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  puVar25 = (undefined8 *)((long)param_1 + 0x7c);
  *puVar25 = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  uVar10 = *(uint *)((long)param_1 + 0xc);
  uVar24 = *param_1;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  uVar20 = param_1[3];
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0;
  *(undefined8 *)((long)param_1 + 0x11c) = 0;
  *(undefined8 *)((long)param_1 + 0x124) = 0;
  *(undefined8 *)((long)param_1 + 300) = 0;
  puVar5 = PTR_DAT_04bb30a0;
  uVar21 = *(undefined8 *)PTR_DAT_04bb30a0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  local_c8 = (undefined *)uVar24;
  if ((char)(uVar24 >> 0x20) < '\x05') {
    lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c8);
    local_b8 = (undefined *)(lVar11 + -0x15180);
    local_c8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
  }
  uVar15 = (ulong)local_c8 >> 0x10;
  uVar3 = (ulong)local_c8 >> 0x30;
  uVar16 = (ulong)local_c8 >> 0x18;
  local_c8._0_6_ = CONCAT24(5,(uint)local_c8);
  local_c8 = (undefined *)(CONCAT26((short)uVar3,(undefined6)local_c8) & 0xff00ffffffffffff);
  cVar7 = FUN_00a8ae20(uVar21,uVar15,uVar16,2);
  if (cVar7 != '\x02') {
    if (cVar7 != '\x01') {
      return;
    }
    iVar18 = (int)uVar24;
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar10);
    uVar1 = (int)uVar20 +
            (iVar18 * 0x1000 + (iVar18 >> 0x18) + ((iVar18 << 8) >> 0x12 & 0xfffc0U)) * 0x1000;
    uVar8 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
    uVar1 = uVar8 ^ uVar8 * 0x800;
    uVar2 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
    uVar8 = uVar2 ^ uVar2 * 0x800;
    uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
    uVar9 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
    uVar1 = uVar1 >> 8 ^ uVar9 >> 0x13 ^ uVar1 ^ uVar9;
    if (uVar10 < *(uint *)(*(long *)puVar5 + 0x100)) {
      lVar11 = *(long *)(*(long *)(*(long *)puVar5 + 0x108) + (long)(int)uVar10 * 8);
    }
    else {
      lVar11 = 0;
    }
    plVar12 = (long *)(**(code **)(*(long *)(lVar11 + 0x30) + 0xf0))();
    local_a8 = 0x40;
    local_65 = 0;
    local_b8 = PTR_DAT_04bb2f70 + 0x10;
    local_b0 = local_a4;
    (**(code **)(*plVar12 + 0x18))();
    pcVar22 = (char *)plVar12[1];
    if (local_a4 != pcVar22) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
      lVar11 = 0;
      do {
        if (*(char *)(plVar12[1] + lVar11) == '\0') goto LAB_028df288;
        lVar23 = plVar12[1] + lVar11;
        if (*(char *)(lVar23 + 1) == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_028df288;
        }
        if (*(char *)(lVar23 + 2) == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_028df288;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_028df288:
      iVar18 = (int)lVar11;
      if (local_a8 <= (int)lVar11) {
        iVar18 = local_a8 + -1;
      }
      memcpy(local_a4,pcVar22,(long)iVar18);
      local_a4[iVar18] = '\0';
    }
    puVar4 = PTR_DAT_04bb2bc0;
    lVar11 = 0;
    uVar1 = uVar8 >> 8 ^ uVar1 >> 0x13 ^ uVar8 ^ uVar1;
    local_b8 = PTR_DAT_04bb2bc0 + 0x10;
    local_b0[(long)local_a8 + -1] = '\0';
    do {
      if (local_b0[lVar11] == '\0') goto LAB_028df31c;
      if (local_b0[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_028df31c;
      }
      if (local_b0[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_028df31c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_028df31c:
    iVar17 = (int)lVar11;
    iVar18 = iVar17;
    if (1 < iVar17) {
      iVar18 = 2;
    }
    local_b0[iVar17 - iVar18] = '\0';
    local_c8 = PTR_DAT_04bb2020 + 0x10;
    local_c0 = "CloudFine";
    (**(code **)(puVar4 + 0x28))(&local_b8);
    (**(code **)(local_b8 + 0x18))(&local_b8);
    pcVar22 = local_b0;
    (**(code **)(local_c8 + 0x18))(&local_c8);
    if (pcVar22 != local_c0) {
      uVar20 = 0;
      bVar6 = true;
      do {
        if (local_b0[uVar20] != local_c0[uVar20]) break;
        if (local_b0[uVar20] == '\0') {
          if (bVar6) goto LAB_028df434;
          break;
        }
        bVar6 = uVar20 < 0x80000;
        uVar20 = uVar20 + 1;
      } while (uVar20 != 0x80001);
      (**(code **)(local_b8 + 0x18))(&local_b8);
      (**(code **)(local_b8 + 0x18))(&local_b8);
      if (local_b0 != "FineRain") {
        if (*local_b0 != 'F') {
          return;
        }
        lVar11 = 0;
        do {
          if (lVar11 == 0x80000) {
            return;
          }
          lVar23 = lVar11 + 1;
          if (local_b0[lVar23] != "FineRain"[lVar11 + 1]) {
            return;
          }
          lVar11 = lVar11 + 1;
        } while (local_b0[lVar23] != '\0');
      }
    }
LAB_028df434:
    lVar11 = *(long *)puVar5;
    if (((int)uVar10 < 0) || (*(int *)(lVar11 + 0x653a0) <= (int)uVar10)) {
      uVar8 = 0;
    }
    else {
      local_c8._0_4_ = uVar10;
      local_d8._0_4_ = uVar10;
      puVar13 = (uint *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x108) +
                                                                    (long)(int)uVar10 * 8) + 0xd8) +
                                                0x38) + 0xf0))();
      uVar8 = *puVar13;
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar8);
      lVar11 = *(long *)puVar5;
    }
    if (((int)uVar10 < 0) || (*(int *)(lVar11 + 0x653a0) <= (int)uVar10)) {
      uVar9 = 0;
    }
    else {
      local_c8._0_4_ = uVar10;
      local_d8._0_4_ = uVar10;
      puVar13 = (uint *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x108) +
                                                                    (long)(int)uVar10 * 8) + 0xd8) +
                                                0x40) + 0xf0))();
      uVar9 = *puVar13;
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar9);
    }
    if (((uVar8 & 0xfffffffe) == 4) && (uVar9 < 2)) {
      lVar11 = 7;
      lVar23 = 8;
    }
    else {
      lVar11 = *(long *)puVar5;
      if (((int)uVar10 < 0) || (*(int *)(lVar11 + 0x653a0) <= (int)uVar10)) {
        uVar8 = 0;
      }
      else {
        local_c8._0_4_ = uVar10;
        local_d8._0_4_ = uVar10;
        puVar13 = (uint *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x108) +
                                                                      (long)(int)uVar10 * 8) + 0xd8)
                                                  + 0x40) + 0xf0))();
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,*puVar13);
        uVar8 = *puVar13 & 0xfffffffe;
        lVar11 = *(long *)puVar5;
      }
      if (((int)uVar10 < 0) || (*(int *)(lVar11 + 0x653a0) <= (int)uVar10)) {
        bVar6 = true;
      }
      else {
        local_c8._0_4_ = uVar10;
        local_d8._0_4_ = uVar10;
        puVar13 = (uint *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x108) +
                                                                      (long)(int)uVar10 * 8) + 0xd8)
                                                  + 0x48) + 0xf0))();
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,*puVar13);
        bVar6 = *puVar13 < 2;
      }
      if ((uVar8 != 4) || (!bVar6)) {
        lVar11 = *(long *)puVar5;
        if (((int)uVar10 < 0) || (*(int *)(lVar11 + 0x653a0) <= (int)uVar10)) {
          uVar8 = 0;
        }
        else {
          local_c8._4_4_ = (undefined4)((ulong)local_c8 >> 0x20);
          local_c8._0_4_ = uVar10;
          local_d8._0_4_ = uVar10;
          puVar13 = (uint *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x108) +
                                                                        (long)(int)uVar10 * 8) +
                                                              0xd8) + 0x48) + 0xf0))();
          local_c8 = (undefined *)CONCAT44(local_c8._4_4_,*puVar13);
          uVar8 = *puVar13 & 0xfffffffe;
          lVar11 = *(long *)puVar5;
        }
        if (((int)uVar10 < 0) || (*(int *)(lVar11 + 0x653a0) <= (int)uVar10)) {
          bVar6 = true;
        }
        else {
          local_c8._0_4_ = uVar10;
          local_d8._0_4_ = uVar10;
          puVar13 = (uint *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x108) +
                                                                        (long)(int)uVar10 * 8) +
                                                              0xd8) + 0x50) + 0xf0))();
          local_c8 = (undefined *)CONCAT44(local_c8._4_4_,*puVar13);
          bVar6 = *puVar13 < 2;
        }
        if ((uVar8 != 4) || (!bVar6)) {
          lVar11 = *(long *)puVar5;
          if (((int)uVar10 < 0) || (*(int *)(lVar11 + 0x653a0) <= (int)uVar10)) {
            uVar8 = 0;
          }
          else {
            local_c8._0_4_ = uVar10;
            local_d8._0_4_ = uVar10;
            puVar13 = (uint *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x108)
                                                                          + (long)(int)uVar10 * 8) +
                                                                0xd8) + 0x50) + 0xf0))();
            local_c8 = (undefined *)CONCAT44(local_c8._4_4_,*puVar13);
            uVar8 = *puVar13 & 0xfffffffe;
            lVar11 = *(long *)puVar5;
          }
          local_d8 = (undefined *)CONCAT44(local_d8._4_4_,uVar10);
          if (((int)uVar10 < 0) || (*(int *)(lVar11 + 0x653a0) <= (int)uVar10)) {
            bVar6 = true;
          }
          else {
            local_c8._0_4_ = uVar10;
            puVar13 = (uint *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar11 + 0x108)
                                                                          + (long)(int)uVar10 * 8) +
                                                                0xd8) + 0x58) + 0xf0))();
            local_c8 = (undefined *)CONCAT44(local_c8._4_4_,*puVar13);
            bVar6 = *puVar13 < 2;
          }
          if ((uVar8 != 4) || (!bVar6)) {
            lVar11 = 0xb;
            uVar8 = FUN_00a8dde0(*(undefined8 *)puVar5,uVar10,0xb);
            lVar23 = 0xc;
            uVar9 = FUN_00a8dde0(*(undefined8 *)puVar5,uVar10,0xc);
            if (((uVar8 & 0xfffffffe) != 4) || (1 < uVar9)) {
              lVar11 = 0xc;
              uVar8 = FUN_00a8dde0(*(undefined8 *)puVar5,uVar10,0xc);
              lVar23 = 0xd;
              uVar9 = FUN_00a8dde0(*(undefined8 *)puVar5,uVar10,0xd);
              if (((uVar8 & 0xfffffffe) != 4) || (1 < uVar9)) {
                lVar11 = 0xd;
                uVar8 = FUN_00a8dde0(*(undefined8 *)puVar5,uVar10,0xd);
                lVar23 = 0xe;
                uVar9 = FUN_00a8dde0(*(undefined8 *)puVar5,uVar10,0xe);
                if (((uVar8 & 0xfffffffe) != 4) || (1 < uVar9)) {
                  lVar11 = 0xe;
                  uVar8 = FUN_00a8dde0(*(undefined8 *)puVar5,uVar10,0xe);
                  lVar23 = 0xf;
                  uVar9 = FUN_00a8dde0(*(undefined8 *)puVar5,uVar10,0xf);
                  if (((uVar8 & 0xfffffffe) != 4) || (1 < uVar9)) {
                    lVar11 = 0xf;
                    uVar8 = FUN_00a8dde0(*(undefined8 *)puVar5,uVar10,0xf);
                    lVar23 = 0x10;
                    uVar9 = FUN_00a8dde0(*(undefined8 *)puVar5,uVar10,0x10);
                    if (((uVar8 & 0xfffffffe) != 4) || (1 < uVar9)) {
                      lVar11 = 0x10;
                      uVar8 = FUN_00a8dde0(*(undefined8 *)puVar5,uVar10,0x10);
                      lVar23 = 0x11;
                      uVar9 = FUN_00a8dde0(*(undefined8 *)puVar5,uVar10,0x11);
                      if (((uVar8 & 0xfffffffe) != 4) || (1 < uVar9)) {
                        lVar11 = 0x11;
                        uVar8 = FUN_00a8dde0(*(undefined8 *)puVar5,uVar10,0x11);
                        lVar23 = 0x12;
                        uVar10 = FUN_00a8dde0(*(undefined8 *)puVar5,uVar10,0x12);
                        if ((uVar8 & 0xfffffffe) != 4) {
                          return;
                        }
                        if (1 < uVar10) {
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            lVar11 = 10;
            lVar23 = 0xb;
          }
        }
        else {
          lVar11 = 9;
          lVar23 = 10;
        }
      }
      else {
        lVar11 = 8;
        lVar23 = 9;
      }
    }
    if (((uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1) & 1) == 0) {
      *(undefined4 *)((long)puVar25 + lVar11 * 4) = 3;
      uVar19 = 1;
    }
    else {
      *(undefined4 *)((long)puVar25 + lVar11 * 4) = 4;
      uVar19 = 2;
    }
    *(undefined4 *)((long)puVar25 + lVar23 * 4) = uVar19;
    return;
  }
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar10);
  if (uVar10 < *(uint *)(*(long *)puVar5 + 0x100)) {
    lVar11 = *(long *)(*(long *)(*(long *)puVar5 + 0x108) + (long)(int)uVar10 * 8);
  }
  else {
    lVar11 = 0;
  }
  plVar12 = (long *)(**(code **)(*(long *)(lVar11 + 0x30) + 0xf0))();
  puVar4 = PTR_DAT_04bb2020;
  local_b8 = PTR_DAT_04bb2020 + 0x10;
  local_b0 = "Fine01";
  (**(code **)(*plVar12 + 0x18))();
  (**(code **)(*plVar12 + 0x18))(plVar12);
  puVar26 = (undefined1 *)plVar12[1];
  (**(code **)(local_b8 + 0x18))(&local_b8);
  if (puVar26 != local_b0) {
    uVar20 = 0;
    bVar6 = true;
    do {
      if (*(char *)(plVar12[1] + uVar20) != local_b0[uVar20]) break;
      if (*(char *)(plVar12[1] + uVar20) == '\0') {
        if (bVar6) goto LAB_028df790;
        break;
      }
      bVar6 = uVar20 < 0x80000;
      uVar20 = uVar20 + 1;
    } while (uVar20 != 0x80001);
    local_c8 = puVar4 + 0x10;
    local_c0 = "Fine03";
    (**(code **)(*plVar12 + 0x18))(plVar12);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    puVar26 = (undefined1 *)plVar12[1];
    (**(code **)(local_c8 + 0x18))(&local_c8);
    if (puVar26 != local_c0) {
      uVar20 = 0;
      bVar6 = true;
      do {
        if (*(char *)(plVar12[1] + uVar20) != local_c0[uVar20]) break;
        if (*(char *)(plVar12[1] + uVar20) == '\0') {
          if (bVar6) goto LAB_028df790;
          break;
        }
        bVar6 = uVar20 < 0x80000;
        uVar20 = uVar20 + 1;
      } while (uVar20 != 0x80001);
      local_d8 = puVar4 + 0x10;
      local_d0 = "Fine05";
      (**(code **)(*plVar12 + 0x18))(plVar12);
      (**(code **)(*plVar12 + 0x18))(plVar12);
      pcVar22 = (char *)plVar12[1];
      (**(code **)(local_d8 + 0x18))(&local_d8);
      if (pcVar22 != local_d0) {
        pcVar22 = (char *)plVar12[1];
        if (*pcVar22 != *local_d0) {
          return;
        }
        if (*pcVar22 != '\0') {
          lVar11 = 0;
          do {
            if (lVar11 == 0x80000) {
              return;
            }
            if (pcVar22[lVar11 + 1] != local_d0[lVar11 + 1]) {
              return;
            }
            if (pcVar22[lVar11 + 1] == '\0') break;
            lVar23 = lVar11 + 2;
            if (pcVar22[lVar23] != local_d0[lVar11 + 2]) {
              return;
            }
            lVar11 = lVar11 + 2;
          } while (pcVar22[lVar23] != '\0');
        }
      }
    }
  }
LAB_028df790:
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar10);
  if (((int)uVar10 < 0) || (*(int *)(*(long *)puVar5 + 0x653a0) <= (int)uVar10)) {
    iVar18 = (int)param_1[0x24];
LAB_028df80c:
    iVar17 = 1;
    if (iVar18 - 1U < 2) {
      iVar17 = 2;
    }
  }
  else {
    local_b8._0_4_ = uVar10;
    piVar14 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(*(long *)puVar5 + 0x108)
                                                                 + (long)(int)uVar10 * 8) + 0xd8) +
                                             0x90) + 0xf0))();
    iVar18 = (int)param_1[0x24];
    if (*piVar14 == 0) goto LAB_028df80c;
    if (iVar18 == 2) {
      uVar19 = 3;
LAB_028dfe10:
      iVar17 = 0;
      *(undefined4 *)(param_1 + 0x24) = uVar19;
    }
    else {
      if (iVar18 == 1) {
        uVar19 = 4;
        goto LAB_028dfe10;
      }
      iVar17 = 0;
    }
  }
  *(int *)((long)param_1 + 0x124) = iVar17;
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar10);
  if (((int)uVar10 < 0) || (*(int *)(*(long *)puVar5 + 0x653a0) <= (int)uVar10)) {
LAB_028df898:
    iVar18 = 1;
    if (iVar17 - 1U < 2) {
      iVar18 = 2;
    }
  }
  else {
    local_b8._0_4_ = uVar10;
    piVar14 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(*(long *)puVar5 + 0x108)
                                                                 + (long)(int)uVar10 * 8) + 0xd8) +
                                             0x98) + 0xf0))();
    iVar17 = *(int *)((long)param_1 + 0x124);
    if (*piVar14 == 0) goto LAB_028df898;
    if (iVar17 == 2) {
      uVar19 = 3;
LAB_028dfe28:
      iVar18 = 0;
      *(undefined4 *)((long)param_1 + 0x124) = uVar19;
    }
    else {
      if (iVar17 == 1) {
        uVar19 = 4;
        goto LAB_028dfe28;
      }
      iVar18 = 0;
    }
  }
  *(int *)(param_1 + 0x25) = iVar18;
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar10);
  if (((int)uVar10 < 0) || (*(int *)(*(long *)puVar5 + 0x653a0) <= (int)uVar10)) {
LAB_028df924:
    iVar17 = 1;
    if (iVar18 - 1U < 2) {
      iVar17 = 2;
    }
  }
  else {
    local_b8._0_4_ = uVar10;
    piVar14 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(*(long *)puVar5 + 0x108)
                                                                 + (long)(int)uVar10 * 8) + 0xd8) +
                                             0xa0) + 0xf0))();
    iVar18 = (int)param_1[0x25];
    if (*piVar14 == 0) goto LAB_028df924;
    if (iVar18 == 2) {
      uVar19 = 3;
LAB_028dfe40:
      iVar17 = 0;
      *(undefined4 *)(param_1 + 0x25) = uVar19;
    }
    else {
      if (iVar18 == 1) {
        uVar19 = 4;
        goto LAB_028dfe40;
      }
      iVar17 = 0;
    }
  }
  *(int *)((long)param_1 + 300) = iVar17;
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar10);
  if (((int)uVar10 < 0) || (*(int *)(*(long *)puVar5 + 0x653a0) <= (int)uVar10)) {
LAB_028df9b0:
    iVar18 = 1;
    if (iVar17 - 1U < 2) {
      iVar18 = 2;
    }
  }
  else {
    local_b8._0_4_ = uVar10;
    piVar14 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(*(long *)puVar5 + 0x108)
                                                                 + (long)(int)uVar10 * 8) + 0xd8) +
                                             0xa8) + 0xf0))();
    iVar17 = *(int *)((long)param_1 + 300);
    if (*piVar14 == 0) goto LAB_028df9b0;
    if (iVar17 == 2) {
      uVar19 = 3;
LAB_028dfe58:
      iVar18 = 0;
      *(undefined4 *)((long)param_1 + 300) = uVar19;
    }
    else {
      if (iVar17 == 1) {
        uVar19 = 4;
        goto LAB_028dfe58;
      }
      iVar18 = 0;
    }
  }
  *(int *)(param_1 + 0x26) = iVar18;
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar10);
  if (((int)uVar10 < 0) || (*(int *)(*(long *)puVar5 + 0x653a0) <= (int)uVar10)) {
LAB_028dfa3c:
    iVar17 = 1;
    if (iVar18 - 1U < 2) {
      iVar17 = 2;
    }
  }
  else {
    local_b8._0_4_ = uVar10;
    piVar14 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(*(long *)puVar5 + 0x108)
                                                                 + (long)(int)uVar10 * 8) + 0xd8) +
                                             0xb0) + 0xf0))();
    iVar18 = (int)param_1[0x26];
    if (*piVar14 == 0) goto LAB_028dfa3c;
    if (iVar18 == 2) {
      uVar19 = 3;
LAB_028dfe70:
      iVar17 = 0;
      *(undefined4 *)(param_1 + 0x26) = uVar19;
    }
    else {
      if (iVar18 == 1) {
        uVar19 = 4;
        goto LAB_028dfe70;
      }
      iVar17 = 0;
    }
  }
  *(int *)((long)param_1 + 0x134) = iVar17;
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar10);
  if (((int)uVar10 < 0) || (*(int *)(*(long *)puVar5 + 0x653a0) <= (int)uVar10)) {
LAB_028dfac8:
    iVar18 = 1;
    if (iVar17 - 1U < 2) {
      iVar18 = 2;
    }
  }
  else {
    local_b8._0_4_ = uVar10;
    piVar14 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(*(long *)puVar5 + 0x108)
                                                                 + (long)(int)uVar10 * 8) + 0xd8) +
                                             0xb8) + 0xf0))();
    iVar17 = *(int *)((long)param_1 + 0x134);
    if (*piVar14 == 0) goto LAB_028dfac8;
    if (iVar17 == 2) {
      uVar19 = 3;
LAB_028dfe88:
      iVar18 = 0;
      *(undefined4 *)((long)param_1 + 0x134) = uVar19;
    }
    else {
      if (iVar17 == 1) {
        uVar19 = 4;
        goto LAB_028dfe88;
      }
      iVar18 = 0;
    }
  }
  *(int *)(param_1 + 0x27) = iVar18;
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar10);
  if (((int)uVar10 < 0) || (*(int *)(*(long *)puVar5 + 0x653a0) <= (int)uVar10)) {
LAB_028dfb54:
    iVar17 = 1;
    if (iVar18 - 1U < 2) {
      iVar17 = 2;
    }
  }
  else {
    local_b8._0_4_ = uVar10;
    piVar14 = (int *)(**(code **)(*(long *)**(undefined8 **)
                                             (*(long *)(*(long *)(*(long *)puVar5 + 0x108) +
                                                       (long)(int)uVar10 * 8) + 0xd8) + 0xf0))();
    iVar18 = (int)param_1[0x27];
    if (*piVar14 == 0) goto LAB_028dfb54;
    if (iVar18 == 1) {
      uVar19 = 4;
LAB_028dfea0:
      iVar17 = 0;
      *(undefined4 *)(param_1 + 0x27) = uVar19;
    }
    else {
      if (iVar18 == 2) {
        uVar19 = 3;
        goto LAB_028dfea0;
      }
      iVar17 = 0;
    }
  }
  *(int *)((long)param_1 + 0xdc) = iVar17;
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar10);
  if (((int)uVar10 < 0) || (*(int *)(*(long *)puVar5 + 0x653a0) <= (int)uVar10)) {
LAB_028dfbe0:
    if (iVar17 - 1U < 2) {
      iVar18 = 2;
    }
    else {
      iVar18 = 1;
    }
    *(int *)(param_1 + 0x1c) = iVar18;
  }
  else {
    local_b8._0_4_ = uVar10;
    piVar14 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(*(long *)puVar5 + 0x108)
                                                                 + (long)(int)uVar10 * 8) + 0xd8) +
                                             8) + 0xf0))();
    iVar17 = *(int *)((long)param_1 + 0xdc);
    if (*piVar14 == 0) goto LAB_028dfbe0;
    if (iVar17 == 1) {
      uVar19 = 4;
LAB_028dfeb8:
      *(undefined4 *)((long)param_1 + 0xdc) = uVar19;
    }
    else if (iVar17 == 2) {
      uVar19 = 3;
      goto LAB_028dfeb8;
    }
    iVar18 = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar10);
  if (((int)uVar10 < 0) || (*(int *)(*(long *)puVar5 + 0x653a0) <= (int)uVar10)) {
LAB_028dfc74:
    if (iVar18 - 1U < 2) {
      iVar18 = 2;
    }
    else {
      iVar18 = 1;
    }
    *(int *)((long)param_1 + 0xe4) = iVar18;
  }
  else {
    local_b8._0_4_ = uVar10;
    piVar14 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(*(long *)puVar5 + 0x108)
                                                                 + (long)(int)uVar10 * 8) + 0xd8) +
                                             0x10) + 0xf0))();
    iVar18 = (int)param_1[0x1c];
    if (*piVar14 == 0) goto LAB_028dfc74;
    if (iVar18 == 1) {
      uVar19 = 4;
LAB_028dfecc:
      *(undefined4 *)(param_1 + 0x1c) = uVar19;
    }
    else if (iVar18 == 2) {
      uVar19 = 3;
      goto LAB_028dfecc;
    }
    iVar18 = 0;
    *(undefined4 *)((long)param_1 + 0xe4) = 0;
  }
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar10);
  if (((int)uVar10 < 0) || (*(int *)(*(long *)puVar5 + 0x653a0) <= (int)uVar10)) {
LAB_028dfd08:
    if (iVar18 - 1U < 2) {
      uVar19 = 3;
    }
    else {
      uVar19 = 4;
    }
    *(undefined4 *)(param_1 + 0x1d) = uVar19;
    return;
  }
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar10);
  piVar14 = (int *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(*(long *)puVar5 + 0x108) +
                                                               (long)(int)uVar10 * 8) + 0xd8) + 0x18
                                           ) + 0xf0))();
  iVar18 = *(int *)((long)param_1 + 0xe4);
  if (*piVar14 == 0) goto LAB_028dfd08;
  if (iVar18 == 1) {
    uVar19 = 4;
  }
  else {
    if (iVar18 != 2) goto LAB_028dfee4;
    uVar19 = 3;
  }
  *(undefined4 *)((long)param_1 + 0xe4) = uVar19;
LAB_028dfee4:
  *(undefined4 *)(param_1 + 0x1d) = 0;
  return;
}


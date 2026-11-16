
void FUN_028de590(ulong *param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  char cVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  byte bVar24;
  int iVar25;
  undefined8 uVar26;
  char *pcVar27;
  undefined *local_f8;
  char *local_f0;
  undefined *local_e8;
  char *local_e0;
  undefined *local_d8;
  char *local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined *local_b8;
  char *local_b0;
  int local_a8;
  char local_a4 [63];
  undefined1 local_65;
  
  puVar15 = PTR_DAT_04bb30a0;
  local_c8 = (undefined *)*param_1;
  uVar26 = *(undefined8 *)PTR_DAT_04bb30a0;
  if ((char)((ulong)local_c8 >> 0x20) < '\x05') {
    lVar18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c8);
    local_b8 = (undefined *)(lVar18 + -0x15180);
    local_c8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b8);
  }
  uVar20 = (ulong)local_c8 >> 0x10;
  uVar23 = (ulong)local_c8 >> 0x30;
  uVar21 = (ulong)local_c8 >> 0x18;
  local_c8._0_6_ = CONCAT24(5,(undefined4)local_c8);
  local_c8 = (undefined *)(CONCAT26((short)uVar23,(undefined6)local_c8) & 0xff00ffffffffffff);
  cVar17 = FUN_00a8ae20(uVar26,uVar20,uVar21,7);
  if (cVar17 == '\0') {
LAB_028dee94:
    *(undefined1 *)((long)param_1 + 0x145) = 0;
  }
  else {
    uVar6 = (uint)param_1[1];
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar6);
    if (uVar6 < *(uint *)(*(long *)puVar15 + 0x100)) {
      lVar18 = *(long *)(*(long *)(*(long *)puVar15 + 0x108) + (long)(int)uVar6 * 8);
    }
    else {
      lVar18 = 0;
    }
    plVar19 = (long *)(**(code **)(*(long *)(lVar18 + 0x30) + 0xf0))();
    puVar14 = PTR_DAT_04bb2f70;
    local_a8 = 0x40;
    local_65 = 0;
    local_b8 = PTR_DAT_04bb2f70 + 0x10;
    local_b0 = local_a4;
    (**(code **)(*plVar19 + 0x18))();
    pcVar27 = (char *)plVar19[1];
    if (local_a4 != pcVar27) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
      lVar18 = 0;
      do {
        if (*(char *)(plVar19[1] + lVar18) == '\0') goto LAB_028de6f0;
        lVar1 = plVar19[1] + lVar18;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_028de6f0;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar18 = lVar18 + 2;
          goto LAB_028de6f0;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
LAB_028de6f0:
      iVar25 = (int)lVar18;
      if (local_a8 <= (int)lVar18) {
        iVar25 = local_a8 + -1;
      }
      memcpy(local_a4,pcVar27,(long)iVar25);
      local_a4[iVar25] = '\0';
    }
    puVar13 = PTR_DAT_04bb2bc0;
    lVar18 = 0;
    local_b8 = PTR_DAT_04bb2bc0 + 0x10;
    local_b0[(long)local_a8 + -1] = '\0';
    do {
      if (local_b0[lVar18] == '\0') goto LAB_028de77c;
      if (local_b0[lVar18 + 1] == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_028de77c;
      }
      if (local_b0[lVar18 + 2] == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_028de77c;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_028de77c:
    iVar22 = (int)lVar18;
    iVar25 = iVar22;
    if (1 < iVar22) {
      iVar25 = 2;
    }
    local_b0[iVar22 - iVar25] = '\0';
    puVar12 = PTR_DAT_04bb2020;
    local_c8 = PTR_DAT_04bb2020 + 0x10;
    local_c0 = "Fine";
    (**(code **)(puVar13 + 0x28))(&local_b8);
    (**(code **)(local_b8 + 0x18))(&local_b8);
    pcVar27 = local_b0;
    (**(code **)(local_c8 + 0x18))(&local_c8);
    if (pcVar27 != local_c0) {
      uVar23 = 0;
      bVar16 = true;
      do {
        if (local_b0[uVar23] != local_c0[uVar23]) break;
        if (local_b0[uVar23] == '\0') {
          if (bVar16) goto LAB_028de9e8;
          break;
        }
        bVar16 = uVar23 < 0x80000;
        uVar23 = uVar23 + 1;
      } while (uVar23 != 0x80001);
      local_d8 = puVar12 + 0x10;
      local_d0 = "CloudFine";
      (**(code **)(local_b8 + 0x18))(&local_b8);
      (**(code **)(local_b8 + 0x18))(&local_b8);
      pcVar27 = local_b0;
      (**(code **)(local_d8 + 0x18))(&local_d8);
      if (pcVar27 != local_d0) {
        uVar23 = 0;
        bVar16 = true;
        do {
          if (local_b0[uVar23] != local_d0[uVar23]) break;
          if (local_b0[uVar23] == '\0') {
            if (bVar16) goto LAB_028de9e8;
            break;
          }
          bVar16 = uVar23 < 0x80000;
          uVar23 = uVar23 + 1;
        } while (uVar23 != 0x80001);
        local_e8 = puVar12 + 0x10;
        local_e0 = "FineRain";
        (**(code **)(local_b8 + 0x18))(&local_b8);
        (**(code **)(local_b8 + 0x18))(&local_b8);
        pcVar27 = local_b0;
        (**(code **)(local_e8 + 0x18))(&local_e8);
        if (pcVar27 != local_e0) {
          uVar23 = 0;
          bVar16 = true;
          do {
            if (local_b0[uVar23] != local_e0[uVar23]) break;
            if (local_b0[uVar23] == '\0') {
              if (bVar16) goto LAB_028de9e8;
              break;
            }
            bVar16 = uVar23 < 0x80000;
            uVar23 = uVar23 + 1;
          } while (uVar23 != 0x80001);
          local_f8 = puVar12 + 0x10;
          local_f0 = "EventDay";
          (**(code **)(local_b8 + 0x18))(&local_b8);
          (**(code **)(local_b8 + 0x18))(&local_b8);
          pcVar27 = local_b0;
          (**(code **)(local_f8 + 0x18))(&local_f8);
          if (pcVar27 != local_f0) {
            if (*local_b0 != *local_f0) goto LAB_028dee94;
            if (*local_b0 != '\0') {
              lVar18 = 0;
              do {
                if (lVar18 == 0x80000) goto LAB_028dee94;
                if (local_b0[lVar18 + 1] != local_f0[lVar18 + 1]) goto LAB_028dee94;
                if (local_b0[lVar18 + 1] == '\0') break;
                lVar1 = lVar18 + 2;
                if (local_b0[lVar1] != local_f0[lVar18 + 2]) goto LAB_028dee94;
                lVar18 = lVar18 + 2;
              } while (local_b0[lVar1] != '\0');
            }
          }
        }
      }
    }
LAB_028de9e8:
    uVar6 = *(uint *)((long)param_1 + 0xc);
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar6);
    if (uVar6 < *(uint *)(*(long *)puVar15 + 0x100)) {
      lVar18 = *(long *)(*(long *)(*(long *)puVar15 + 0x108) + (long)(int)uVar6 * 8);
    }
    else {
      lVar18 = 0;
    }
    plVar19 = (long *)(**(code **)(*(long *)(lVar18 + 0x30) + 0xf0))();
    local_65 = 0;
    local_a8 = 0x40;
    local_b8 = puVar14 + 0x10;
    local_b0 = local_a4;
    (**(code **)(*plVar19 + 0x18))();
    pcVar27 = (char *)plVar19[1];
    if (local_a4 != pcVar27) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
      lVar18 = 0;
      do {
        if (*(char *)(plVar19[1] + lVar18) == '\0') goto LAB_028deaac;
        lVar1 = plVar19[1] + lVar18;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_028deaac;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar18 = lVar18 + 2;
          goto LAB_028deaac;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
LAB_028deaac:
      iVar25 = (int)lVar18;
      if (local_a8 <= (int)lVar18) {
        iVar25 = local_a8 + -1;
      }
      memcpy(local_a4,pcVar27,(long)iVar25);
      local_a4[iVar25] = '\0';
    }
    local_b8 = puVar13 + 0x10;
    lVar18 = 0;
    local_b0[(long)local_a8 + -1] = '\0';
    do {
      if (local_b0[lVar18] == '\0') goto LAB_028deb30;
      if (local_b0[lVar18 + 1] == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_028deb30;
      }
      if (local_b0[lVar18 + 2] == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_028deb30;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_028deb30:
    iVar22 = (int)lVar18;
    iVar25 = iVar22;
    if (1 < iVar22) {
      iVar25 = 2;
    }
    local_b0[iVar22 - iVar25] = '\0';
    local_c8 = puVar12 + 0x10;
    local_c0 = "Cloud";
    (**(code **)(puVar13 + 0x28))(&local_b8);
    (**(code **)(local_b8 + 0x18))(&local_b8);
    pcVar27 = local_b0;
    (**(code **)(local_c8 + 0x18))(&local_c8);
    if (pcVar27 != local_c0) {
      uVar23 = 0;
      bVar16 = true;
      do {
        if (local_b0[uVar23] != local_c0[uVar23]) break;
        if (local_b0[uVar23] == '\0') {
          if (bVar16) goto LAB_028dedac;
          break;
        }
        bVar16 = uVar23 < 0x80000;
        uVar23 = uVar23 + 1;
      } while (uVar23 != 0x80001);
      local_d8 = puVar12 + 0x10;
      local_d0 = "FineCloud";
      (**(code **)(local_b8 + 0x18))(&local_b8);
      (**(code **)(local_b8 + 0x18))(&local_b8);
      pcVar27 = local_b0;
      (**(code **)(local_d8 + 0x18))(&local_d8);
      if (pcVar27 != local_d0) {
        uVar23 = 0;
        bVar16 = true;
        do {
          if (local_b0[uVar23] != local_d0[uVar23]) break;
          if (local_b0[uVar23] == '\0') {
            if (bVar16) goto LAB_028dedac;
            break;
          }
          bVar16 = uVar23 < 0x80000;
          uVar23 = uVar23 + 1;
        } while (uVar23 != 0x80001);
        (**(code **)(local_b8 + 0x18))(&local_b8);
        (**(code **)(local_b8 + 0x18))(&local_b8);
        if (local_b0 != "CloudRain") {
          uVar23 = 0;
          bVar16 = true;
          do {
            if (local_b0[uVar23] != "CloudRain"[uVar23]) break;
            if (local_b0[uVar23] == '\0') {
              if (bVar16) goto LAB_028dedac;
              break;
            }
            bVar16 = uVar23 < 0x80000;
            uVar23 = uVar23 + 1;
          } while (uVar23 != 0x80001);
          (**(code **)(local_b8 + 0x18))(&local_b8);
          (**(code **)(local_b8 + 0x18))(&local_b8);
          if (local_b0 != "Rain") {
            uVar23 = 0;
            bVar16 = true;
            do {
              if (local_b0[uVar23] != (&DAT_040cb35c)[uVar23]) break;
              if (local_b0[uVar23] == '\0') {
                if (bVar16) goto LAB_028dedac;
                break;
              }
              bVar16 = uVar23 < 0x80000;
              uVar23 = uVar23 + 1;
            } while (uVar23 != 0x80001);
            (**(code **)(local_b8 + 0x18))(&local_b8);
            (**(code **)(local_b8 + 0x18))(&local_b8);
            if (local_b0 != "CloudFine") {
              if (*local_b0 != 'C') goto LAB_028dee94;
              lVar18 = 0;
              do {
                if ((lVar18 == 0x80000) ||
                   (lVar1 = lVar18 + 1, local_b0[lVar1] != "CloudFine"[lVar18 + 1]))
                goto LAB_028dee94;
                lVar18 = lVar18 + 1;
              } while (local_b0[lVar1] != '\0');
            }
          }
        }
      }
    }
LAB_028dedac:
    uVar2 = (uint)*param_1;
    uVar8 = -(uVar2 >> 0xf & 1) & 0xff000000 | (uVar2 & 0xffff) << 8;
    uVar6 = (int)uVar2 >> 0x10 & 0xffffff00;
    uVar2 = (int)(uVar2 << 8) >> 0x10 & 0xffffff00;
    bVar10 = uVar8 != 0;
    bVar11 = (uint)param_1[3] != 0;
    bVar9 = uVar6 != 0;
    bVar16 = uVar2 != 0;
    uVar5 = 0x6c078967;
    uVar4 = 1;
    if (((bVar10 || bVar11) || bVar9) || bVar16) {
      uVar5 = uVar2;
      uVar4 = uVar8;
    }
    uVar2 = 0;
    if (((bVar10 || bVar11) || bVar9) || bVar16) {
      uVar2 = (uint)param_1[3];
    }
    uVar4 = uVar4 ^ uVar4 << 0xb;
    uVar5 = uVar5 ^ uVar5 << 0xb;
    uVar4 = uVar4 >> 8 ^ uVar2 >> 0x13 ^ uVar4 ^ uVar2;
    uVar2 = 0xcb41;
    if (((bVar10 || bVar11) || bVar9) || bVar16) {
      uVar2 = uVar6;
    }
    uVar6 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
    sVar7 = *(short *)PTR_DAT_04bb6298;
    if (sVar7 == -1) {
      bVar24 = 0;
    }
    else {
      puVar3 = (undefined4 *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
      if (0xff < (uint)(int)sVar7) {
        puVar3 = (undefined4 *)PTR_DAT_04bc39f8;
      }
      bVar24 = (byte)((uint)*puVar3 >> 0x19) & 1;
    }
    if (*(char *)(*(long *)puVar15 + 0x65398) == '\0') {
      bVar24 = 1;
    }
    *(byte *)((long)param_1 + 0x145) =
         ((byte)(uVar2 >> 8) ^ (byte)(uVar6 >> 0x13) ^ (byte)uVar2 ^ (byte)uVar6) & 1 | bVar24;
  }
  return;
}


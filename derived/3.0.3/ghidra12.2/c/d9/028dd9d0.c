
void FUN_028dd9d0(ulong *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  char cVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  undefined8 uVar21;
  char *pcVar22;
  undefined *local_100;
  char *local_f8;
  undefined *local_f0;
  char *local_e8;
  undefined *local_e0;
  char *local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined *local_c0;
  char *local_b8;
  int local_b0;
  char local_ac [63];
  undefined1 local_6d;
  uint local_64;
  
  puVar7 = PTR_DAT_04bb30a0;
  local_d0 = (undefined *)*param_1;
  uVar21 = *(undefined8 *)PTR_DAT_04bb30a0;
  if ((char)((ulong)local_d0 >> 0x20) < '\x05') {
    lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_d0);
    local_c0 = (undefined *)(lVar14 + -0x15180);
    local_d0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c0);
  }
  uVar16 = (ulong)local_d0 >> 0x10;
  uVar19 = (ulong)local_d0 >> 0x30;
  uVar17 = (ulong)local_d0 >> 0x18;
  local_d0._0_6_ = CONCAT24(5,(undefined4)local_d0);
  local_d0 = (undefined *)(CONCAT26((short)uVar19,(undefined6)local_d0) & 0xff00ffffffffffff);
  cVar9 = FUN_00a8ae20(uVar21,uVar16,uVar17,7);
  if (cVar9 == '\x01') {
    uVar2 = (uint)param_1[1];
    uVar3 = *(uint *)((long)param_1 + 0xc);
    lVar14 = *(long *)puVar7;
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar2);
    if (uVar2 < *(uint *)(lVar14 + 0x100)) {
      lVar14 = *(long *)(*(long *)(lVar14 + 0x108) + (long)(int)uVar2 * 8);
    }
    else {
      lVar14 = 0;
    }
    local_64 = uVar3;
    plVar15 = (long *)(**(code **)(*(long *)(lVar14 + 0x30) + 0xf0))();
    puVar6 = PTR_DAT_04bb2f70;
    local_b0 = 0x40;
    local_6d = 0;
    local_c0 = PTR_DAT_04bb2f70 + 0x10;
    local_b8 = local_ac;
    (**(code **)(*plVar15 + 0x18))();
    pcVar22 = (char *)plVar15[1];
    if (local_ac != pcVar22) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
      lVar14 = 0;
      do {
        if (*(char *)(plVar15[1] + lVar14) == '\0') goto LAB_028ddb3c;
        lVar1 = plVar15[1] + lVar14;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar14 = lVar14 + 1;
          goto LAB_028ddb3c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar14 = lVar14 + 2;
          goto LAB_028ddb3c;
        }
        lVar14 = lVar14 + 3;
      } while (lVar14 != 0x80001);
      lVar14 = 0;
LAB_028ddb3c:
      iVar20 = (int)lVar14;
      if (local_b0 <= (int)lVar14) {
        iVar20 = local_b0 + -1;
      }
      memcpy(local_ac,pcVar22,(long)iVar20);
      local_ac[iVar20] = '\0';
    }
    puVar5 = PTR_DAT_04bb2bc0;
    lVar14 = 0;
    local_c0 = PTR_DAT_04bb2bc0 + 0x10;
    local_b8[(long)local_b0 + -1] = '\0';
    do {
      if (local_b8[lVar14] == '\0') goto LAB_028ddbcc;
      if (local_b8[lVar14 + 1] == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_028ddbcc;
      }
      if (local_b8[lVar14 + 2] == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_028ddbcc;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_028ddbcc:
    iVar18 = (int)lVar14;
    iVar20 = iVar18;
    if (1 < iVar18) {
      iVar20 = 2;
    }
    local_b8[iVar18 - iVar20] = '\0';
    puVar4 = PTR_DAT_04bb2020;
    local_d0 = PTR_DAT_04bb2020 + 0x10;
    local_c8 = "Fine";
    (**(code **)(puVar5 + 0x28))(&local_c0);
    (**(code **)(local_c0 + 0x18))(&local_c0);
    pcVar22 = local_b8;
    (**(code **)(local_d0 + 0x18))(&local_d0);
    if (pcVar22 != local_c8) {
      uVar19 = 0;
      bVar8 = true;
      do {
        if (local_b8[uVar19] != local_c8[uVar19]) break;
        if (local_b8[uVar19] == '\0') {
          if (bVar8) goto LAB_028dde38;
          break;
        }
        bVar8 = uVar19 < 0x80000;
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0x80001);
      local_e0 = puVar4 + 0x10;
      local_d8 = "CloudFine";
      (**(code **)(local_c0 + 0x18))(&local_c0);
      (**(code **)(local_c0 + 0x18))(&local_c0);
      pcVar22 = local_b8;
      (**(code **)(local_e0 + 0x18))(&local_e0);
      if (pcVar22 != local_d8) {
        uVar19 = 0;
        bVar8 = true;
        do {
          if (local_b8[uVar19] != local_d8[uVar19]) break;
          if (local_b8[uVar19] == '\0') {
            if (bVar8) goto LAB_028dde38;
            break;
          }
          bVar8 = uVar19 < 0x80000;
          uVar19 = uVar19 + 1;
        } while (uVar19 != 0x80001);
        local_f0 = puVar4 + 0x10;
        local_e8 = "FineRain";
        (**(code **)(local_c0 + 0x18))(&local_c0);
        (**(code **)(local_c0 + 0x18))(&local_c0);
        pcVar22 = local_b8;
        (**(code **)(local_f0 + 0x18))(&local_f0);
        if (pcVar22 != local_e8) {
          uVar19 = 0;
          bVar8 = true;
          do {
            if (local_b8[uVar19] != local_e8[uVar19]) break;
            if (local_b8[uVar19] == '\0') {
              if (bVar8) goto LAB_028dde38;
              break;
            }
            bVar8 = uVar19 < 0x80000;
            uVar19 = uVar19 + 1;
          } while (uVar19 != 0x80001);
          local_100 = puVar4 + 0x10;
          local_f8 = "EventDay";
          (**(code **)(local_c0 + 0x18))(&local_c0);
          (**(code **)(local_c0 + 0x18))(&local_c0);
          pcVar22 = local_b8;
          (**(code **)(local_100 + 0x18))(&local_100);
          if (pcVar22 != local_f8) {
            if (*local_b8 != *local_f8) goto LAB_028de2ec;
            if (*local_b8 != '\0') {
              lVar14 = 0;
              do {
                if ((lVar14 == 0x80000) || (local_b8[lVar14 + 1] != local_f8[lVar14 + 1]))
                goto LAB_028de2ec;
                if (local_b8[lVar14 + 1] == '\0') break;
                lVar1 = lVar14 + 2;
                if (local_b8[lVar1] != local_f8[lVar14 + 2]) goto LAB_028de2ec;
                lVar14 = lVar14 + 2;
              } while (local_b8[lVar1] != '\0');
            }
          }
        }
      }
    }
LAB_028dde38:
    lVar14 = *(long *)puVar7;
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar3);
    if (uVar3 < *(uint *)(lVar14 + 0x100)) {
      lVar14 = *(long *)(*(long *)(lVar14 + 0x108) + (long)(int)uVar3 * 8);
    }
    else {
      lVar14 = 0;
    }
    plVar15 = (long *)(**(code **)(*(long *)(lVar14 + 0x30) + 0xf0))();
    local_6d = 0;
    local_b0 = 0x40;
    local_c0 = puVar6 + 0x10;
    local_b8 = local_ac;
    (**(code **)(*plVar15 + 0x18))();
    pcVar22 = (char *)plVar15[1];
    if (local_ac != pcVar22) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
      lVar14 = 0;
      do {
        if (*(char *)(plVar15[1] + lVar14) == '\0') goto LAB_028ddefc;
        lVar1 = plVar15[1] + lVar14;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar14 = lVar14 + 1;
          goto LAB_028ddefc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar14 = lVar14 + 2;
          goto LAB_028ddefc;
        }
        lVar14 = lVar14 + 3;
      } while (lVar14 != 0x80001);
      lVar14 = 0;
LAB_028ddefc:
      iVar20 = (int)lVar14;
      if (local_b0 <= (int)lVar14) {
        iVar20 = local_b0 + -1;
      }
      memcpy(local_ac,pcVar22,(long)iVar20);
      local_ac[iVar20] = '\0';
    }
    local_c0 = puVar5 + 0x10;
    lVar14 = 0;
    local_b8[(long)local_b0 + -1] = '\0';
    do {
      if (local_b8[lVar14] == '\0') goto LAB_028ddf80;
      if (local_b8[lVar14 + 1] == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_028ddf80;
      }
      if (local_b8[lVar14 + 2] == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_028ddf80;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_028ddf80:
    iVar18 = (int)lVar14;
    iVar20 = iVar18;
    if (1 < iVar18) {
      iVar20 = 2;
    }
    local_b8[iVar18 - iVar20] = '\0';
    local_d0 = puVar4 + 0x10;
    local_c8 = "Cloud";
    (**(code **)(puVar5 + 0x28))(&local_c0);
    (**(code **)(local_c0 + 0x18))(&local_c0);
    pcVar22 = local_b8;
    (**(code **)(local_d0 + 0x18))(&local_d0);
    if (pcVar22 != local_c8) {
      uVar19 = 0;
      bVar8 = true;
      do {
        if (local_b8[uVar19] != local_c8[uVar19]) break;
        if (local_b8[uVar19] == '\0') {
          if (bVar8) goto LAB_028de1e0;
          break;
        }
        bVar8 = uVar19 < 0x80000;
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0x80001);
      (**(code **)(local_c0 + 0x18))(&local_c0);
      (**(code **)(local_c0 + 0x18))(&local_c0);
      if (local_b8 != "FineCloud") {
        uVar19 = 0;
        bVar8 = true;
        do {
          if (local_b8[uVar19] != "FineCloud"[uVar19]) break;
          if (local_b8[uVar19] == '\0') {
            if (bVar8) goto LAB_028de1e0;
            break;
          }
          bVar8 = uVar19 < 0x80000;
          uVar19 = uVar19 + 1;
        } while (uVar19 != 0x80001);
        (**(code **)(local_c0 + 0x18))(&local_c0);
        (**(code **)(local_c0 + 0x18))(&local_c0);
        if (local_b8 != "CloudRain") {
          uVar19 = 0;
          bVar8 = true;
          do {
            if (local_b8[uVar19] != "CloudRain"[uVar19]) break;
            if (local_b8[uVar19] == '\0') {
              if (bVar8) goto LAB_028de1e0;
              break;
            }
            bVar8 = uVar19 < 0x80000;
            uVar19 = uVar19 + 1;
          } while (uVar19 != 0x80001);
          (**(code **)(local_c0 + 0x18))(&local_c0);
          (**(code **)(local_c0 + 0x18))(&local_c0);
          if (local_b8 != "Rain") {
            uVar19 = 0;
            bVar8 = true;
            do {
              if (local_b8[uVar19] != (&DAT_040cb35c)[uVar19]) break;
              if (local_b8[uVar19] == '\0') {
                if (bVar8) goto LAB_028de1e0;
                break;
              }
              bVar8 = uVar19 < 0x80000;
              uVar19 = uVar19 + 1;
            } while (uVar19 != 0x80001);
            (**(code **)(local_c0 + 0x18))(&local_c0);
            (**(code **)(local_c0 + 0x18))(&local_c0);
            if (local_b8 != "CloudFine") {
              uVar19 = 0;
              bVar8 = true;
              do {
                if (local_b8[uVar19] != "CloudFine"[uVar19]) break;
                if (local_b8[uVar19] == '\0') {
                  if (bVar8) goto LAB_028de1e0;
                  break;
                }
                bVar8 = uVar19 < 0x80000;
                uVar19 = uVar19 + 1;
              } while (uVar19 != 0x80001);
              goto LAB_028de2ec;
            }
          }
        }
      }
    }
LAB_028de1e0:
    uVar19 = *param_1;
    local_d0 = (undefined *)uVar19;
    bVar10 = FUN_028de310(param_1,&local_d0,&local_64);
    if ((uVar19 & 0xffff) != 0) {
      lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_d0);
      local_c0 = (undefined *)(lVar14 + 0xe10);
      local_d0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c0);
    }
    bVar11 = FUN_028de310(param_1,&local_d0,&local_64);
    if ((short)local_d0 != 0) {
      lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_d0);
      local_c0 = (undefined *)(lVar14 + 0xe10);
      local_d0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c0);
    }
    bVar12 = FUN_028de310(param_1,&local_d0,&local_64);
    if ((short)local_d0 != 0) {
      lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_d0);
      local_c0 = (undefined *)(lVar14 + 0xe10);
      local_d0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c0);
    }
    bVar13 = FUN_028de310(param_1,&local_d0,&local_64);
    if ((short)local_d0 != 0) {
      lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_d0);
      local_c0 = (undefined *)(lVar14 + 0xe10);
      nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c0);
    }
    *(bool *)((long)param_1 + 0x144) = bVar13 < 3 && (bVar12 < 3 && (bVar10 < 3 && bVar11 < 3));
  }
  else {
LAB_028de2ec:
    *(undefined1 *)((long)param_1 + 0x144) = 0;
  }
  return;
}


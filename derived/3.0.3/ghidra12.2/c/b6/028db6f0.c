
void FUN_028db6f0(ulong *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  char *pcVar21;
  undefined *local_130;
  char *pcStack_128;
  undefined *local_120;
  char *pcStack_118;
  undefined *local_110;
  char *pcStack_108;
  undefined *local_100;
  char *local_f8;
  undefined *local_f0;
  char *local_e8;
  undefined *local_e0;
  char *local_d8;
  undefined *local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined *local_b0;
  char *local_a8;
  int local_a0;
  char local_9c [63];
  undefined1 local_5d;
  int local_54;
  
  puVar9 = PTR_DAT_04bb30a0;
  uVar13 = *param_1;
  local_54 = 0;
  iVar12 = (int)uVar13;
  uVar3 = *(uint *)((long)param_1 + 0xc);
  uVar4 = (uint)param_1[2];
  lVar20 = *(long *)PTR_DAT_04bb30a0;
  uVar1 = (int)param_1[3] +
          (iVar12 * 0x1000 + (iVar12 >> 0x18) + ((iVar12 << 8) >> 0x12 & 0xfffc0U)) * 0x1000;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
  uVar19 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  uVar6 = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 3;
  uVar1 = uVar1 ^ uVar19 ^ uVar6;
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 == -1) {
    uVar19 = 0;
  }
  else {
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,0x19);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar19 = *puVar2 >> 0x19 & 1;
  }
  if ((((int)(uVar1 ^ (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4 ^ uVar1 << 0xb) < 0) && (uVar19 == 0)
      ) && (*(char *)(lVar20 + 0x65398) != '\0')) goto LAB_028dca90;
  local_c0 = (undefined *)uVar13;
  if ((char)(uVar13 >> 0x20) < '\x05') {
    lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c0);
    local_b0 = (undefined *)(lVar14 + -0x15180);
    local_c0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b0);
  }
  uVar16 = (ulong)local_c0 >> 0x10;
  uVar13 = (ulong)local_c0 >> 0x30;
  uVar17 = (ulong)local_c0 >> 0x18;
  local_c0._0_6_ = CONCAT24(5,(undefined4)local_c0);
  local_c0 = (undefined *)(CONCAT26((short)uVar13,(undefined6)local_c0) & 0xff00ffffffffffff);
  cVar11 = FUN_00a8ae20(lVar20,uVar16,uVar17,3);
  local_54 = (int)cVar11;
  switch(local_54) {
  case 1:
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar3);
    local_54 = 1;
    if (uVar3 < *(uint *)(*(long *)puVar9 + 0x100)) {
      lVar20 = *(long *)(*(long *)(*(long *)puVar9 + 0x108) + (long)(int)uVar3 * 8);
    }
    else {
      lVar20 = 0;
    }
    plVar15 = (long *)(**(code **)(*(long *)(lVar20 + 0x30) + 0xf0))();
    local_a0 = 0x40;
    local_5d = 0;
    local_b0 = PTR_DAT_04bb2f70 + 0x10;
    local_a8 = local_9c;
    (**(code **)(*plVar15 + 0x18))();
    pcVar21 = (char *)plVar15[1];
    if (local_9c != pcVar21) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
      lVar20 = 0;
      do {
        if (*(char *)(plVar15[1] + lVar20) == '\0') goto LAB_028dba44;
        lVar14 = plVar15[1] + lVar20;
        if (*(char *)(lVar14 + 1) == '\0') {
          lVar20 = lVar20 + 1;
          goto LAB_028dba44;
        }
        if (*(char *)(lVar14 + 2) == '\0') {
          lVar20 = lVar20 + 2;
          goto LAB_028dba44;
        }
        lVar20 = lVar20 + 3;
      } while (lVar20 != 0x80001);
      lVar20 = 0;
LAB_028dba44:
      iVar12 = (int)lVar20;
      if (local_a0 <= (int)lVar20) {
        iVar12 = local_a0 + -1;
      }
      memcpy(local_9c,pcVar21,(long)iVar12);
      local_9c[iVar12] = '\0';
    }
    puVar8 = PTR_DAT_04bb2bc0;
    lVar20 = 0;
    local_b0 = PTR_DAT_04bb2bc0 + 0x10;
    local_a8[(long)local_a0 + -1] = '\0';
    do {
      if (local_a8[lVar20] == '\0') goto LAB_028dbad0;
      if (local_a8[lVar20 + 1] == '\0') {
        lVar20 = lVar20 + 1;
        goto LAB_028dbad0;
      }
      if (local_a8[lVar20 + 2] == '\0') {
        lVar20 = lVar20 + 2;
        goto LAB_028dbad0;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    lVar20 = 0;
LAB_028dbad0:
    iVar18 = (int)lVar20;
    iVar12 = iVar18;
    if (1 < iVar18) {
      iVar12 = 2;
    }
    local_a8[iVar18 - iVar12] = '\0';
    puVar7 = PTR_DAT_04bb2020;
    local_c0 = PTR_DAT_04bb2020 + 0x10;
    local_b8 = "Fine";
    (**(code **)(puVar8 + 0x28))(&local_b0);
    (**(code **)(local_b0 + 0x18))(&local_b0);
    pcVar21 = local_a8;
    (**(code **)(local_c0 + 0x18))(&local_c0);
    if (pcVar21 != local_b8) {
      uVar13 = 0;
      bVar10 = true;
      do {
        if (local_a8[uVar13] != local_b8[uVar13]) break;
        if (local_a8[uVar13] == '\0') {
          if (bVar10) goto LAB_028dc188;
          break;
        }
        bVar10 = uVar13 < 0x80000;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x80001);
      local_d0 = puVar7 + 0x10;
      local_c8 = "FineCloud";
      (**(code **)(local_b0 + 0x18))(&local_b0);
      (**(code **)(local_b0 + 0x18))(&local_b0);
      pcVar21 = local_a8;
      (**(code **)(local_d0 + 0x18))(&local_d0);
      if (pcVar21 != local_c8) {
        uVar13 = 0;
        bVar10 = true;
        do {
          if (local_a8[uVar13] != local_c8[uVar13]) break;
          if (local_a8[uVar13] == '\0') {
            if (bVar10) goto LAB_028dc188;
            break;
          }
          bVar10 = uVar13 < 0x80000;
          uVar13 = uVar13 + 1;
        } while (uVar13 != 0x80001);
        local_e0 = puVar7 + 0x10;
        local_d8 = "CloudFine";
        (**(code **)(local_b0 + 0x18))(&local_b0);
        (**(code **)(local_b0 + 0x18))(&local_b0);
        pcVar21 = local_a8;
        (**(code **)(local_e0 + 0x18))(&local_e0);
        if (pcVar21 != local_d8) {
          uVar13 = 0;
          bVar10 = true;
          do {
            if (local_a8[uVar13] != local_d8[uVar13]) break;
            if (local_a8[uVar13] == '\0') {
              if (bVar10) goto LAB_028dc188;
              break;
            }
            bVar10 = uVar13 < 0x80000;
            uVar13 = uVar13 + 1;
          } while (uVar13 != 0x80001);
          local_f0 = puVar7 + 0x10;
          local_e8 = "FineRain";
          (**(code **)(local_b0 + 0x18))(&local_b0);
          (**(code **)(local_b0 + 0x18))(&local_b0);
          pcVar21 = local_a8;
          (**(code **)(local_f0 + 0x18))(&local_f0);
          if (pcVar21 != local_e8) {
            uVar13 = 0;
            bVar10 = true;
            do {
              if (local_a8[uVar13] != local_e8[uVar13]) break;
              if (local_a8[uVar13] == '\0') {
                if (bVar10) goto LAB_028dc188;
                break;
              }
              bVar10 = uVar13 < 0x80000;
              uVar13 = uVar13 + 1;
            } while (uVar13 != 0x80001);
            local_100 = puVar7 + 0x10;
            local_f8 = "EventDay";
            (**(code **)(local_b0 + 0x18))(&local_b0);
            (**(code **)(local_b0 + 0x18))(&local_b0);
            pcVar21 = local_a8;
            (**(code **)(local_100 + 0x18))(&local_100);
            if (pcVar21 != local_f8) {
              if (*local_a8 == *local_f8) {
                if (*local_a8 != '\0') {
                  lVar20 = 0;
                  do {
                    if ((lVar20 == 0x80000) || (local_a8[lVar20 + 1] != local_f8[lVar20 + 1]))
                    goto LAB_028dc0ac;
                    if (local_a8[lVar20 + 1] == '\0') break;
                    lVar14 = lVar20 + 2;
                    if (local_a8[lVar14] != local_f8[lVar20 + 2]) goto LAB_028dc0ac;
                    lVar20 = lVar20 + 2;
                  } while (local_a8[lVar14] != '\0');
                }
              }
              else {
LAB_028dc0ac:
                local_54 = 0;
              }
            }
          }
        }
      }
    }
    break;
  case 2:
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar3);
    if (uVar3 < *(uint *)(*(long *)puVar9 + 0x100)) {
      lVar20 = *(long *)(*(long *)(*(long *)puVar9 + 0x108) + (long)(int)uVar3 * 8);
    }
    else {
      lVar20 = 0;
    }
    plVar15 = (long *)(**(code **)(*(long *)(lVar20 + 0x30) + 0xf0))();
    local_a0 = 0x40;
    local_5d = 0;
    local_b0 = PTR_DAT_04bb2f70 + 0x10;
    local_a8 = local_9c;
    (**(code **)(*plVar15 + 0x18))();
    pcVar21 = (char *)plVar15[1];
    if (local_9c != pcVar21) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
      lVar20 = 0;
      do {
        if (*(char *)(plVar15[1] + lVar20) == '\0') goto LAB_028dbc10;
        lVar14 = plVar15[1] + lVar20;
        if (*(char *)(lVar14 + 1) == '\0') {
          lVar20 = lVar20 + 1;
          goto LAB_028dbc10;
        }
        if (*(char *)(lVar14 + 2) == '\0') {
          lVar20 = lVar20 + 2;
          goto LAB_028dbc10;
        }
        lVar20 = lVar20 + 3;
      } while (lVar20 != 0x80001);
      lVar20 = 0;
LAB_028dbc10:
      iVar12 = (int)lVar20;
      if (local_a0 <= (int)lVar20) {
        iVar12 = local_a0 + -1;
      }
      memcpy(local_9c,pcVar21,(long)iVar12);
      local_9c[iVar12] = '\0';
    }
    puVar8 = PTR_DAT_04bb2bc0;
    lVar20 = 0;
    local_b0 = PTR_DAT_04bb2bc0 + 0x10;
    local_a8[(long)local_a0 + -1] = '\0';
    do {
      if (local_a8[lVar20] == '\0') goto LAB_028dbc9c;
      if (local_a8[lVar20 + 1] == '\0') {
        lVar20 = lVar20 + 1;
        goto LAB_028dbc9c;
      }
      if (local_a8[lVar20 + 2] == '\0') {
        lVar20 = lVar20 + 2;
        goto LAB_028dbc9c;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    lVar20 = 0;
LAB_028dbc9c:
    iVar18 = (int)lVar20;
    iVar12 = iVar18;
    if (1 < iVar18) {
      iVar12 = 2;
    }
    local_a8[iVar18 - iVar12] = '\0';
    puVar7 = PTR_DAT_04bb2020;
    local_c0 = PTR_DAT_04bb2020 + 0x10;
    local_b8 = "Cloud";
    (**(code **)(puVar8 + 0x28))(&local_b0);
    (**(code **)(local_b0 + 0x18))(&local_b0);
    pcVar21 = local_a8;
    (**(code **)(local_c0 + 0x18))(&local_c0);
    if (pcVar21 != local_b8) {
      uVar13 = 0;
      bVar10 = true;
      do {
        if (local_a8[uVar13] != local_b8[uVar13]) break;
        if (local_a8[uVar13] == '\0') {
          if (bVar10) goto LAB_028dc180;
          break;
        }
        bVar10 = uVar13 < 0x80000;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x80001);
      local_d0 = puVar7 + 0x10;
      local_c8 = "FineCloud";
      (**(code **)(local_b0 + 0x18))(&local_b0);
      (**(code **)(local_b0 + 0x18))(&local_b0);
      pcVar21 = local_a8;
      (**(code **)(local_d0 + 0x18))(&local_d0);
      if (pcVar21 != local_c8) {
        uVar13 = 0;
        bVar10 = true;
        do {
          if (local_a8[uVar13] != local_c8[uVar13]) break;
          if (local_a8[uVar13] == '\0') {
            if (bVar10) goto LAB_028dc180;
            break;
          }
          bVar10 = uVar13 < 0x80000;
          uVar13 = uVar13 + 1;
        } while (uVar13 != 0x80001);
        local_e0 = puVar7 + 0x10;
        local_d8 = "FineRain";
        (**(code **)(local_b0 + 0x18))(&local_b0);
        (**(code **)(local_b0 + 0x18))(&local_b0);
        pcVar21 = local_a8;
        (**(code **)(local_e0 + 0x18))(&local_e0);
        if (pcVar21 != local_d8) {
          uVar13 = 0;
          bVar10 = true;
          do {
            if (local_a8[uVar13] != local_d8[uVar13]) break;
            if (local_a8[uVar13] == '\0') {
              if (bVar10) goto LAB_028dc180;
              break;
            }
            bVar10 = uVar13 < 0x80000;
            uVar13 = uVar13 + 1;
          } while (uVar13 != 0x80001);
          local_f0 = puVar7 + 0x10;
          local_e8 = "CloudFine";
          (**(code **)(local_b0 + 0x18))(&local_b0);
          (**(code **)(local_b0 + 0x18))(&local_b0);
          pcVar21 = local_a8;
          (**(code **)(local_f0 + 0x18))(&local_f0);
          if (pcVar21 != local_e8) {
            uVar13 = 0;
            bVar10 = true;
            do {
              if (local_a8[uVar13] != local_e8[uVar13]) break;
              if (local_a8[uVar13] == '\0') {
                if (bVar10) goto LAB_028dc180;
                break;
              }
              bVar10 = uVar13 < 0x80000;
              uVar13 = uVar13 + 1;
            } while (uVar13 != 0x80001);
            local_100 = puVar7 + 0x10;
            local_f8 = "CloudRain";
            (**(code **)(local_b0 + 0x18))(&local_b0);
            (**(code **)(local_b0 + 0x18))(&local_b0);
            pcVar21 = local_a8;
            (**(code **)(local_100 + 0x18))(&local_100);
            if (pcVar21 != local_f8) {
              uVar13 = 0;
              bVar10 = true;
              do {
                if (local_a8[uVar13] != local_f8[uVar13]) break;
                if (local_a8[uVar13] == '\0') {
                  if (bVar10) goto LAB_028dc180;
                  break;
                }
                bVar10 = uVar13 < 0x80000;
                uVar13 = uVar13 + 1;
              } while (uVar13 != 0x80001);
              pcStack_108 = "RainCloud";
              local_110 = puVar7 + 0x10;
              uVar13 = FUN_00710cb0(&local_b0,&local_110);
              if ((uVar13 & 1) == 0) {
                pcStack_118 = "EventDay";
                local_120 = puVar7 + 0x10;
                uVar13 = FUN_00710cb0(&local_b0,&local_120);
                if ((uVar13 & 1) == 0) {
                  local_c0 = puVar7 + 0x10;
                  local_b8 = "Fine";
                  (**(code **)(local_b0 + 0x18))(&local_b0);
                  (**(code **)(local_b0 + 0x18))(&local_b0);
                  pcVar21 = local_a8;
                  (**(code **)(local_c0 + 0x18))(&local_c0);
                  if (pcVar21 == local_b8) {
LAB_028dcb44:
                    local_54 = 3;
                  }
                  else {
                    uVar13 = 0;
                    bVar10 = true;
                    do {
                      if (local_a8[uVar13] != local_b8[uVar13]) break;
                      if (local_a8[uVar13] == '\0') {
                        if (bVar10) goto LAB_028dcb44;
                        break;
                      }
                      bVar10 = uVar13 < 0x80000;
                      uVar13 = uVar13 + 1;
                    } while (uVar13 != 0x80001);
                  }
                  break;
                }
              }
            }
          }
        }
      }
    }
LAB_028dc180:
    local_54 = 2;
    break;
  case 3:
    local_54 = 4;
    goto LAB_028dc194;
  case 4:
    local_54 = 5;
    goto LAB_028dc634;
  default:
    goto switchD_028db88c_default;
  }
LAB_028dc188:
  if (local_54 == 4) {
LAB_028dc194:
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar4);
    if (uVar4 < *(uint *)(*(long *)puVar9 + 0x100)) {
      lVar20 = *(long *)(*(long *)(*(long *)puVar9 + 0x108) + (long)(int)uVar4 * 8);
    }
    else {
      lVar20 = 0;
    }
    plVar15 = (long *)(**(code **)(*(long *)(lVar20 + 0x30) + 0xf0))();
    local_a0 = 0x40;
    local_5d = 0;
    local_b0 = PTR_DAT_04bb2f70 + 0x10;
    local_a8 = local_9c;
    (**(code **)(*plVar15 + 0x18))();
    pcVar21 = (char *)plVar15[1];
    if (local_9c != pcVar21) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
      lVar20 = 0;
      do {
        if (*(char *)(plVar15[1] + lVar20) == '\0') goto LAB_028dc25c;
        lVar14 = plVar15[1] + lVar20;
        if (*(char *)(lVar14 + 1) == '\0') {
          lVar20 = lVar20 + 1;
          goto LAB_028dc25c;
        }
        if (*(char *)(lVar14 + 2) == '\0') {
          lVar20 = lVar20 + 2;
          goto LAB_028dc25c;
        }
        lVar20 = lVar20 + 3;
      } while (lVar20 != 0x80001);
      lVar20 = 0;
LAB_028dc25c:
      iVar12 = (int)lVar20;
      if (local_a0 <= (int)lVar20) {
        iVar12 = local_a0 + -1;
      }
      memcpy(local_9c,pcVar21,(long)iVar12);
      local_9c[iVar12] = '\0';
    }
    puVar8 = PTR_DAT_04bb2bc0;
    lVar20 = 0;
    local_b0 = PTR_DAT_04bb2bc0 + 0x10;
    local_a8[(long)local_a0 + -1] = '\0';
    do {
      if (local_a8[lVar20] == '\0') goto LAB_028dc2ec;
      if (local_a8[lVar20 + 1] == '\0') {
        lVar20 = lVar20 + 1;
        goto LAB_028dc2ec;
      }
      if (local_a8[lVar20 + 2] == '\0') {
        lVar20 = lVar20 + 2;
        goto LAB_028dc2ec;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    lVar20 = 0;
LAB_028dc2ec:
    iVar18 = (int)lVar20;
    iVar12 = iVar18;
    if (1 < iVar18) {
      iVar12 = 2;
    }
    local_a8[iVar18 - iVar12] = '\0';
    puVar7 = PTR_DAT_04bb2020;
    local_c0 = PTR_DAT_04bb2020 + 0x10;
    local_b8 = "Cloud";
    (**(code **)(puVar8 + 0x28))(&local_b0);
    (**(code **)(local_b0 + 0x18))(&local_b0);
    pcVar21 = local_a8;
    (**(code **)(local_c0 + 0x18))(&local_c0);
    if (pcVar21 != local_b8) {
      uVar13 = 0;
      bVar10 = true;
      do {
        if (local_a8[uVar13] != local_b8[uVar13]) break;
        if (local_a8[uVar13] == '\0') {
          if (bVar10) goto switchD_028db88c_default;
          break;
        }
        bVar10 = uVar13 < 0x80000;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x80001);
      local_d0 = puVar7 + 0x10;
      local_c8 = "Rain";
      (**(code **)(local_b0 + 0x18))(&local_b0);
      (**(code **)(local_b0 + 0x18))(&local_b0);
      pcVar21 = local_a8;
      (**(code **)(local_d0 + 0x18))(&local_d0);
      if (pcVar21 != local_c8) {
        uVar13 = 0;
        bVar10 = true;
        do {
          if (local_a8[uVar13] != local_c8[uVar13]) break;
          if (local_a8[uVar13] == '\0') {
            if (bVar10) goto switchD_028db88c_default;
            break;
          }
          bVar10 = uVar13 < 0x80000;
          uVar13 = uVar13 + 1;
        } while (uVar13 != 0x80001);
        local_e0 = puVar7 + 0x10;
        local_d8 = "FineCloud";
        (**(code **)(local_b0 + 0x18))(&local_b0);
        (**(code **)(local_b0 + 0x18))(&local_b0);
        pcVar21 = local_a8;
        (**(code **)(local_e0 + 0x18))(&local_e0);
        if (pcVar21 != local_d8) {
          uVar13 = 0;
          bVar10 = true;
          do {
            if (local_a8[uVar13] != local_d8[uVar13]) break;
            if (local_a8[uVar13] == '\0') {
              if (bVar10) goto switchD_028db88c_default;
              break;
            }
            bVar10 = uVar13 < 0x80000;
            uVar13 = uVar13 + 1;
          } while (uVar13 != 0x80001);
          local_f0 = puVar7 + 0x10;
          local_e8 = "CloudFine";
          (**(code **)(local_b0 + 0x18))(&local_b0);
          (**(code **)(local_b0 + 0x18))(&local_b0);
          pcVar21 = local_a8;
          (**(code **)(local_f0 + 0x18))(&local_f0);
          if (pcVar21 != local_e8) {
            uVar13 = 0;
            bVar10 = true;
            do {
              if (local_a8[uVar13] != local_e8[uVar13]) break;
              if (local_a8[uVar13] == '\0') {
                if (bVar10) goto switchD_028db88c_default;
                break;
              }
              bVar10 = uVar13 < 0x80000;
              uVar13 = uVar13 + 1;
            } while (uVar13 != 0x80001);
            local_100 = puVar7 + 0x10;
            local_f8 = "CloudRain";
            (**(code **)(local_b0 + 0x18))(&local_b0);
            (**(code **)(local_b0 + 0x18))(&local_b0);
            pcVar21 = local_a8;
            (**(code **)(local_100 + 0x18))(&local_100);
            if (pcVar21 != local_f8) {
              uVar13 = 0;
              bVar10 = true;
              do {
                if (local_a8[uVar13] != local_f8[uVar13]) break;
                if (local_a8[uVar13] == '\0') {
                  if (bVar10) goto switchD_028db88c_default;
                  break;
                }
                bVar10 = uVar13 < 0x80000;
                uVar13 = uVar13 + 1;
              } while (uVar13 != 0x80001);
              pcStack_108 = "RainCloud";
              local_110 = puVar7 + 0x10;
              uVar13 = FUN_00710cb0(&local_b0,&local_110);
              if ((uVar13 & 1) == 0) {
                pcStack_118 = "FineRain";
                local_120 = puVar7 + 0x10;
                uVar13 = FUN_00710cb0(&local_b0,&local_120);
                if ((uVar13 & 1) == 0) {
                  local_130 = puVar7 + 0x10;
                  pcStack_128 = "EventDay";
                  uVar13 = FUN_00710cb0(&local_b0,&local_130);
                  if ((uVar13 & 1) == 0) {
                    local_54 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
switchD_028db88c_default:
  if (local_54 == 5) {
LAB_028dc634:
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar4);
    if (uVar4 < *(uint *)(*(long *)puVar9 + 0x100)) {
      lVar20 = *(long *)(*(long *)(*(long *)puVar9 + 0x108) + (long)(int)uVar4 * 8);
    }
    else {
      lVar20 = 0;
    }
    plVar15 = (long *)(**(code **)(*(long *)(lVar20 + 0x30) + 0xf0))();
    local_a0 = 0x40;
    local_5d = 0;
    local_b0 = PTR_DAT_04bb2f70 + 0x10;
    local_a8 = local_9c;
    (**(code **)(*plVar15 + 0x18))();
    pcVar21 = (char *)plVar15[1];
    if (local_9c != pcVar21) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
      lVar20 = 0;
      do {
        if (*(char *)(plVar15[1] + lVar20) == '\0') goto LAB_028dc6fc;
        lVar14 = plVar15[1] + lVar20;
        if (*(char *)(lVar14 + 1) == '\0') {
          lVar20 = lVar20 + 1;
          goto LAB_028dc6fc;
        }
        if (*(char *)(lVar14 + 2) == '\0') {
          lVar20 = lVar20 + 2;
          goto LAB_028dc6fc;
        }
        lVar20 = lVar20 + 3;
      } while (lVar20 != 0x80001);
      lVar20 = 0;
LAB_028dc6fc:
      iVar12 = (int)lVar20;
      if (local_a0 <= (int)lVar20) {
        iVar12 = local_a0 + -1;
      }
      memcpy(local_9c,pcVar21,(long)iVar12);
      local_9c[iVar12] = '\0';
    }
    puVar9 = PTR_DAT_04bb2bc0;
    lVar20 = 0;
    local_b0 = PTR_DAT_04bb2bc0 + 0x10;
    local_a8[(long)local_a0 + -1] = '\0';
    do {
      if (local_a8[lVar20] == '\0') goto LAB_028dc78c;
      if (local_a8[lVar20 + 1] == '\0') {
        lVar20 = lVar20 + 1;
        goto LAB_028dc78c;
      }
      if (local_a8[lVar20 + 2] == '\0') {
        lVar20 = lVar20 + 2;
        goto LAB_028dc78c;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    lVar20 = 0;
LAB_028dc78c:
    iVar18 = (int)lVar20;
    iVar12 = iVar18;
    if (1 < iVar18) {
      iVar12 = 2;
    }
    local_a8[iVar18 - iVar12] = '\0';
    puVar8 = PTR_DAT_04bb2020;
    local_c0 = PTR_DAT_04bb2020 + 0x10;
    local_b8 = "Cloud";
    (**(code **)(puVar9 + 0x28))(&local_b0);
    (**(code **)(local_b0 + 0x18))(&local_b0);
    pcVar21 = local_a8;
    (**(code **)(local_c0 + 0x18))(&local_c0);
    if (pcVar21 != local_b8) {
      uVar13 = 0;
      bVar10 = true;
      do {
        if (local_a8[uVar13] != local_b8[uVar13]) break;
        if (local_a8[uVar13] == '\0') {
          if (bVar10) goto LAB_028dca90;
          break;
        }
        bVar10 = uVar13 < 0x80000;
        uVar13 = uVar13 + 1;
      } while (uVar13 != 0x80001);
      local_d0 = puVar8 + 0x10;
      local_c8 = "Rain";
      (**(code **)(local_b0 + 0x18))(&local_b0);
      (**(code **)(local_b0 + 0x18))(&local_b0);
      pcVar21 = local_a8;
      (**(code **)(local_d0 + 0x18))(&local_d0);
      if (pcVar21 != local_c8) {
        uVar13 = 0;
        bVar10 = true;
        do {
          if (local_a8[uVar13] != local_c8[uVar13]) break;
          if (local_a8[uVar13] == '\0') {
            if (bVar10) goto LAB_028dca90;
            break;
          }
          bVar10 = uVar13 < 0x80000;
          uVar13 = uVar13 + 1;
        } while (uVar13 != 0x80001);
        local_e0 = puVar8 + 0x10;
        local_d8 = "FineCloud";
        (**(code **)(local_b0 + 0x18))(&local_b0);
        (**(code **)(local_b0 + 0x18))(&local_b0);
        pcVar21 = local_a8;
        (**(code **)(local_e0 + 0x18))(&local_e0);
        if (pcVar21 != local_d8) {
          uVar13 = 0;
          bVar10 = true;
          do {
            if (local_a8[uVar13] != local_d8[uVar13]) break;
            if (local_a8[uVar13] == '\0') {
              if (bVar10) goto LAB_028dca90;
              break;
            }
            bVar10 = uVar13 < 0x80000;
            uVar13 = uVar13 + 1;
          } while (uVar13 != 0x80001);
          (**(code **)(local_b0 + 0x18))(&local_b0);
          (**(code **)(local_b0 + 0x18))(&local_b0);
          if (local_a8 != "CloudFine") {
            uVar13 = 0;
            bVar10 = true;
            do {
              if (local_a8[uVar13] != "CloudFine"[uVar13]) break;
              if (local_a8[uVar13] == '\0') {
                if (bVar10) goto LAB_028dca90;
                break;
              }
              bVar10 = uVar13 < 0x80000;
              uVar13 = uVar13 + 1;
            } while (uVar13 != 0x80001);
            (**(code **)(local_b0 + 0x18))(&local_b0);
            (**(code **)(local_b0 + 0x18))(&local_b0);
            if (local_a8 != "CloudRain") {
              uVar13 = 0;
              bVar10 = true;
              do {
                if (local_a8[uVar13] != "CloudRain"[uVar13]) break;
                if (local_a8[uVar13] == '\0') {
                  if (bVar10) goto LAB_028dca90;
                  break;
                }
                bVar10 = uVar13 < 0x80000;
                uVar13 = uVar13 + 1;
              } while (uVar13 != 0x80001);
              local_e8 = "RainCloud";
              local_f0 = puVar8 + 0x10;
              uVar13 = FUN_00710cb0(&local_b0,&local_f0);
              if ((uVar13 & 1) == 0) {
                local_f8 = "FineRain";
                local_100 = puVar8 + 0x10;
                uVar13 = FUN_00710cb0(&local_b0,&local_100);
                if ((uVar13 & 1) == 0) {
                  local_110 = puVar8 + 0x10;
                  pcStack_108 = "EventDay";
                  uVar13 = FUN_00710cb0(&local_b0,&local_110);
                  if ((uVar13 & 1) == 0) {
                    local_54 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_028dca90:
  FUN_028dab60(param_1,local_54);
  return;
}


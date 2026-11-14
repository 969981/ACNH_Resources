
void FUN_01be83e0(uint *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  char cVar5;
  short sVar6;
  undefined **ppuVar7;
  bool bVar8;
  ulong uVar9;
  undefined4 uVar10;
  int iVar11;
  long lVar12;
  char *pcVar13;
  undefined2 uVar14;
  undefined8 *puVar15;
  char *pcVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  ulong *puVar26;
  ulong uVar27;
  undefined *puVar28;
  undefined8 local_4140;
  undefined *local_4138;
  undefined *local_4130;
  undefined4 local_4128;
  undefined1 local_4124 [63];
  undefined1 local_40e5;
  undefined8 local_40e0;
  undefined8 *local_40d8;
  undefined8 local_40d0 [2048];
  undefined *local_d0;
  char *local_c8;
  undefined **local_c0;
  uint local_b8;
  undefined *local_b0;
  undefined1 *local_a8;
  undefined *local_a0;
  char *local_98;
  uint local_90;
  char local_8c [31];
  undefined1 local_6d;
  
  if (0 < (int)*param_1) {
    lVar12 = 0;
    puVar15 = *(undefined8 **)(param_1 + 4);
    do {
      puVar17 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar12 * 8);
      lVar12 = lVar12 + 1;
      *puVar17 = puVar15;
      *(undefined8 **)(param_1 + 4) = puVar17;
      puVar15 = puVar17;
    } while (lVar12 < (int)*param_1);
  }
  *param_1 = 0;
  puVar2 = PTR_DAT_04bb2718;
  local_40d8 = local_40d0;
  local_40e0 = 0x80000000000;
  local_4138 = PTR_DAT_04bb2020 + 0x10;
  local_4130 = PTR_s_STR_StaffList_04c48600;
  FUN_03d53db0(*(undefined8 *)(*(long *)PTR_DAT_04bb2718 + 0x408),&local_4138);
  lVar12 = FUN_03d53db0(*(undefined8 *)(*(long *)puVar2 + 0x408),&local_4138);
  if (lVar12 == 0) {
    iVar25 = -1;
  }
  else {
    iVar25 = *(int *)(lVar12 + 8);
  }
  local_40e5 = 0;
  local_4130 = local_4124;
  local_4128 = 0x40;
  local_4124[0] = 0;
  local_4138 = PTR_DAT_04bb2bc0 + 0x10;
  if (iVar25 < 1) {
LAB_01be9248:
    uVar21 = *param_1;
    puVar4 = param_1 + 0x2008;
    puVar4[0] = 0;
    puVar4[1] = 0;
    param_1[0x200a] = 0;
    param_1[0x200b] = 0;
    if (uVar21 != 0) {
      puVar17 = *(undefined8 **)(param_1 + 2);
      puVar15 = puVar17;
      if ((uVar21 & 1) != 0) {
        puVar15 = puVar17 + 1;
        uVar9 = (ulong)*(uint *)*puVar17;
        if (7 < *(uint *)*puVar17) {
          uVar9 = 0;
        }
        *(short *)((long)puVar4 + uVar9 * 2) = *(short *)((long)puVar4 + uVar9 * 2) + 1;
      }
      if (((long)(int)uVar21 - 1U & 0x1fffffffffffffff) != 0) {
        do {
          uVar9 = (ulong)*(uint *)*puVar15;
          if (7 < *(uint *)*puVar15) {
            uVar9 = 0;
          }
          *(short *)((long)puVar4 + uVar9 * 2) = *(short *)((long)puVar4 + uVar9 * 2) + 1;
          puVar1 = puVar15 + 1;
          puVar15 = puVar15 + 2;
          uVar9 = (ulong)*(uint *)*puVar1;
          if (7 < *(uint *)*puVar1) {
            uVar9 = 0;
          }
          *(short *)((long)puVar4 + uVar9 * 2) = *(short *)((long)puVar4 + uVar9 * 2) + 1;
        } while (puVar15 != puVar17 + (int)uVar21);
      }
      if (1 < (int)uVar21) {
        uVar20 = 0;
        uVar21 = uVar21 - 1;
        do {
          if ((int)uVar21 <= (int)uVar20) {
            return;
          }
          uVar27 = (ulong)uVar20;
          uVar18 = (ulong)uVar21;
          uVar9 = uVar27;
          piVar22 = (int *)puVar17[uVar20];
          uVar21 = uVar20;
          do {
            piVar23 = (int *)puVar17[uVar9 + 1];
            if (*(ushort *)(piVar23 + 1) <= *(ushort *)(piVar22 + 1)) {
              if (*(ushort *)(piVar22 + 1) <= *(ushort *)(piVar23 + 1)) {
                if ((*(ushort *)((long)piVar22 + 6) < *(ushort *)((long)piVar23 + 6)) ||
                   ((*(ushort *)((long)piVar22 + 6) <= *(ushort *)((long)piVar23 + 6) &&
                    ((*piVar22 < *piVar23 || (*piVar22 <= *piVar23)))))) goto LAB_01be9354;
              }
              uVar21 = (uint)uVar9;
              puVar17[uVar9 + 1] = piVar22;
              puVar17[uVar9] = piVar23;
              piVar23 = piVar22;
            }
LAB_01be9354:
            uVar9 = uVar9 + 1;
            piVar22 = piVar23;
          } while (uVar18 != uVar9);
          if ((int)uVar21 <= (int)uVar20) {
            return;
          }
          piVar22 = (int *)puVar17[uVar21];
          uVar9 = (ulong)uVar21;
          uVar20 = uVar21;
          do {
            piVar23 = (int *)puVar17[uVar9 - 1];
            if (*(ushort *)(piVar22 + 1) < *(ushort *)(piVar23 + 1)) {
LAB_01be93f0:
              uVar20 = (uint)uVar9;
              puVar17[uVar9 - 1] = piVar22;
              puVar17[uVar9] = piVar23;
            }
            else if (*(ushort *)(piVar23 + 1) < *(ushort *)(piVar22 + 1)) {
LAB_01be9440:
              piVar22 = piVar23;
            }
            else {
              if (*(ushort *)((long)piVar22 + 6) < *(ushort *)((long)piVar23 + 6))
              goto LAB_01be93f0;
              if (*(ushort *)((long)piVar23 + 6) < *(ushort *)((long)piVar22 + 6))
              goto LAB_01be9440;
              if (*piVar22 < *piVar23) goto LAB_01be93f0;
              piVar22 = piVar23;
            }
            uVar9 = uVar9 - 1;
          } while ((long)uVar27 < (long)uVar9);
        } while (uVar20 != uVar21);
      }
    }
    return;
  }
  iVar24 = 0;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  puVar3 = PTR_DAT_04bb2028 + 0x10;
LAB_01be8554:
  local_98 = PTR_s_STR_StaffList_04c48600;
  local_a0 = puVar2;
  uVar9 = FUN_01be94e0(&local_4138,&local_a0,iVar24);
  if ((uVar9 & 1) != 0) {
    local_90 = 0x20;
    local_4140 = 0;
    local_6d = 0;
    local_8c[0] = '\0';
    local_b8 = 0;
    local_c0 = &local_4138;
    local_b0 = PTR_DAT_04bb2020 + 0x10;
    local_a8 = &DAT_040b5039;
    local_a0 = puVar3;
    local_98 = local_8c;
    (**(code **)(local_4138 + 0x18))(&local_4138);
    lVar12 = 0;
    do {
      if (local_4130[lVar12] == '\0') {
LAB_01be860c:
        uVar21 = (int)lVar12 + 1;
        goto LAB_01be8610;
      }
      if (local_4130[lVar12 + 1] == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_01be860c;
      }
      if (local_4130[lVar12 + 2] == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_01be860c;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    uVar21 = 1;
LAB_01be8610:
    (**(code **)(local_4138 + 0x18))(&local_4138);
    lVar12 = 0;
    do {
      if (local_4130[lVar12] == '\0') {
LAB_01be8660:
        iVar11 = (int)lVar12;
joined_r0x01be8660:
        if (iVar11 < 0) goto LAB_01be873c;
        break;
      }
      if (local_4130[lVar12 + 1] == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_01be8660;
      }
      if (local_4130[lVar12 + 2] == '\0') {
        iVar11 = (int)lVar12 + 2;
        goto joined_r0x01be8660;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    (**(code **)(local_a0 + 0x18))(&local_a0);
    pcVar13 = local_98;
    uVar9 = (ulong)local_90;
    if (0 < (int)local_90) {
      uVar27 = 0;
      do {
        puVar28 = local_c0[1];
        if (puVar28[uVar27] == '\0') {
LAB_01be872c:
          local_b8 = (int)uVar27 + 1;
          pcVar13[uVar27 & 0xffffffff] = '\0';
          break;
        }
        (**(code **)(local_b0 + 0x18))(&local_b0);
        uVar18 = 0;
        bVar8 = true;
        cVar5 = puVar28[uVar27];
        do {
          if (local_a8[uVar18] == '\0') break;
          if (local_a8[uVar18] == cVar5) {
            if (bVar8) goto LAB_01be872c;
            break;
          }
          if (local_a8[uVar18 + 1] == '\0') break;
          if (local_a8[uVar18 + 1] == cVar5) goto LAB_01be872c;
          if (local_a8[uVar18 + 2] == '\0') break;
          if (local_a8[uVar18 + 2] == cVar5) goto LAB_01be872c;
          bVar8 = uVar18 < 0x7fffe;
          uVar18 = uVar18 + 3;
        } while (uVar18 != 0x80001);
        pcVar13[uVar27] = cVar5;
        uVar27 = uVar27 + 1;
      } while (uVar27 != uVar9);
    }
LAB_01be873c:
    uVar9 = FUN_038d22d0((ulong)&local_4140 | 4,&local_a0,10);
    uVar20 = local_b8;
    ppuVar7 = local_c0;
    if ((uVar9 & 1) == 0) goto LAB_01be8548;
    uVar9 = (ulong)local_b8;
    if ((local_c0 != &local_4138) || (local_b8 != uVar21)) {
      (**(code **)(*local_c0 + 0x18))(local_c0);
      puVar28 = ppuVar7[1];
      lVar12 = 0;
      do {
        if (puVar28[lVar12] == '\0') {
LAB_01be8878:
          iVar11 = (int)lVar12;
          goto joined_r0x01be8878;
        }
        if (puVar28[lVar12 + 1] == '\0') {
          lVar12 = lVar12 + 1;
          goto LAB_01be8878;
        }
        if (puVar28[lVar12 + 2] == '\0') {
          iVar11 = (int)lVar12 + 2;
          goto joined_r0x01be8878;
        }
        lVar12 = lVar12 + 3;
      } while (lVar12 != 0x80001);
      iVar11 = 0;
joined_r0x01be8878:
      if ((-1 < (int)uVar20) && ((int)uVar20 <= iVar11)) {
        (**(code **)(local_a0 + 0x18))(&local_a0);
        pcVar13 = local_98;
        uVar27 = (ulong)local_90;
        if (0 < (int)local_90) {
          uVar18 = 0;
          do {
            puVar28 = local_c0[1];
            if (puVar28[uVar9] == '\0') {
LAB_01be8950:
              local_b8 = (int)uVar9 + 1;
              pcVar13[uVar18 & 0xffffffff] = '\0';
              break;
            }
            (**(code **)(local_b0 + 0x18))(&local_b0);
            uVar19 = 0;
            bVar8 = true;
            cVar5 = puVar28[uVar9];
            do {
              if (local_a8[uVar19] == '\0') break;
              if (local_a8[uVar19] == cVar5) {
                if (bVar8) goto LAB_01be8950;
                break;
              }
              if (local_a8[uVar19 + 1] == '\0') break;
              if (local_a8[uVar19 + 1] == cVar5) goto LAB_01be8950;
              if (local_a8[uVar19 + 2] == '\0') break;
              if (local_a8[uVar19 + 2] == cVar5) goto LAB_01be8950;
              bVar8 = uVar19 < 0x7fffe;
              uVar19 = uVar19 + 3;
            } while (uVar19 != 0x80001);
            pcVar13[uVar18] = cVar5;
            uVar18 = uVar18 + 1;
            uVar9 = uVar9 + 1;
          } while (uVar18 != uVar27);
        }
      }
      local_d0 = PTR_DAT_04bb2020 + 0x10;
      local_c8 = "SPACE";
      (**(code **)(local_a0 + 0x18))(&local_a0);
      (**(code **)(local_a0 + 0x18))(&local_a0);
      pcVar13 = local_98;
      (**(code **)(local_d0 + 0x18))(&local_d0);
      uVar20 = local_b8;
      ppuVar7 = local_c0;
      if (pcVar13 == local_c8) {
LAB_01be8a30:
        uVar9 = (ulong)local_b8;
        if ((local_c0 != &local_4138) || (local_b8 != uVar21)) {
          (**(code **)(*local_c0 + 0x18))(local_c0);
          puVar28 = ppuVar7[1];
          lVar12 = 0;
          do {
            if (puVar28[lVar12] == '\0') {
LAB_01be8b34:
              iVar11 = (int)lVar12;
              goto joined_r0x01be8b34;
            }
            if (puVar28[lVar12 + 1] == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_01be8b34;
            }
            if (puVar28[lVar12 + 2] == '\0') {
              iVar11 = (int)lVar12 + 2;
              goto joined_r0x01be8b34;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          iVar11 = 0;
joined_r0x01be8b34:
          if ((-1 < (int)uVar20) && ((int)uVar20 <= iVar11)) {
            (**(code **)(local_a0 + 0x18))(&local_a0);
            pcVar13 = local_98;
            uVar27 = (ulong)local_90;
            if (0 < (int)local_90) {
              uVar18 = 0;
              do {
                puVar28 = local_c0[1];
                if (puVar28[uVar9] == '\0') {
LAB_01be8c10:
                  local_b8 = (int)uVar9 + 1;
                  pcVar13[uVar18 & 0xffffffff] = '\0';
                  break;
                }
                (**(code **)(local_b0 + 0x18))(&local_b0);
                uVar19 = 0;
                bVar8 = true;
                cVar5 = puVar28[uVar9];
                do {
                  if (local_a8[uVar19] == '\0') break;
                  if (local_a8[uVar19] == cVar5) {
                    if (bVar8) goto LAB_01be8c10;
                    break;
                  }
                  if (local_a8[uVar19 + 1] == '\0') break;
                  if (local_a8[uVar19 + 1] == cVar5) goto LAB_01be8c10;
                  if (local_a8[uVar19 + 2] == '\0') break;
                  if (local_a8[uVar19 + 2] == cVar5) goto LAB_01be8c10;
                  bVar8 = uVar19 < 0x7fffe;
                  uVar19 = uVar19 + 3;
                } while (uVar19 != 0x80001);
                pcVar13[uVar18] = cVar5;
                uVar18 = uVar18 + 1;
                uVar9 = uVar9 + 1;
              } while (uVar18 != uVar27);
            }
          }
          (**(code **)(local_a0 + 0x18))(&local_a0);
          (**(code **)(local_a0 + 0x18))(&local_a0);
          if (local_98 == "01") {
LAB_01be8cd0:
            uVar14 = 0xffff;
            uVar10 = 5;
          }
          else {
            uVar9 = 0;
            bVar8 = true;
            do {
              if (local_98[uVar9] != (&DAT_0407236f)[uVar9]) break;
              if (local_98[uVar9] == '\0') {
                if (bVar8) goto LAB_01be8cd0;
                break;
              }
              if (local_98[uVar9 + 1] != (&DAT_04072370)[uVar9]) break;
              if (local_98[uVar9 + 1] == '\0') goto LAB_01be8cd0;
              if (local_98[uVar9 + 2] != (&DAT_04072371)[uVar9]) break;
              if (local_98[uVar9 + 2] == '\0') goto LAB_01be8cd0;
              bVar8 = uVar9 < 0x7fffe;
              uVar9 = uVar9 + 3;
            } while (uVar9 != 0x80001);
            (**(code **)(local_a0 + 0x18))(&local_a0);
            (**(code **)(local_a0 + 0x18))(&local_a0);
            if (local_98 == "02") {
LAB_01be8f14:
              uVar10 = 6;
              uVar14 = 0xffff;
            }
            else {
              uVar9 = 0;
              bVar8 = true;
              do {
                if (local_98[uVar9] != (&DAT_04096eab)[uVar9]) break;
                if (local_98[uVar9] == '\0') {
                  if (bVar8) goto LAB_01be8f14;
                  break;
                }
                if (local_98[uVar9 + 1] != (&DAT_04096eac)[uVar9]) break;
                if (local_98[uVar9 + 1] == '\0') goto LAB_01be8f14;
                if (local_98[uVar9 + 2] != (&DAT_04096ead)[uVar9]) break;
                if (local_98[uVar9 + 2] == '\0') goto LAB_01be8f14;
                bVar8 = uVar9 < 0x7fffe;
                uVar9 = uVar9 + 3;
              } while (uVar9 != 0x80001);
              local_d0 = PTR_DAT_04bb2020 + 0x10;
              local_c8 = "03";
              (**(code **)(local_a0 + 0x18))(&local_a0);
              (**(code **)(local_a0 + 0x18))(&local_a0);
              pcVar13 = local_98;
              (**(code **)(local_d0 + 0x18))(&local_d0);
              if (pcVar13 == local_c8) {
                uVar10 = 7;
                uVar14 = 0xffff;
              }
              else {
                if (*local_98 != *local_c8) goto LAB_01be8548;
                if (*local_98 != '\0') {
                  lVar12 = 0x7fffe;
                  pcVar13 = local_c8;
                  pcVar16 = local_98;
                  do {
                    if (pcVar16[1] != pcVar13[1]) goto LAB_01be8548;
                    if (pcVar16[1] == '\0') break;
                    if (pcVar16[2] != pcVar13[2]) goto LAB_01be8548;
                    if (pcVar16[2] == '\0') break;
                    if ((lVar12 == 0) || (cVar5 = pcVar16[3], cVar5 != pcVar13[3]))
                    goto LAB_01be8548;
                    lVar12 = lVar12 + -3;
                    pcVar13 = pcVar13 + 3;
                    pcVar16 = pcVar16 + 3;
                  } while (cVar5 != '\0');
                }
                uVar10 = 7;
                uVar14 = 0xffff;
              }
            }
          }
          goto LAB_01be877c;
        }
      }
      else {
        uVar9 = 0;
        bVar8 = true;
        do {
          if (local_98[uVar9] != local_c8[uVar9]) break;
          if (local_98[uVar9] == '\0') {
            if (bVar8) goto LAB_01be8a30;
            break;
          }
          if (local_98[uVar9 + 1] != local_c8[uVar9 + 1]) break;
          if (local_98[uVar9 + 1] == '\0') goto LAB_01be8a30;
          if (local_98[uVar9 + 2] != local_c8[uVar9 + 2]) break;
          if (local_98[uVar9 + 2] == '\0') goto LAB_01be8a30;
          bVar8 = uVar9 < 0x7fffe;
          uVar9 = uVar9 + 3;
        } while (uVar9 != 0x80001);
        uVar9 = FUN_038d22d0((ulong)&local_4140 | 6,&local_a0,10);
        uVar20 = local_b8;
        ppuVar7 = local_c0;
        if ((uVar9 & 1) != 0) {
          uVar9 = (ulong)local_b8;
          if ((local_c0 == &local_4138) && (local_b8 == uVar21)) {
            uVar10 = 1;
            goto LAB_01be8780;
          }
          (**(code **)(*local_c0 + 0x18))(local_c0);
          puVar28 = ppuVar7[1];
          lVar12 = 0;
          do {
            if (puVar28[lVar12] == '\0') goto LAB_01be8d88;
            if (puVar28[lVar12 + 1] == '\0') {
              lVar12 = lVar12 + 1;
              goto LAB_01be8d88;
            }
            if (puVar28[lVar12 + 2] == '\0') {
              lVar12 = lVar12 + 2;
              goto LAB_01be8d88;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          lVar12 = 0;
LAB_01be8d88:
          if ((-1 < (int)uVar20) && ((int)uVar20 <= (int)lVar12)) {
            (**(code **)(local_a0 + 0x18))(&local_a0);
            pcVar13 = local_98;
            uVar27 = (ulong)local_90;
            if (0 < (int)local_90) {
              uVar18 = 0;
              do {
                puVar28 = local_c0[1];
                if (puVar28[uVar9] == '\0') {
LAB_01be8e5c:
                  local_b8 = (int)uVar9 + 1;
                  pcVar13[uVar18 & 0xffffffff] = '\0';
                  break;
                }
                (**(code **)(local_b0 + 0x18))(&local_b0);
                uVar19 = 0;
                bVar8 = true;
                cVar5 = puVar28[uVar9];
                do {
                  if (local_a8[uVar19] == '\0') break;
                  if (local_a8[uVar19] == cVar5) {
                    if (bVar8) goto LAB_01be8e5c;
                    break;
                  }
                  if (local_a8[uVar19 + 1] == '\0') break;
                  if (local_a8[uVar19 + 1] == cVar5) goto LAB_01be8e5c;
                  if (local_a8[uVar19 + 2] == '\0') break;
                  if (local_a8[uVar19 + 2] == cVar5) goto LAB_01be8e5c;
                  bVar8 = uVar19 < 0x7fffe;
                  uVar19 = uVar19 + 3;
                } while (uVar19 != 0x80001);
                pcVar13[uVar18] = cVar5;
                uVar18 = uVar18 + 1;
                uVar9 = uVar9 + 1;
              } while (uVar18 != uVar27);
            }
          }
          (**(code **)(local_a0 + 0x18))(&local_a0);
          (**(code **)(local_a0 + 0x18))(&local_a0);
          uVar9 = local_4140;
          if (local_98 == "L") {
LAB_01be9010:
            sVar6 = local_4140._4_2_;
            local_4140 = CONCAT44(local_4140._4_4_,2);
            uVar27 = local_4140;
            local_4140._6_2_ = SUB82(uVar9,6);
            local_a0 = (undefined *)CONCAT44(local_a0._4_4_,3);
            if (0 < (int)local_40e0) {
              uVar9 = 0;
              do {
                piVar22 = (int *)local_40d8[uVar9];
                if (((((short)piVar22[1] == sVar6) &&
                     (*(short *)((long)piVar22 + 6) == local_4140._6_2_)) && (2 < *piVar22)) &&
                   (*piVar22 < 4)) goto LAB_01be91f4;
                uVar9 = uVar9 + 1;
              } while ((local_40e0 & 0xffffffff) != uVar9);
            }
          }
          else {
            uVar27 = 0;
            bVar8 = true;
            do {
              if (local_98[uVar27] != (&DAT_040a127f)[uVar27]) break;
              if (local_98[uVar27] == '\0') {
                if (bVar8) goto LAB_01be9010;
                break;
              }
              if (local_98[uVar27 + 1] != (&DAT_040a1280)[uVar27]) break;
              if (local_98[uVar27 + 1] == '\0') goto LAB_01be9010;
              if (local_98[uVar27 + 2] != "cState_Choice"[uVar27]) break;
              if (local_98[uVar27 + 2] == '\0') goto LAB_01be9010;
              bVar8 = uVar27 < 0x7fffe;
              uVar27 = uVar27 + 3;
            } while (uVar27 != 0x80001);
            local_d0 = PTR_DAT_04bb2020 + 0x10;
            local_c8 = "R";
            (**(code **)(local_a0 + 0x18))(&local_a0);
            (**(code **)(local_a0 + 0x18))(&local_a0);
            pcVar13 = local_98;
            (**(code **)(local_d0 + 0x18))(&local_d0);
            uVar9 = local_4140;
            if (pcVar13 != local_c8) {
              if (*local_98 != *local_c8) goto LAB_01be8548;
              if (*local_98 != '\0') {
                lVar12 = 0x7fffe;
                pcVar13 = local_c8;
                pcVar16 = local_98;
                do {
                  if (pcVar16[1] != pcVar13[1]) goto LAB_01be8548;
                  if (pcVar16[1] == '\0') break;
                  if (pcVar16[2] != pcVar13[2]) goto LAB_01be8548;
                  if (pcVar16[2] == '\0') break;
                  if ((lVar12 == 0) || (cVar5 = pcVar16[3], cVar5 != pcVar13[3])) goto LAB_01be8548;
                  lVar12 = lVar12 + -3;
                  pcVar13 = pcVar13 + 3;
                  pcVar16 = pcVar16 + 3;
                } while (cVar5 != '\0');
              }
            }
            sVar6 = local_4140._4_2_;
            local_4140 = CONCAT44(local_4140._4_4_,3);
            uVar27 = local_4140;
            local_4140._6_2_ = SUB82(uVar9,6);
            local_a0 = (undefined *)CONCAT44(local_a0._4_4_,2);
            if (0 < (int)local_40e0) {
              uVar9 = 0;
              do {
                piVar22 = (int *)local_40d8[uVar9];
                if ((((short)piVar22[1] == sVar6) &&
                    (*(short *)((long)piVar22 + 6) == local_4140._6_2_)) &&
                   ((1 < *piVar22 && (*piVar22 < 3)))) goto LAB_01be91f4;
                uVar9 = uVar9 + 1;
              } while ((local_40e0 & 0xffffffff) != uVar9);
            }
          }
          goto LAB_01be8784;
        }
      }
      goto LAB_01be8548;
    }
    uVar14 = 0;
    uVar10 = 0;
LAB_01be877c:
    local_4140 = CONCAT26(uVar14,(undefined6)local_4140);
LAB_01be8780:
    local_4140 = CONCAT44(local_4140._4_4_,uVar10);
    uVar27 = local_4140;
    goto LAB_01be8784;
  }
  goto LAB_01be8548;
LAB_01be91f4:
  local_4140 = uVar27;
  iVar11 = (int)uVar9;
  uVar27 = local_4140;
  if (iVar11 < 0) {
LAB_01be8784:
    local_4140 = uVar27;
    if ((int)param_1[1] <= (int)*param_1) goto LAB_01be8548;
    puVar26 = *(ulong **)(param_1 + 4);
    if (puVar26 != (ulong *)0x0) {
      *(ulong *)(param_1 + 4) = *puVar26;
    }
    *puVar26 = local_4140;
    uVar9 = local_4140;
    if ((int)*param_1 < (int)param_1[1]) {
      *(ulong **)(*(long *)(param_1 + 2) + (long)(int)*param_1 * 8) = puVar26;
      *param_1 = *param_1 + 1;
      uVar9 = (ulong)(uint)*puVar26;
    }
    if (((((uint)uVar9 & 0xfffffffe) != 2) || ((int)local_40e0 < 0)) ||
       (local_40e0._4_4_ <= (int)local_40e0)) goto LAB_01be8548;
    if ((int)local_40e0 != 0) {
      memmove(local_40d8 + 1,local_40d8,(long)(int)local_40e0 << 3);
    }
    *local_40d8 = puVar26;
    iVar11 = (int)local_40e0 + 1;
  }
  else {
    *(undefined4 *)local_40d8[uVar9] = 4;
    if ((int)local_40e0 <= iVar11) goto LAB_01be8548;
    if (iVar11 + 1 < (int)local_40e0) {
      memmove(local_40d8 + uVar9,local_40d8 + uVar9 + 1,((long)(int)local_40e0 - uVar9) * 8 - 8);
    }
    iVar11 = (int)local_40e0 + -1;
  }
  local_40e0 = CONCAT44(local_40e0._4_4_,iVar11);
LAB_01be8548:
  iVar24 = iVar24 + 1;
  if (iVar24 == iVar25) goto LAB_01be9248;
  goto LAB_01be8554;
}


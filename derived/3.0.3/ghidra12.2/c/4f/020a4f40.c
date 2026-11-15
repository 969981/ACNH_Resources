
/* WARNING: Removing unreachable block (ram,0x020a5258) */
/* WARNING: Removing unreachable block (ram,0x020a5b40) */

uint FUN_020a4f40(long param_1,long *param_2,undefined8 param_3,byte param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  bool bVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  uint *puVar17;
  ulong uVar18;
  uint uVar19;
  uint *puVar20;
  long *plVar21;
  char *pcVar22;
  char *pcVar23;
  ulong uVar24;
  undefined8 local_168;
  long local_160;
  undefined1 local_158;
  byte local_157;
  undefined **local_150;
  char *local_148;
  undefined8 local_140;
  undefined1 local_135;
  undefined **local_130;
  uint local_128;
  undefined *local_120;
  undefined1 *local_118;
  undefined **local_110;
  char *local_108;
  undefined4 local_100;
  char local_fc [31];
  undefined1 local_dd;
  undefined **local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  byte local_c0;
  undefined1 local_a5;
  undefined *local_a0;
  char *local_98;
  int local_90;
  char local_8c [31];
  undefined1 local_6d;
  
  local_90 = 0x20;
  local_6d = 0;
  local_a0 = PTR_DAT_04bb2a08 + 0x10;
  local_98 = local_8c;
  (**(code **)(*param_2 + 0x18))(param_2);
  pcVar23 = (char *)param_2[1];
  if (local_8c != pcVar23) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar14 = 0;
    do {
      if (*(char *)(param_2[1] + lVar14) == '\0') goto LAB_020a500c;
      lVar16 = param_2[1] + lVar14;
      if (*(char *)(lVar16 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_020a500c;
      }
      if (*(char *)(lVar16 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_020a500c;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_020a500c:
    iVar10 = (int)lVar14;
    if (local_90 <= (int)lVar14) {
      iVar10 = local_90 + -1;
    }
    memcpy(local_8c,pcVar23,(long)iVar10);
    local_8c[iVar10] = '\0';
  }
  puVar15 = PTR_DAT_04bb2028;
  lVar14 = 0;
  local_a0 = PTR_DAT_04bb2028 + 0x10;
  local_98[(long)local_90 + -1] = '\0';
  do {
    pcVar23 = local_98;
    if (local_98[lVar14] == '\0') {
LAB_020a5098:
      if ((int)lVar14 < 0) {
        pcVar23 = PTR_DAT_04bb2120;
      }
      break;
    }
    if (local_98[lVar14 + 1] == '\0') {
      lVar14 = lVar14 + 1;
      goto LAB_020a5098;
    }
    if (local_98[lVar14 + 2] == '\0') {
      lVar14 = lVar14 + 2;
      goto LAB_020a5098;
    }
    lVar14 = lVar14 + 3;
  } while (lVar14 != 0x80001);
  cVar3 = *pcVar23;
  (**(code **)(puVar15 + 0x28))(&local_a0);
  puVar4 = PTR_DAT_04bb2020;
  if (cVar3 == '-') {
    lVar14 = 0;
    do {
      if (local_98[lVar14] == '\0') {
LAB_020a5178:
        uVar9 = (int)lVar14 + 1;
        goto LAB_020a517c;
      }
      if (local_98[lVar14 + 1] == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_020a5178;
      }
      if (local_98[lVar14 + 2] == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_020a5178;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    uVar9 = 1;
LAB_020a517c:
    local_110 = (undefined **)(puVar15 + 0x10);
    local_a5 = 0;
    local_d0 = (undefined **)((long)&local_c8 + 4);
    local_108 = local_fc;
    local_c8 = CONCAT35(local_c8._5_3_,0x20);
    local_100 = 0x20;
    local_dd = 0;
    local_fc[0] = '\0';
    local_128 = 0;
    local_120 = PTR_DAT_04bb2020 + 0x10;
    local_118 = &DAT_040addd9;
    local_130 = &local_a0;
    local_d8 = local_110;
    if (uVar9 == 0) {
LAB_020a5540:
      if (local_128 != uVar9) goto LAB_020a5548;
    }
    else {
      FUN_0076e020(&local_130,&local_d8);
      uVar8 = local_128;
      ppuVar5 = local_130;
      uVar24 = (ulong)local_128;
      (**(code **)(*local_130 + 0x18))(local_130);
      puVar15 = ppuVar5[1];
      lVar14 = 0;
      do {
        if (puVar15[lVar14] == '\0') {
LAB_020a5280:
          iVar10 = (int)lVar14;
          goto joined_r0x020a52b0;
        }
        if (puVar15[lVar14 + 1] == '\0') {
          lVar14 = lVar14 + 1;
          goto LAB_020a5280;
        }
        if (puVar15[lVar14 + 2] == '\0') {
          iVar10 = (int)lVar14 + 2;
          goto joined_r0x020a52b0;
        }
        lVar14 = lVar14 + 3;
      } while (lVar14 != 0x80001);
      iVar10 = 0;
joined_r0x020a52b0:
      if ((-1 < (int)uVar8) && ((int)uVar8 <= iVar10)) {
        pcVar23 = local_130[1] + uVar24;
        cVar3 = *pcVar23;
        while (cVar3 != '\0') {
          (**(code **)(local_120 + 0x18))(&local_120);
          uVar18 = 0;
          bVar6 = true;
          cVar3 = *pcVar23;
          do {
            if (local_118[uVar18] == '\0') break;
            if (local_118[uVar18] == cVar3) {
              if (bVar6) goto LAB_020a5530;
              break;
            }
            if (local_118[uVar18 + 1] == '\0') break;
            if (local_118[uVar18 + 1] == cVar3) goto LAB_020a5530;
            if (local_118[uVar18 + 2] == '\0') break;
            if (local_118[uVar18 + 2] == cVar3) goto LAB_020a5530;
            bVar6 = uVar18 < 0x7fffe;
            uVar18 = uVar18 + 3;
          } while (uVar18 != 0x80001);
          uVar24 = uVar24 + 1;
          pcVar23 = local_130[1] + uVar24;
          cVar3 = *pcVar23;
        }
LAB_020a5530:
        local_128 = (int)uVar24 + 1;
      }
      if (local_130 == &local_a0) goto LAB_020a5540;
LAB_020a5548:
      FUN_0076e020(&local_130,&local_110);
      uVar9 = local_128;
      ppuVar5 = local_130;
      uVar24 = (ulong)local_128;
      (**(code **)(*local_130 + 0x18))(local_130);
      puVar15 = ppuVar5[1];
      lVar14 = 0;
      do {
        if (puVar15[lVar14] == '\0') goto LAB_020a55b0;
        if (puVar15[lVar14 + 1] == '\0') {
          lVar14 = lVar14 + 1;
          goto LAB_020a55b0;
        }
        if (puVar15[lVar14 + 2] == '\0') {
          lVar14 = lVar14 + 2;
          goto LAB_020a55b0;
        }
        lVar14 = lVar14 + 3;
      } while (lVar14 != 0x80001);
      lVar14 = 0;
LAB_020a55b0:
      if ((-1 < (int)uVar9) && ((int)uVar9 <= (int)lVar14)) {
        pcVar23 = local_130[1] + uVar24;
        cVar3 = *pcVar23;
        while (cVar3 != '\0') {
          (**(code **)(local_120 + 0x18))(&local_120);
          uVar18 = 0;
          bVar6 = true;
          cVar3 = *pcVar23;
          do {
            if (local_118[uVar18] == '\0') break;
            if (local_118[uVar18] == cVar3) {
              if (bVar6) goto LAB_020a5660;
              break;
            }
            if (local_118[uVar18 + 1] == '\0') break;
            if (local_118[uVar18 + 1] == cVar3) goto LAB_020a5660;
            if (local_118[uVar18 + 2] == '\0') break;
            if (local_118[uVar18 + 2] == cVar3) goto LAB_020a5660;
            bVar6 = uVar18 < 0x7fffe;
            uVar18 = uVar18 + 3;
          } while (uVar18 != 0x80001);
          uVar24 = uVar24 + 1;
          pcVar23 = local_130[1] + uVar24;
          cVar3 = *pcVar23;
        }
LAB_020a5660:
        local_128 = (int)uVar24 + 1;
      }
    }
    local_150 = (undefined **)(puVar4 + 0x10);
    local_148 = "-Looks";
    (*(code *)local_d8[3])(&local_d8);
    (*(code *)local_d8[3])(&local_d8);
    ppuVar5 = local_d0;
    (*(code *)local_150[3])(&local_150);
    if (ppuVar5 != (undefined **)local_148) {
      uVar24 = 0;
      bVar6 = true;
      do {
        if (*(char *)((long)local_d0 + uVar24) != local_148[uVar24]) break;
        if (*(char *)((long)local_d0 + uVar24) == '\0') {
          if (bVar6) goto LAB_020a56f4;
          break;
        }
        bVar6 = uVar24 < 0x80000;
        uVar24 = uVar24 + 1;
      } while (uVar24 != 0x80001);
      local_150 = (undefined **)(puVar4 + 0x10);
      local_148 = "-Wherearen";
      (*(code *)local_d8[3])(&local_d8);
      (*(code *)local_d8[3])(&local_d8);
      ppuVar5 = local_d0;
      (*(code *)local_150[3])(&local_150);
      if (ppuVar5 != (undefined **)local_148) {
        uVar24 = 0;
        bVar6 = true;
        do {
          if (*(char *)((long)local_d0 + uVar24) != local_148[uVar24]) break;
          if (*(char *)((long)local_d0 + uVar24) == '\0') {
            if (bVar6) goto LAB_020a59a0;
            break;
          }
          bVar6 = uVar24 < 0x80000;
          uVar24 = uVar24 + 1;
        } while (uVar24 != 0x80001);
        (*(code *)local_d8[3])(&local_d8);
        (*(code *)local_d8[3])(&local_d8);
        if (local_d0 == (undefined **)"-Hotel") {
LAB_020a5aa8:
          (*(code *)local_110[3])(&local_110);
          (*(code *)local_110[3])(&local_110);
          if (local_108 == "VIP") {
LAB_020a5d0c:
            lVar14 = *(long *)PTR_DAT_04bb4938 + 0x58;
          }
          else {
            uVar24 = 0;
            bVar6 = true;
            do {
              if (local_108[uVar24] != (&DAT_040cfe10)[uVar24]) break;
              if (local_108[uVar24] == '\0') {
                if (bVar6) goto LAB_020a5d0c;
                break;
              }
              bVar6 = uVar24 < 0x80000;
              uVar24 = uVar24 + 1;
            } while (uVar24 != 0x80001);
            (*(code *)local_110[3])(&local_110);
            (*(code *)local_110[3])(&local_110);
            if (local_108 != "Companion") {
              uVar24 = 0;
              bVar6 = true;
              do {
                if (local_108[uVar24] != "Companion"[uVar24]) break;
                if (local_108[uVar24] == '\0') {
                  if (bVar6) goto LAB_020a5e48;
                  break;
                }
                bVar6 = uVar24 < 0x80000;
                uVar24 = uVar24 + 1;
              } while (uVar24 != 0x80001);
              goto LAB_020a60b4;
            }
LAB_020a5e48:
            lVar14 = *(long *)PTR_DAT_04bb4938 + 0x78;
          }
          uVar9 = FUN_020a4f40(param_1,lVar14,PTR_DAT_04bb3238,1);
          return uVar9;
        }
        uVar24 = 0;
        bVar6 = true;
        do {
          if (*(char *)((long)local_d0 + uVar24) != "-Hotel"[uVar24]) break;
          if (*(char *)((long)local_d0 + uVar24) == '\0') {
            if (bVar6) goto LAB_020a5aa8;
            break;
          }
          bVar6 = uVar24 < 0x80000;
          uVar24 = uVar24 + 1;
        } while (uVar24 != 0x80001);
        goto LAB_020a60b4;
      }
LAB_020a59a0:
      local_150 = (undefined **)(puVar4 + 0x10);
      local_148 = "SecondCustomer";
      (*(code *)local_110[3])(&local_110);
      (*(code *)local_110[3])(&local_110);
      pcVar23 = local_108;
      (*(code *)local_150[3])(&local_150);
      if (pcVar23 == local_148) {
LAB_020a5b14:
        lVar16 = *(long *)PTR_DAT_04bb46b0;
        lVar14 = 0;
        if (lVar16 != 0) {
          local_150 = (undefined **)CONCAT44(local_150._4_4_,1);
          if (((*(byte *)(lVar16 + 0x50d) ^ 0xff) & 6) == 0) {
            lVar16 = (**(code **)(**(long **)(*(long *)(lVar16 + 0x10) + 0x188) + 0x38))();
          }
          else {
            lVar16 = 0;
          }
          lVar14 = 0;
          if (lVar16 != 0) {
            lVar14 = lVar16 + 0xa8;
          }
        }
        local_160 = lVar14 + 0x36518;
        local_158 = 1;
        if ((*(long **)(lVar14 + 0x36540) == (long *)0x0) ||
           (puVar11 = (undefined8 *)**(long **)(lVar14 + 0x36540), puVar11 == (undefined8 *)0x0)) {
          bVar7 = 0;
        }
        else {
          bVar7 = (**(code **)*puVar11)();
        }
        local_157 = bVar7 & 1;
        local_168 = PTR_DAT_04bb6a00 + 0x10;
        if (*(short *)(*(long *)(lVar14 + 0x36528) + *(long *)(lVar14 + 0x36520) + 0x3f8) != -1) {
          local_135 = 0;
          local_148 = (char *)((long)&local_140 + 4);
          local_140 = CONCAT35(local_140._5_3_,8);
          local_150 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
          uVar24 = FUN_0376b510(&local_150);
          if ((uVar24 & 1) != 0) {
            uVar9 = FUN_020a4f40(param_1,&local_150,PTR_DAT_04bb3238,1);
            FUN_02640184(&local_168);
            return uVar9;
          }
        }
        if ((((bVar7 & 1) != 0) && (*(long *)(lVar14 + 0x36540) != 0)) &&
           (puVar11 = *(undefined8 **)(*(long *)(lVar14 + 0x36540) + 8),
           puVar11 != (undefined8 *)0x0)) {
          (**(code **)*puVar11)();
        }
        goto LAB_020a60b4;
      }
      uVar24 = 0;
      bVar6 = true;
      do {
        if (local_108[uVar24] != local_148[uVar24]) break;
        if (local_108[uVar24] == '\0') {
          if (bVar6) goto LAB_020a5b14;
          break;
        }
        bVar6 = uVar24 < 0x80000;
        uVar24 = uVar24 + 1;
      } while (uVar24 != 0x80001);
      uVar9 = *(uint *)PTR_DAT_04bb3238;
      local_150 = (undefined **)(puVar4 + 0x10);
      local_148 = "Customer";
      (*(code *)local_110[3])(&local_110);
      (*(code *)local_110[3])(&local_110);
      pcVar23 = local_108;
      (*(code *)local_150[3])(&local_150);
      if (pcVar23 == local_148) {
LAB_020a5d90:
        if (*(long *)PTR_DAT_04bb27f8 != 0) {
          local_135 = 0;
          local_148 = (char *)((long)&local_140 + 4);
          local_140 = CONCAT35(local_140._5_3_,8);
          local_150 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
          FUN_036ddfc0(*(long *)PTR_DAT_04bb27f8,&local_150);
LAB_020a5eb8:
          uVar9 = FUN_020a4f40(param_1,&local_150,PTR_DAT_04bb3238,1);
        }
      }
      else {
        uVar24 = 0;
        bVar6 = true;
        do {
          if (local_108[uVar24] != local_148[uVar24]) break;
          if (local_108[uVar24] == '\0') {
            if (bVar6) goto LAB_020a5d90;
            break;
          }
          bVar6 = uVar24 < 0x80000;
          uVar24 = uVar24 + 1;
        } while (uVar24 != 0x80001);
        (*(code *)local_110[3])(&local_110);
        (*(code *)local_110[3])(&local_110);
        if (local_108 == "Housemate") {
LAB_020a5e78:
          if (*(long *)PTR_DAT_04bb27f8 != 0) {
            local_135 = 0;
            local_148 = (char *)((long)&local_140 + 4);
            local_140 = CONCAT35(local_140._5_3_,8);
            local_150 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
            FUN_036e1fd8(*(long *)PTR_DAT_04bb27f8,&local_150);
            goto LAB_020a5eb8;
          }
        }
        else {
          uVar24 = 0;
          bVar6 = true;
          do {
            if (local_108[uVar24] != "Housemate"[uVar24]) break;
            if (local_108[uVar24] == '\0') {
              if (bVar6) goto LAB_020a5e78;
              break;
            }
            bVar6 = uVar24 < 0x80000;
            uVar24 = uVar24 + 1;
          } while (uVar24 != 0x80001);
          local_150 = (undefined **)(puVar4 + 0x10);
          local_148 = "Officer";
          uVar24 = FUN_00710cb0(&local_110,&local_150);
          if (((uVar24 & 1) != 0) && (lVar14 = *(long *)PTR_DAT_04bb4e28, lVar14 != 0)) {
            uVar9 = *(uint *)(lVar14 + 0x123c8);
            if (uVar9 == 0xffffffff) {
              puVar17 = (uint *)PTR_DAT_04bb3238;
            }
            else {
              if (uVar9 < *(uint *)(lVar14 + 0xe0)) {
                lVar14 = *(long *)(*(long *)(lVar14 + 0xe8) + (long)(int)uVar9 * 8);
              }
              else {
                lVar14 = 0;
              }
              puVar17 = (uint *)(lVar14 + 8);
            }
            uVar9 = *puVar17;
          }
        }
      }
      puVar15 = PTR_DAT_04bb27c0;
      lVar14 = *(long *)PTR_DAT_04bb27c0;
      if (lVar14 == 0) goto LAB_020a60b4;
      if (((uVar9 == 0) ||
          (plVar21 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                               (ulong)(uVar9 >> 0x14) * 8), plVar21 == (long *)0x0)) ||
         (((*(uint *)(plVar21 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar21 + 0x46) != uVar9)))) {
        plVar21 = (long *)0x0;
      }
      if (*(int *)(lVar14 + 0x288) == 1 || *(int *)(lVar14 + 0x288) == -1) {
        plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar14 = *(long *)puVar15;
        iVar10 = (**(code **)(*plVar12 + 0x60))();
        if (iVar10 < 0x11) {
          uVar8 = 0;
        }
        else {
          if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_020a6064;
          uVar8 = 5U >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
        }
      }
      else {
LAB_020a6064:
        uVar8 = 1;
      }
      if (plVar21 != (long *)0x0) {
        lVar14 = plVar21[0x2a];
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar10 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        uVar24 = (**(code **)(*plVar21 + 0x20))(plVar21,PTR_DAT_04bb37d0);
        if ((int)lVar14 != 1) {
          uVar8 = 1;
        }
        if (((uVar24 & 1) != 0) && (uVar8 == 0)) {
          return uVar9;
        }
      }
LAB_020a60b4:
      return *(uint *)PTR_DAT_04bb3238;
    }
LAB_020a56f4:
    local_168 = (undefined *)((ulong)local_168._4_4_ << 0x20);
    (*(code *)local_110[3])(&local_110);
    puVar15 = PTR_DAT_04bb6a58;
    if (local_108 == PTR_DAT_04bb6a58) {
      uVar9 = 0;
LAB_020a5f40:
      local_168 = (undefined *)CONCAT44(local_168._4_4_,uVar9);
    }
    else {
      if (((*local_108 == 'B') && (local_108[1] == 'O')) &&
         (uVar9 = (uint)(byte)local_108[2], local_108[2] == 0)) goto LAB_020a5f40;
      (*(code *)local_110[3])(&local_110);
      if ((local_108 == puVar15 + 4) ||
         (((*local_108 == 'H' && (local_108[1] == 'A')) && (local_108[2] == '\0')))) {
        uVar9 = 1;
        goto LAB_020a5f40;
      }
      (*(code *)local_110[3])(&local_110);
      if ((local_108 == puVar15 + 8) ||
         (((*local_108 == 'K' && (local_108[1] == 'O')) && (local_108[2] == '\0')))) {
        uVar9 = 2;
        goto LAB_020a5f40;
      }
      (*(code *)local_110[3])(&local_110);
      if ((local_108 == puVar15 + 0xc) ||
         (((*local_108 == 'Z' && (local_108[1] == 'K')) && (local_108[2] == '\0')))) {
        uVar9 = 3;
        goto LAB_020a5f40;
      }
      (*(code *)local_110[3])(&local_110);
      if ((local_108 == puVar15 + 0x10) ||
         (((*local_108 == 'F' && (local_108[1] == 'U')) && (local_108[2] == '\0')))) {
        uVar9 = 4;
        goto LAB_020a5f40;
      }
      (*(code *)local_110[3])(&local_110);
      if ((local_108 == puVar15 + 0x14) ||
         (((*local_108 == 'G' && (local_108[1] == 'E')) && (local_108[2] == '\0')))) {
        uVar9 = 5;
        goto LAB_020a5f40;
      }
      (*(code *)local_110[3])(&local_110);
      if ((local_108 == puVar15 + 0x18) ||
         (((*local_108 == 'O' && (local_108[1] == 'T')) && (local_108[2] == '\0')))) {
        uVar9 = 6;
        goto LAB_020a5f40;
      }
      (*(code *)local_110[3])(&local_110);
      if ((local_108 == puVar15 + 0x1c) ||
         (((*local_108 == 'A' && (local_108[1] == 'N')) && (local_108[2] == '\0')))) {
        uVar9 = 7;
        goto LAB_020a5f40;
      }
    }
    puVar17 = (uint *)PTR_DAT_04bb3238;
    local_148 = (char *)&local_168;
    local_150 = &PTR_FUN_04a730f8;
    if (*(int *)(param_1 + 0xb88) != 0) {
      puVar11 = *(undefined8 **)(param_1 + 0xb90);
      lVar14 = (long)*(int *)(param_1 + 0xb88) << 3;
      local_140 = param_3;
      do {
        puVar20 = (uint *)*puVar11;
        uVar24 = (*(code *)*local_150)(&local_150,puVar20);
        if ((uVar24 & 1) != 0) goto LAB_020a5fa8;
        puVar11 = puVar11 + 1;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
      goto LAB_020a5fac;
    }
  }
  else {
    if (*(int *)(param_1 + 0xb80) != 0) {
      uVar8 = FUN_006bd550(local_98,0);
      uVar9 = *(uint *)(param_1 + 0xa68);
      if (uVar9 != 0) {
        lVar14 = *(long *)(param_1 + 0xa70);
        if ((int)uVar9 < 2) {
          uVar19 = 0;
        }
        else {
          uVar19 = 0;
          iVar10 = uVar9 - 1;
          do {
            uVar1 = iVar10 + uVar19;
            if ((int)uVar1 < 0 != SCARRY4(iVar10,uVar19)) {
              uVar1 = uVar1 + 1;
            }
            uVar2 = (int)uVar1 >> 1;
            uVar1 = *(uint *)(lVar14 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
            if (uVar1 == uVar8) goto joined_r0x020a52c8;
            if (uVar1 < uVar8) {
              uVar19 = uVar2 + 1;
            }
            else {
              iVar10 = uVar2 - 1;
            }
          } while ((int)uVar19 < iVar10);
        }
        uVar2 = uVar19;
        if (*(uint *)(lVar14 + (long)(int)uVar19 * 0x20 + 0x18) == uVar8) {
joined_r0x020a52c8:
          if (-1 < (int)uVar2) {
            if (uVar9 <= uVar2) {
              uVar2 = 0;
            }
            uVar9 = *(uint *)(lVar14 + (ulong)uVar2 * 0x20);
            if (uVar9 != 0) {
              return uVar9;
            }
          }
        }
      }
    }
    (**(code **)(local_a0 + 0x18))(&local_a0);
    iVar10 = local_90;
    pcVar23 = local_98;
    lVar14 = 0;
    do {
      if (local_98[lVar14] == '\0') {
LAB_020a5330:
        iVar13 = (int)lVar14;
joined_r0x020a5334:
        pcVar22 = local_98;
        if (0 < iVar13) {
          do {
            if ((byte)(*pcVar22 + 0xbfU) < 4) {
              *pcVar22 = (&DAT_04074aae)[(byte)(*pcVar22 + 0xbf)];
            }
            lVar14 = lVar14 + -1;
            pcVar22 = pcVar22 + 1;
          } while (lVar14 != 0);
        }
        break;
      }
      if (local_98[lVar14 + 1] == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_020a5330;
      }
      if (local_98[lVar14 + 2] == '\0') {
        lVar14 = lVar14 + 2;
        iVar13 = (int)lVar14;
        goto joined_r0x020a5334;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    local_130 = (undefined **)((ulong)local_130 & 0xffffffffffffff00);
    local_110 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_d0 = (undefined **)&DAT_040947d9;
    local_108 = "";
    local_d8 = local_110;
    (**(code **)(local_a0 + 0x18))(&local_a0);
    pcVar22 = local_98;
    (**(code **)(local_a0 + 0x18))(&local_a0);
    lVar14 = 0;
    do {
      if (local_98[lVar14] == '\0') goto LAB_020a541c;
      if (local_98[lVar14 + 1] == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_020a541c;
      }
      if (local_98[lVar14 + 2] == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_020a541c;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_020a541c:
    FUN_038d0770(pcVar23,0,iVar10,pcVar22,lVar14,&local_d8,&local_110,&local_130);
    puVar17 = (uint *)PTR_DAT_04bb3238;
    local_d0 = &local_a0;
    local_d8 = &PTR_FUN_04a73120;
    if (*(int *)(param_1 + 0xb88) != 0) {
      puVar11 = *(undefined8 **)(param_1 + 0xb90);
      lVar14 = (long)*(int *)(param_1 + 0xb88) << 3;
      local_c8 = param_3;
      local_c0 = param_4 & 1;
      do {
        puVar20 = (uint *)*puVar11;
        uVar24 = (*(code *)*local_d8)(&local_d8,puVar20);
        if ((uVar24 & 1) != 0) goto LAB_020a5fa8;
        puVar11 = puVar11 + 1;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
      goto LAB_020a5fac;
    }
  }
  puVar17 = (uint *)PTR_DAT_04bb3238;
LAB_020a5fac:
  return *puVar17;
LAB_020a5fa8:
  puVar17 = puVar20;
  goto LAB_020a5fac;
}


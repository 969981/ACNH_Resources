
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_008c1df0(long param_1,long *param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  byte *pbVar15;
  ulong uVar16;
  char *pcVar17;
  uint uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  byte bVar21;
  uint uVar22;
  size_t __n;
  char *pcVar23;
  undefined *puVar24;
  undefined4 uVar25;
  long *local_160;
  undefined8 local_158;
  int local_150;
  char local_14c [31];
  undefined1 local_12d;
  undefined8 local_124;
  float local_11c;
  long *local_118;
  uint local_110;
  undefined *local_108;
  undefined1 *local_100;
  undefined *local_f8;
  char *local_f0;
  undefined4 local_e8;
  char local_e4 [31];
  undefined1 local_c5;
  undefined *local_c0;
  char *local_b8;
  undefined4 local_b0;
  char local_ac [31];
  undefined1 local_8d;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  char *local_70;
  
  puVar6 = PTR_DAT_04bb2028;
  puVar24 = PTR_DAT_04bb2020;
  local_8d = 0;
  local_b0 = 0x20;
  local_e8 = 0x20;
  local_ac[0] = '\0';
  local_b8 = local_ac;
  local_c5 = 0;
  local_f8 = PTR_DAT_04bb2028 + 0x10;
  local_e4[0] = '\0';
  local_f0 = local_e4;
  local_108 = PTR_DAT_04bb2020 + 0x10;
  local_110 = 0;
  local_100 = &DAT_040addd9;
  local_118 = param_2;
  local_c0 = local_f8;
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar14 = 0;
  do {
    if (*(char *)(param_2[1] + lVar14) == '\0') {
LAB_008c1ef8:
      iVar11 = (int)lVar14;
      if (iVar11 == -1) goto LAB_008c21a8;
LAB_008c1f10:
      uVar18 = iVar11 + 1;
      goto LAB_008c1f14;
    }
    lVar1 = param_2[1] + lVar14;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar14 = lVar14 + 1;
      goto LAB_008c1ef8;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      iVar11 = (int)lVar14 + 2;
      if (iVar11 != -1) goto LAB_008c1f10;
      goto LAB_008c21a8;
    }
    lVar14 = lVar14 + 3;
  } while (lVar14 != 0x80001);
  uVar18 = 1;
LAB_008c1f14:
  FUN_008c8970(&local_118,&local_c0);
  uVar22 = local_110;
  plVar8 = local_118;
  uVar19 = (ulong)local_110;
  (**(code **)(*local_118 + 0x18))(local_118);
  lVar14 = 0;
  do {
    if (*(char *)(plVar8[1] + lVar14) == '\0') {
LAB_008c1f7c:
      iVar11 = (int)lVar14;
      goto joined_r0x008c1fb0;
    }
    lVar1 = plVar8[1] + lVar14;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar14 = lVar14 + 1;
      goto LAB_008c1f7c;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      iVar11 = (int)lVar14 + 2;
      goto joined_r0x008c1fb0;
    }
    lVar14 = lVar14 + 3;
  } while (lVar14 != 0x80001);
  iVar11 = 0;
joined_r0x008c1fb0:
  if (((int)uVar22 < 0) || (iVar11 < (int)uVar22)) {
  }
  else {
    pcVar23 = (char *)(local_118[1] + uVar19);
    cVar4 = *pcVar23;
    while (cVar4 != '\0') {
      (**(code **)(local_108 + 0x18))(&local_108);
      uVar16 = 0;
      bVar9 = true;
      cVar4 = *pcVar23;
      do {
        if (local_100[uVar16] == '\0') break;
        if (local_100[uVar16] == cVar4) {
          if (bVar9) goto LAB_008c2050;
          break;
        }
        if (local_100[uVar16 + 1] == '\0') break;
        if (local_100[uVar16 + 1] == cVar4) goto LAB_008c2050;
        if (local_100[uVar16 + 2] == '\0') break;
        if (local_100[uVar16 + 2] == cVar4) goto LAB_008c2050;
        bVar9 = uVar16 < 0x7fffe;
        uVar16 = uVar16 + 3;
      } while (uVar16 != 0x80001);
      uVar19 = uVar19 + 1;
      pcVar23 = (char *)(local_118[1] + uVar19);
      cVar4 = *pcVar23;
    }
LAB_008c2050:
    local_110 = (int)uVar19 + 1;
    puVar24 = PTR_DAT_04bb2020;
  }
  if ((local_118 != param_2) || (local_110 != uVar18)) {
    FUN_008c8970(&local_118,&local_f8);
    uVar18 = local_110;
    plVar8 = local_118;
    uVar19 = (ulong)local_110;
    (**(code **)(*local_118 + 0x18))(local_118);
    lVar14 = 0;
    do {
      if (*(char *)(plVar8[1] + lVar14) == '\0') {
LAB_008c20dc:
        iVar11 = (int)lVar14;
        goto joined_r0x008c210c;
      }
      lVar1 = plVar8[1] + lVar14;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_008c20dc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        iVar11 = (int)lVar14 + 2;
        goto joined_r0x008c210c;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    iVar11 = 0;
joined_r0x008c210c:
    if ((-1 < (int)uVar18) && ((int)uVar18 <= iVar11)) {
      pcVar23 = (char *)(local_118[1] + uVar19);
      if (*pcVar23 != '\0') {
        do {
          (**(code **)(local_108 + 0x18))(&local_108);
          uVar16 = 0;
          bVar9 = true;
          cVar4 = *pcVar23;
          do {
            if (local_100[uVar16] == '\0') break;
            if (local_100[uVar16] == cVar4) {
              if (bVar9) goto LAB_008c219c;
              break;
            }
            if (local_100[uVar16 + 1] == '\0') break;
            if (local_100[uVar16 + 1] == cVar4) goto LAB_008c219c;
            if (local_100[uVar16 + 2] == '\0') break;
            if (local_100[uVar16 + 2] == cVar4) goto LAB_008c219c;
            bVar9 = uVar16 < 0x7fffe;
            uVar16 = uVar16 + 3;
          } while (uVar16 != 0x80001);
          uVar19 = uVar19 + 1;
          pcVar23 = (char *)(local_118[1] + uVar19);
        } while (*pcVar23 != '\0');
LAB_008c219c:
        uVar18 = (uint)uVar19;
      }
      local_110 = uVar18 + 1;
    }
  }
LAB_008c21a8:
  local_160 = (long *)(puVar24 + 0x10);
  local_158 = "Talk";
  (**(code **)(local_c0 + 0x18))(&local_c0);
  (**(code **)(local_c0 + 0x18))(&local_c0);
  pcVar23 = local_b8;
  (*(code *)local_160[3])(&local_160);
  if (pcVar23 != local_158) {
    uVar19 = 0;
    bVar9 = true;
    do {
      if (local_b8[uVar19] != local_158[uVar19]) break;
      if (local_b8[uVar19] == '\0') {
        if (bVar9) goto LAB_008c2234;
        break;
      }
      bVar9 = uVar19 < 0x80000;
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x80001);
    local_160 = (long *)(puVar24 + 0x10);
    local_158 = "Demo";
    (**(code **)(local_c0 + 0x18))(&local_c0);
    (**(code **)(local_c0 + 0x18))(&local_c0);
    pcVar23 = local_b8;
    (*(code *)local_160[3])(&local_160);
    if (pcVar23 == local_158) {
LAB_008c2380:
      if (*local_f0 == '\0') {
        return 0;
      }
      local_160 = (long *)(puVar24 + 0x10);
      local_158 = "Visit";
      (**(code **)(local_f8 + 0x18))(&local_f8);
      (**(code **)(local_f8 + 0x18))(&local_f8);
      pcVar23 = local_f0;
      (*(code *)local_160[3])(&local_160);
      if (pcVar23 == local_158) {
LAB_008c2ad0:
        local_150 = 0x20;
        local_12d = 0;
        local_160 = (long *)(PTR_DAT_04bb2a08 + 0x10);
        local_158 = local_14c;
        (**(code **)(local_f8 + 0x18))(&local_f8);
        pcVar23 = local_f0;
        if (local_14c != local_f0) {
          (**(code **)(local_f8 + 0x18))(&local_f8);
          lVar14 = 0;
          do {
            if (local_f0[lVar14] == '\0') goto LAB_008c2e68;
            if (local_f0[lVar14 + 1] == '\0') {
              lVar14 = lVar14 + 1;
              goto LAB_008c2e68;
            }
            if (local_f0[lVar14 + 2] == '\0') {
              lVar14 = lVar14 + 2;
              goto LAB_008c2e68;
            }
            lVar14 = lVar14 + 3;
          } while (lVar14 != 0x80001);
          lVar14 = 0;
LAB_008c2e68:
          iVar11 = (int)lVar14;
          if (local_150 <= (int)lVar14) {
            iVar11 = local_150 + -1;
          }
          memcpy(local_14c,pcVar23,(long)iVar11);
          local_14c[iVar11] = '\0';
        }
        puVar7 = PTR_DAT_04bb59d8;
        local_160 = (long *)(puVar6 + 0x10);
        if (*(long *)PTR_DAT_04bb59d8 != 0) {
          lVar14 = *(long *)PTR_DAT_04bb2720;
          if (lVar14 == 0) {
            puVar20 = &DAT_055c04a0;
          }
          else {
            puVar20 = &DAT_055c04a0;
            if (*(long *)(lVar14 + 0x330) != 0) {
              puVar20 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
              iVar11 = FUN_006bd550(*puVar20,0);
              puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar11 != 0x758f7eaf) {
                puVar20 = &DAT_055c04a0;
              }
            }
          }
          if (*(int *)(puVar20 + 7) == -0x17df00c3) {
            iVar11 = FUN_0375f1a4(*(undefined8 *)puVar7);
            local_78 = (long *)CONCAT44(local_78._4_4_,iVar11);
            if (iVar11 == 2) {
              local_70 = "_Right";
            }
            else {
              if (iVar11 != 1) goto LAB_008c2f90;
              local_70 = "_Left";
            }
            local_78 = (long *)(puVar24 + 0x10);
            FUN_008ca280(&local_160,&local_78);
            lVar14 = FUN_008c1870(param_1,&local_160);
            if (lVar14 != 0) {
              FUN_008a9fb0(&local_f8,&local_160,0xffffffff);
            }
          }
        }
      }
      else {
        uVar19 = 0;
        bVar9 = true;
        do {
          if (local_f0[uVar19] != local_158[uVar19]) break;
          if (local_f0[uVar19] == '\0') {
            if (bVar9) goto LAB_008c2ad0;
            break;
          }
          bVar9 = uVar19 < 0x80000;
          uVar19 = uVar19 + 1;
        } while (uVar19 != 0x80001);
      }
LAB_008c2f90:
      puVar6 = PTR_DAT_04bb3238;
      local_124 = (undefined *)CONCAT44(local_124._4_4_,*(undefined4 *)PTR_DAT_04bb3238);
      local_78 = (long *)CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 0x230));
      FUN_0071cb58(&local_160,PTR_DAT_04bb32f8,&local_78,0);
      plVar8 = local_160;
      if (local_160 != (long *)0x0) {
        if (((*PTR_DAT_04bb3280 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar11 != 0)) {
          *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3280);
        }
        uVar19 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3278);
        if ((uVar19 & 1) == 0) {
          local_158._0_3_ = (uint3)(ushort)local_158;
        }
      }
      if (((local_160 == (long *)0x0) || ((char)local_158 == '\0')) || (local_158._2_1_ == '\0')) {
        iVar11 = (int)(float)local_124;
      }
      else {
        iVar11 = FUN_008fa0e0(local_160,param_3,0,*(undefined4 *)puVar6,
                              *(undefined4 *)(param_1 + 0x230));
        local_124 = (undefined *)CONCAT44(local_124._4_4_,iVar11);
      }
      local_80 = (undefined *)((ulong)local_80._4_4_ << 0x20);
      local_88 = (undefined *)0x0;
      if ((iVar11 == 0) && (uVar19 = FUN_008fa8b0(&local_88,param_3), (uVar19 & 1) != 0)) {
        local_78 = (long *)(puVar24 + 0x10);
        local_70 = "";
        FUN_008c4100(param_1,&local_f8,&local_78,&local_88,0,0,param_4 & 1);
      }
      else {
        local_78 = (long *)(puVar24 + 0x10);
        local_70 = "";
        FUN_008c3200(param_1,&local_f8,&local_78,&local_124,0,0,param_4 & 1);
      }
      (**(code **)(local_f8 + 0x18))(&local_f8);
      (**(code **)(local_f8 + 0x18))(&local_f8);
      if (local_f0 != "EventLessonStart") {
        uVar19 = 0;
        bVar9 = true;
        while( true ) {
          if (local_f0[uVar19] != "EventLessonStart"[uVar19]) {
            return 1;
          }
          if (local_f0[uVar19] == '\0') break;
          bVar9 = uVar19 < 0x80000;
          uVar19 = uVar19 + 1;
          if (uVar19 == 0x80001) {
            return 1;
          }
        }
        if (!bVar9) {
          return 1;
        }
      }
      *(code **)(param_1 + 0x37f48) = FUN_008ca3bc;
      *(undefined8 *)(param_1 + 0x37f50) = 0;
      *(undefined ***)(param_1 + 0x37f38) = &PTR_LAB_04925b30;
      *(long *)(param_1 + 0x37f40) = param_1;
      return 1;
    }
    uVar19 = 0;
    bVar9 = true;
    do {
      if (local_b8[uVar19] != local_158[uVar19]) break;
      if (local_b8[uVar19] == '\0') {
        if (bVar9) goto LAB_008c2380;
        break;
      }
      bVar9 = uVar19 < 0x80000;
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x80001);
    local_160 = (long *)(puVar24 + 0x10);
    local_158 = "Type";
    (**(code **)(local_c0 + 0x18))(&local_c0);
    (**(code **)(local_c0 + 0x18))(&local_c0);
    pcVar23 = local_b8;
    (*(code *)local_160[3])(&local_160);
    if (pcVar23 != local_158) {
      uVar19 = 0;
      bVar9 = true;
      do {
        if (local_b8[uVar19] != local_158[uVar19]) break;
        if (local_b8[uVar19] == '\0') {
          if (bVar9) goto LAB_008c2590;
          break;
        }
        bVar9 = uVar19 < 0x80000;
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0x80001);
      (**(code **)(local_c0 + 0x18))(&local_c0);
      (**(code **)(local_c0 + 0x18))(&local_c0);
      if (local_b8 == "Normal") {
        if (*(int *)(param_1 + 0x410) != 0) {
          return 0;
        }
      }
      else {
        uVar19 = 0;
        bVar9 = true;
        while( true ) {
          if (local_b8[uVar19] != "Normal"[uVar19]) {
            return 0;
          }
          if (local_b8[uVar19] == '\0') break;
          bVar9 = uVar19 < 0x80000;
          uVar19 = uVar19 + 1;
          if (uVar19 == 0x80001) {
            return 0;
          }
        }
        if (!(bool)(bVar9 & *(int *)(param_1 + 0x410) == 0)) {
          return 0;
        }
      }
      (**(code **)(local_f8 + 0x18))(&local_f8);
      (**(code **)(local_f8 + 0x18))(&local_f8);
      if (local_f0 != "BirdView") {
        uVar19 = 0;
        bVar9 = true;
        while( true ) {
          if (local_f0[uVar19] != "BirdView"[uVar19]) {
            return 0;
          }
          if (local_f0[uVar19] == '\0') break;
          bVar9 = uVar19 < 0x80000;
          uVar19 = uVar19 + 1;
          if (uVar19 == 0x80001) {
            return 0;
          }
        }
        if (!bVar9) {
          return 0;
        }
      }
      local_160 = (long *)(puVar24 + 0x10);
      local_158 = "cBirdView";
      local_70 = "cDefault";
      local_78 = local_160;
      FUN_008c3200(param_1,&local_160,&local_78,PTR_DAT_04bb3238,0,0,0);
      return 1;
    }
LAB_008c2590:
    if (*local_f0 == '\0') {
      return 0;
    }
    uVar18 = 0;
    while( true ) {
      pcVar23 = "";
      if (uVar18 < 99) {
        pcVar23 = (&PTR_s_cNormal_04922de8)[uVar18];
      }
      (**(code **)(local_f8 + 0x18))(&local_f8);
      puVar24 = PTR_DAT_04bb39b0;
      if (pcVar23 == local_f0) break;
      if (*pcVar23 == *local_f0) {
        if (*pcVar23 == '\0') break;
        lVar14 = 0x7fffe;
        pcVar17 = local_f0;
        while( true ) {
          if (pcVar23[1] != pcVar17[1]) break;
          if (pcVar23[1] == '\0') goto LAB_008c2670;
          if (pcVar23[2] != pcVar17[2]) break;
          if (pcVar23[2] == '\0') goto LAB_008c2670;
          if ((lVar14 == 0) || (cVar4 = pcVar23[3], cVar4 != pcVar17[3])) break;
          lVar14 = lVar14 + -3;
          pcVar17 = pcVar17 + 3;
          pcVar23 = pcVar23 + 3;
          if (cVar4 == '\0') goto LAB_008c2670;
        }
      }
      uVar22 = 99;
      if ((int)uVar18 < 99) {
        uVar22 = uVar18 + 1;
      }
      uVar18 = uVar22;
      if (uVar22 == 99) {
        return 0;
      }
    }
LAB_008c2670:
    if (uVar18 != 0xc) {
      return 0;
    }
    lVar14 = *(long *)PTR_DAT_04bb39b0;
    pbVar15 = PTR_DAT_04bb32e0;
    if (lVar14 == 0) {
LAB_008c2d64:
      if (7 < *pbVar15) {
LAB_008c2d70:
        if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
          lVar14 = **(long **)PTR_DAT_04bb27d0;
          bVar21 = *(byte *)(lVar14 + 0x473);
          pbVar15 = PTR_DAT_04bb5038;
          if ((long)(char)bVar21 != 0xffffffffffffffff) {
            puVar2 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar21 & 0xffffffffU) * 0x20;
            if (7 < bVar21) {
              puVar2 = (uint *)(lVar14 + 0x48);
            }
            if ((*puVar2 & 8) != 0) {
              pbVar15 = (byte *)(lVar14 + 0x471);
            }
          }
          bVar21 = *pbVar15;
          if (bVar21 < 8) goto LAB_008c2de0;
        }
        pbVar15 = PTR_DAT_04bb5038;
      }
    }
    else {
      if (*(int *)(lVar14 + 0x15c) != 0) {
        pbVar15 = (byte *)(lVar14 + 0x158);
      }
      if (7 < *pbVar15) {
        if ((*(int *)(lVar14 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar15 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_008c2d64;
        }
        goto LAB_008c2d70;
      }
    }
    bVar21 = *pbVar15;
    if (7 < bVar21) {
      bVar21 = 0xff;
    }
LAB_008c2de0:
    *(undefined8 *)(param_1 + 0x307c0) = *(undefined8 *)(param_1 + 0x2a8);
    *(undefined4 *)(param_1 + 0x307c8) = *(undefined4 *)(param_1 + 0x2b0);
    FUN_008c3440(param_1,*(undefined4 *)(param_1 + 0x410));
    if (7 < bVar21) {
      bVar21 = 0xff;
    }
    iVar11 = *(int *)(*(long *)puVar24 + 0x15c);
    *(byte *)(param_1 + 0x309b8) = bVar21;
    if (iVar11 == 0) {
      *(undefined4 *)(param_1 + 0x307e4) = 0xc;
      uVar12 = 3;
    }
    else {
      uVar12 = 8;
      *(undefined4 *)(param_1 + 0x307e4) = *(undefined4 *)(param_1 + 0x307e8);
    }
    *(undefined4 *)(param_1 + 0x307ec) = 8;
    FUN_03ebb160(param_1 + 0x408,uVar12);
    return 1;
  }
LAB_008c2234:
  local_12d = 0;
  local_124 = (undefined *)0x7fc000007fc00000;
  local_11c = NAN;
  local_158 = local_14c;
  local_150 = 0x20;
  local_160 = (long *)(puVar6 + 0x10);
  local_78 = (long *)(puVar24 + 0x10);
  local_14c[0] = '\0';
  local_70 = "AmiiboCall";
  (**(code **)(local_f8 + 0x18))(&local_f8);
  (**(code **)(local_f8 + 0x18))(&local_f8);
  pcVar23 = local_f0;
  (**(code **)((long)local_78 + 0x18))(&local_78);
  if (pcVar23 == local_70) {
LAB_008c24b0:
    iVar11 = FUN_00742510(*(long *)PTR_DAT_04bb27c0,0x4c,
                          *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8));
    if (local_158 != "TanuPort_Off") {
      pcVar23 = "TanuPort_Off";
      bVar10 = SBORROW4(local_150,0xc);
      iVar3 = local_150 + -0xc;
      bVar9 = local_150 == 0xc;
      iVar13 = 0xc;
LAB_008c279c:
      pcVar17 = local_158;
      if (bVar9 || iVar3 < 0 != bVar10) {
        iVar13 = local_150 + -1;
      }
      __n = (size_t)iVar13;
      memcpy(local_158,pcVar23,__n);
LAB_008c27b0:
      pcVar17[__n] = '\0';
    }
LAB_008c27b4:
    bVar9 = true;
  }
  else {
    uVar19 = 0;
    bVar9 = true;
    do {
      if (local_f0[uVar19] != local_70[uVar19]) break;
      if (local_f0[uVar19] == '\0') {
        if (bVar9) goto LAB_008c24b0;
        break;
      }
      bVar9 = uVar19 < 0x80000;
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x80001);
    local_78 = (long *)(puVar24 + 0x10);
    local_70 = "MyDesignExchange";
    (**(code **)(local_f8 + 0x18))(&local_f8);
    (**(code **)(local_f8 + 0x18))(&local_f8);
    pcVar23 = local_f0;
    (**(code **)((long)local_78 + 0x18))(&local_78);
    if (pcVar23 == local_70) {
LAB_008c2750:
      iVar11 = FUN_00742510(*(long *)PTR_DAT_04bb27c0,0xa5,
                            *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8));
      if (local_158 != "TailorDevice_Off") {
        pcVar23 = "TailorDevice_Off";
        bVar10 = SBORROW4(local_150,0x10);
        iVar3 = local_150 + -0x10;
        bVar9 = local_150 == 0x10;
        iVar13 = 0x10;
        goto LAB_008c279c;
      }
      goto LAB_008c27b4;
    }
    uVar19 = 0;
    bVar9 = true;
    do {
      if (local_f0[uVar19] != local_70[uVar19]) break;
      if (local_f0[uVar19] == '\0') {
        if (bVar9) goto LAB_008c2750;
        break;
      }
      bVar9 = uVar19 < 0x80000;
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x80001);
    local_78 = (long *)(puVar24 + 0x10);
    local_70 = "MyDesignExchangeInDream";
    (**(code **)(local_f8 + 0x18))(&local_f8);
    (**(code **)(local_f8 + 0x18))(&local_f8);
    pcVar23 = local_f0;
    (**(code **)((long)local_78 + 0x18))(&local_78);
    if (pcVar23 == local_70) {
LAB_008c2be4:
      uVar19 = FUN_0118b0a0(&local_78,0x637b47b3);
      if ((uVar19 & 1) != 0) {
        local_11c = local_70._0_4_;
        local_124 = (undefined *)local_78;
        lVar14 = *(long *)PTR_DAT_04bb27c8;
        if (((lVar14 == 0) || (*(long *)(lVar14 + 0xa8) == 0)) ||
           (*(char *)(lVar14 + 0x11c8) != '\0')) {
          uVar25 = 0xc3fa0000;
        }
        else {
          uVar25 = FUN_0093a950(lVar14 + 0x28,&local_124,0);
        }
        local_124 = (undefined *)CONCAT44(uVar25,(float)local_124);
      }
      pcVar17 = local_158;
      if (local_158 == "DreamTailorDevice_Off") {
        iVar11 = 0;
        goto LAB_008c27b4;
      }
      iVar11 = 0x15;
      if (local_150 < 0x16) {
        iVar11 = local_150 + -1;
      }
      __n = (size_t)iVar11;
      memcpy(local_158,"DreamTailorDevice_Off",__n);
      iVar11 = 0;
      goto LAB_008c27b0;
    }
    uVar19 = 0;
    bVar9 = true;
    do {
      if (local_f0[uVar19] != local_70[uVar19]) break;
      if (local_f0[uVar19] == '\0') {
        if (bVar9) goto LAB_008c2be4;
        break;
      }
      bVar9 = uVar19 < 0x80000;
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x80001);
    iVar11 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&local_f8,PTR_DAT_04bb3238,1);
    bVar9 = false;
  }
  lVar14 = *(long *)PTR_DAT_04bb39b0;
  if (lVar14 == 0) {
    uVar19 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_008c282c;
LAB_008c2898:
    if (*(long *)PTR_DAT_04bb4718 == 0) goto LAB_008c2944;
    iVar3 = *(int *)(*(long *)PTR_DAT_04bb4718 + uVar19 * 4 + 0xde8);
  }
  else {
    pbVar15 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar14 + 0x15c) != 0) {
      pbVar15 = (byte *)(lVar14 + 0x158);
    }
    uVar19 = (ulong)*pbVar15;
    if ((*pbVar15 < 8) ||
       (((*(int *)(lVar14 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (bVar21 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), uVar19 = (ulong)bVar21, bVar21 < 8)
        ))) goto LAB_008c2898;
LAB_008c282c:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar14 = **(long **)PTR_DAT_04bb27d0;
      bVar21 = *(byte *)(lVar14 + 0x473);
      pbVar15 = PTR_DAT_04bb5038;
      if ((long)(char)bVar21 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar21 & 0xffffffffU) * 0x20;
        if (7 < bVar21) {
          puVar2 = (uint *)(lVar14 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar15 = (byte *)(lVar14 + 0x471);
        }
      }
      uVar19 = (ulong)*pbVar15;
      if (*pbVar15 < 8) goto LAB_008c2898;
    }
    uVar19 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_008c2898;
LAB_008c2944:
    iVar3 = *(int *)PTR_DAT_04bb3238;
  }
  if (iVar11 == 0) {
    if (((NAN((float)local_124)) || (NAN(local_124._4_4_))) || ((NAN(local_11c) || (iVar3 == 0)))) {
      return 0;
    }
    if (!bVar9) goto LAB_008c2a08;
    uVar5 = *(ushort *)PTR_DAT_04bb6298;
    uVar19 = (ulong)(short)uVar5;
    if (uVar19 == 0xffffffffffffffff) {
      uVar18 = 0;
      uVar22 = 0;
    }
    else {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar19 & 0xffffffff) * 8);
      if (0xff < uVar5) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar18 = *puVar2 & 1;
      local_78 = (long *)CONCAT44((int)((ulong)local_78 >> 0x20),1);
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar19 & 0xffffffff) * 8);
      if (0xff < uVar5) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar22 = *puVar2 >> 1 & 1;
    }
    if ((uVar18 != 0) || (uVar22 != 0)) {
      local_88 = puVar24 + 0x10;
      lVar14 = 0x39;
      if (uVar22 == 0) {
        lVar14 = 0;
      }
      lVar1 = 0x38;
      if (uVar18 == 0) {
        lVar1 = lVar14;
      }
      local_70 = (&PTR_s_cNormal_04922de8)[lVar1];
      local_80 = PTR_s_cDefault_04bb5888 + 0x1e;
      local_78 = (long *)local_88;
      FUN_008d9d70(param_1,&local_78,&local_88,iVar3,&local_124,0);
    }
  }
  else {
    if (iVar3 == 0) {
      return 0;
    }
    if (!bVar9) {
LAB_008c2a08:
      local_78 = (long *)(puVar24 + 0x10);
      local_70 = PTR_s_cDefault_04bb5888 + 0x1e;
      FUN_008c8f80(param_1,iVar3,iVar11,0,0,&local_78);
      *(undefined1 *)(param_1 + 0x37fbc) = 0;
      return 1;
    }
    FUN_008c8c10(param_1,iVar3,iVar11,0);
  }
  pcVar17 = *(char **)(param_1 + 0x37fe0);
  *(undefined1 *)(param_1 + 0x37fbc) = 1;
  (*(code *)local_160[3])(&local_160);
  pcVar23 = local_158;
  if (pcVar17 != local_158) {
    (*(code *)local_160[3])(&local_160);
    lVar14 = 0;
    do {
      if (local_158[lVar14] == '\0') goto LAB_008c2cc0;
      if (local_158[lVar14 + 1] == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_008c2cc0;
      }
      if (local_158[lVar14 + 2] == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_008c2cc0;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_008c2cc0:
    iVar11 = (int)lVar14;
    if (*(int *)(param_1 + 0x37fe8) <= (int)lVar14) {
      iVar11 = *(int *)(param_1 + 0x37fe8) + -1;
    }
    memcpy(pcVar17,pcVar23,(long)iVar11);
    pcVar17[iVar11] = '\0';
  }
  return 1;
}


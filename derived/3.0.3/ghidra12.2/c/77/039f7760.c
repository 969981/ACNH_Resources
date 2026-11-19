
void FUN_039f7760(long param_1,undefined *param_2,long *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  bool bVar7;
  undefined1 uVar8;
  void *__src;
  undefined4 *puVar9;
  byte bVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  short *psVar15;
  long lVar16;
  ulong uVar17;
  uint *puVar18;
  byte bVar19;
  byte bVar20;
  undefined1 *puVar21;
  long lVar22;
  undefined4 uVar23;
  undefined8 local_100;
  undefined *local_d0;
  char *local_c8;
  byte *local_c0;
  long local_b8;
  char *local_b0;
  long local_a8;
  undefined *local_a0;
  long local_98;
  undefined *local_90;
  undefined *local_88;
  char *local_80;
  
  lVar22 = *(long *)(param_2 + 0x10);
  FUN_039f75e0();
  puVar4 = PTR_DAT_04bb2020;
  lVar12 = *(long *)(lVar22 + 0x18);
  if (lVar12 == 0) {
LAB_039f78b8:
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  else {
    uVar14 = (ulong)*(ushort *)(lVar12 + 0xc);
    puVar18 = (uint *)((int *)(lVar12 + 8) + uVar14 * 4);
    uVar1 = *puVar18;
    if (*(int *)(lVar12 + 8) < (int)uVar1) {
      do {
        if (uVar1 < 0x90) {
          uVar17 = (ulong)((byte)"gsys_priority_hint"[0x11 - (ulong)(uVar1 >> 3)] >>
                          ((ulong)uVar1 & 7)) & 1;
        }
        else {
          uVar17 = 0;
        }
        uVar14 = (ulong)*(ushort *)(lVar12 + 8 + uVar14 * 0x10 + uVar17 * 2 + 4);
        puVar18 = (uint *)(lVar12 + 8 + uVar14 * 0x10);
        bVar7 = (int)uVar1 < (int)*puVar18;
        uVar1 = *puVar18;
      } while (bVar7);
    }
    psVar15 = *(short **)(puVar18 + 2);
    if ((((*psVar15 != 0x12) ||
         ((*(long *)(psVar15 + 1) != s_gsys_priority_hint_040ebeba._0_8_ ||
          *(long *)(psVar15 + 5) != s_gsys_priority_hint_040ebeba._8_8_) ||
          psVar15[9] != s_gsys_priority_hint_040ebeba._16_2_)) ||
        (uVar14 = (long)puVar18 + (-0x18 - lVar12),
        ((uVar14 ^ 0xffffffffffffffff) & 0xffffffff0) == 0)) ||
       (((*(long *)(lVar22 + 0x10) == 0 ||
         (lVar12 = *(long *)(lVar22 + 0x10) + (long)(int)(uVar14 >> 4) * 0x18,
         *(short *)(lVar12 + 0x10) == 0)) || (*(char *)(lVar12 + 0x12) != '\x02'))))
    goto LAB_039f78b8;
    local_d0 = PTR_DAT_04bb2020 + 0x10;
    local_c8 = (char *)(**(long **)(lVar12 + 8) + 2);
    uVar8 = FUN_0399d9c0(&local_d0);
    *(undefined1 *)(param_1 + 0xb) = uVar8;
  }
  lVar12 = *(long *)(lVar22 + 0x18);
  uVar8 = 0;
  if (lVar12 != 0) {
    uVar14 = (ulong)*(ushort *)(lVar12 + 0xc);
    puVar18 = (uint *)((int *)(lVar12 + 8) + uVar14 * 4);
    uVar1 = *puVar18;
    if (*(int *)(lVar12 + 8) < (int)uVar1) {
      do {
        if (uVar1 < 0x68) {
          uVar17 = (ulong)((byte)"gsys_priority"[0xc - (ulong)(uVar1 >> 3)] >> ((ulong)uVar1 & 7)) &
                   1;
        }
        else {
          uVar17 = 0;
        }
        uVar14 = (ulong)*(ushort *)(lVar12 + 8 + uVar14 * 0x10 + uVar17 * 2 + 4);
        puVar18 = (uint *)(lVar12 + 8 + uVar14 * 0x10);
        bVar7 = (int)uVar1 < (int)*puVar18;
        uVar1 = *puVar18;
      } while (bVar7);
    }
    psVar15 = *(short **)(puVar18 + 2);
    if (((*psVar15 == 0xd) &&
        (*(long *)(psVar15 + 1) ==
         CONCAT35(s_gsys_priority_0409e429._5_3_,s_gsys_priority_0409e429._0_5_) &&
         *(long *)((long)psVar15 + 7) ==
         CONCAT53(s_gsys_priority_0409e429._8_5_,s_gsys_priority_0409e429._5_3_))) &&
       ((uVar14 = (long)puVar18 + (-0x18 - lVar12),
        ((uVar14 ^ 0xffffffffffffffff) & 0xffffffff0) != 0 &&
        (((*(long *)(lVar22 + 0x10) != 0 &&
          (lVar12 = *(long *)(lVar22 + 0x10) + (long)(int)(uVar14 >> 4) * 0x18,
          *(short *)(lVar12 + 0x10) != 0)) && (*(char *)(lVar12 + 0x12) == '\0')))))) {
      uVar8 = (undefined1)**(undefined4 **)(lVar12 + 8);
    }
    else {
      uVar8 = 0;
    }
  }
  *(undefined1 *)(param_1 + 0xc) = uVar8;
  FUN_039f8bf0(&local_d0,lVar22,0);
  local_88 = puVar4 + 0x10;
  local_80 = "opaque";
  (**(code **)(local_d0 + 0x18))(&local_d0);
  (**(code **)(local_d0 + 0x18))(&local_d0);
  pcVar5 = local_c8;
  (**(code **)(local_88 + 0x18))(&local_88);
  if (pcVar5 == local_80) {
LAB_039f7a54:
    local_100._0_4_ = 0;
    bVar19 = 0;
LAB_039f7b9c:
    local_100 = (ulong)(uint)local_100;
LAB_039f7ba4:
    FUN_039f8bf0(&local_d0,lVar22,1);
    local_88 = puVar4 + 0x10;
    local_80 = "both";
    (**(code **)(local_d0 + 0x18))(&local_d0);
    (**(code **)(local_d0 + 0x18))(&local_d0);
    pcVar5 = local_c8;
    (**(code **)(local_88 + 0x18))(&local_88);
    if (pcVar5 == local_80) {
LAB_039f7c50:
      uVar8 = 2;
LAB_039f7ec4:
      *(undefined1 *)(param_1 + 10) = uVar8;
    }
    else {
      uVar14 = 0;
      bVar7 = true;
      do {
        if (local_c8[uVar14] != local_80[uVar14]) break;
        if (local_c8[uVar14] == '\0') {
          if (bVar7) goto LAB_039f7c50;
          break;
        }
        bVar7 = uVar14 < 0x80000;
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x80001);
      local_88 = puVar4 + 0x10;
      local_80 = "front";
      (**(code **)(local_d0 + 0x18))(&local_d0);
      (**(code **)(local_d0 + 0x18))(&local_d0);
      pcVar5 = local_c8;
      (**(code **)(local_88 + 0x18))(&local_88);
      if (pcVar5 == local_80) {
LAB_039f7d78:
        uVar8 = 1;
        goto LAB_039f7ec4;
      }
      uVar14 = 0;
      bVar7 = true;
      do {
        if (local_c8[uVar14] != local_80[uVar14]) break;
        if (local_c8[uVar14] == '\0') {
          if (bVar7) goto LAB_039f7d78;
          break;
        }
        bVar7 = uVar14 < 0x80000;
        uVar14 = uVar14 + 1;
      } while (uVar14 != 0x80001);
      local_88 = puVar4 + 0x10;
      local_80 = "back";
      (**(code **)(local_d0 + 0x18))(&local_d0);
      (**(code **)(local_d0 + 0x18))(&local_d0);
      pcVar5 = local_c8;
      (**(code **)(local_88 + 0x18))(&local_88);
      if (pcVar5 == local_80) {
LAB_039f7e18:
        *(undefined1 *)(param_1 + 10) = 0;
      }
      else {
        uVar14 = 0;
        bVar7 = true;
        do {
          if (local_c8[uVar14] != local_80[uVar14]) break;
          if (local_c8[uVar14] == '\0') {
            if (bVar7) goto LAB_039f7e18;
            break;
          }
          bVar7 = uVar14 < 0x80000;
          uVar14 = uVar14 + 1;
        } while (uVar14 != 0x80001);
        local_88 = puVar4 + 0x10;
        local_80 = "none";
        (**(code **)(local_d0 + 0x18))(&local_d0);
        (**(code **)(local_d0 + 0x18))(&local_d0);
        pcVar5 = local_c8;
        (**(code **)(local_88 + 0x18))(&local_88);
        if (pcVar5 == local_80) {
LAB_039f7ec0:
          uVar8 = 3;
          goto LAB_039f7ec4;
        }
        uVar14 = 0;
        bVar7 = true;
        do {
          if (local_c8[uVar14] != local_80[uVar14]) break;
          if (local_c8[uVar14] == '\0') {
            if (bVar7) goto LAB_039f7ec0;
            break;
          }
          bVar7 = uVar14 < 0x80000;
          uVar14 = uVar14 + 1;
        } while (uVar14 != 0x80001);
      }
    }
    FUN_039f8bf0(&local_d0,lVar22,3);
    (**(code **)(local_d0 + 0x18))(&local_d0);
    (**(code **)(local_d0 + 0x18))(&local_d0);
    if (local_c8 == "true") {
      bVar20 = 1;
    }
    else if (*local_c8 == 't') {
      uVar14 = 0;
      do {
        uVar17 = uVar14;
        uVar14 = uVar17;
        if (uVar17 == 0x80000) goto LAB_039f7f64;
        if (local_c8[uVar17 + 1] != (&DAT_040a3960)[uVar17]) {
          uVar14 = 0;
          goto LAB_039f7f64;
        }
        uVar14 = uVar17 + 1;
      } while (local_c8[uVar17 + 1] != '\0');
      uVar14 = 1;
LAB_039f7f64:
      bVar20 = uVar17 < 0x80000 & (byte)uVar14;
    }
    else {
      bVar20 = 0;
    }
    FUN_039f8bf0(&local_d0,lVar22,4);
    (**(code **)(local_d0 + 0x18))(&local_d0);
    (**(code **)(local_d0 + 0x18))(&local_d0);
    if (local_c8 == "true") {
      bVar10 = 1;
    }
    else if (*local_c8 == 't') {
      uVar14 = 0;
      do {
        uVar17 = uVar14;
        uVar14 = uVar17;
        if (uVar17 == 0x80000) goto LAB_039f8004;
        if (local_c8[uVar17 + 1] != (&DAT_040a3960)[uVar17]) {
          uVar14 = 0;
          goto LAB_039f8004;
        }
        uVar14 = uVar17 + 1;
      } while (local_c8[uVar17 + 1] != '\0');
      uVar14 = 1;
LAB_039f8004:
      bVar10 = uVar17 < 0x80000 & (byte)uVar14;
    }
    else {
      bVar10 = 0;
    }
    *(byte *)(param_1 + 0x15) = bVar10;
    *(byte *)(param_1 + 0x14) = bVar20;
    FUN_039f8bf0(&local_d0,lVar22,5);
    uVar14 = FUN_039f8d50(&local_d0);
    *(char *)(param_1 + 0x78) = (char)*(undefined4 *)(&DAT_040582c0 + (uVar14 & 0xffffffff) * 4);
    FUN_039f8bf0(&local_d0,lVar22,2);
    local_88 = puVar4 + 0x10;
    local_80 = "none";
    (**(code **)(local_d0 + 0x18))(&local_d0);
    (**(code **)(local_d0 + 0x18))(&local_d0);
    pcVar5 = local_c8;
    (**(code **)(local_88 + 0x18))(&local_88);
    if (pcVar5 == local_80) {
LAB_039f810c:
      iVar11 = 1;
    }
    else if (*local_c8 == *local_80) {
      if (*local_c8 == '\0') goto LAB_039f810c;
      uVar14 = 0;
      do {
        uVar17 = uVar14;
        if ((uVar17 == 0x80000) || (local_c8[uVar17 + 1] != local_80[uVar17 + 1])) {
          iVar13 = 0;
          goto LAB_039f812c;
        }
        if (local_c8[uVar17 + 1] == '\0') goto LAB_039f8104;
        if (local_c8[uVar17 + 2] != local_80[uVar17 + 2]) {
          iVar13 = 0;
          uVar17 = uVar17 | 1;
          goto LAB_039f812c;
        }
        uVar14 = uVar17 + 2;
      } while (local_c8[uVar17 + 2] != '\0');
      uVar17 = uVar17 + 1;
LAB_039f8104:
      iVar13 = 1;
LAB_039f812c:
      iVar11 = 0;
      if (uVar17 < 0x80000) {
        iVar11 = iVar13;
      }
    }
    else {
      iVar11 = 0;
    }
    *(int *)(param_1 + 0x18) = iVar11 + -1;
    local_d0 = (undefined *)0x0;
    local_c8 = (char *)0x3f80000000000000;
    __src = (void *)FUN_039f9130(lVar22,0xf);
    if ((__src != (void *)0x0) && (lVar12 = *(long *)(lVar22 + 0x18), lVar12 != 0)) {
      uVar14 = (ulong)*(ushort *)(lVar12 + 0xc);
      puVar18 = (uint *)((int *)(lVar12 + 8) + uVar14 * 4);
      uVar1 = *puVar18;
      if (*(int *)(lVar12 + 8) < (int)*puVar18) {
        do {
          if (uVar1 < 0xe0) {
            uVar17 = (ulong)((byte)"gsys_color_blend_const_color"[0x1b - (ulong)(uVar1 >> 3)] >>
                            ((ulong)uVar1 & 7)) & 1;
          }
          else {
            uVar17 = 0;
          }
          uVar14 = (ulong)*(ushort *)(lVar12 + 8 + uVar14 * 0x10 + uVar17 * 2 + 4);
          puVar18 = (uint *)(lVar12 + 8 + uVar14 * 0x10);
          bVar7 = (int)uVar1 < (int)*puVar18;
          uVar1 = *puVar18;
        } while (bVar7);
      }
      psVar15 = *(short **)(puVar18 + 2);
      if ((((*psVar15 == 0x1c) &&
           (((*(long *)(psVar15 + 1) == s_gsys_color_blend_const_color_040b823f._0_8_ &&
             *(long *)(psVar15 + 5) == s_gsys_color_blend_const_color_040b823f._8_8_) &&
            *(long *)(psVar15 + 9) == s_gsys_color_blend_const_color_040b823f._16_8_) &&
            *(int *)(psVar15 + 0xd) == s_gsys_color_blend_const_color_040b823f._24_4_)) &&
          (uVar14 = (long)puVar18 + (-0x18 - lVar12),
          ((uVar14 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)) &&
         ((*(long *)(lVar22 + 0x10) != 0 &&
          (uVar14 = (ulong)*(ushort *)
                            (*(long *)(lVar22 + 0x10) + (long)(int)(uVar14 >> 4) * 0x18 + 0x10),
          uVar14 != 0)))) {
        memcpy(&local_d0,__src,uVar14 << 2);
      }
    }
    lVar12 = 0;
    *(undefined **)(param_1 + 0x1c) = local_d0;
    *(char **)(param_1 + 0x24) = local_c8;
    do {
      FUN_039f8bf0(&local_88,lVar22,9);
      uVar14 = 0;
      while( true ) {
        local_c8 = (&PTR_DAT_04b6bc70)[uVar14];
        local_d0 = puVar4 + 0x10;
        (**(code **)(local_88 + 0x18))(&local_88);
        (**(code **)(local_88 + 0x18))(&local_88);
        pcVar5 = local_80;
        (**(code **)(local_d0 + 0x18))(&local_d0);
        if (pcVar5 == local_c8) break;
        uVar17 = 0;
        bVar7 = true;
        do {
          if (local_80[uVar17] != local_c8[uVar17]) break;
          if (local_80[uVar17] == '\0') {
            if (bVar7) goto LAB_039f83b0;
            break;
          }
          if (local_80[uVar17 + 1] != local_c8[uVar17 + 1]) break;
          if (local_80[uVar17 + 1] == '\0') goto LAB_039f83b0;
          if (local_80[uVar17 + 2] != local_c8[uVar17 + 2]) break;
          if (local_80[uVar17 + 2] == '\0') goto LAB_039f83b0;
          bVar7 = uVar17 < 0x7fffe;
          uVar17 = uVar17 + 3;
        } while (uVar17 != 0x80001);
        uVar14 = uVar14 + 1;
        if (uVar14 == 0x13) break;
      }
LAB_039f83b0:
      uVar23 = (&DAT_041b4190)[uVar14 & 0xffffffff];
      FUN_039f8bf0(&local_98,lVar22,10);
      uVar14 = 0;
      while( true ) {
        local_c8 = (&PTR_DAT_04b6bc70)[uVar14];
        local_d0 = puVar4 + 0x10;
        (**(code **)(local_98 + 0x18))(&local_98);
        (**(code **)(local_98 + 0x18))(&local_98);
        puVar6 = local_90;
        (**(code **)(local_d0 + 0x18))(&local_d0);
        if (puVar6 == local_c8) break;
        uVar17 = 0;
        bVar7 = true;
        do {
          if (local_90[uVar17] != local_c8[uVar17]) break;
          if (local_90[uVar17] == '\0') {
            if (bVar7) goto LAB_039f84a0;
            break;
          }
          if (local_90[uVar17 + 1] != local_c8[uVar17 + 1]) break;
          if (local_90[uVar17 + 1] == '\0') goto LAB_039f84a0;
          if (local_90[uVar17 + 2] != local_c8[uVar17 + 2]) break;
          if (local_90[uVar17 + 2] == '\0') goto LAB_039f84a0;
          bVar7 = uVar17 < 0x7fffe;
          uVar17 = uVar17 + 3;
        } while (uVar17 != 0x80001);
        uVar14 = uVar14 + 1;
        if (uVar14 == 0x13) break;
      }
LAB_039f84a0:
      uVar2 = (&DAT_041b4190)[uVar14 & 0xffffffff];
      FUN_039f8bf0(&local_a8,lVar22,0xc);
      uVar14 = 0;
      while( true ) {
        local_c8 = (&PTR_DAT_04b6bc70)[uVar14];
        local_d0 = puVar4 + 0x10;
        (**(code **)(local_a8 + 0x18))(&local_a8);
        (**(code **)(local_a8 + 0x18))(&local_a8);
        puVar6 = local_a0;
        (**(code **)(local_d0 + 0x18))(&local_d0);
        if (puVar6 == local_c8) break;
        uVar17 = 0;
        bVar7 = true;
        do {
          if (local_a0[uVar17] != local_c8[uVar17]) break;
          if (local_a0[uVar17] == '\0') {
            if (bVar7) goto LAB_039f8590;
            break;
          }
          if (local_a0[uVar17 + 1] != local_c8[uVar17 + 1]) break;
          if (local_a0[uVar17 + 1] == '\0') goto LAB_039f8590;
          if (local_a0[uVar17 + 2] != local_c8[uVar17 + 2]) break;
          if (local_a0[uVar17 + 2] == '\0') goto LAB_039f8590;
          bVar7 = uVar17 < 0x7fffe;
          uVar17 = uVar17 + 3;
        } while (uVar17 != 0x80001);
        uVar14 = uVar14 + 1;
        if (uVar14 == 0x13) break;
      }
LAB_039f8590:
      uVar3 = (&DAT_041b4190)[uVar14 & 0xffffffff];
      FUN_039f8bf0(&local_b8,lVar22,0xd);
      uVar14 = 0;
      while( true ) {
        local_c8 = (&PTR_DAT_04b6bc70)[uVar14];
        local_d0 = puVar4 + 0x10;
        (**(code **)(local_b8 + 0x18))(&local_b8);
        (**(code **)(local_b8 + 0x18))(&local_b8);
        pcVar5 = local_b0;
        (**(code **)(local_d0 + 0x18))(&local_d0);
        if (pcVar5 == local_c8) break;
        uVar17 = 0;
        bVar7 = true;
        do {
          if (local_b0[uVar17] != local_c8[uVar17]) break;
          if (local_b0[uVar17] == '\0') {
            if (bVar7) goto LAB_039f8240;
            break;
          }
          if (local_b0[uVar17 + 1] != local_c8[uVar17 + 1]) break;
          if (local_b0[uVar17 + 1] == '\0') goto LAB_039f8240;
          if (local_b0[uVar17 + 2] != local_c8[uVar17 + 2]) break;
          if (local_b0[uVar17 + 2] == '\0') goto LAB_039f8240;
          bVar7 = uVar17 < 0x7fffe;
          uVar17 = uVar17 + 3;
        } while (uVar17 != 0x80001);
        uVar14 = uVar14 + 1;
        if (uVar14 == 0x13) break;
      }
LAB_039f8240:
      puVar21 = (undefined1 *)(param_1 + 0x3c + lVar12 * 6);
      *puVar21 = (char)uVar23;
      puVar21[1] = (char)uVar3;
      puVar21[2] = (char)uVar2;
      puVar21[3] = (char)(&DAT_041b4190)[uVar14 & 0xffffffff];
      FUN_039f8bf0(&local_d0,lVar22,0xb);
      uVar14 = FUN_039f9250(&local_d0);
      uVar23 = *(undefined4 *)(&DAT_041b41dc + (uVar14 & 0xffffffff) * 4);
      FUN_039f8bf0(&local_88,lVar22,0xe);
      uVar14 = FUN_039f9250(&local_88);
      uVar2 = *(undefined4 *)(&DAT_041b41dc + (uVar14 & 0xffffffff) * 4);
      puVar21[4] = (char)uVar23;
      lVar12 = lVar12 + 1;
      puVar21[5] = (char)uVar2;
    } while (lVar12 != 8);
    puVar9 = (undefined4 *)FUN_039f9130(lVar22,8);
    if (puVar9 == (undefined4 *)0x0) {
      uVar23 = 0;
    }
    else {
      uVar23 = *puVar9;
    }
    lVar12 = *(long *)(param_2 + 0x10);
    lVar16 = *(long *)(lVar12 + 0x58);
    if (lVar16 != 0) {
      uVar14 = (ulong)*(ushort *)(lVar16 + 0xc);
      puVar18 = (uint *)((int *)(lVar16 + 8) + uVar14 * 4);
      uVar1 = *puVar18;
      if (*(int *)(lVar16 + 8) < (int)uVar1) {
        do {
          if (uVar1 < 200) {
            uVar17 = (ulong)((byte)"gsys_alpha_test_ref_value"[0x18 - (ulong)(uVar1 >> 3)] >>
                            ((ulong)uVar1 & 7)) & 1;
          }
          else {
            uVar17 = 0;
          }
          uVar14 = (ulong)*(ushort *)(lVar16 + 8 + uVar14 * 0x10 + uVar17 * 2 + 4);
          puVar18 = (uint *)(lVar16 + 8 + uVar14 * 0x10);
          bVar7 = (int)uVar1 < (int)*puVar18;
          uVar1 = *puVar18;
        } while (bVar7);
      }
      psVar15 = *(short **)(puVar18 + 2);
      if (((*psVar15 == 0x19) &&
          (((*(long *)(psVar15 + 1) == 0x706c615f73797367 &&
            *(long *)(psVar15 + 5) == 0x5f747365745f6168) &&
           *(long *)(psVar15 + 9) == 0x756c61765f666572) && (char)psVar15[0xd] == 'e')) &&
         (uVar14 = (long)puVar18 + (-0x18 - lVar16),
         ((uVar14 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)) {
        *(undefined4 *)
         (*(long *)(lVar12 + 0x60) +
         (ulong)*(ushort *)
                 (*(long *)(lVar12 + 0x50) + ((long)(uVar14 * 0x10000000) >> 0x20) * 0x20 + 0x12)) =
             uVar23;
      }
    }
    FUN_039f8bf0(&local_d0,lVar22,7);
    uVar14 = FUN_039f8d50(&local_d0);
    *(undefined4 *)(param_1 + 0x2c) = uVar23;
    *(char *)(param_1 + 0x7a) = (char)*(undefined4 *)(&DAT_040582c0 + (uVar14 & 0xffffffff) * 4);
    FUN_039f8bf0(&local_d0,lVar22,6);
    (**(code **)(local_d0 + 0x18))(&local_d0);
    (**(code **)(local_d0 + 0x18))(&local_d0);
    if (local_c8 == "true") {
      bVar20 = 1;
    }
    else if (*local_c8 == 't') {
      uVar14 = 0;
      do {
        uVar17 = uVar14;
        uVar14 = uVar17;
        if (uVar17 == 0x80000) goto LAB_039f88e4;
        if (local_c8[uVar17 + 1] != (&DAT_040a3960)[uVar17]) {
          uVar14 = 0;
          goto LAB_039f88e4;
        }
        uVar14 = uVar17 + 1;
      } while (local_c8[uVar17 + 1] != '\0');
      uVar14 = 1;
LAB_039f88e4:
      bVar20 = uVar17 < 0x80000 & (byte)uVar14;
    }
    else {
      bVar20 = 0;
    }
    *(byte *)(param_1 + 0x16) = bVar20;
  }
  else {
    uVar14 = 0;
    bVar7 = true;
    do {
      if (local_c8[uVar14] != local_80[uVar14]) break;
      if (local_c8[uVar14] == '\0') {
        if (bVar7) goto LAB_039f7a54;
        break;
      }
      bVar7 = uVar14 < 0x80000;
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x80001);
    local_88 = puVar4 + 0x10;
    local_80 = "mask";
    (**(code **)(local_d0 + 0x18))(&local_d0);
    (**(code **)(local_d0 + 0x18))(&local_d0);
    pcVar5 = local_c8;
    (**(code **)(local_88 + 0x18))(&local_88);
    if (pcVar5 == local_80) {
LAB_039f7af0:
      local_100._0_4_ = 0;
      bVar19 = 1;
      goto LAB_039f7b9c;
    }
    uVar14 = 0;
    bVar7 = true;
    do {
      if (local_c8[uVar14] != local_80[uVar14]) break;
      if (local_c8[uVar14] == '\0') {
        if (bVar7) goto LAB_039f7af0;
        break;
      }
      bVar7 = uVar14 < 0x80000;
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x80001);
    local_88 = puVar4 + 0x10;
    local_80 = "translucent";
    (**(code **)(local_d0 + 0x18))(&local_d0);
    (**(code **)(local_d0 + 0x18))(&local_d0);
    pcVar5 = local_c8;
    (**(code **)(local_88 + 0x18))(&local_88);
    if (pcVar5 == local_80) {
LAB_039f7b90:
      bVar19 = 2;
      local_100._0_4_ = 1;
      goto LAB_039f7b9c;
    }
    uVar14 = 0;
    bVar7 = true;
    do {
      if (local_c8[uVar14] != local_80[uVar14]) break;
      if (local_c8[uVar14] == '\0') {
        if (bVar7) goto LAB_039f7b90;
        break;
      }
      bVar7 = uVar14 < 0x80000;
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x80001);
    local_88 = puVar4 + 0x10;
    local_80 = "custom";
    (**(code **)(local_d0 + 0x18))(&local_d0);
    (**(code **)(local_d0 + 0x18))(&local_d0);
    pcVar5 = local_c8;
    (**(code **)(local_88 + 0x18))(&local_88);
    if (pcVar5 == local_80) {
LAB_039f7ea8:
      local_100 = 0x100000000;
      bVar19 = 5;
      goto LAB_039f7ba4;
    }
    uVar14 = 0;
    bVar7 = true;
    do {
      if (local_c8[uVar14] != local_80[uVar14]) break;
      if (local_c8[uVar14] == '\0') {
        if (bVar7) goto LAB_039f7ea8;
        bVar19 = 0;
        local_100 = 0;
        goto LAB_039f88f4;
      }
      bVar7 = uVar14 < 0x80000;
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x80001);
    bVar19 = 0;
    local_100 = 0;
  }
LAB_039f88f4:
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xf8 | bVar19;
  lVar12 = *(long *)(lVar22 + 0x18);
  if (lVar12 != 0) {
    uVar14 = (ulong)*(ushort *)(lVar12 + 0xc);
    puVar18 = (uint *)((int *)(lVar12 + 8) + uVar14 * 4);
    uVar1 = *puVar18;
    if (*(int *)(lVar12 + 8) < (int)uVar1) {
      do {
        if (uVar1 < 0x48) {
          uVar17 = (ulong)((byte)"gsys_pass"[8 - (ulong)(uVar1 >> 3)] >> ((ulong)uVar1 & 7)) & 1;
        }
        else {
          uVar17 = 0;
        }
        uVar14 = (ulong)*(ushort *)(lVar12 + 8 + uVar14 * 0x10 + uVar17 * 2 + 4);
        puVar18 = (uint *)(lVar12 + 8 + uVar14 * 0x10);
        bVar7 = (int)uVar1 < (int)*puVar18;
        uVar1 = *puVar18;
      } while (bVar7);
    }
    psVar15 = *(short **)(puVar18 + 2);
    if (((*psVar15 == 9) &&
        (*(long *)(psVar15 + 1) == s_gsys_pass_040d1a40._0_8_ &&
         (char)psVar15[5] == s_gsys_pass_040d1a40[8])) &&
       (uVar14 = (long)puVar18 + (-0x18 - lVar12),
       ((uVar14 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)) {
      lVar12 = *(long *)(lVar22 + 0x10);
      *(undefined1 *)(param_1 + 0xd) = 0;
      if (((lVar12 != 0) &&
          (lVar12 = lVar12 + (long)(int)(uVar14 >> 4) * 0x18, *(short *)(lVar12 + 0x10) != 0)) &&
         (*(char *)(lVar12 + 0x12) == '\x02')) {
        local_d0 = puVar4 + 0x10;
        local_c8 = (char *)(**(long **)(lVar12 + 8) + 2);
        if (local_c8 == "seal") {
LAB_039f8abc:
          bVar20 = 3;
          if ((uint)local_100 == 0 && local_100._4_4_ == 0) {
            bVar20 = bVar19;
          }
          bVar19 = bVar20;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
          *(undefined1 *)(param_1 + 0xd) = 1;
        }
        else {
          uVar14 = 0;
          bVar7 = true;
          do {
            if (local_c8[uVar14] != (&DAT_04079a12)[uVar14]) break;
            if (local_c8[uVar14] == '\0') {
              if (bVar7) goto LAB_039f8abc;
              break;
            }
            bVar7 = uVar14 < 0x80000;
            uVar14 = uVar14 + 1;
          } while (uVar14 != 0x80001);
          if (local_c8 == "xlu_water") {
LAB_039f8b30:
            bVar20 = 4;
            if ((uint)local_100 == 0 && local_100._4_4_ == 0) {
              bVar20 = bVar19;
            }
            bVar19 = bVar20;
            *(undefined1 *)(param_1 + 0xd) = 2;
          }
          else {
            uVar14 = 0;
            bVar7 = true;
            do {
              if (local_c8[uVar14] != "xlu_water"[uVar14]) break;
              if (local_c8[uVar14] == '\0') {
                if (bVar7) goto LAB_039f8b30;
                break;
              }
              bVar7 = uVar14 < 0x80000;
              uVar14 = uVar14 + 1;
            } while (uVar14 != 0x80001);
            FUN_006bd3a4(&local_d0);
            if (local_c8 == "reduced_buffer") {
LAB_039f8ba4:
              if (((uint)local_100 | local_100._4_4_) == 1) {
                *(uint *)(param_2 + 0x188) = *(uint *)(param_2 + 0x188) | 0x80;
              }
              *(undefined1 *)(param_1 + 0xd) = 3;
            }
            else {
              uVar14 = 0;
              bVar7 = true;
              do {
                if (local_c8[uVar14] != "reduced_buffer"[uVar14]) break;
                if (local_c8[uVar14] == '\0') {
                  if (bVar7) goto LAB_039f8ba4;
                  break;
                }
                bVar7 = uVar14 < 0x80000;
                uVar14 = uVar14 + 1;
              } while (uVar14 != 0x80001);
              if (local_100._4_4_ != 0) {
                if (*(char *)(param_1 + 0x15) != '\0') {
                  *(uint *)(param_2 + 0x188) = *(uint *)(param_2 + 0x188) | 0x100;
                }
                bVar19 = 5;
              }
            }
          }
        }
      }
      goto LAB_039f89cc;
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
LAB_039f89cc:
  local_c0 = (byte *)(param_1 + 8);
  *local_c0 = bVar19;
  if (param_3 != (long *)0x0) {
    local_d0 = param_2;
    local_c8 = (char *)param_1;
    (**(code **)(*param_3 + 0x18))(param_3,&local_d0);
  }
  return;
}


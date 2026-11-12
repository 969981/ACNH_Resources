
void FUN_00b3b390(long param_1,long *param_2,long *param_3,byte param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  char *pcVar21;
  long lVar22;
  byte *pbVar23;
  uint uVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined1 *__dest;
  long *plVar27;
  uint uVar28;
  long lVar29;
  uint uVar30;
  char *pcVar31;
  long lVar32;
  char *local_328;
  undefined8 local_300;
  uint local_2f4;
  undefined *local_2f0;
  char *local_2e8;
  undefined4 local_2e0;
  char local_2dc [15];
  undefined1 local_2cd;
  undefined1 local_1dd;
  uint local_1d8;
  uint local_1d4;
  undefined8 local_1d0;
  undefined1 uStack_1c8;
  byte local_1c7;
  undefined1 uStack_1c6;
  byte local_1c5;
  undefined2 uStack_1c4;
  undefined2 local_1c2;
  undefined6 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  long local_190;
  undefined8 local_188;
  undefined *local_f8;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined1 local_e4 [31];
  undefined1 local_c5;
  undefined8 local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined4 local_a8;
  undefined *local_a0;
  char *local_98;
  int local_90;
  char local_8c [31];
  undefined1 local_6d;
  
  puVar1 = PTR_DAT_04bb3240;
  **(undefined1 **)(param_1 + 0xc0) = 0;
  pbVar23 = PTR_DAT_04bb37d8;
  lVar29 = *(long *)puVar1;
  lVar32 = *(long *)PTR_DAT_04bb28f8;
  if (*(long *)(param_1 + 8) == 0) {
    plVar27 = (long *)0x0;
  }
  else {
    plVar27 = *(long **)(*(long *)(param_1 + 8) + 0x48);
  }
  if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar14 != 0)) {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  if ((plVar27 == (long *)0x0) ||
     (uVar18 = (**(code **)(*plVar27 + 0x20))(plVar27,PTR_DAT_04bb37d0), (uVar18 & 1) == 0)) {
    local_6d = 0;
    local_90 = 0x20;
    local_8c[0] = '\0';
    local_98 = local_8c;
    uVar17 = 0;
    local_a0 = PTR_DAT_04bb2028 + 0x10;
  }
  else {
    local_6d = 0;
    local_8c[0] = '\0';
    local_90 = 0x20;
    uVar17 = *(uint *)(plVar27 + 0x46);
    local_a0 = PTR_DAT_04bb2028 + 0x10;
    local_98 = local_8c;
    if (uVar17 != 0) {
      (**(code **)(plVar27[0x7c] + 0x18))(plVar27 + 0x7c);
      pcVar31 = (char *)plVar27[0x7d];
      if (local_8c != pcVar31) {
        (**(code **)(plVar27[0x7c] + 0x18))(plVar27 + 0x7c);
        lVar20 = 0;
        do {
          if (*(char *)(plVar27[0x7d] + lVar20) == '\0') goto LAB_00b3b524;
          lVar22 = plVar27[0x7d] + lVar20;
          if (*(char *)(lVar22 + 1) == '\0') {
            lVar20 = lVar20 + 1;
            goto LAB_00b3b524;
          }
          if (*(char *)(lVar22 + 2) == '\0') {
            lVar20 = lVar20 + 2;
            goto LAB_00b3b524;
          }
          lVar20 = lVar20 + 3;
        } while (lVar20 != 0x80001);
        lVar20 = 0;
LAB_00b3b524:
        iVar14 = (int)lVar20;
        if (local_90 <= (int)lVar20) {
          iVar14 = local_90 + -1;
        }
        memcpy(local_8c,pcVar31,(long)iVar14);
        local_8c[iVar14] = '\0';
      }
      pbVar23 = PTR_DAT_04bb37d8;
    }
  }
  puVar1 = PTR_DAT_04bb27c0;
  local_b0 = (long *)0x0;
  local_a8 = 0x10000;
  lVar20 = *(long *)PTR_DAT_04bb27c0;
  if (lVar20 == 0) {
LAB_00b3b654:
    local_a8._0_3_ = (uint3)(ushort)local_a8;
  }
  else {
    if ((((uVar17 == 0) ||
         (plVar27 = *(long **)(*(long *)(*(long *)(lVar20 + 0x1c0) + 8) +
                              (ulong)(uVar17 >> 0x14) * 8), plVar27 == (long *)0x0)) ||
        ((*(uint *)(plVar27 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar27 + 0x46) != uVar17)) {
      plVar27 = (long *)0x0;
    }
    local_b0 = plVar27;
    if (*(int *)(lVar20 + 0x288) == 1 || *(int *)(lVar20 + 0x288) == -1) {
      plVar19 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar20 = *(long *)puVar1;
      iVar14 = (**(code **)(*plVar19 + 0x60))();
      if ((0x10 < iVar14) &&
         ((4 < *(uint *)(lVar20 + 0x5e8) ||
          ((1 << (ulong)(*(uint *)(lVar20 + 0x5e8) & 0x1f) & 0x1aU) == 0)))) goto LAB_00b3b60c;
    }
    else {
LAB_00b3b60c:
      local_a8._0_3_ = (uint3)(ushort)local_a8;
    }
    if (plVar27 != (long *)0x0) {
      local_a8 = CONCAT22(local_a8._2_2_,
                          CONCAT11((char)(*(uint *)(plVar27 + 0x49) >> 4),(int)plVar27[0x2a] == 1))
                 & 0xffff01ff;
      if (((*pbVar23 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar14 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar18 = (**(code **)(*plVar27 + 0x20))(plVar27,PTR_DAT_04bb37d0);
      if ((uVar18 & 1) == 0) goto LAB_00b3b654;
    }
  }
  local_b8 = 0;
  if (*(int *)(param_1 + 0x158) == 0) {
    local_b8._4_4_ = 0;
    uVar18 = 0;
  }
  else {
    puVar26 = *(undefined8 **)(param_1 + 0x160);
    puVar2 = puVar26 + *(int *)(param_1 + 0x158);
    do {
      plVar27 = (long *)*puVar26;
      if (*(char *)plVar27[1] != '\0') {
        local_2f0 = (undefined *)((ulong)local_2f0 & 0xffffffff00000000);
        uVar17 = 0;
        do {
          pcVar31 = "";
          if (uVar17 < 0x2a) {
            pcVar31 = (&PTR_s_cNotSet_04937ca0)[uVar17];
          }
          (**(code **)(*plVar27 + 0x18))(plVar27);
          pcVar21 = (char *)plVar27[1];
          if (pcVar31 == pcVar21) {
LAB_00b3b77c:
            local_2f0 = (undefined *)CONCAT44(local_2f0._4_4_,uVar17);
            break;
          }
          if (*pcVar31 == *pcVar21) {
            if (*pcVar31 == '\0') goto LAB_00b3b77c;
            lVar20 = 0x7fffe;
            while( true ) {
              if (pcVar31[1] != pcVar21[1]) break;
              if (pcVar31[1] == '\0') goto LAB_00b3b77c;
              if (pcVar31[2] != pcVar21[2]) break;
              if (pcVar31[2] == '\0') goto LAB_00b3b77c;
              if ((lVar20 == 0) || (cVar8 = pcVar31[3], cVar8 != pcVar21[3])) break;
              lVar20 = lVar20 + -3;
              pcVar21 = pcVar21 + 3;
              pcVar31 = pcVar31 + 3;
              if (cVar8 == '\0') goto LAB_00b3b77c;
            }
          }
          uVar28 = 0x2a;
          if ((int)uVar17 < 0x2a) {
            uVar28 = uVar17 + 1;
          }
          uVar17 = uVar28;
        } while (uVar28 != 0x2a);
        if (((uint)local_2f0 != 0) && ((uint)local_2f0 < 0x2a)) {
          uVar18 = (ulong)((uint)local_2f0 >> 3) & 0x1ffffffc;
          *(uint *)(local_8c + (uVar18 - 0x2c)) =
               *(uint *)(local_8c + (uVar18 - 0x2c)) | 1 << (ulong)((uint)local_2f0 & 0x1f);
        }
      }
      puVar26 = puVar26 + 1;
    } while (puVar26 != puVar2);
    uVar18 = local_b8 & 0xffffffff;
  }
  uVar17 = (int)uVar18 - ((uint)(uVar18 >> 1) & 0x55555555);
  uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
  uVar28 = local_b8._4_4_ - (local_b8._4_4_ >> 1 & 0x55555555);
  uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
  uVar17 = uVar17 + (uVar17 >> 8);
  uVar28 = (uVar28 >> 2 & 0x33333333) + (uVar28 & 0x33333333);
  uVar28 = uVar28 + (uVar28 >> 4) & 0xf0f0f0f;
  uVar28 = uVar28 + (uVar28 >> 8);
  local_c0 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  uVar24 = (uint)((ulong)local_c0 >> 0x20) & 0xff;
  if (**(int **)PTR_DAT_04bb3448 == 6) {
    if (uVar24 < 5) goto LAB_00b3b898;
    if (uVar24 < 8) goto LAB_00b3b8a8;
    if (uVar24 < 0xd) goto LAB_00b3b8b8;
    if (uVar24 < 0x11) goto LAB_00b3b8c8;
    bVar13 = 0x13 < uVar24;
LAB_00b3b8d4:
    local_300 = 3;
    if (bVar13) {
      local_300 = 4;
    }
  }
  else if (uVar24 < 5) {
LAB_00b3b898:
    local_300 = 5;
  }
  else if (uVar24 < 8) {
LAB_00b3b8a8:
    local_300 = 0;
  }
  else if (uVar24 < 0xc) {
LAB_00b3b8b8:
    local_300 = 1;
  }
  else {
    if (0xf < uVar24) {
      bVar13 = 0x12 < uVar24;
      goto LAB_00b3b8d4;
    }
LAB_00b3b8c8:
    local_300 = 2;
  }
  lVar29 = lVar29 + 0x41e0;
  if (*(int *)(param_1 + 0x188) == 0) {
    plVar27 = (long *)0x0;
  }
  else {
    plVar27 = (long *)**(undefined8 **)(param_1 + 400);
  }
  cVar8 = *(char *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x70) + 0xdc);
  cVar9 = *(char *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x70) + 0xdb);
  local_2f0 = PTR_DAT_04bb2020 + 0x10;
  local_2e8 = "/";
  (**(code **)(*plVar27 + 0x18))(plVar27);
  lVar20 = 0;
  do {
    if (*(char *)(plVar27[1] + lVar20) == '\0') goto LAB_00b3b9ac;
    lVar22 = plVar27[1] + lVar20;
    if (*(char *)(lVar22 + 1) == '\0') {
      lVar20 = lVar20 + 1;
      goto LAB_00b3b9ac;
    }
    if (*(char *)(lVar22 + 2) == '\0') {
      lVar20 = lVar20 + 2;
      goto LAB_00b3b9ac;
    }
    lVar20 = lVar20 + 3;
  } while (lVar20 != 0x80001);
  lVar20 = 0;
LAB_00b3b9ac:
  uVar24 = (uint)lVar20;
  (**(code **)(local_2f0 + 0x18))(&local_2f0);
  lVar20 = 0;
  do {
    if (local_2e8[lVar20] == '\0') {
LAB_00b3ba10:
      uVar24 = uVar24 - (int)lVar20;
      if ((int)uVar24 < 0) goto LAB_00b3bab0;
LAB_00b3ba18:
      uVar18 = (ulong)uVar24;
      if ((int)lVar20 < 1) goto LAB_00b3bac8;
      goto LAB_00b3ba28;
    }
    if (local_2e8[lVar20 + 1] == '\0') {
      lVar20 = lVar20 + 1;
      goto LAB_00b3ba10;
    }
    if (local_2e8[lVar20 + 2] == '\0') {
      lVar20 = lVar20 + 2;
      uVar24 = uVar24 - (int)lVar20;
      if (-1 < (int)uVar24) goto LAB_00b3ba18;
      goto LAB_00b3bab0;
    }
    lVar20 = lVar20 + 3;
  } while (lVar20 != 0x80001);
  if (-1 < (int)uVar24) {
LAB_00b3bac8:
    (**(code **)(local_2f0 + 0x18))(&local_2f0);
    iVar14 = *(int *)(param_1 + 0x188);
    goto joined_r0x00b3ba98;
  }
  uVar24 = 0xffffffff;
  if (*(int *)(param_1 + 0x188) == 0) goto LAB_00b3bae0;
LAB_00b3bab8:
  plVar27 = (long *)**(undefined8 **)(param_1 + 400);
  goto LAB_00b3bae4;
  while( true ) {
    pcVar31 = local_2e8;
    lVar25 = lVar20;
    while( true ) {
      lVar25 = lVar25 + -1;
      if (*(char *)(lVar22 + uVar18) != *pcVar31) break;
      if (*(char *)(lVar22 + uVar18) == '\0') goto LAB_00b3ba90;
      lVar22 = lVar22 + 1;
      pcVar31 = pcVar31 + 1;
      if (lVar25 == 0) goto LAB_00b3ba90;
    }
    uVar18 = uVar18 - 1;
    if ((int)uVar24 < 1) break;
LAB_00b3ba28:
    lVar22 = plVar27[1];
    (**(code **)(local_2f0 + 0x18))(&local_2f0);
    uVar24 = (uint)uVar18;
    if ((char *)(lVar22 + uVar18) == local_2e8) {
LAB_00b3ba90:
      iVar14 = *(int *)(param_1 + 0x188);
      goto joined_r0x00b3ba98;
    }
  }
LAB_00b3bab0:
  uVar24 = 0xffffffff;
  iVar14 = *(int *)(param_1 + 0x188);
joined_r0x00b3ba98:
  if (iVar14 != 0) goto LAB_00b3bab8;
LAB_00b3bae0:
  plVar27 = (long *)0x0;
LAB_00b3bae4:
  (**(code **)(*plVar27 + 0x18))(plVar27);
  lVar22 = plVar27[1];
  lVar20 = 0;
  do {
    if (*(char *)(lVar22 + lVar20) == '\0') goto LAB_00b3bb40;
    if (*(char *)(lVar22 + lVar20 + 1) == '\0') {
      lVar20 = lVar20 + 1;
      goto LAB_00b3bb40;
    }
    if (*(char *)(lVar22 + lVar20 + 2) == '\0') {
      lVar20 = lVar20 + 2;
      goto LAB_00b3bb40;
    }
    lVar20 = lVar20 + 3;
  } while (lVar20 != 0x80001);
  lVar20 = 0;
LAB_00b3bb40:
  local_c5 = 0;
  puVar5 = *(undefined1 **)(PTR_PTR_04bb2238 + 8);
  if ((int)uVar24 < (int)lVar20 && -2 < (int)uVar24) {
    puVar5 = (undefined1 *)(lVar22 + (ulong)(uVar24 + 1));
  }
  local_e8 = 0x20;
  local_f8 = PTR_DAT_04bb2a08 + 0x10;
  local_f0 = local_e4;
  if (local_e4 != puVar5) {
    lVar20 = 0;
    do {
      if (puVar5[lVar20] == '\0') {
LAB_00b3bbc8:
        iVar14 = (int)lVar20;
joined_r0x00b3bbcc:
        if (0x1f < iVar14) {
          iVar14 = 0x1f;
        }
        goto LAB_00b3bbd4;
      }
      if (puVar5[lVar20 + 1] == '\0') {
        lVar20 = lVar20 + 1;
        goto LAB_00b3bbc8;
      }
      if (puVar5[lVar20 + 2] == '\0') {
        iVar14 = (int)lVar20 + 2;
        goto joined_r0x00b3bbcc;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    iVar14 = 0;
LAB_00b3bbd4:
    memcpy(local_e4,puVar5,(long)iVar14);
    local_e4[iVar14] = 0;
  }
  local_f8 = PTR_DAT_04bb2028 + 0x10;
  if ((*local_98 == '\0') || (FUN_021d8fe0(&local_f8,&local_a0), *local_98 == '\0')) {
    local_328 = (char *)0x0;
  }
  else {
    (**(code **)(local_a0 + 0x18))(&local_a0);
    local_328 = local_98;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar20 = param_2[1];
  (**(code **)(*param_3 + 0x18))(param_3);
  FUN_0074fda4(&local_190,"%s:%s",lVar20,param_3[1]);
  (**(code **)(local_190 + 0x18))(&local_190);
  uVar15 = FUN_006bd550(local_188,0);
  puVar1 = PTR_DAT_04bb2718;
  FUN_03d53db0(*(undefined8 *)(*(long *)PTR_DAT_04bb2718 + 0x408),&local_f8);
  lVar20 = FUN_03d53db0(*(undefined8 *)(*(long *)puVar1 + 0x408),&local_f8);
  if (lVar20 == 0) {
    bVar13 = false;
    uVar24 = 0xffffffff;
    local_1a0 = 0;
    local_198 = 0;
  }
  else {
    uVar24 = *(uint *)(lVar20 + 8);
    local_1a0 = 0;
    local_198 = 0;
    if ((int)uVar24 < 1) {
      bVar13 = false;
    }
    else {
      uVar16 = 0;
      puVar1 = PTR_DAT_04bb2ab0 + 0x10;
      do {
        local_2e0 = 0x10;
        local_2cd = 0;
        local_2dc[0] = '\0';
        local_2f0 = puVar1;
        local_2e8 = local_2dc;
        uVar18 = FUN_01be94e0(&local_2f0,&local_f8,uVar16);
        if ((uVar18 & 1) != 0) {
          uStack_1c0 = 0;
          local_1d0 = 0;
          uStack_1c8 = 0;
          local_1c7 = 0;
          uStack_1c6 = 0;
          local_1c5 = 0;
          uStack_1c4 = 0;
          local_1c2 = 0;
          local_1b8 = 0;
          FUN_01b970f0(&local_1d0,&local_f8);
          FUN_01b9735c(&local_1d0,&local_f8,&local_2f0);
          iVar14 = (int)local_1d0;
          pbVar23 = (byte *)((long)&local_1d0 + 7);
          if ((int)local_1d0 == 1) {
LAB_00b3bd84:
            local_1d4 = 0;
            if (*pbVar23 < 0x2a) {
              local_1d4 = (uint)*pbVar23;
            }
          }
          else {
            if ((int)local_1d0 == 2) {
              pbVar23 = (byte *)((long)&uStack_1c4 + 1);
              goto LAB_00b3bd84;
            }
            local_1d4 = 0;
          }
          if ((*(uint *)(local_8c + (long)((int)local_1d4 >> 5) * 4 + -0x2c) >>
               (ulong)(local_1d4 & 0x1f) & 1) != 0) {
            bVar3 = local_1c7;
            if ((int)local_1d0 != 1) {
              bVar3 = 0;
            }
            bVar4 = 0;
            if (bVar3 < 0x25) {
              bVar4 = bVar3;
            }
            uVar18 = FUN_00b38c10(&local_c0,local_300,cVar8 != '\0',cVar9 != '\0',bVar4);
            if ((uVar18 & 1) != 0) {
              puVar6 = PTR_DAT_04bb32e0;
              if (*(long *)(param_1 + 8) != 0) {
                puVar6 = (undefined *)(*(long *)(param_1 + 8) + 0x2a8);
              }
              bVar3 = local_1c5;
              if (iVar14 != 1) {
                bVar3 = 0;
              }
              bVar4 = 0;
              if (bVar3 < 0xd) {
                bVar4 = bVar3;
              }
              uVar18 = FUN_00b38de0(&local_b0,puVar6,bVar4);
              if (((uVar18 & 1) != 0) && (uVar16 < 0x80)) {
                lVar20 = (ulong)(uVar16 >> 5) * 4;
                *(uint *)((long)&local_1a0 + lVar20) =
                     *(uint *)((long)&local_1a0 + lVar20) | 1 << (ulong)(uVar16 & 0x1f);
              }
            }
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar24 != uVar16);
      bVar13 = true;
    }
  }
  local_1b0 = local_1a0;
  uStack_1a8 = local_198;
  local_1d4 = FUN_0117e1d0(lVar29,uVar15,local_328);
  uVar16 = FUN_0117e010(lVar29,uVar15,local_328);
  if (bVar13) {
    uVar30 = 0;
    puVar1 = PTR_DAT_04bb2ab0 + 0x10;
    do {
      uVar10 = 1 << (ulong)(uVar30 & 0x1f);
      uVar7 = *(uint *)((long)&local_1a0 + (ulong)(uVar30 >> 5) * 4);
      if ((uVar10 & uVar7) != 0) {
        local_2e0 = 0x10;
        local_2cd = 0;
        local_2dc[0] = '\0';
        local_2f0 = puVar1;
        local_2e8 = local_2dc;
        uVar18 = FUN_01be94e0(&local_2f0,&local_f8,uVar30);
        if ((uVar18 & 1) != 0) {
          if (((1 < (uVar17 + (uVar17 >> 0x10) & 0x3f) + (uVar28 + (uVar28 >> 0x10) & 0x3f) &
               param_4) == 0) || (local_1d4 == 0)) {
LAB_00b3bff0:
            if ((((uVar16 & 1) == 0) ||
                (uVar18 = FUN_01bf8154(lVar32 + 8,&local_f8,&local_2f0), 0x7f < uVar30)) ||
               ((uVar18 & 1) == 0)) goto LAB_00b3bf10;
          }
          else {
            uStack_1c0 = 0;
            local_1d0 = 0;
            uStack_1c8 = 0;
            local_1c7 = 0;
            uStack_1c6 = 0;
            local_1c5 = 0;
            uStack_1c4 = 0;
            local_1c2 = 0;
            local_1b8 = 0;
            FUN_01b970f0(&local_1d0,&local_f8);
            FUN_01b9735c(&local_1d0,&local_f8,&local_2f0);
            pbVar23 = (byte *)((long)&local_1d0 + 7);
            if ((int)local_1d0 == 1) {
LAB_00b3bfb0:
              local_1d8 = 0;
              if (*pbVar23 < 0x2a) {
                local_1d8 = (uint)*pbVar23;
              }
            }
            else {
              if ((int)local_1d0 == 2) {
                pbVar23 = (byte *)((long)&uStack_1c4 + 1);
                goto LAB_00b3bfb0;
              }
              local_1d8 = 0;
            }
            if (local_1d4 != local_1d8) goto LAB_00b3bff0;
            if (0x7f < uVar30) goto LAB_00b3bf10;
          }
          *(uint *)((long)&local_1a0 + (ulong)(uVar30 >> 5) * 4) = uVar7 & (uVar10 ^ 0xffffffff);
        }
      }
LAB_00b3bf10:
      uVar30 = uVar30 + 1;
    } while (uVar24 != uVar30);
  }
  uVar17 = (uint)local_1a0 - ((uint)local_1a0 >> 1 & 0x55555555);
  uVar28 = local_1a0._4_4_ - (local_1a0._4_4_ >> 1 & 0x55555555);
  uVar16 = (uint)local_198 - ((uint)local_198 >> 1 & 0x55555555);
  uVar30 = local_198._4_4_ - (local_198._4_4_ >> 1 & 0x55555555);
  uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
  uVar28 = (uVar28 >> 2 & 0x33333333) + (uVar28 & 0x33333333);
  uVar24 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
  uVar17 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
  uVar24 = uVar24 + (uVar24 >> 8);
  uVar28 = uVar28 + (uVar28 >> 4) & 0xf0f0f0f;
  uVar28 = uVar28 + (uVar28 >> 8);
  uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
  uVar17 = uVar17 + (uVar17 >> 8);
  uVar16 = uVar24 + (uVar24 >> 0x10) & 0x3f;
  uVar28 = (uVar28 + (uVar28 >> 0x10) & 0x3f) + uVar16;
  uVar17 = uVar28 + (uVar17 + (uVar17 >> 0x10) & 0x3f);
  uVar24 = (uVar30 >> 2 & 0x33333333) + (uVar30 & 0x33333333);
  uVar24 = uVar24 + (uVar24 >> 4) & 0xf0f0f0f;
  uVar24 = uVar24 + (uVar24 >> 8);
  uVar24 = uVar24 + (uVar24 >> 0x10) & 0x3f;
  if (uVar24 + uVar17 == 0) {
    local_1a0 = local_1b0;
    uVar11 = local_1a0;
    local_198 = uStack_1a8;
    uVar12 = local_198;
    local_198._4_4_ = (uint)((ulong)uStack_1a8 >> 0x20);
    uVar17 = (uint)local_1b0 - ((uint)local_1b0 >> 1 & 0x55555555);
    uVar28 = (uint)uStack_1a8 - ((uint)uStack_1a8 >> 1 & 0x55555555);
    uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
    local_1a0._4_4_ = (uint)((ulong)local_1b0 >> 0x20);
    uVar28 = (uVar28 >> 2 & 0x33333333) + (uVar28 & 0x33333333);
    uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
    uVar24 = uVar28 + (uVar28 >> 4) & 0xf0f0f0f;
    uVar17 = uVar17 + (uVar17 >> 8);
    uVar24 = uVar24 + (uVar24 >> 8);
    local_1a0._4_4_ = local_1a0._4_4_ - (local_1a0._4_4_ >> 1 & 0x55555555);
    local_198._4_4_ = local_198._4_4_ - (local_198._4_4_ >> 1 & 0x55555555);
    uVar16 = uVar17 + (uVar17 >> 0x10) & 0x3f;
    uVar17 = (local_1a0._4_4_ >> 2 & 0x33333333) + (local_1a0._4_4_ & 0x33333333);
    uVar28 = (local_198._4_4_ >> 2 & 0x33333333) + (local_198._4_4_ & 0x33333333);
    uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
    uVar17 = uVar17 + (uVar17 >> 8);
    uVar30 = uVar28 + (uVar28 >> 4) & 0xf0f0f0f;
    uVar28 = (uVar17 + (uVar17 >> 0x10) & 0x3f) + uVar16;
    uVar17 = uVar28 + (uVar24 + (uVar24 >> 0x10) & 0x3f);
    uVar30 = uVar30 + (uVar30 >> 8);
    uVar24 = uVar30 + (uVar30 >> 0x10) & 0x3f;
    local_1a0 = uVar11;
    local_198 = uVar12;
  }
  iVar14 = uVar17 + uVar24;
  if (iVar14 == 0) {
    return;
  }
  local_1d8 = 0;
  FUN_0117d600(lVar29,&local_1d8,iVar14,uVar15,local_328);
  if ((int)local_1d8 < (int)uVar16) {
    lVar20 = 0;
    uVar17 = 0;
LAB_00b3c230:
    uVar28 = *(uint *)((long)&local_1a0 + lVar20 * 4);
    if (uVar28 == 0) {
      uVar17 = 0xffffffff;
    }
    else {
      iVar14 = (local_1d8 - uVar17) + 2;
      uVar17 = 0xffffffff;
      do {
        iVar14 = iVar14 + -1;
        if (iVar14 < 2) {
          uVar17 = uVar28 - 1 & (uVar28 ^ 0xffffffff);
          uVar17 = uVar17 - (uVar17 >> 1 & 0x55555555);
          uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
          uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
          uVar17 = uVar17 + (uVar17 >> 8);
          uVar17 = uVar17 + (uVar17 >> 0x10) & 0x3f;
          break;
        }
        uVar28 = uVar28 - 1 & uVar28;
      } while (uVar28 != 0);
    }
    iVar14 = uVar17 + (int)lVar20 * 0x20;
  }
  else {
    if ((int)local_1d8 < (int)uVar28) {
      lVar20 = 1;
      uVar17 = uVar16;
      goto LAB_00b3c230;
    }
    if ((int)local_1d8 < (int)uVar17) {
      lVar20 = 2;
      uVar17 = uVar28;
      goto LAB_00b3c230;
    }
    if ((int)local_1d8 < iVar14) {
      lVar20 = 3;
      goto LAB_00b3c230;
    }
    iVar14 = -1;
  }
  local_1dd = 0;
  local_2e0 = 0x100;
  local_2e8 = local_2dc;
  local_2dc[0] = '\0';
  local_2f0 = PTR_DAT_04bb21f8 + 0x10;
  uVar18 = FUN_01be94e0(&local_2f0,&local_f8,iVar14);
  if ((uVar18 & 1) == 0) {
    return;
  }
  uStack_1c0 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c7 = 0;
  uStack_1c6 = 0;
  local_1c5 = 0;
  uStack_1c4 = 0;
  local_1c2 = 0;
  local_1b8 = 0;
  FUN_01b970f0(&local_1d0,&local_f8);
  FUN_01b9735c(&local_1d0,&local_f8,&local_2f0);
  uVar17 = FUN_01bf8154(lVar32 + 8,&local_f8,&local_2f0);
  if ((int)local_1d0 == 2) {
    pbVar23 = (byte *)((long)&uStack_1c4 + 1);
  }
  else {
    if ((int)local_1d0 != 1) {
      local_2f4 = 0;
      goto LAB_00b3c360;
    }
    pbVar23 = (byte *)((ulong)&local_1d0 | 7);
  }
  local_2f4 = 0;
  if (*pbVar23 < 0x2a) {
    local_2f4 = (uint)*pbVar23;
  }
LAB_00b3c360:
  FUN_0117de20(lVar29,&local_2f4,uVar17 & 1,uVar15,local_328);
  __dest = *(undefined1 **)(param_1 + 0xc0);
  (**(code **)(local_f8 + 0x18))(&local_f8);
  puVar5 = local_f0;
  if (__dest != local_f0) {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar29 = 0;
    do {
      if (local_f0[lVar29] == '\0') goto LAB_00b3c3fc;
      if (local_f0[lVar29 + 1] == '\0') {
        lVar29 = lVar29 + 1;
        goto LAB_00b3c3fc;
      }
      if (local_f0[lVar29 + 2] == '\0') {
        lVar29 = lVar29 + 2;
        goto LAB_00b3c3fc;
      }
      lVar29 = lVar29 + 3;
    } while (lVar29 != 0x80001);
    lVar29 = 0;
LAB_00b3c3fc:
    iVar14 = (int)lVar29;
    if (*(int *)(param_1 + 200) <= (int)lVar29) {
      iVar14 = *(int *)(param_1 + 200) + -1;
    }
    memcpy(__dest,puVar5,(long)iVar14);
    __dest[iVar14] = 0;
  }
  (**(code **)(local_2f0 + 0x18))(&local_2f0);
  FUN_038d13f0(param_1 + 0xb8,&DAT_040e92be,local_2e8);
  return;
}


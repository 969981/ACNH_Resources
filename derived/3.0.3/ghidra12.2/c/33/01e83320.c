
/* WARNING: Removing unreachable block (ram,0x01e83b28) */
/* WARNING: Removing unreachable block (ram,0x01e83888) */
/* WARNING: Removing unreachable block (ram,0x01e83968) */
/* WARNING: Removing unreachable block (ram,0x01e83b38) */

void FUN_01e83320(uint *param_1,uint *param_2,undefined1 param_3,byte param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  undefined4 uVar17;
  long lVar18;
  byte *pbVar19;
  long *plVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  byte local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined *local_138 [4];
  int local_114;
  undefined *local_110;
  undefined1 local_108;
  int local_104;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined *local_e8;
  int local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined **local_b8;
  undefined **local_b0;
  undefined **local_a8;
  undefined8 local_98;
  char *pcStack_90;
  int local_88;
  int iStack_84;
  undefined *local_80;
  int local_78;
  int iStack_74;
  byte local_64 [4];
  
  puVar9 = PTR_DAT_04bb3350;
  puVar7 = PTR_DAT_04bb27c0;
  lVar18 = *(long *)PTR_DAT_04bb27c0;
  if (lVar18 == 0) {
    return;
  }
  uVar22 = *param_1;
  if ((((uVar22 == 0) ||
       (plVar20 = *(long **)(*(long *)(*(long *)(lVar18 + 0x1c0) + 8) +
                            ((ulong)(uVar22 >> 0x11) & 0x7ff8)), plVar20 == (long *)0x0)) ||
      ((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar20 + 0x46) != uVar22)) {
    plVar20 = (long *)0x0;
  }
  if (*(int *)(lVar18 + 0x288) == 1 || *(int *)(lVar18 + 0x288) == -1) {
    plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar18 = *(long *)puVar7;
    iVar13 = (**(code **)(*plVar14 + 0x60))();
    if (iVar13 < 0x11) {
      uVar23 = 1;
    }
    else {
      if (4 < *(uint *)(lVar18 + 0x5e8)) goto LAB_01e833f8;
      uVar23 = 0x101000100 >> (((ulong)*(uint *)(lVar18 + 0x5e8) & 7) << 3);
    }
  }
  else {
LAB_01e833f8:
    uVar23 = 0;
  }
  puVar10 = PTR_DAT_04bb37d8;
  if (plVar20 == (long *)0x0) {
    bVar11 = false;
    lVar18 = *(long *)puVar7;
    if (lVar18 == 0) goto LAB_01e834f4;
LAB_01e83450:
    uVar22 = *param_2;
    if (((uVar22 == 0) ||
        (plVar14 = *(long **)(*(long *)(*(long *)(lVar18 + 0x1c0) + 8) +
                             ((ulong)(uVar22 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
       (((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar14 + 0x46) != uVar22)))) {
      plVar14 = (long *)0x0;
    }
    if ((*(int *)(lVar18 + 0x288) == 1) || (*(int *)(lVar18 + 0x288) == -1)) {
      plVar16 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
      lVar18 = *(long *)puVar7;
      iVar13 = (**(code **)(*plVar16 + 0x60))();
      if (iVar13 < 0x11) {
        uVar15 = 1;
        uVar22 = 1;
      }
      else {
        if (4 < *(uint *)(lVar18 + 0x5e8)) goto LAB_01e83508;
        uVar15 = 0x101000100 >> (((ulong)*(uint *)(lVar18 + 0x5e8) & 7) << 3);
        uVar22 = (uint)uVar15;
      }
    }
    else {
LAB_01e83508:
      uVar15 = 0;
      uVar22 = 0;
    }
    if (plVar14 == (long *)0x0) goto joined_r0x01e83500;
    bVar12 = (int)plVar14[0x2a] == 1;
    if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar13 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar15 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb37d0);
    if ((uVar15 & 1) == 0) {
      uVar22 = 0;
    }
    uVar15 = (ulong)uVar22;
    puVar7 = PTR_DAT_04bb2020;
  }
  else {
    bVar11 = (int)plVar20[0x2a] == 1;
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar13 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar15 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb37d0);
    uVar22 = (uint)uVar23;
    if ((uVar15 & 1) == 0) {
      uVar22 = 0;
    }
    uVar23 = (ulong)uVar22;
    lVar18 = *(long *)puVar7;
    if (lVar18 != 0) goto LAB_01e83450;
LAB_01e834f4:
    plVar14 = (long *)0x0;
    uVar15 = 0;
joined_r0x01e83500:
    bVar12 = false;
    puVar7 = PTR_DAT_04bb2020;
  }
  if (plVar20 == (long *)0x0) {
    PTR_DAT_04bb2020 = puVar7;
    return;
  }
  if (!bVar11) {
    PTR_DAT_04bb2020 = puVar7;
    return;
  }
  if ((uVar23 & 0xff) == 0) {
    PTR_DAT_04bb2020 = puVar7;
    return;
  }
  if (plVar14 == (long *)0x0) {
    PTR_DAT_04bb2020 = puVar7;
    return;
  }
  if (!bVar12) {
    PTR_DAT_04bb2020 = puVar7;
    return;
  }
  if ((uVar15 & 0xff) == 0) {
    PTR_DAT_04bb2020 = puVar7;
    return;
  }
  lVar18 = *(long *)PTR_DAT_04bb39b0;
  pbVar19 = PTR_DAT_04bb32e0;
  if (lVar18 == 0) {
LAB_01e835d8:
    if (*pbVar19 < 8) goto LAB_01e83650;
LAB_01e835e4:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01e83648:
      pbVar19 = PTR_DAT_04bb5038;
      goto LAB_01e83650;
    }
    lVar18 = **(long **)PTR_DAT_04bb27d0;
    bVar4 = *(byte *)(lVar18 + 0x473);
    pbVar19 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar1 = (uint *)(lVar18 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar19 = (byte *)(lVar18 + 0x471);
      }
    }
    local_64[0] = *pbVar19;
    if (7 < local_64[0]) goto LAB_01e83648;
  }
  else {
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar19 = (byte *)(lVar18 + 0x158);
    }
    if (7 < *pbVar19) {
      if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01e835d8;
      }
      goto LAB_01e835e4;
    }
LAB_01e83650:
    local_64[0] = *pbVar19;
    if (7 < local_64[0]) {
      local_64[0] = 0xff;
    }
  }
  local_168 = puVar7 + 0x10;
  local_160 = "talk_conversation_nnpc";
  PTR_DAT_04bb2020 = puVar7;
  FUN_025ffac8(local_138,&local_168,local_64);
  puVar9 = PTR_DAT_04bc3480;
  local_138[0] = PTR_DAT_04bc3480 + 0x10;
  local_168 = (undefined *)CONCAT44(local_168._4_4_,(int)plVar20[0xa1]);
  local_140 = 0;
  local_154 = (undefined4)plVar14[0xa1];
  local_98._0_4_ = FUN_021d68a0(plVar20 + 0x7c);
  local_168 = (undefined *)CONCAT44((undefined4)local_98,(undefined4)local_168);
  local_150 = FUN_021d68a0(plVar14 + 0x7c);
  puVar10 = PTR_DAT_04bc43f8;
  local_98 = (undefined *)CONCAT44(local_98._4_4_,local_150);
  local_14c = *(undefined4 *)(plVar14[0x77] + 0x77b8);
  local_160 = (char *)(CONCAT35(local_160._5_3_,
                                CONCAT14(param_3,*(undefined4 *)(plVar20[0x77] + 0x77b8))) &
                      0xffffff01ffffffff);
  local_158 = *(undefined4 *)(plVar20[0x77] + 0xae3c);
  local_144 = *(undefined4 *)(plVar14[0x77] + 0xae3c);
  local_c8 = *(undefined8 *)(plVar20[0xd] + 0x278);
  local_c0 = *(float *)(plVar20[0xd] + 0x280);
  local_d8 = *(undefined8 *)(plVar14[0xd] + 0x278);
  local_d0 = *(float *)(plVar14[0xd] + 0x280);
  lVar18 = *(long *)PTR_DAT_04bb5c90;
  iVar5 = *(int *)(lVar18 + 0x28) + -6;
  iVar2 = *(int *)(lVar18 + 0x38);
  iVar3 = *(int *)(lVar18 + 0x3c);
  iVar6 = *(int *)(lVar18 + 0x2c) + -6;
  iVar13 = iVar2 + 6;
  iVar21 = iVar3 + 6;
  if (iVar2 <= iVar5) {
    iVar5 = iVar2;
  }
  if (iVar3 <= iVar6) {
    iVar6 = iVar3;
  }
  iVar2 = iVar5;
  if (iVar13 <= iVar5) {
    iVar2 = iVar13;
  }
  if (iVar5 <= iVar13) {
    iVar5 = iVar13;
  }
  iVar13 = iVar6;
  if (iVar21 <= iVar6) {
    iVar13 = iVar21;
  }
  if (iVar6 <= iVar21) {
    iVar6 = iVar21;
  }
  fVar25 = (float)iVar5 * 5.0 + 5.0;
  fVar24 = (float)iVar6 * 5.0 + 5.0;
  local_148 = param_4 & 1;
  if ((((((float)iVar2 * 5.0 <= (float)local_c8) && ((float)local_c8 < fVar25)) &&
       ((float)iVar13 * 5.0 <= local_c0)) && (local_c0 < fVar24)) ||
     ((((float)iVar2 * 5.0 <= (float)local_d8 && ((float)local_d8 < fVar25)) &&
      (((float)iVar13 * 5.0 <= local_d0 && (local_d0 < fVar24)))))) {
    uVar17 = 1;
  }
  else {
    local_e0 = 0;
    local_110 = (undefined *)((ulong)local_110 & 0xffffffff00000000);
    local_e8 = PTR_DAT_04bc43f8 + 0x10;
    uVar23 = FUN_02b67a30(&local_110,(int)plVar20[0xa1]);
    puVar8 = PTR_DAT_04bb27a8;
    if ((uVar23 & 1) != 0) {
      local_98 = (undefined *)CONCAT44(local_98._4_4_,(uint)local_110);
      if (9 < (uint)local_110) {
        local_110._0_4_ = 0;
      }
      local_e0 = (&DAT_05636e30)[(int)(uint)local_110];
    }
    local_98 = (undefined *)CONCAT44(local_98._4_4_,1);
    lVar18 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38);
    if (lVar18 == 0) {
      local_108 = PTR_DAT_04bbc570[8];
      local_104 = *(int *)(PTR_DAT_04bbc570 + 0xc);
      uStack_f8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
      local_f0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
LAB_01e839e8:
      local_100 = PTR_DAT_04bb2010 + 0x10;
      local_110 = PTR_DAT_04bc4608 + 0x10;
      local_ec = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
    }
    else {
      if (*(long *)(lVar18 + 0x150) == 0) {
        uStack_f8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
        local_108 = PTR_DAT_04bbc570[8];
        local_104 = *(int *)(PTR_DAT_04bbc570 + 0xc);
        local_f0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
        goto LAB_01e839e8;
      }
      local_110 = PTR_DAT_04bc4608 + 0x10;
      local_100 = PTR_DAT_04bb2010 + 0x10;
      local_108 = PTR_DAT_04bbc570[8];
      local_104 = *(int *)(PTR_DAT_04bbc570 + 0xc);
      uStack_f8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
      local_f0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
      local_ec = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
      if (local_e0 != 0) {
        local_b0 = &local_e8;
        local_b8 = &PTR_FUN_04a9b150;
        local_a8 = &local_110;
        plVar16 = (long *)(*(code *)**(undefined8 **)(*(long *)(lVar18 + 0x150) + 0x10))();
        iVar13 = (**(code **)(*plVar16 + 0x18))();
        if (0 < iVar13) {
          iVar21 = 0;
          do {
            FUN_01360490(&local_98,*(undefined8 *)(lVar18 + 0x150),iVar21);
            uVar23 = (*(code *)*local_b8)(&local_b8,&local_98);
            if ((uVar23 & 1) != 0) break;
            bVar11 = iVar13 + -1 != iVar21;
            iVar21 = iVar21 + 1;
          } while (bVar11);
        }
      }
    }
    if (local_104 != 0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_b8 = (undefined **)0x0;
      uVar23 = FUN_02a8f1dc(&local_110,&local_b8);
      if ((uVar23 & 1) != 0) {
        local_98 = PTR_DAT_04bbc1a0 + 0x10;
        pcStack_90 = PTR_DAT_04bb2010 + 0x10;
        local_88 = (int)((float)(int)(local_b8._0_4_ + -67.5) / 5.0) -
                   (uint)(local_b8._0_4_ + -67.5 < 0.0);
        iStack_84 = (int)((float)(int)(local_b0._0_4_ + -62.5) / 5.0) -
                    (uint)(local_b0._0_4_ + -62.5 < 0.0);
        local_78 = local_88 + 0x1b;
        iStack_74 = iStack_84 + 0x19;
        local_80 = pcStack_90;
        uVar23 = FUN_012e2100(&local_98,&local_c8);
        if (((uVar23 & 1) != 0) || (uVar23 = FUN_012e2100(&local_98,&local_d8), (uVar23 & 1) != 0))
        {
          uVar17 = 2;
          goto LAB_01e83c80;
        }
      }
    }
    local_e8 = puVar10 + 0x10;
    local_e0 = 0;
    local_110 = (undefined *)((ulong)local_110 & 0xffffffff00000000);
    uVar23 = FUN_02b67a30(&local_110,(int)plVar14[0xa1]);
    if ((uVar23 & 1) != 0) {
      local_98 = (undefined *)CONCAT44(local_98._4_4_,(uint)local_110);
      uVar22 = (uint)local_110;
      if (9 < (uint)local_110) {
        uVar22 = 0;
      }
      local_e0 = (&DAT_05636e30)[(int)uVar22];
    }
    local_98 = (undefined *)CONCAT44(local_98._4_4_,1);
    lVar18 = *(long *)(*(long *)puVar8 + 0x38);
    if ((lVar18 == 0) || (*(long *)(lVar18 + 0x150) == 0)) {
      local_110 = PTR_DAT_04bc4608 + 0x10;
      local_108 = PTR_DAT_04bbc570[8];
      local_104 = *(int *)(PTR_DAT_04bbc570 + 0xc);
      uStack_f8 = *(undefined8 *)(PTR_DAT_04bbc570 + 0x18);
      local_100 = PTR_DAT_04bb2010 + 0x10;
      local_f0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
      local_ec = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
    }
    else {
      FUN_02a59040(&local_110,lVar18 + 0x148,&local_e8);
    }
    uVar17 = 0;
    if (local_104 != 0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_b8 = (undefined **)0x0;
      uVar23 = FUN_02a8f1dc(&local_110,&local_b8);
      if ((uVar23 & 1) != 0) {
        local_98 = PTR_DAT_04bbc1a0 + 0x10;
        pcStack_90 = PTR_DAT_04bb2010 + 0x10;
        local_88 = (int)((float)(int)(local_b8._0_4_ + -67.5) / 5.0) -
                   (uint)(local_b8._0_4_ + -67.5 < 0.0);
        iStack_84 = (int)((float)(int)(local_b0._0_4_ + -62.5) / 5.0) -
                    (uint)(local_b0._0_4_ + -62.5 < 0.0);
        local_78 = local_88 + 0x1b;
        iStack_74 = iStack_84 + 0x19;
        local_80 = pcStack_90;
        uVar23 = FUN_012e2100(&local_98,&local_c8);
        if (((uVar23 & 1) != 0) || (uVar23 = FUN_012e2100(&local_98,&local_d8), (uVar23 & 1) != 0))
        {
          uVar17 = 3;
          goto LAB_01e83c80;
        }
      }
      uVar17 = 0;
    }
  }
LAB_01e83c80:
  fVar24 = *(float *)(plVar20[0xd] + 0x278) - *(float *)(plVar14[0xd] + 0x278);
  fVar25 = *(float *)(plVar20[0xd] + 0x280) - *(float *)(plVar14[0xd] + 0x280);
  local_140 = CONCAT44(SQRT(fVar25 * fVar25 + fVar24 * fVar24),uVar17);
  FUN_025e4f50(local_138,&local_168);
  local_98 = puVar7 + 0x10;
  pcStack_90 = "SendNNPCConversationPlayReport";
  FUN_0274bfe8(local_64,&local_98,1);
  local_138[0] = puVar9 + 0x10;
  iVar13 = FUN_025e5440(local_138);
  if (iVar13 != -1) {
    iVar13 = (**(code **)(local_138[0] + 0x20))(local_138);
    local_168 = (undefined *)CONCAT44(local_168._4_4_,iVar13);
    if (iVar13 < 0xd) goto LAB_01e83d28;
  }
  if (local_114 == 0) {
    local_114 = 1;
  }
LAB_01e83d28:
  FUN_02601530(local_138);
  return;
}


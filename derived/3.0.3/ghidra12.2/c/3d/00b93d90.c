
undefined4 FUN_00b93d90(short *param_1,byte *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  void *pvVar11;
  undefined8 *puVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  short *psVar20;
  byte bVar21;
  undefined1 uVar22;
  undefined4 uVar23;
  undefined1 uVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  undefined4 uVar28;
  long lVar29;
  long lVar30;
  undefined1 auVar31 [16];
  uint local_8ac;
  uint local_8a8;
  int local_840;
  undefined8 local_838;
  undefined8 local_830;
  undefined8 local_828;
  undefined1 auStack_820 [1876];
  uint local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  byte local_b4 [4];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  byte local_74 [4];
  undefined4 local_70;
  undefined4 local_6c;
  
  puVar5 = PTR_DAT_04bb27c0;
  if (param_1 == (short *)0x0) {
    return 0xffffffff;
  }
  lVar17 = *(long *)PTR_DAT_04bb27c0;
  if (lVar17 == 0) {
    return 0xffffffff;
  }
  uVar7 = *(uint *)(*(long *)PTR_DAT_04bb3968 + 0xa20);
  if ((((uVar7 == 0) ||
       (plVar26 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                            ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar26 == (long *)0x0)) ||
      ((*(uint *)(plVar26 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar26 + 0x46) != uVar7)) {
    plVar26 = (long *)0x0;
  }
  if (*(int *)(lVar17 + 0x288) == 1 || *(int *)(lVar17 + 0x288) == -1) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar17 = *(long *)puVar5;
    iVar6 = (**(code **)(*plVar9 + 0x60))();
    if (iVar6 < 0x11) {
      uVar7 = 0;
    }
    else {
      if (4 < *(uint *)(lVar17 + 0x5e8)) goto LAB_00b93e74;
      uVar7 = 5U >> (ulong)(*(uint *)(lVar17 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_00b93e74:
    uVar7 = 1;
  }
  if (plVar26 == (long *)0x0) {
    return 0xffffffff;
  }
  lVar17 = plVar26[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar10 = (**(code **)(*plVar26 + 0x20))(plVar26,PTR_DAT_04bb37d0);
  puVar5 = PTR_DAT_04bb43c0;
  if ((int)lVar17 != 1) {
    uVar7 = 1;
  }
  if ((uVar10 & 1) == 0) {
    return 0xffffffff;
  }
  if (uVar7 != 0) {
    return 0xffffffff;
  }
  lVar17 = *(long *)(plVar26[0x13] + 0x288);
  lVar27 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(lVar17 + 0x1ac);
  lVar25 = *(long *)puVar5;
  if (lVar25 == 0) {
LAB_00b94010:
    uVar23 = 0;
  }
  else {
    lVar27 = *(long *)(lVar27 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
    if ((*(uint *)(lVar27 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_00b94010;
    uVar7 = FUN_0277d6c4(lVar17 + 0x1b4);
    lVar27 = *(long *)puVar5;
    if (lVar27 == 0) {
LAB_00b94f90:
      uVar23 = 1;
    }
    else {
      lVar25 = *(long *)(lVar25 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
      if ((*(uint *)(lVar25 + 0x1d8) <= uVar7) ||
         (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_00b94f90;
      uVar7 = FUN_0277d6c4(lVar17 + 0x1bc);
      lVar25 = *(long *)puVar5;
      if (lVar25 == 0) {
LAB_00b94f98:
        uVar23 = 2;
      }
      else {
        lVar27 = *(long *)(lVar27 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
        if ((*(uint *)(lVar27 + 0x1d8) <= uVar7) ||
           (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_00b94f98;
        uVar7 = FUN_0277d6c4(lVar17 + 0x1c4);
        if (*(long *)puVar5 == 0) {
          uVar23 = 3;
        }
        else {
          lVar17 = *(long *)(lVar25 + 0x57e58);
          uVar23 = 3;
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar17 + 0x1d8)) &&
             (uVar23 = 3, *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            uVar23 = 0;
          }
        }
      }
    }
  }
  lVar17 = FUN_0265c2a0(param_3);
  local_b4[0] = *param_2;
  if (7 < local_b4[0]) {
    local_b4[0] = 0xff;
  }
  lVar25 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_b4,1);
  if ((lVar17 == 0) || (lVar25 == 0)) {
    local_828 = (undefined *)0x508;
    FUN_0277d4ac(&local_828);
    *(undefined4 *)param_1 = (undefined4)local_828;
    *(undefined4 *)(param_1 + 2) = local_828._4_4_;
    return 0;
  }
  local_828 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_820,0,0x754);
  uVar7 = nn::os::GetSystemTick();
  local_cc = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 1;
  local_c8 = (local_cc ^ local_cc >> 0x1e) * 0x6c078965 + 2;
  local_c4 = (local_c8 ^ local_c8 >> 0x1e) * 0x6c078965 + 3;
  local_c0 = (local_c4 ^ local_c4 >> 0x1e) * 0x6c078965 + 4;
  pvVar11 = (void *)(**(code **)(local_828 + 0x18))(&local_828);
  memset(pvVar11,0,0x754);
  if ((*(long **)(lVar25 + 0x17f68) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar25 + 0x17f68), puVar12 == (undefined8 *)0x0)) {
    local_8a8 = 0;
  }
  else {
    local_8a8 = (**(code **)*puVar12)();
  }
  if ((*(long **)(lVar17 + 0x28) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar17 + 0x28), puVar12 == (undefined8 *)0x0)) {
    local_8ac = 0;
  }
  else {
    local_8ac = (**(code **)*puVar12)();
  }
  iVar6 = 0;
  local_830 = 0;
  do {
    local_838 = CONCAT44(local_838._4_4_,iVar6);
    lVar27 = *(long *)(lVar17 + 8);
    lVar30 = *(long *)(lVar17 + 0x10);
    pvVar11 = (void *)(**(code **)(local_828 + 0x18))(&local_828);
    memset(pvVar11,0,0x754);
    if (iVar6 == 0) {
      FUN_026b4e90(lVar30 + lVar27,&local_828,&local_830);
      uVar7 = 0;
      local_b0 = &PTR_FUN_0493b198;
      do {
        (**(code **)(local_828 + 0x10))(&local_70,&local_828,uVar7);
        lVar27 = (**(code **)(local_828 + 0x20))(&local_828);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar27 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar27 = *(long *)puVar5;
          uVar8 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar5 != 0) {
            lVar27 = *(long *)(lVar27 + 0x57e58);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
            if (((uVar8 < *(uint *)(lVar27 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) &&
               (uVar10 = (*(code *)*local_b0)(&local_b0,&local_70), (uVar10 & 1) != 0))
            goto LAB_00b942c4;
          }
          lVar27 = (**(code **)(local_828 + 0x18))(&local_828);
          lVar30 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar27 + lVar30) = *(uint *)(lVar27 + lVar30) & (uVar1 ^ 0xffffffff);
        }
LAB_00b942c4:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
    }
    else {
      local_70 = 0;
      local_b0 = &PTR_FUN_049ff448;
      local_a8 = &local_70;
      FUN_008a1ba0(&local_828,&local_b0);
      local_70 = 9;
      local_b0 = &PTR_FUN_049ff448;
      local_a8 = &local_70;
      FUN_008a1ba0(&local_828,&local_b0);
      local_70 = 10;
      local_b0 = &PTR_FUN_049ff448;
      local_a8 = &local_70;
      FUN_008a1ba0(&local_828,&local_b0);
      local_70 = 0x12;
      local_b0 = &PTR_FUN_049ff448;
      local_a8 = &local_70;
      FUN_008a1ba0(&local_828,&local_b0);
      local_70 = 0x10;
      local_b0 = &PTR_FUN_049ff448;
      local_a8 = &local_70;
      FUN_008a1ba0(&local_828,&local_b0);
    }
    lVar27 = *(long *)PTR_DAT_04bb39b0;
    pbVar19 = PTR_DAT_04bb32e0;
    if (lVar27 == 0) {
      if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_00b943e8;
LAB_00b94470:
      local_74[0] = *pbVar19;
      if (7 < local_74[0]) {
        local_74[0] = 0xff;
      }
    }
    else {
      if (*(int *)(lVar27 + 0x15c) != 0) {
        pbVar19 = (byte *)(lVar27 + 0x158);
      }
      if ((*pbVar19 < 8) ||
         (((*(int *)(lVar27 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar19 < 8))))
      goto LAB_00b94470;
LAB_00b943e8:
      pbVar19 = PTR_DAT_04bb5038;
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_00b94470;
      lVar27 = **(long **)PTR_DAT_04bb27d0;
      bVar21 = *(byte *)(lVar27 + 0x473);
      pbVar18 = PTR_DAT_04bb5038;
      if ((long)(char)bVar21 != 0xffffffffffffffff) {
        puVar14 = (uint *)(lVar27 + 0x48) + ((long)(char)bVar21 & 0xffffffffU) * 0x20;
        if (7 < bVar21) {
          puVar14 = (uint *)(lVar27 + 0x48);
        }
        if ((*puVar14 & 8) != 0) {
          pbVar18 = (byte *)(lVar27 + 0x471);
        }
      }
      local_74[0] = *pbVar18;
      if (7 < local_74[0]) goto LAB_00b94470;
    }
    bVar21 = local_74[0];
    if (7 < local_74[0]) {
      bVar21 = 0xff;
    }
    local_b0 = (undefined **)CONCAT71(local_b0._1_7_,bVar21);
    auVar31 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_b0,1);
    uVar15 = auVar31._8_8_;
    lVar27 = auVar31._0_8_;
    if (lVar27 != 0) {
      if ((*(long **)(lVar27 + 0xd0) == (long *)0x0) ||
         (puVar12 = (undefined8 *)**(long **)(lVar27 + 0xd0), puVar12 == (undefined8 *)0x0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = (**(code **)*puVar12)();
        uVar10 = uVar10 & 0xffffffff;
      }
      local_b0 = (undefined **)0xfffe;
      FUN_0277d4ac(&local_b0);
      local_a8 = (undefined4 *)0xfffe;
      FUN_0277d4ac(&local_a8);
      local_a0 = 0xfffe;
      FUN_0277d4ac(&local_a0);
      local_98 = 0xfffe;
      FUN_0277d4ac(&local_98);
      local_90 = 0xfffe;
      FUN_0277d4ac(&local_90);
      local_88 = 0xfffe;
      FUN_0277d4ac(&local_88);
      local_80 = 0xfffe;
      FUN_0277d4ac(&local_80);
      lVar30 = *(long *)(lVar27 + 0xb8) + *(long *)(lVar27 + 0xb0);
      if ((*(char *)(lVar30 + 0xaf89) == '\0') || (7 < *(byte *)(lVar30 + 0xaf88))) {
        lVar29 = lVar30;
        if ((*(char *)(lVar30 + 0xaf8a) != '\0') &&
           ((uVar13 = FUN_016e5e90(), (uVar13 & 1) != 0 &&
            (lVar29 = lVar30 + 0xaf90, (*(byte *)(lVar30 + 0xaf8b) & 0xfe) != 0)))) {
          lVar29 = lVar30;
        }
      }
      else {
        lVar29 = lVar30 + (ulong)*(byte *)(lVar30 + 0xaf88) * 0x11f8 + 0x1fc8;
      }
      puVar12 = (undefined8 *)FUN_026e85f0(lVar29);
      local_b0 = (undefined **)*puVar12;
      lVar30 = *(long *)(lVar27 + 0xb8) + *(long *)(lVar27 + 0xb0);
      if ((*(char *)(lVar30 + 0xaf89) == '\0') || (7 < *(byte *)(lVar30 + 0xaf88))) {
        lVar29 = lVar30;
        if ((*(char *)(lVar30 + 0xaf8a) != '\0') &&
           ((uVar13 = FUN_016e5e90(), (uVar13 & 1) != 0 &&
            (lVar29 = lVar30 + 0xaf90, (*(byte *)(lVar30 + 0xaf8b) & 0xfe) != 0)))) {
          lVar29 = lVar30;
        }
      }
      else {
        lVar29 = lVar30 + (ulong)*(byte *)(lVar30 + 0xaf88) * 0x11f8 + 0x1fc8;
      }
      puVar12 = (undefined8 *)FUN_026ea320(lVar29);
      lVar30 = *(long *)(lVar27 + 0xb8) + *(long *)(lVar27 + 0xb0);
      local_a8 = (undefined4 *)*puVar12;
      if ((*(char *)(lVar30 + 0xaf89) == '\0') || (7 < *(byte *)(lVar30 + 0xaf88))) {
        lVar29 = lVar30;
        if ((*(char *)(lVar30 + 0xaf8a) != '\0') &&
           ((uVar13 = FUN_016e5e90(), (uVar13 & 1) != 0 &&
            (lVar29 = lVar30 + 0xaf90, (*(byte *)(lVar30 + 0xaf8b) & 0xfe) != 0)))) {
          lVar29 = lVar30;
        }
      }
      else {
        lVar29 = lVar30 + (ulong)*(byte *)(lVar30 + 0xaf88) * 0x11f8 + 0x1fc8;
      }
      puVar12 = (undefined8 *)FUN_026ea720(lVar29);
      local_a0 = *puVar12;
      puVar12 = (undefined8 *)FUN_02807b30(*(long *)(lVar27 + 0xb8) + *(long *)(lVar27 + 0xb0));
      lVar30 = *(long *)(lVar27 + 0xb8) + *(long *)(lVar27 + 0xb0);
      local_98 = *puVar12;
      if ((*(char *)(lVar30 + 0xaf89) == '\0') || (7 < *(byte *)(lVar30 + 0xaf88))) {
        lVar29 = lVar30;
        if ((*(char *)(lVar30 + 0xaf8a) != '\0') &&
           ((uVar13 = FUN_016e5e90(), (uVar13 & 1) != 0 &&
            (lVar29 = lVar30 + 0xaf90, (*(byte *)(lVar30 + 0xaf8b) & 0xfe) != 0)))) {
          lVar29 = lVar30;
        }
      }
      else {
        lVar29 = lVar30 + (ulong)*(byte *)(lVar30 + 0xaf88) * 0x11f8 + 0x1fc8;
      }
      puVar12 = (undefined8 *)FUN_026e9470(lVar29);
      lVar30 = *(long *)(lVar27 + 0xb8) + *(long *)(lVar27 + 0xb0);
      local_90 = *puVar12;
      if ((*(char *)(lVar30 + 0xaf89) == '\0') || (7 < *(byte *)(lVar30 + 0xaf88))) {
        lVar29 = lVar30;
        if ((*(char *)(lVar30 + 0xaf8a) != '\0') &&
           ((uVar13 = FUN_016e5e90(), (uVar13 & 1) != 0 &&
            (lVar29 = lVar30 + 0xaf90, (*(byte *)(lVar30 + 0xaf8b) & 0xfe) != 0)))) {
          lVar29 = lVar30;
        }
      }
      else {
        lVar29 = lVar30 + (ulong)*(byte *)(lVar30 + 0xaf88) * 0x11f8 + 0x1fc8;
      }
      puVar12 = (undefined8 *)FUN_026e9240(lVar29);
      local_88 = *puVar12;
      FUN_0253395c(&local_70,local_74,*(undefined4 *)PTR_DAT_04bb3238);
      lVar30 = *(long *)puVar5;
      local_80 = CONCAT44(local_6c,local_70);
      uVar7 = FUN_0277d6c4(&local_b0);
      if (*(long *)puVar5 != 0) {
        lVar30 = *(long *)(lVar30 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar30 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar30 = (**(code **)(local_828 + 0x18))(&local_828);
          uVar7 = FUN_0277d6c4(&local_b0);
          if ((uVar7 >> 3 & 0x1fff) < 0x753) {
            lVar29 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
            *(uint *)(lVar30 + lVar29) =
                 *(uint *)(lVar30 + lVar29) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
          }
        }
      }
      lVar30 = *(long *)puVar5;
      uVar7 = FUN_0277d6c4(&local_a8);
      if (*(long *)puVar5 != 0) {
        lVar30 = *(long *)(lVar30 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar30 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar30 = (**(code **)(local_828 + 0x18))(&local_828);
          uVar7 = FUN_0277d6c4(&local_a8);
          if ((uVar7 >> 3 & 0x1fff) < 0x753) {
            lVar29 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
            *(uint *)(lVar30 + lVar29) =
                 *(uint *)(lVar30 + lVar29) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
          }
        }
      }
      lVar30 = *(long *)puVar5;
      uVar7 = FUN_0277d6c4(&local_a0);
      if (*(long *)puVar5 != 0) {
        lVar30 = *(long *)(lVar30 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar30 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar30 = (**(code **)(local_828 + 0x18))(&local_828);
          uVar7 = FUN_0277d6c4(&local_a0);
          if ((uVar7 >> 3 & 0x1fff) < 0x753) {
            lVar29 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
            *(uint *)(lVar30 + lVar29) =
                 *(uint *)(lVar30 + lVar29) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
          }
        }
      }
      lVar30 = *(long *)puVar5;
      uVar7 = FUN_0277d6c4(&local_98);
      if (*(long *)puVar5 != 0) {
        lVar30 = *(long *)(lVar30 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar30 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar30 = (**(code **)(local_828 + 0x18))(&local_828);
          uVar7 = FUN_0277d6c4(&local_98);
          if ((uVar7 >> 3 & 0x1fff) < 0x753) {
            lVar29 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
            *(uint *)(lVar30 + lVar29) =
                 *(uint *)(lVar30 + lVar29) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
          }
        }
      }
      lVar30 = *(long *)puVar5;
      uVar7 = FUN_0277d6c4(&local_90);
      if (*(long *)puVar5 != 0) {
        lVar30 = *(long *)(lVar30 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar30 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar30 = (**(code **)(local_828 + 0x18))(&local_828);
          uVar7 = FUN_0277d6c4(&local_90);
          if ((uVar7 >> 3 & 0x1fff) < 0x753) {
            lVar29 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
            *(uint *)(lVar30 + lVar29) =
                 *(uint *)(lVar30 + lVar29) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
          }
        }
      }
      lVar30 = *(long *)puVar5;
      uVar7 = FUN_0277d6c4(&local_88);
      if (*(long *)puVar5 != 0) {
        lVar30 = *(long *)(lVar30 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar30 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar30 = (**(code **)(local_828 + 0x18))(&local_828);
          uVar7 = FUN_0277d6c4(&local_88);
          if ((uVar7 >> 3 & 0x1fff) < 0x753) {
            lVar29 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
            *(uint *)(lVar30 + lVar29) =
                 *(uint *)(lVar30 + lVar29) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
          }
        }
      }
      lVar30 = *(long *)puVar5;
      uVar7 = FUN_0277d6c4(&local_80);
      uVar15 = extraout_x1;
      if (*(long *)puVar5 != 0) {
        lVar30 = *(long *)(lVar30 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar30 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar30 = (**(code **)(local_828 + 0x18))(&local_828);
          uVar7 = FUN_0277d6c4(&local_80);
          uVar15 = extraout_x1_00;
          if ((uVar7 >> 3 & 0x1fff) < 0x753) {
            lVar29 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
            *(uint *)(lVar30 + lVar29) =
                 *(uint *)(lVar30 + lVar29) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
          }
        }
      }
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar27 + 0xd0) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar27 + 0xd0) + 8), puVar12 != (undefined8 *)0x0)) {
        (**(code **)*puVar12)();
        uVar15 = extraout_x1_01;
      }
    }
    uVar10 = FUN_00b90bb0(&local_828,uVar15,&local_838,param_2,
                          *(long *)(lVar25 + 0x17f50) + *(long *)(lVar25 + 0x17f48),param_3,
                          *(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8),param_4 & 1,1,1);
    psVar20 = (short *)PTR_DAT_04bb37e0;
    if ((uVar10 & 1) != 0) {
      local_840 = (int)local_838;
      goto LAB_00b94c40;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 != 3);
  local_840 = 0;
LAB_00b94c40:
  local_70 = *(undefined4 *)PTR_DAT_04bb37e0;
  puVar14 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar7 = *puVar14 ^ *puVar14 << 0xb;
  uVar8 = puVar14[3];
  *puVar14 = puVar14[1];
  puVar14[1] = puVar14[2];
  uVar1 = uVar7 ^ uVar8;
  uVar7 = uVar7 >> 8 ^ uVar8 >> 0x13 ^ uVar1;
  puVar14[2] = uVar8;
  puVar14[3] = uVar7;
  uVar7 = (uVar7 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
  uVar1 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
  local_b0 = (undefined **)CONCAT44(uVar1,uVar7);
  uVar8 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  uVar3 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 4;
  local_a8 = (undefined4 *)CONCAT44(uVar3,uVar8);
  lVar30 = (**(code **)(local_828 + 0x20))(&local_828);
  lVar27 = 0;
  iVar6 = 0;
  do {
    puVar14 = (uint *)(lVar30 + lVar27);
    lVar27 = lVar27 + 4;
    uVar16 = *puVar14 - (*puVar14 >> 1 & 0x55555555);
    uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
    uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
    uVar16 = uVar16 + (uVar16 >> 8);
    iVar6 = (uVar16 + (uVar16 >> 0x10) & 0x3f) + iVar6;
  } while (lVar27 != 0x754);
  if (iVar6 == 0) {
    uVar22 = *(undefined1 *)((long)psVar20 + 2);
    uVar24 = *(undefined1 *)((long)psVar20 + 3);
  }
  else {
    lVar30 = (**(code **)(local_828 + 0x20))(&local_828);
    lVar27 = 0;
    uVar16 = 0;
    do {
      puVar14 = (uint *)(lVar30 + lVar27);
      lVar27 = lVar27 + 4;
      uVar4 = *puVar14 - (*puVar14 >> 1 & 0x55555555);
      uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
      uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
      uVar4 = uVar4 + (uVar4 >> 8);
      uVar16 = (uVar4 + (uVar4 >> 0x10) & 0x3f) + uVar16;
    } while (lVar27 != 0x754);
    uVar7 = uVar7 ^ uVar7 * 0x800;
    local_b0 = (undefined **)CONCAT44(uVar8,uVar1);
    psVar20 = (short *)&local_838;
    uVar7 = uVar7 >> 8 ^ uVar3 >> 0x13 ^ uVar7 ^ uVar3;
    local_a8 = (undefined4 *)CONCAT44(uVar7,uVar3);
    FUN_00889f80(&local_838,&local_828,(int)((ulong)uVar7 * (ulong)uVar16 >> 0x20) + 1);
    FUN_01a4c66c(&local_b0,&local_838);
    uVar22 = local_838._2_1_;
    uVar24 = local_838._3_1_;
  }
  sVar2 = *psVar20;
  local_70._0_3_ = CONCAT12(uVar22,(undefined2)local_70);
  uVar28 = *(undefined4 *)(psVar20 + 2);
  local_70 = CONCAT13(uVar24,(undefined3)local_70);
  local_70 = CONCAT22(local_70._2_2_,sVar2);
  local_6c = uVar28;
  if (sVar2 != -2) {
    lVar27 = *(long *)puVar5;
    uVar7 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar5 != 0) {
      lVar27 = *(long *)(lVar27 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
      if (uVar7 < *(uint *)(lVar27 + 0x1d8)) {
        if (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar7 * 8) != 0) goto LAB_00b94e7c;
      }
    }
  }
  local_838 = 0x508;
  FUN_0277d4ac(&local_838);
  local_70 = (undefined4)local_838;
  local_6c = local_838._4_4_;
  uVar22 = local_838._2_1_;
  uVar24 = local_838._3_1_;
  uVar28 = local_838._4_4_;
  sVar2 = (short)local_838;
LAB_00b94e7c:
  *param_1 = sVar2;
  *(undefined1 *)(param_1 + 1) = uVar22;
  *(undefined1 *)((long)param_1 + 3) = uVar24;
  *(undefined4 *)(param_1 + 2) = uVar28;
  if (local_840 == 0) {
    FUN_026b5160(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8),&local_830,&local_828);
    uVar7 = FUN_026b7530(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8),&local_70,&local_830);
    if (-1 < (int)uVar7) {
      uVar8 = 0x20;
      uVar1 = uVar7 - 0x18;
      if (uVar7 < 0x18) {
        uVar8 = 0x18;
        uVar1 = uVar7;
      }
      DAT_05453f5c = uVar7;
      if (uVar1 < uVar8) {
        lVar27 = *(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8);
        lVar30 = lVar27 + 0x10d6c;
        if (uVar7 < 0x18) {
          lVar30 = lVar27 + 0x1094c;
        }
        psVar20 = (short *)(lVar30 + (ulong)uVar1 * 0x2c);
        *param_1 = *psVar20;
        *(char *)(param_1 + 1) = (char)psVar20[1];
        *(undefined1 *)((long)param_1 + 3) = *(undefined1 *)((long)psVar20 + 3);
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(psVar20 + 2);
      }
    }
  }
  if ((((local_8ac & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  if ((local_8a8 & 1) == 0) {
    return uVar23;
  }
  if (*(long *)(lVar25 + 0x17f68) == 0) {
    return uVar23;
  }
  puVar12 = *(undefined8 **)(*(long *)(lVar25 + 0x17f68) + 8);
  if (puVar12 == (undefined8 *)0x0) {
    return uVar23;
  }
  (**(code **)*puVar12)();
  return uVar23;
}


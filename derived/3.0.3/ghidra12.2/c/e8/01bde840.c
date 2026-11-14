
undefined8 FUN_01bde840(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *local_1208;
  undefined4 *puStack_1200;
  undefined4 local_11f8;
  undefined4 local_11ec;
  undefined *local_11e8;
  undefined1 *puStack_11e0;
  undefined4 local_11d8;
  undefined1 local_11d4;
  undefined8 local_11d0;
  undefined8 uStack_11c8;
  undefined4 local_11c0;
  undefined *local_11b8;
  undefined1 *puStack_11b0;
  undefined4 local_11a8;
  undefined1 local_11a4 [63];
  undefined1 local_1165;
  undefined *local_1160;
  undefined1 *puStack_1158;
  undefined4 local_1150;
  undefined1 local_114c [63];
  undefined1 local_110d;
  undefined1 auStack_1108 [2];
  undefined *apuStack_1106 [59];
  undefined *local_f28;
  undefined1 *local_f20;
  undefined4 local_f18;
  undefined1 local_f14;
  undefined8 local_f10;
  undefined8 local_f08;
  undefined4 local_f00;
  undefined *local_ef8;
  undefined1 *local_ef0;
  undefined4 local_ee8;
  undefined1 local_ee4 [63];
  undefined1 local_ea5;
  undefined *local_ea0;
  undefined1 *local_e98;
  undefined4 local_e90;
  undefined1 local_e8c [63];
  undefined1 local_e4d;
  undefined1 auStack_e48 [2];
  undefined *apuStack_e46 [59];
  undefined *local_c68;
  undefined1 *local_c60;
  undefined4 local_c58;
  undefined1 local_c54;
  undefined8 local_c50;
  undefined8 local_c48;
  undefined4 local_c40;
  undefined *local_c38;
  undefined1 *local_c30;
  undefined4 local_c28;
  undefined1 local_c24 [20];
  long *local_c10;
  long *local_c08;
  long *local_c00;
  undefined1 local_be5;
  undefined *local_be0;
  undefined1 *local_bd8;
  undefined4 local_bd0;
  undefined1 local_bcc [63];
  undefined1 local_b8d;
  undefined1 auStack_b88 [2];
  undefined *apuStack_b86 [59];
  undefined *local_9a8;
  undefined1 *local_9a0;
  undefined4 local_998;
  undefined1 local_994;
  undefined *local_990;
  undefined8 local_988;
  undefined4 local_980;
  undefined *local_978;
  long local_970;
  undefined8 local_968;
  undefined *local_960;
  undefined8 local_940;
  undefined8 local_938;
  undefined *local_930;
  undefined1 local_925;
  undefined *local_920;
  long local_918;
  undefined8 local_910;
  undefined8 local_908;
  undefined *local_900;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined *local_8d0;
  undefined1 auStack_8c8 [2];
  undefined *apuStack_8c6 [2];
  undefined8 local_8b0;
  undefined8 local_8a8;
  undefined *local_8a0;
  undefined8 local_880;
  undefined8 local_878;
  undefined *local_870;
  undefined8 local_850;
  undefined8 local_848;
  undefined *local_840;
  undefined8 local_820;
  undefined8 local_818;
  undefined *local_810;
  undefined8 local_7f0;
  undefined8 local_7e8;
  undefined *local_7e0;
  undefined4 local_7c0;
  undefined8 local_7b8;
  undefined6 uStack_7b0;
  undefined2 local_7aa;
  undefined6 uStack_7a8;
  undefined *local_7a0;
  undefined8 local_798;
  undefined8 local_790;
  undefined8 local_788;
  undefined8 local_780;
  undefined1 local_778;
  undefined4 local_774;
  undefined *local_508;
  undefined1 *local_500;
  undefined4 local_4f8;
  undefined1 local_4f4;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined4 local_4e0;
  undefined *local_4d8;
  undefined1 *local_4d0;
  undefined4 local_4c8;
  undefined1 local_4c4 [63];
  undefined1 local_485;
  undefined *local_480;
  undefined1 *local_478;
  undefined4 local_470;
  undefined1 local_46c [63];
  undefined1 local_42d;
  undefined1 auStack_428 [2];
  undefined1 auStack_426 [958];
  undefined1 auStack_68 [8];
  
  lVar15 = *param_1;
  uVar6 = *(uint *)(lVar15 + 8);
  if ((uVar6 & 6) == 0) {
    return 1;
  }
  lVar11 = *(long *)(lVar15 + 0x28);
  if (lVar11 == 0) {
    return 0;
  }
  lVar12 = *(long *)(lVar15 + 0x38);
  local_4f4 = 0;
  local_4f8 = 0x1e0;
  local_4f0 = 0xffffffff;
  local_4d0 = local_4c4;
  local_4e8 = 0xffffffff00000000;
  local_4e0 = 0xffffffff;
  local_4c8 = 0x40;
  local_485 = 0;
  local_4c4[0] = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  local_478 = local_46c;
  local_470 = 0x40;
  local_42d = 0;
  local_46c[0] = 0;
  local_508 = &DAT_04a3cf38;
  local_500 = auStack_428;
  local_4d8 = puVar1;
  local_480 = puVar1;
  memset(auStack_428,0,0x3c0);
  puVar3 = auStack_68;
  if (auStack_68 <= auStack_426) {
    puVar3 = auStack_426;
  }
  memset(auStack_428,0,(size_t)(puVar3 + (-0xe0 - (long)&local_508)));
  local_998 = 0x1e0;
  local_970 = (long)&local_968 + 4;
  local_994 = 0;
  local_918 = (long)&local_910 + 4;
  local_990 = (undefined *)0xffffffff;
  local_988 = 0xffffffff00000000;
  local_980 = 0xffffffff;
  local_925 = 0;
  local_968 = CONCAT35(local_968._5_3_,0x40);
  local_8d0._0_4_ = (uint)(uint3)local_8d0;
  local_910 = CONCAT35(local_910._5_3_,0x40);
  local_9a8 = &DAT_04a3cf38;
  local_9a0 = auStack_8c8;
  local_978 = puVar1;
  local_920 = puVar1;
  memset(auStack_8c8,0,0x3c0);
  ppuVar4 = &local_508;
  if (&local_508 <= apuStack_8c6) {
    ppuVar4 = apuStack_8c6;
  }
  memset(auStack_8c8,0,(long)ppuVar4 + (-0xe0 - (long)&local_9a8));
  lVar14 = *(long *)(lVar15 + 0x48);
  if ((uVar6 >> 1 & 1) != 0) {
    if (lVar12 == 0) {
      return 0;
    }
    if (lVar14 == 0) {
      return 0;
    }
    if ((param_1[0x11] == 0) || (param_1[0x12] == 0)) {
      uVar10 = FUN_006f50a0(&local_9a8,lVar12,lVar14,0);
    }
    else {
      iVar5 = FUN_01be5d00(*(undefined8 *)PTR_DAT_04bb28f8,lVar12);
      if (iVar5 == 5) {
        lVar15 = param_1[0x12];
      }
      else {
        if (iVar5 != 9) {
          return 0;
        }
        lVar15 = param_1[0x11];
      }
      uVar10 = FUN_01ba7cc0(lVar15,&local_9a8,lVar12,lVar14);
    }
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    goto LAB_01bdee10;
  }
  if (lVar12 == 0) {
    return 0;
  }
  if (lVar14 == 0) {
    return 0;
  }
  lVar13 = *(long *)(lVar15 + 0x50);
  if (lVar13 == 0) {
    return 0;
  }
  lVar15 = *(long *)(lVar15 + 0x58);
  if (lVar15 == 0) {
    return 0;
  }
  local_c48 = 0xffffffff00000000;
  local_c30 = local_c24;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  local_bd8 = local_bcc;
  local_c54 = 0;
  local_c58 = 0xf0;
  local_c50 = 0xffffffff;
  local_c40 = 0xffffffff;
  local_c28 = 0x40;
  local_be5 = 0;
  local_c24[0] = 0;
  local_bd0 = 0x40;
  local_b8d = 0;
  local_bcc[0] = 0;
  puVar2 = PTR_DAT_04bc0548 + 0x10;
  local_c68 = puVar2;
  local_c60 = auStack_b88;
  local_c38 = puVar1;
  local_be0 = puVar1;
  memset(auStack_b88,0,0x1e0);
  ppuVar4 = &local_9a8;
  if (&local_9a8 <= apuStack_b86) {
    ppuVar4 = apuStack_b86;
  }
  memset(auStack_b88,0,(long)ppuVar4 + (-0xe0 - (long)&local_c68));
  local_f18 = 0xf0;
  local_f08 = 0xffffffff00000000;
  local_ef0 = local_ee4;
  local_e98 = local_e8c;
  local_f14 = 0;
  local_f10 = 0xffffffff;
  local_f00 = 0xffffffff;
  local_ee8 = 0x40;
  local_ea5 = 0;
  local_ee4[0] = 0;
  local_e90 = 0x40;
  local_e4d = 0;
  local_e8c[0] = 0;
  local_f28 = puVar2;
  local_f20 = auStack_e48;
  local_ef8 = puVar1;
  local_ea0 = puVar1;
  memset(auStack_e48,0,0x1e0);
  ppuVar4 = &local_c68;
  if (&local_c68 <= apuStack_e46) {
    ppuVar4 = apuStack_e46;
  }
  memset(auStack_e48,0,(long)ppuVar4 + (-0xe0 - (long)&local_f28));
  local_11d8 = 0xf0;
  local_11d0 = 0xffffffff;
  uStack_11c8 = 0xffffffff00000000;
  puStack_11b0 = local_11a4;
  puStack_1158 = local_114c;
  local_11d4 = 0;
  local_11c0 = 0xffffffff;
  local_11a8 = 0x40;
  local_1165 = 0;
  local_11a4[0] = 0;
  local_1150 = 0x40;
  local_110d = 0;
  local_114c[0] = 0;
  local_11e8 = puVar2;
  puStack_11e0 = auStack_1108;
  local_11b8 = puVar1;
  local_1160 = puVar1;
  memset(auStack_1108,0,0x1e0);
  ppuVar4 = &local_f28;
  if (&local_f28 <= apuStack_1106) {
    ppuVar4 = apuStack_1106;
  }
  memset(auStack_1108,0,(long)ppuVar4 + (-0xe0 - (long)&local_11e8));
  if ((param_1[0x11] == 0) || (param_1[0x12] == 0)) {
    uVar6 = FUN_006f50a0(&local_c68,lVar12,lVar14,0);
LAB_01bdec98:
    uVar7 = uVar6;
    if (param_1[0x11] == 0) goto LAB_01bded18;
LAB_01bdeca4:
    uVar6 = uVar7;
    if (param_1[0x12] == 0) goto LAB_01bded18;
    iVar5 = FUN_01be5d00(*(undefined8 *)PTR_DAT_04bb28f8,lVar12);
    if (iVar5 == 9) {
      lVar14 = param_1[0x11];
LAB_01bdecf8:
      uVar7 = FUN_01ba7cc0(lVar14,&local_f28,lVar12,lVar13);
      goto LAB_01bded2c;
    }
    if (iVar5 == 5) {
      lVar14 = param_1[0x12];
      goto LAB_01bdecf8;
    }
    uVar7 = 0;
    uVar8 = 0;
    if (param_1[0x11] != 0) goto LAB_01bded38;
LAB_01bded90:
    uVar8 = FUN_006f50a0(&local_11e8,lVar12,lVar15,0);
  }
  else {
    iVar5 = FUN_01be5d00(*(undefined8 *)PTR_DAT_04bb28f8,lVar12);
    if (iVar5 == 9) {
      lVar9 = param_1[0x11];
LAB_01bdec88:
      uVar6 = FUN_01ba7cc0(lVar9,&local_c68,lVar12,lVar14);
      goto LAB_01bdec98;
    }
    if (iVar5 == 5) {
      lVar9 = param_1[0x12];
      goto LAB_01bdec88;
    }
    uVar6 = 0;
    uVar7 = 0;
    if (param_1[0x11] != 0) goto LAB_01bdeca4;
LAB_01bded18:
    uVar7 = FUN_006f50a0(&local_f28,lVar12,lVar13,0);
LAB_01bded2c:
    uVar8 = uVar7;
    if (param_1[0x11] == 0) goto LAB_01bded90;
LAB_01bded38:
    uVar7 = uVar8;
    if (param_1[0x12] == 0) goto LAB_01bded90;
    iVar5 = FUN_01be5d00(*(undefined8 *)PTR_DAT_04bb28f8,lVar12);
    if (iVar5 == 9) {
      lVar14 = param_1[0x11];
    }
    else {
      if (iVar5 != 5) {
        return 0;
      }
      lVar14 = param_1[0x12];
    }
    uVar8 = FUN_01ba7cc0(lVar14,&local_11e8,lVar12,lVar15);
  }
  if ((uVar6 & uVar7 & uVar8 & 1) == 0) {
    return 0;
  }
  puStack_1200 = &local_11ec;
  local_11ec = 10;
  local_1208 = PTR_DAT_04bb2de8 + 0x10;
  local_11f8 = 2;
  FUN_006f43f8(&local_9a8,&local_c68);
  FUN_006f43f8(&local_9a8,&local_1208);
  FUN_006f43f8(&local_9a8,&local_f28);
  FUN_006f43f8(&local_9a8,&local_1208);
  FUN_006f43f8(&local_9a8,&local_11e8);
LAB_01bdee10:
  puVar1 = PTR_DAT_04bb3350;
  lVar15 = *(long *)PTR_DAT_04bc08b0;
  if (lVar15 == 0) {
    lVar12 = 1;
  }
  else {
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)(lVar14 + 0xa8);
    *(long *)(lVar14 + 0xa8) = lVar15;
  }
  FUN_01beea5c(&local_c68,*param_1 + 0x10,*param_1,param_1);
  FUN_006f3d64(&local_c68,&local_508,&local_9a8);
  local_c68 = PTR_DAT_04bc0c00 + 0x10;
  if (local_c00 != (long *)0x0) {
    (**(code **)(*local_c00 + 8))();
  }
  if (local_c08 != (long *)0x0) {
    (**(code **)(*local_c08 + 8))();
  }
  if (local_c10 != (long *)0x0) {
    (**(code **)(*local_c10 + 8))();
  }
  FUN_003532f4(&local_c68);
  if (lVar12 != 1) {
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar15 + 0xa8) = lVar12;
  }
  memset(&local_9a0,0,0x1e0);
  local_7c0 = 0xffffffff;
  local_970 = 0;
  local_968 = 0;
  local_940 = 0;
  local_990 = PTR_DAT_04bb2d80 + 0x10;
  local_938 = 0;
  local_910 = 0;
  local_908 = 0;
  local_8e0 = 0;
  local_8d8 = 0;
  local_8b0 = 0;
  local_8a8 = 0;
  local_880 = 0;
  local_878 = 0;
  local_850 = 0;
  local_848 = 0;
  local_820 = 0;
  local_818 = 0;
  local_7f0 = 0;
  local_7e8 = 0;
  uStack_7a8 = 0;
  local_7a0 = PTR_DAT_04bb2e08 + 0x10;
  local_7b8 = 0;
  uStack_7b0 = 0;
  local_7aa = 0;
  local_798 = 0;
  local_790 = 0;
  local_788 = 0;
  local_780 = 0;
  local_778 = 1;
  local_774 = 0;
  local_9a8 = PTR_DAT_04bc07e0 + 0x10;
  local_960 = local_990;
  local_930 = local_990;
  local_900 = local_990;
  local_8d0 = local_990;
  local_8a0 = local_990;
  local_870 = local_990;
  local_840 = local_990;
  local_810 = local_990;
  local_7e0 = local_990;
  FUN_006f2100(&local_9a8,lVar11,&local_508);
  return 1;
}


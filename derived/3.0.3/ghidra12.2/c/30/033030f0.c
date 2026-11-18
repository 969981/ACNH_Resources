
/* WARNING: Removing unreachable block (ram,0x03303930) */
/* WARNING: Removing unreachable block (ram,0x03303248) */
/* WARNING: Removing unreachable block (ram,0x033037d8) */

long * FUN_033030f0(long param_1,int param_2,long param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  ushort *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined *local_928;
  undefined *puStack_920;
  undefined *local_918;
  undefined *puStack_910;
  undefined *local_908;
  undefined *puStack_900;
  undefined *local_8f8;
  undefined *puStack_8f0;
  undefined *local_8e8;
  undefined *puStack_8e0;
  undefined1 local_8d8;
  undefined4 local_8d4;
  undefined1 local_8d0;
  undefined4 local_8cc;
  undefined1 local_8c8;
  undefined8 local_8c4;
  undefined8 local_8bc;
  undefined4 local_8b4;
  undefined *local_8b0;
  long *local_8a8;
  undefined1 auStack_8a0 [32];
  undefined *local_880;
  long *local_878;
  undefined *local_850;
  long *local_848;
  undefined *local_820;
  long *local_818;
  undefined1 local_7f0;
  undefined4 local_7ec;
  undefined *local_7e8;
  undefined *puStack_7e0;
  undefined2 local_7d8;
  undefined *local_7d0;
  ushort *puStack_7c8;
  long *local_7c0;
  ushort *puStack_7b8;
  undefined *local_7b0;
  ushort *puStack_7a8;
  undefined *local_7a0;
  undefined1 local_798 [12];
  ushort local_78c [2];
  undefined8 local_788;
  undefined8 uStack_780;
  undefined4 local_778;
  undefined *local_770;
  undefined1 *puStack_768;
  undefined4 local_760;
  undefined1 local_75c [63];
  undefined1 local_71d;
  undefined *local_718;
  undefined1 *local_710;
  undefined4 local_708;
  undefined1 local_704 [63];
  undefined1 local_6c5;
  undefined2 local_58e;
  undefined *local_588;
  undefined1 *local_580;
  undefined4 local_578;
  undefined1 local_574 [63];
  undefined1 local_535;
  undefined8 local_530;
  undefined1 *local_528;
  undefined4 local_520;
  undefined1 local_51c;
  undefined8 local_518;
  undefined8 local_510;
  undefined4 local_508;
  undefined *local_500;
  undefined1 *local_4f8;
  undefined4 local_4f0;
  undefined1 local_4ec [63];
  undefined1 local_4ad;
  undefined *local_4a8;
  undefined1 *local_4a0;
  undefined4 local_498;
  undefined1 local_494 [63];
  undefined1 local_455;
  undefined1 auStack_450 [2];
  undefined8 auStack_44e [63];
  undefined8 local_250;
  undefined8 local_248;
  undefined *local_240;
  undefined1 *local_238;
  undefined4 local_230;
  undefined1 local_22c [63];
  undefined1 local_1ed;
  undefined *local_1e8;
  undefined1 *local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d4 [63];
  undefined1 local_195;
  undefined *local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined1 local_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined *local_160;
  undefined1 *local_158;
  undefined4 local_150;
  undefined1 local_14c [63];
  undefined1 local_10d;
  undefined *local_108;
  undefined1 *local_100;
  undefined4 local_f8;
  undefined1 local_f4 [63];
  undefined1 local_b5;
  undefined8 local_b0;
  undefined *local_a8;
  int local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined2 local_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined4 local_6c;
  
  puVar14 = *(undefined8 **)(*(long *)PTR_DAT_04bc90c0 + 0x10);
  if (*(undefined8 **)(*(long *)PTR_DAT_04bc90c0 + 0x18) != puVar14) {
    puVar14 = (undefined8 *)*puVar14;
    if (((*PTR_DAT_04bc9090 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc9090), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bc9088 = PTR_DAT_04bc9098 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc9090);
    }
    if ((puVar14 != (undefined8 *)0x0) &&
       (uVar7 = (**(code **)*puVar14)(puVar14,PTR_DAT_04bc9088), (uVar7 & 1) != 0)) {
      return (long *)0x0;
    }
  }
  local_938 = 0x100000000;
  uStack_930 = 0;
  local_8d8 = 0;
  local_8d4 = 0;
  local_928 = PTR_DAT_04bc8e68 + 0x10;
  local_8d0 = 0;
  local_8cc = 0;
  local_8c8 = 0;
  local_8b4 = 0;
  local_8bc = 0;
  local_8c4 = 0;
  puStack_920 = PTR_DAT_04bb2120;
  puStack_910 = PTR_DAT_04bb2120;
  puStack_900 = PTR_DAT_04bb2120;
  puStack_8f0 = PTR_DAT_04bb2120;
  puStack_8e0 = PTR_DAT_04bb2120;
  local_8b0 = PTR_DAT_04bc90b0 + 0x10;
  local_8a8 = (long *)0x0;
  local_878 = (long *)0x0;
  plVar8 = *(long **)(param_3 + 8);
  local_850 = PTR_DAT_04bc90b8 + 0x10;
  local_7ec = 0;
  local_7d8 = 0;
  puStack_7e0 = PTR_DAT_04bb2120;
  local_848 = (long *)0x0;
  local_818 = (long *)0x0;
  local_7f0 = 1;
  local_948 = (undefined8 *)(param_1 + 0x4e0);
  uStack_940 = 0;
  plVar9 = (long *)0x0;
  local_918 = local_928;
  local_908 = local_928;
  local_8f8 = local_928;
  local_8e8 = local_928;
  local_880 = local_8b0;
  local_820 = local_850;
  local_7e8 = local_928;
  if (plVar8 != (long *)0x0) {
    plVar9 = (long *)(**(code **)(*plVar8 + 0x18))(plVar8,auStack_8a0);
  }
  local_938 = CONCAT44(param_2,(undefined4)local_938);
  local_530 = (undefined *)((ulong)local_530._4_4_ << 0x20);
  local_8a8 = plVar9;
  plVar9 = (long *)(**(code **)(*(long *)*local_948 + 0x30))((long *)*local_948,0xaa8,8);
  FUN_0329485c();
  FUN_032947a0(plVar9,&local_948);
  plVar9[4] = 0x100000020;
  uVar10 = (**(code **)(*plVar9 + 0x38))(plVar9);
  FUN_032b0a00(uVar10,plVar9);
  puVar4 = PTR_DAT_04bb2bc0;
  local_248 = 0;
  local_250 = 0;
  local_238 = local_22c;
  local_1e0 = local_1d4;
  local_1ed = 0;
  local_22c[0] = 0;
  local_158 = local_14c;
  puVar13 = PTR_DAT_04bb2bc0 + 0x10;
  local_14c[0] = 0;
  local_100 = local_f4;
  local_f4[0] = 0;
  local_230 = 0x40;
  local_1d8 = 0x40;
  local_195 = 0;
  local_1d4[0] = 0;
  local_180 = 0;
  local_17c = 0;
  local_178 = 0xffffffff;
  local_170 = 0xffffffff00000000;
  local_168 = 0xffffffff;
  local_150 = 0x40;
  local_10d = 0;
  local_f8 = 0x40;
  local_b5 = 0;
  local_190 = PTR_DAT_04bb2e00 + 0x10;
  local_188 = 0;
  local_a0 = *(int *)PTR_DAT_04bc0b30;
  local_9c = 0;
  *(int *)PTR_DAT_04bc0b30 = local_a0 + 1;
  local_a8 = PTR_DAT_04bc0a78 + 0x10;
  local_b0 = 0;
  local_98 = 0;
  local_51c = 0;
  local_518 = 0xffffffff;
  local_510 = 0xffffffff00000000;
  local_508 = 0xffffffff;
  local_4f0 = 0x40;
  local_4ad = 0;
  local_4ec[0] = 0;
  local_498 = 0x40;
  local_455 = 0;
  local_494[0] = 0;
  local_90 = 0x100;
  local_520 = 0x100;
  local_4f8 = local_4ec;
  local_4a0 = local_494;
  local_530 = PTR_DAT_04bc0bb8 + 0x10;
  local_528 = auStack_450;
  local_500 = puVar13;
  local_4a8 = puVar13;
  local_240 = puVar13;
  local_1e8 = puVar13;
  local_160 = puVar13;
  local_108 = puVar13;
  memset(auStack_450,0,0x200);
  puVar14 = &local_250;
  if (&local_250 <= auStack_44e) {
    puVar14 = auStack_44e;
  }
  memset(auStack_450,0,(long)puVar14 + (-0xe0 - (long)&local_530));
  local_578 = 0x40;
  local_535 = 0;
  local_574[0] = 0;
  lVar15 = *(long *)PTR_DAT_04bc1118;
  local_580 = local_574;
  puVar1 = (undefined4 *)(param_1 + 0x16420);
  local_588 = puVar13;
  FUN_038d1270(&local_588,&DAT_040e92c2,*puVar1);
  local_7a0 = PTR_DAT_04bb2020 + 0x10;
  local_798._0_8_ = "DIALOG_Msg";
  FUN_01bebc30(&local_250,&local_530,&local_7a0,&local_588,0);
  uVar3 = *(uint *)(lVar15 + 0x3c);
  if (uVar3 < 2) {
    if (*(int *)(lVar15 + 0x38) == 0) {
      local_798 = FUN_032fc1e0(lVar15);
    }
    else {
      local_798 = ZEXT812(0);
    }
    local_788 = 0xffffffff;
    uStack_780 = 0xffffffff00000000;
    puStack_768 = local_75c;
    local_78c[0] = local_78c[0] & 0xff00;
    local_7a0 = PTR_DAT_04bb2df8 + 0x10;
    local_778 = 0xffffffff;
    local_760 = 0x40;
    local_71d = 0;
    local_75c[0] = 0;
    local_708 = 0x40;
    local_6c5 = 0;
    local_704[0] = 0;
    local_770 = puVar4 + 0x10;
    local_710 = local_704;
    local_718 = local_770;
    if (uVar3 == 0) {
      if ((*PTR_DAT_04bc0a88 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(PTR_DAT_04bc0a88);
        if (iVar6 != 0) {
          FUN_01bb25c8(PTR_DAT_04bc0a80);
          __cxa_guard_release(PTR_DAT_04bc0a88);
        }
      }
      if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
        uVar7 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar7 * 4) == 0x73) goto LAB_033035cc;
          uVar7 = uVar7 + 1;
        } while (*(uint *)PTR_DAT_04bc0a80 != uVar7);
      }
      uVar7 = 0;
LAB_033035cc:
      local_88 = (undefined *)CONCAT44(local_88._4_4_,(int)uVar7);
      uVar10 = 0;
    }
    else {
      if ((*PTR_DAT_04bc0a88 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(PTR_DAT_04bc0a88);
        if (iVar6 != 0) {
          FUN_01bb25c8(PTR_DAT_04bc0a80);
          __cxa_guard_release(PTR_DAT_04bc0a88);
        }
      }
      if (0 < (int)*(uint *)PTR_DAT_04bc0a80) {
        uVar7 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bc0a80 + 8) + uVar7 * 4) == 0x73) goto LAB_0330356c;
          uVar7 = uVar7 + 1;
        } while (*(uint *)PTR_DAT_04bc0a80 != uVar7);
      }
      uVar7 = 0;
LAB_0330356c:
      local_88 = (undefined *)CONCAT44(local_88._4_4_,(int)uVar7);
      uVar10 = 2;
    }
    FUN_01bae480(&local_a8,&local_7a0,0,&local_88,uVar10);
  }
  FUN_01bebe38(&local_250);
  puVar5 = PTR_DAT_04bb8a50;
  puVar4 = PTR_DAT_04bb8610;
  puVar13 = PTR_DAT_04bb2020;
  if (local_90._1_1_ != '\0') {
    local_58e = 0;
    local_798._0_8_ = local_78c;
    local_798._8_4_ = 0x100;
    local_7a0 = PTR_DAT_04bb8a50 + 0x10;
    local_78c[0] = 0;
    puVar11 = (ushort *)(**(code **)(local_530 + 0x10))(&local_530);
    iVar6 = (**(code **)(local_530 + 0x20))(&local_530);
    uVar10 = local_798._0_8_;
    puStack_7a8 = puVar11;
    if ((ushort *)local_798._0_8_ != puVar11) {
      uVar7 = (ulong)(iVar6 - 1U);
      if ((int)(iVar6 - 1U) < 0) {
        uVar7 = 0;
        do {
          if (puVar11[uVar7] == 0) goto LAB_0330366c;
          if (puVar11[uVar7 + 1] == 0) {
            uVar7 = uVar7 + 1;
            goto LAB_0330366c;
          }
          if (puVar11[uVar7 + 2] == 0) {
            uVar7 = uVar7 + 2;
            goto LAB_0330366c;
          }
          uVar7 = uVar7 + 3;
        } while (uVar7 != 0x80001);
        uVar7 = 0;
      }
LAB_0330366c:
      uVar3 = (uint)uVar7;
      if ((int)local_798._8_4_ <= (int)(uint)uVar7) {
        uVar3 = local_798._8_4_ - 1;
      }
      uVar7 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1;
      memcpy((void *)local_798._0_8_,puVar11,uVar7);
      *(undefined2 *)(uVar10 + uVar7) = 0;
      puStack_7a8 = (ushort *)local_798._0_8_;
    }
    local_7b0 = puVar4 + 0x10;
    local_7c0 = plVar9;
    puVar12 = (undefined *)FUN_032a3a20(&local_7c0);
    if (puVar12 != (undefined *)0x0) {
      local_88 = puVar12;
      FUN_032d67f0(&local_88,&local_7b0);
    }
  }
  pcVar2 = "%04d_a";
  if (param_2 != 1) {
    pcVar2 = "%04d_b";
  }
  FUN_038d1270(&local_588,pcVar2,*puVar1);
  local_7a0 = puVar13 + 0x10;
  local_798._0_8_ = "DIALOG_Msg";
  FUN_01bebc30(&local_250,&local_530,&local_7a0,&local_588,0);
  FUN_01bebe38(&local_250);
  if (local_90._1_1_ != '\0') {
    local_798._0_8_ = local_78c;
    local_58e = 0;
    local_798._8_4_ = 0x100;
    local_7a0 = puVar5 + 0x10;
    local_78c[0] = 0;
    puVar11 = (ushort *)(**(code **)(local_530 + 0x10))(&local_530);
    iVar6 = (**(code **)(local_530 + 0x20))(&local_530);
    uVar10 = local_798._0_8_;
    puStack_7b8 = puVar11;
    if ((ushort *)local_798._0_8_ != puVar11) {
      uVar7 = (ulong)(iVar6 - 1U);
      if ((int)(iVar6 - 1U) < 0) {
        uVar7 = 0;
        do {
          if (puVar11[uVar7] == 0) goto LAB_0330376c;
          if (puVar11[uVar7 + 1] == 0) {
            uVar7 = uVar7 + 1;
            goto LAB_0330376c;
          }
          if (puVar11[uVar7 + 2] == 0) {
            uVar7 = uVar7 + 2;
            goto LAB_0330376c;
          }
          uVar7 = uVar7 + 3;
        } while (uVar7 != 0x80001);
        uVar7 = 0;
      }
LAB_0330376c:
      uVar3 = (uint)uVar7;
      if ((int)local_798._8_4_ <= (int)(uint)uVar7) {
        uVar3 = local_798._8_4_ - 1;
      }
      uVar7 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1;
      memcpy((void *)local_798._0_8_,puVar11,uVar7);
      *(undefined2 *)(uVar10 + uVar7) = 0;
      puStack_7b8 = (ushort *)local_798._0_8_;
    }
    local_7c0 = (long *)(puVar4 + 0x10);
    local_78 = (ulong)local_78._4_4_ << 0x20;
    if (*(long *)(plVar9[0x48] + 0x18) != 0) {
      local_7d0 = *(undefined **)(*(long *)(*(long *)(plVar9[0x48] + 0x18) + 0xf0) + 0x18);
      local_88 = PTR_DAT_04bc8e68 + 0x10;
      puStack_80 = PTR_DAT_04bb2120;
      if (PTR_s_L_Btn_00_T_00_04b19690 != (undefined *)0x0) {
        puStack_80 = PTR_s_L_Btn_00_T_00_04b19690;
      }
      puVar12 = (undefined *)FUN_032a3e70(&local_7d0,&local_88);
      if (puVar12 != (undefined *)0x0) {
        local_88 = puVar12;
        FUN_032d67f0(&local_88,&local_7c0);
      }
    }
  }
  if (param_2 == 2) {
    FUN_038d1270(&local_588,"%04d_a",*puVar1);
    local_7a0 = puVar13 + 0x10;
    local_798._0_8_ = "DIALOG_Msg";
    FUN_01bebc30(&local_250,&local_530,&local_7a0,&local_588,0);
    FUN_01bebe38(&local_250);
    if (local_90._1_1_ != '\0') {
      FUN_006f4a64(&local_530);
      local_798._0_8_ = local_78c;
      local_58e = 0;
      local_798._8_4_ = 0x100;
      local_7a0 = puVar5 + 0x10;
      local_78c[0] = 0;
      puVar11 = (ushort *)(**(code **)(local_530 + 0x10))(&local_530);
      iVar6 = (**(code **)(local_530 + 0x20))(&local_530);
      uVar10 = local_798._0_8_;
      puStack_7c8 = puVar11;
      if ((ushort *)local_798._0_8_ != puVar11) {
        uVar7 = (ulong)(iVar6 - 1U);
        if ((int)(iVar6 - 1U) < 0) {
          uVar7 = 0;
          do {
            if (puVar11[uVar7] == 0) goto LAB_033038c0;
            if (puVar11[uVar7 + 1] == 0) {
              uVar7 = uVar7 + 1;
              goto LAB_033038c0;
            }
            if (puVar11[uVar7 + 2] == 0) {
              uVar7 = uVar7 + 2;
              goto LAB_033038c0;
            }
            uVar7 = uVar7 + 3;
          } while (uVar7 != 0x80001);
          uVar7 = 0;
        }
LAB_033038c0:
        uVar3 = (uint)uVar7;
        if ((int)local_798._8_4_ <= (int)(uint)uVar7) {
          uVar3 = local_798._8_4_ - 1;
        }
        uVar7 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1;
        memcpy((void *)local_798._0_8_,puVar11,uVar7);
        *(undefined2 *)(uVar10 + uVar7) = 0;
        puStack_7c8 = (ushort *)local_798._0_8_;
      }
      local_7d0 = puVar4 + 0x10;
      local_6c = 1;
      if (*(long *)(plVar9[0x48] + 0x18) != 0) {
        local_78 = *(long *)(*(long *)(*(long *)(plVar9[0x48] + 0x18) + 0xf0) + 0x18);
        local_88 = PTR_DAT_04bc8e68 + 0x10;
        puStack_80 = PTR_DAT_04bb2120;
        if (PTR_s_L_Btn_01_T_00_04b19698 != (undefined *)0x0) {
          puStack_80 = PTR_s_L_Btn_01_T_00_04b19698;
        }
        puVar13 = (undefined *)FUN_032a3e70(&local_78,&local_88);
        if (puVar13 != (undefined *)0x0) {
          local_88 = puVar13;
          FUN_032d67f0(&local_88,&local_7d0);
        }
      }
    }
  }
  FUN_01bebabc(&local_250);
  if (local_818 != (long *)0x0) {
    (**(code **)(*local_818 + 8))();
  }
  if (local_848 != (long *)0x0) {
    (**(code **)(*local_848 + 8))();
  }
  if (local_878 != (long *)0x0) {
    (**(code **)(*local_878 + 8))();
  }
  if (local_8a8 != (long *)0x0) {
    (**(code **)(*local_8a8 + 8))();
  }
  return plVar9;
}


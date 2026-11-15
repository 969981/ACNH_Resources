
bool FUN_0211bd58(long param_1,undefined4 *param_2,uint param_3)

{
  undefined4 local_120;
  char local_11c;
  undefined4 local_118;
  undefined *local_110;
  undefined1 *puStack_108;
  undefined4 local_100;
  undefined1 local_fc [31];
  undefined1 local_dd;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined1 local_d2;
  undefined1 local_d1;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined1 local_c1;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined1 local_9a;
  undefined1 local_99;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_92;
  undefined1 local_91;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined4 uStack_80;
  undefined2 local_7c;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined4 local_68;
  undefined2 uStack_64;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined4 uStack_58;
  undefined2 local_54;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  
  if (param_3 == 0xffffffff) {
    return false;
  }
  local_11c = '\0';
  local_dd = 0;
  local_fc[0] = 0;
  local_118 = 0xffffffff;
  local_100 = 0x20;
  puStack_108 = local_fc;
  local_d8 = 3;
  local_120 = *(undefined4 *)PTR_DAT_04bb3238;
  local_110 = PTR_DAT_04bb2028 + 0x10;
  local_d4 = *(undefined2 *)PTR_DAT_04bb37e0;
  local_d2 = PTR_DAT_04bb37e0[2];
  local_d1 = PTR_DAT_04bb37e0[3];
  local_4c = *(undefined4 *)PTR_DAT_04bb37e0;
  local_74 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_8c = *(undefined4 *)PTR_DAT_04bb37e0;
  local_d0 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_40 = *(undefined2 *)PTR_DAT_04bb3170;
  local_3c = 1;
  local_34 = 0;
  local_38 = 0;
  if (param_3 == 0xfffffffe) {
    param_1 = param_1 + 0xf0;
  }
  else {
    if (param_3 < *(uint *)(param_1 + 0x1e8)) {
      param_1 = *(long *)(*(long *)(param_1 + 0x1f0) + (long)(int)param_3 * 8);
    }
    else {
      param_1 = 0;
    }
    param_1 = param_1 + 0xe8;
  }
  local_cc = local_d4;
  local_ca = local_d2;
  local_c9 = local_d1;
  local_c8 = local_d0;
  local_c4 = local_d4;
  local_c2 = local_d2;
  local_c1 = local_d1;
  local_c0 = local_d0;
  local_bc = local_d4;
  local_ba = local_d2;
  local_b9 = local_d1;
  local_b8 = local_d0;
  local_b4 = local_d4;
  local_b2 = local_d2;
  local_b1 = local_d1;
  local_b0 = local_d0;
  local_ac = local_d4;
  local_aa = local_d2;
  local_a9 = local_d1;
  local_a8 = local_d0;
  local_a4 = local_d4;
  local_a2 = local_d2;
  local_a1 = local_d1;
  local_a0 = local_d0;
  local_9c = local_d4;
  local_9a = local_d2;
  local_99 = local_d1;
  local_98 = local_d0;
  local_94 = local_d4;
  local_92 = local_d2;
  local_91 = local_d1;
  local_90 = local_d0;
  local_88 = local_d0;
  local_84 = local_d4;
  uStack_82 = local_d2;
  uStack_81 = local_d1;
  uStack_80 = local_d0;
  local_7c = local_d4;
  uStack_7a = local_d2;
  uStack_79 = local_d1;
  uStack_78 = local_d0;
  local_70 = local_d0;
  local_6c = local_d4;
  local_6a = local_d2;
  local_69 = local_d1;
  local_68 = local_d0;
  uStack_64 = local_d4;
  uStack_62 = local_d2;
  uStack_61 = local_d1;
  local_60 = local_d0;
  local_5c = local_d4;
  uStack_5a = local_d2;
  uStack_59 = local_d1;
  uStack_58 = local_d0;
  local_54 = local_d4;
  uStack_52 = local_d2;
  uStack_51 = local_d1;
  uStack_50 = local_d0;
  local_48 = local_d0;
  FUN_02125bc0(&local_120,param_1);
  if (local_11c != '\0') {
    *param_2 = local_8c;
    param_2[1] = local_88;
    *(ulong *)(param_2 + 2) = CONCAT44(uStack_80,CONCAT13(uStack_81,CONCAT12(uStack_82,local_84)));
    *(ulong *)(param_2 + 4) = CONCAT44(uStack_78,CONCAT13(uStack_79,CONCAT12(uStack_7a,local_7c)));
    param_2[6] = local_74;
    param_2[7] = local_70;
    *(undefined2 *)(param_2 + 8) = local_6c;
    *(undefined1 *)((long)param_2 + 0x22) = local_6a;
    *(undefined1 *)((long)param_2 + 0x23) = local_69;
    *(ulong *)(param_2 + 9) = CONCAT17(uStack_61,CONCAT16(uStack_62,CONCAT24(uStack_64,local_68)));
    param_2[0xb] = local_60;
    *(ulong *)(param_2 + 0xc) = CONCAT44(uStack_58,CONCAT13(uStack_59,CONCAT12(uStack_5a,local_5c)))
    ;
    *(ulong *)(param_2 + 0xe) = CONCAT44(uStack_50,CONCAT13(uStack_51,CONCAT12(uStack_52,local_54)))
    ;
    param_2[0x10] = local_4c;
    param_2[0x11] = local_48;
  }
  return local_11c != '\0';
}


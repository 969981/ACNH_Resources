
bool FUN_0211a6bc(long param_1,undefined4 *param_2,uint param_3)

{
  undefined4 local_110;
  char local_10c;
  undefined4 local_108;
  undefined *local_100;
  undefined1 *puStack_f8;
  undefined4 local_f0;
  undefined1 local_ec [31];
  undefined1 local_cd;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined4 uStack_b8;
  undefined2 local_b4;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined4 local_a0;
  undefined2 uStack_9c;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined4 uStack_90;
  undefined2 local_8c;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined1 local_71;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_61;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined1 local_51;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  undefined1 local_41;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined1 local_39;
  undefined4 local_38;
  undefined2 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined4 local_24;
  
  if (param_3 == 0xffffffff) {
    return false;
  }
  local_10c = '\0';
  local_cd = 0;
  local_ec[0] = 0;
  local_108 = 0xffffffff;
  local_f0 = 0x20;
  local_110 = *(undefined4 *)PTR_DAT_04bb3238;
  puStack_f8 = local_ec;
  local_c8 = 3;
  local_100 = PTR_DAT_04bb2028 + 0x10;
  local_c4 = CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008));
  local_bc = DAT_05586008;
  uStack_ba = DAT_0558600a;
  uStack_b9 = DAT_0558600b;
  local_b4 = DAT_05586008;
  uStack_b2 = DAT_0558600a;
  uStack_b1 = DAT_0558600b;
  local_c0 = DAT_0558600c;
  uStack_b8 = DAT_0558600c;
  uStack_b0 = DAT_0558600c;
  local_ac = CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008));
  local_a8 = DAT_0558600c;
  local_a4 = DAT_05586008;
  local_a2 = DAT_0558600a;
  local_a1 = DAT_0558600b;
  local_a0 = DAT_0558600c;
  uStack_9c = DAT_05586008;
  uStack_9a = DAT_0558600a;
  uStack_99 = DAT_0558600b;
  local_98 = DAT_0558600c;
  local_94 = DAT_05586008;
  uStack_92 = DAT_0558600a;
  uStack_91 = DAT_0558600b;
  uStack_90 = DAT_0558600c;
  local_8c = DAT_05586008;
  uStack_8a = DAT_0558600a;
  uStack_89 = DAT_0558600b;
  uStack_88 = DAT_0558600c;
  local_84 = CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008));
  local_80 = DAT_0558600c;
  local_7c = DAT_05586008;
  local_7a = DAT_0558600a;
  local_79 = DAT_0558600b;
  local_78 = DAT_0558600c;
  local_74 = DAT_05586008;
  local_72 = DAT_0558600a;
  local_71 = DAT_0558600b;
  local_70 = DAT_0558600c;
  local_6c = DAT_05586008;
  local_6a = DAT_0558600a;
  local_69 = DAT_0558600b;
  local_68 = DAT_0558600c;
  local_64 = DAT_05586008;
  local_62 = DAT_0558600a;
  local_61 = DAT_0558600b;
  local_60 = DAT_0558600c;
  local_5c = DAT_05586008;
  local_5a = DAT_0558600a;
  local_59 = DAT_0558600b;
  local_58 = DAT_0558600c;
  local_54 = DAT_05586008;
  local_52 = DAT_0558600a;
  local_51 = DAT_0558600b;
  local_50 = DAT_0558600c;
  local_4c = DAT_05586008;
  local_4a = DAT_0558600a;
  local_49 = DAT_0558600b;
  local_48 = DAT_0558600c;
  local_44 = DAT_05586008;
  local_42 = DAT_0558600a;
  local_41 = DAT_0558600b;
  local_40 = DAT_0558600c;
  local_3c = DAT_05586008;
  local_3a = DAT_0558600a;
  local_39 = DAT_0558600b;
  local_38 = DAT_0558600c;
  local_30 = *(undefined2 *)PTR_DAT_04bb3170;
  local_2c = 1;
  local_24 = 0;
  local_28 = 0;
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
  FUN_02125bc0(&local_110,param_1);
  if (local_10c != '\0') {
    *param_2 = local_c4;
    param_2[1] = local_c0;
    *(ulong *)(param_2 + 2) = CONCAT44(uStack_b8,CONCAT13(uStack_b9,CONCAT12(uStack_ba,local_bc)));
    *(ulong *)(param_2 + 4) = CONCAT44(uStack_b0,CONCAT13(uStack_b1,CONCAT12(uStack_b2,local_b4)));
    param_2[6] = local_ac;
    param_2[7] = local_a8;
    *(undefined2 *)(param_2 + 8) = local_a4;
    *(undefined1 *)((long)param_2 + 0x22) = local_a2;
    *(undefined1 *)((long)param_2 + 0x23) = local_a1;
    *(ulong *)(param_2 + 9) = CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,local_a0)));
    param_2[0xb] = local_98;
    *(ulong *)(param_2 + 0xc) = CONCAT44(uStack_90,CONCAT13(uStack_91,CONCAT12(uStack_92,local_94)))
    ;
    *(ulong *)(param_2 + 0xe) = CONCAT44(uStack_88,CONCAT13(uStack_89,CONCAT12(uStack_8a,local_8c)))
    ;
    param_2[0x10] = local_84;
    param_2[0x11] = local_80;
  }
  return local_10c != '\0';
}


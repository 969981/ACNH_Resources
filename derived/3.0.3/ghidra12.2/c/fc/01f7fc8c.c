
void FUN_01f7fc8c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_160 [2];
  undefined *local_158;
  undefined *puStack_150;
  undefined8 local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined5 local_104;
  undefined3 uStack_ff;
  undefined5 uStack_fc;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  uint5 uStack_c8;
  undefined1 uStack_c2;
  undefined3 uStack_c3;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined1 local_ac [31];
  undefined1 local_8d;
  undefined *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined1 local_74 [31];
  undefined1 local_55;
  undefined8 local_38;
  
  if (*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) < 2) {
    FUN_01f7ea98(param_1);
    return;
  }
  if ((*(int *)((long)param_1 + 0x77b4) < 0x1e) ||
     (*(int *)(param_1[1] + 0x6b4) == *(int *)(*(long *)(param_1[1] + 0x68) + 0x2b4))) {
                    /* WARNING: Could not recover jumptable at 0x01f7fd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x118))(param_1);
    return;
  }
  local_160[0] = 0;
  local_124 = 0;
  uStack_120 = 0xfffe;
  local_148 = 0;
  local_11c = 0;
  local_158 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_150 = PTR_DAT_04bb2010 + 0x10;
  local_138 = 0;
  local_140 = puStack_150;
  FUN_0277d4ac(&uStack_120);
  local_104 = 0;
  uStack_ff = 0;
  uStack_fc = 0;
  local_108 = 0xbf800000;
  local_118 = 0x41c8000041800000;
  uStack_110 = 0xbf800000bf800000;
  local_f4 = 0xfffe;
  FUN_0277d4ac(&local_f4);
  local_ec = 0;
  local_b0 = 0x20;
  local_80 = local_74;
  local_78 = 0x20;
  local_b8 = local_ac;
  local_8d = 0;
  local_c0 = PTR_DAT_04bb2028 + 0x10;
  local_ac[0] = 0;
  local_55 = 0;
  local_74[0] = 0;
  local_160[0] = 0;
  local_148 = 0;
  uStack_128 = 0;
  local_124 = 0;
  local_38 = 0xfffe;
  local_138 = 0;
  uStack_130 = 0;
  local_88 = local_c0;
  FUN_0277d4ac(&local_38);
  uStack_120 = (undefined4)local_38;
  local_11c = local_38._4_4_;
  local_118 = 0x41c8000041800000;
  uStack_110 = 0xbf800000bf800000;
  local_108 = 0xbf800000;
  local_104 = 0;
  uStack_ff = 0;
  uStack_fc = 0;
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  local_ec = 0;
  local_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f4 = local_38;
  local_d0 = 0;
  _uStack_c8 = 0;
  *local_b8 = 0;
  *local_80 = 0;
  uVar1 = _uStack_c8;
  uStack_c8 = (uint5)(uint)uStack_c8;
  uVar2 = _uStack_c8;
  local_e4 = 2;
  uStack_c3._2_1_ = SUB81(uVar1,7);
  _uStack_c8 = CONCAT16(1,(int6)uVar2);
  (**(code **)(*param_1 + 0x38))(param_1,2,local_160,1);
  return;
}


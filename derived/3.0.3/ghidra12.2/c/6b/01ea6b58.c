
void FUN_01ea6b58(long *param_1,byte param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  uint local_178 [2];
  undefined *local_170;
  undefined *puStack_168;
  undefined8 local_160;
  undefined *puStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined5 local_11c;
  undefined3 uStack_117;
  undefined5 uStack_114;
  undefined8 local_10c;
  undefined4 local_104;
  undefined2 local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined1 local_dc;
  byte bStack_db;
  undefined2 uStack_da;
  undefined *local_d8;
  undefined1 *local_d0;
  undefined4 local_c8;
  undefined1 local_c4 [31];
  undefined1 local_a5;
  undefined *local_a0;
  undefined1 *local_98;
  undefined4 local_90;
  undefined1 local_8c [31];
  undefined1 local_6d;
  undefined8 local_68;
  
  lVar4 = param_1[0x1549];
  if ((lVar4 != 0) && (**(char **)(lVar4 + 0x798) != '\0')) {
    uVar1 = FUN_01ad5de0(lVar4 + 0x790);
    local_178[0] = (uint)uVar1;
    local_178[1] = 0;
    FUN_0277d4ac(local_178);
    uVar2 = FUN_01e57b44(*(undefined8 *)(*(long *)(lVar4 + 8) + 0x3b0));
    uVar3 = FUN_0277d7b4(uVar2,local_178);
    if (((uVar3 & 1) != 0) && ((*(byte *)(param_1[0x1549] + 0x7f1) & 0x48) == 0)) {
      local_178[0] = 0;
      local_150 = 0;
      local_13c = 0;
      uStack_138 = 0xfffe;
      local_134 = 0;
      local_170 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_168 = PTR_DAT_04bb2010 + 0x10;
      local_160 = 0;
      puStack_158 = puStack_168;
      FUN_0277d4ac(&uStack_138);
      local_11c = 0;
      uStack_117 = 0;
      uStack_114 = 0;
      local_120 = 0xbf800000;
      local_130 = 0x41c8000041800000;
      uStack_128 = 0xbf800000bf800000;
      local_10c = 0xfffe;
      FUN_0277d4ac(&local_10c);
      local_104 = 0;
      local_c8 = 0x20;
      local_98 = local_8c;
      local_90 = 0x20;
      local_d0 = local_c4;
      local_a5 = 0;
      local_d8 = PTR_DAT_04bb2028 + 0x10;
      local_c4[0] = 0;
      local_6d = 0;
      local_8c[0] = 0;
      local_178[0] = 0;
      local_160 = 0;
      uStack_140 = 0;
      local_13c = 0;
      local_68 = 0xfffe;
      local_150 = 0;
      uStack_148 = 0;
      local_a0 = local_d8;
      FUN_0277d4ac(&local_68);
      uStack_138 = (undefined4)local_68;
      local_134 = local_68._4_4_;
      local_130 = 0x41c8000041800000;
      uStack_128 = 0xbf800000bf800000;
      local_120 = 0xbf800000;
      local_11c = 0;
      uStack_117 = 0;
      uStack_114 = 0;
      local_68 = 0xfffe;
      FUN_0277d4ac(&local_68);
      local_104 = 0;
      local_100 = 0;
      local_fc = 0;
      local_f4 = 0;
      local_ec = 0;
      local_e4 = 0;
      local_10c = local_68;
      uStack_da = 0;
      *local_d0 = 0;
      *local_98 = 0;
      _local_dc = CONCAT11(param_2 & 1,1);
      (**(code **)(*param_1 + 0x38))(param_1,0x1f,local_178,1);
      return;
    }
  }
  if ((param_2 & 1) == 0) {
    uVar3 = (**(code **)(param_1[0xfa5] + 0x10))(param_1 + 0xfa5);
    if ((uVar3 & 1) != 0) {
      (**(code **)param_1[0xfa5])(param_1 + 0xfa5);
      *(undefined1 *)(param_1 + 0xfa2) = 0xc;
    }
    *(undefined1 *)(param_1 + 0xfa1) = 1;
    FUN_03ebb160(param_1 + 0xf8d,4);
  }
                    /* WARNING: Could not recover jumptable at 0x01ea6c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1,4,0,1);
  return;
}


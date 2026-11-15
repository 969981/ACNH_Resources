
undefined8 FUN_01ee7038(long *param_1,long param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 local_168 [2];
  undefined *local_160;
  undefined *puStack_158;
  undefined8 local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined5 local_10c;
  undefined3 uStack_107;
  undefined5 uStack_104;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined2 local_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined *local_c8;
  undefined1 *local_c0;
  int local_b8;
  undefined1 local_b4 [31];
  undefined1 local_95;
  undefined *local_90;
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 local_7c [31];
  undefined1 local_5d;
  undefined8 local_58;
  
  local_168[0] = 0;
  local_150 = 0;
  local_124 = 0;
  local_160 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_158 = PTR_DAT_04bb2010 + 0x10;
  local_140 = 0;
  local_12c = 0;
  uStack_128 = 0xfffe;
  local_148 = puStack_158;
  FUN_0277d4ac(&uStack_128);
  local_10c = 0;
  uStack_107 = 0;
  uStack_104 = 0;
  local_110 = 0xbf800000;
  local_120 = 0x41c8000041800000;
  uStack_118 = 0xbf800000bf800000;
  local_fc = 0xfffe;
  FUN_0277d4ac(&local_fc);
  local_f4 = 0;
  local_95 = 0;
  local_c0 = local_b4;
  local_b8 = 0x20;
  local_c8 = PTR_DAT_04bb2028 + 0x10;
  local_80 = 0x20;
  local_88 = local_7c;
  local_b4[0] = 0;
  local_5d = 0;
  local_7c[0] = 0;
  local_168[0] = 0;
  local_150 = 0;
  uStack_130 = 0;
  local_12c = 0;
  local_58 = 0xfffe;
  local_140 = 0;
  uStack_138 = 0;
  local_90 = local_c8;
  FUN_0277d4ac(&local_58);
  uStack_128 = (undefined4)local_58;
  local_124 = local_58._4_4_;
  local_120 = 0x41c8000041800000;
  uStack_118 = 0xbf800000bf800000;
  local_110 = 0xbf800000;
  local_10c = 0;
  uStack_107 = 0;
  uStack_104 = 0;
  local_58 = 0xfffe;
  FUN_0277d4ac(&local_58);
  local_f4 = 0;
  local_f0 = 0;
  local_ec = 0;
  local_e4 = 0;
  local_dc = 0;
  local_d4 = 0;
  local_cc = 0;
  local_fc = local_58;
  *local_c0 = 0;
  *local_88 = 0;
  if (((ulong)*(byte *)(param_2 + 8) < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
    puVar4 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + (ulong)*(byte *)(param_2 + 8) * 4 + 0xde8);
  }
  else {
    puVar4 = (undefined4 *)PTR_DAT_04bb3238;
  }
  local_168[0] = *puVar4;
  puVar3 = (undefined8 *)FUN_01e57b44(*(undefined8 *)(param_1[1] + 0x3b0));
  puVar2 = local_c0;
  local_fc = *puVar3;
  local_cc = CONCAT31(local_cc._1_3_,1);
  local_f4 = *(undefined4 *)(param_1[1] + 0x750);
  if (local_c0 != PTR_s_EmotEnd_04bb4608 + 0x1c6) {
    iVar1 = 5;
    if (local_b8 < 6) {
      iVar1 = local_b8 + -1;
    }
    memcpy(local_c0,PTR_s_EmotEnd_04bb4608 + 0x1c6,(long)iVar1);
    puVar2[iVar1] = 0;
  }
  (**(code **)(*param_1 + 0x38))(param_1,0x35,local_168,0);
  return 1;
}


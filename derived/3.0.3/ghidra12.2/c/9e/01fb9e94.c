
void FUN_01fb9e94(long *param_1)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined4 local_168 [2];
  undefined **local_160;
  undefined8 *puStack_158;
  undefined8 local_150;
  undefined8 *local_148;
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
  char *local_c0;
  int local_b8;
  char local_b4 [31];
  undefined1 local_95;
  undefined *local_90;
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 local_7c [31];
  undefined1 local_5d;
  undefined8 local_58;
  
  uVar3 = (**(code **)(*param_1 + 0x5c0))();
  if ((uVar3 & 1) != 0) {
    FUN_01fb9bc0(param_1);
    return;
  }
  *(undefined4 *)((long)param_1 + 0xaf8c) = 0xf;
  local_168[0] = 0;
  local_150 = 0;
  local_124 = 0;
  local_160 = &PTR_FUN_0498d548;
  puStack_158 = &DAT_048f9750;
  local_148 = &DAT_048f9750;
  local_140 = 0;
  local_12c = 0;
  uStack_128 = 0xfffe;
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
  local_b4[0] = '\0';
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
  *local_c0 = '\0';
  *local_88 = 0;
  pcVar2 = local_c0;
  if (local_c0 != "NpcListen") {
    iVar1 = 9;
    if (local_b8 < 10) {
      iVar1 = local_b8 + -1;
    }
    memcpy(local_c0,"NpcListen",(long)iVar1);
    pcVar2[iVar1] = '\0';
  }
  puVar4 = (undefined8 *)FUN_01e57b44(param_1[2]);
  local_fc = *puVar4;
  (**(code **)(*param_1 + 0x38))(param_1,0x3f,local_168,1);
  return;
}


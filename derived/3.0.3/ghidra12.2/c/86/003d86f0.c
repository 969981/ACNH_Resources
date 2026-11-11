
void FUN_003d86f0(undefined8 param_1,undefined8 *param_2,long param_3,undefined8 param_4,int param_5
                 ,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  void *__src;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar9 = &local_150;
  uStack_58 = param_2[7];
  local_60 = (undefined4)param_2[6];
  uVar3 = local_60;
  uStack_5c = (undefined4)((ulong)param_2[6] >> 0x20);
  uVar4 = uStack_5c;
  local_50 = param_2[8];
  uStack_48 = param_2[9];
  local_80 = (undefined4)param_2[2];
  uStack_7c = (undefined4)((ulong)param_2[2] >> 0x20);
  uStack_78 = (undefined4)param_2[3];
  local_74 = (undefined4)((ulong)param_2[3] >> 0x20);
  uVar6 = param_2[4];
  local_68 = (undefined4)param_2[5];
  uVar1 = local_68;
  uStack_64 = (undefined4)((ulong)param_2[5] >> 0x20);
  uVar2 = uStack_64;
  local_90 = *param_2;
  local_88 = param_2[1];
  local_70 = uVar6;
  if (param_3 == 0) {
    if ((param_5 == 1) && (param_6 == 1)) {
      local_60 = 0;
      uStack_5c = 0;
      local_70 = 0;
      local_68 = 0;
      uStack_64 = 0;
      local_80 = uVar1;
      local_74 = uVar4;
      uStack_7c = uVar2;
      uStack_78 = uVar3;
      local_88 = uVar6;
    }
    FUN_003c1d84(param_4,&local_90);
    return;
  }
  lVar5 = FUN_003c03d8(param_3);
  uVar4 = uStack_5c;
  uVar3 = local_60;
  uVar2 = uStack_64;
  uVar1 = local_68;
  if (lVar5 == 0) {
    if ((param_5 == 1) && (param_6 == 1)) {
      local_88 = local_70;
      local_60 = 0;
      uStack_5c = 0;
      local_70 = 0;
      local_68 = 0;
      uStack_64 = 0;
      local_80 = uVar1;
      local_74 = uVar4;
      uStack_7c = uVar2;
      uStack_78 = uVar3;
    }
    FUN_003c1d84(param_4,&local_90);
    uVar6 = FUN_003c036c(param_3);
    uVar7 = FUN_003c03d8(param_3);
    uVar8 = FUN_003c0458(param_3);
    puVar9 = (undefined4 *)0x0;
  }
  else {
    __src = (void *)FUN_003c03f4(param_3);
    memcpy(&local_150,__src,0xc0);
    uVar2 = local_60;
    uVar1 = uStack_64;
    if ((param_5 == 1) && (param_6 == 1)) {
      local_80 = local_68;
      local_74 = uStack_5c;
      local_88 = local_70;
      local_70 = 0;
      local_68 = 0;
      uStack_64 = 0;
      local_60 = 0;
      uStack_5c = 0;
      uStack_7c = uVar1;
      uStack_78 = uVar2;
      local_150 = (undefined4)local_f0;
      uStack_14c = local_f0._4_4_;
      local_148 = (undefined4)local_e8;
      uStack_144 = local_e8._4_4_;
      local_140 = (undefined4)local_e0;
      uStack_13c = local_e0._4_4_;
      local_138 = (undefined4)local_d8;
      uStack_134 = local_d8._4_4_;
      local_130 = (undefined4)local_d0;
      uStack_12c = local_d0._4_4_;
      local_128 = (undefined4)local_c8;
      uStack_124 = local_c8._4_4_;
      local_120 = (undefined4)local_c0;
      uStack_11c = local_c0._4_4_;
      local_118 = (undefined4)local_b8;
      uStack_114 = local_b8._4_4_;
      local_110 = (undefined4)local_b0;
      uStack_10c = local_b0._4_4_;
      local_108 = (undefined4)local_a8;
      uStack_104 = local_a8._4_4_;
      local_100 = (undefined4)local_a0;
      uStack_fc = local_a0._4_4_;
      local_f8 = (undefined4)local_98;
      uStack_f4 = local_98._4_4_;
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
    }
    FUN_003c1d84(param_4,&local_90);
    uVar6 = FUN_003c036c(param_3);
    uVar7 = FUN_003c03d8(param_3);
    uVar8 = FUN_003c0458(param_3);
  }
  thunk_FUN_003c19b0(param_4,uVar6,uVar7,puVar9,uVar8);
  return;
}


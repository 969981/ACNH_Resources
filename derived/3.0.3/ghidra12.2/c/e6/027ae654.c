
void FUN_027ae654(byte *param_1,long *param_2)

{
  undefined2 *puVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined1 auStack_1a4 [4];
  undefined *local_1a0;
  undefined8 *puStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined *local_170;
  undefined1 *puStack_168;
  undefined4 local_160;
  undefined1 local_15c [63];
  undefined1 local_11d;
  undefined *local_118;
  undefined1 *puStack_110;
  undefined4 local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
  undefined8 local_c0;
  undefined6 uStack_b8;
  undefined2 local_b2;
  undefined6 uStack_b0;
  undefined2 uStack_aa;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80 [2];
  byte *local_78;
  undefined *local_70;
  byte *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  
  uVar6 = (uint)param_1[0x58];
  local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,uVar6);
  if (uVar6 == 2) {
    local_68 = param_1 + 2;
    if (*(short *)local_68 == 0) {
      uVar5 = FUN_027af340(auStack_1a4,param_1);
      FUN_027af560(uVar5,param_2,auStack_1a4);
    }
    else {
      local_70 = (undefined *)CONCAT44(local_70._4_4_,0x19);
      if (param_2 != (long *)0x0) {
        (**(code **)(*param_2 + 0x38))(param_2);
        local_188 = 0;
        uStack_180 = 0;
        local_190 = 0;
        local_178 = CONCAT31(local_178._1_3_,1);
        local_174 = 0;
        local_1a0 = PTR_DAT_04bc0cd8 + 0x10;
        puStack_198 = (undefined8 *)0x0;
        FUN_02906b00(&local_1a0,param_2,&local_70);
      }
    }
  }
  else {
    if (uVar6 == 1) {
      local_58._0_4_ = (uint)(uint3)local_58;
      local_68 = (byte *)((long)&local_60 + 4);
      local_60 = CONCAT35(local_60._5_3_,8);
      local_70 = PTR_DAT_04bb3768 + 0x10;
      FUN_038d1270(&local_70,"-----");
      if ((ulong)*param_1 < 0x23) {
        FUN_038d1270(&local_70,"%s%02d",
                     *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0),param_1[1]);
      }
      (**(code **)(local_70 + 0x18))(&local_70);
      pbVar3 = local_68;
      local_190._4_4_ = local_190._4_4_ & 0xffffff00;
      local_190 = CONCAT44(local_190._4_4_,0x20);
      local_188 = 0xffffffff;
      uStack_180 = 0xffffffff00000000;
      puStack_168 = local_15c;
      puStack_198 = &local_c0;
      local_178 = 0xffffffff;
      local_160 = 0x40;
      local_11d = 0;
      local_15c[0] = 0;
      local_170 = PTR_DAT_04bb2bc0 + 0x10;
      local_108 = 0x40;
      local_c5 = 0;
      local_104[0] = 0;
      puStack_110 = local_104;
      local_1a0 = PTR_DAT_04bb4e10 + 0x10;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b2 = 0;
      uStack_b0 = 0;
      uStack_aa = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      puVar4 = local_80;
      if (local_80 <= (undefined4 *)((long)&local_c0 + 2U)) {
        puVar4 = (undefined4 *)((long)&local_c0 + 2U);
      }
      local_118 = local_170;
      memset(puStack_198,0,(long)puVar4 + (-0xe0 - (long)&local_1a0));
      FUN_01c0e6b4(&local_1a0,pbVar3,PTR_DAT_04bb2df0);
    }
    else {
      if (uVar6 != 0) {
        return;
      }
      local_190._4_4_ = local_190._4_4_ & 0xffffff00;
      local_190 = CONCAT44(local_190._4_4_,0xb);
      local_188 = 0xffffffff;
      uStack_180 = 0xffffffff00000000;
      puStack_168 = local_15c;
      puStack_198 = &local_c0;
      local_178 = 0xffffffff;
      local_160 = 0x40;
      local_11d = 0;
      local_15c[0] = 0;
      local_170 = PTR_DAT_04bb2bc0 + 0x10;
      local_108 = 0x40;
      local_c5 = 0;
      local_104[0] = 0;
      puStack_110 = local_104;
      uStack_b0 = 0;
      local_1a0 = PTR_DAT_04bb5128 + 0x10;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b2 = 0;
      puVar1 = &uStack_aa;
      if (&uStack_aa <= (undefined2 *)((long)&local_c0 + 2U)) {
        puVar1 = (undefined2 *)((long)&local_c0 + 2U);
      }
      local_118 = local_170;
      memset(puStack_198,0,(long)puVar1 + (-0xe1 - (long)&local_1a0) & 0xfffffffffffffffcU | 2);
      local_80[0] = 10;
      local_78 = param_1 + 0x20;
      FUN_0082b014(&local_1a0);
      local_58 = 0;
      uStack_50 = 0;
      local_60 = 0;
      local_48 = 1;
      local_44 = 0;
      local_70 = PTR_DAT_04bc0cd8 + 0x10;
      local_68 = (byte *)0x0;
      FUN_02906b00(&local_70,&local_1a0,local_80);
      iVar2 = *(int *)(param_1 + 0x34);
      puVar4 = (undefined4 *)(**(code **)(local_1a0 + 0x40))(&local_1a0);
      uVar7 = 1;
      if (iVar2 == 1) {
        uVar7 = 2;
      }
      *puVar4 = uVar7;
    }
    (**(code **)(*param_2 + 0x28))(param_2,&local_1a0);
    (**(code **)(*param_2 + 0x30))(param_2,&local_1a0);
  }
  return;
}


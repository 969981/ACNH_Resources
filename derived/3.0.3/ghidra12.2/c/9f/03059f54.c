
void FUN_03059f54(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined **local_218;
  undefined **ppuStack_210;
  undefined *local_1f8;
  undefined1 *puStack_1f0;
  undefined4 local_1e8;
  undefined1 local_1e4 [63];
  undefined1 local_1a5;
  undefined8 local_1a0;
  undefined *local_198;
  undefined8 *puStack_190;
  undefined4 local_188;
  undefined1 local_184 [4];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined *local_168;
  undefined1 *puStack_160;
  undefined4 local_158;
  undefined1 local_154 [15];
  undefined1 local_145;
  undefined8 local_140;
  undefined1 local_115;
  undefined *local_110;
  undefined1 *puStack_108;
  undefined4 local_100;
  undefined1 local_fc [63];
  undefined1 local_bd;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined2 local_90;
  undefined1 auStack_8e [6];
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  char *pcStack_70;
  
  if (param_1 != 0) {
    puVar6 = (undefined8 *)**(undefined8 **)(param_1 + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if ((puVar6 != (undefined8 *)0x0) &&
       (uVar5 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58), (uVar5 & 1) != 0)) {
      local_140 = *(undefined8 *)puVar6[0x43];
      local_188 = 0x40;
      local_145 = 0;
      puStack_190 = (undefined8 *)local_184;
      local_184[0] = 0;
      puStack_80 = (undefined *)*param_2;
      puVar1 = PTR_DAT_04bb2bc0 + 0x10;
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      pcStack_70 = "MyDesignExchInfoBtn";
      local_1f8 = PTR_DAT_04bc5058 + 0x10;
      local_198 = puVar1;
      local_88 = puVar2;
      local_78 = puVar2;
      FUN_03462c84(&local_198,&local_78,&local_88,&local_1f8);
      if (*(short *)(param_2 + 3) != *(short *)PTR_DAT_04bb3170) {
        local_184[0] = 0;
        local_188 = 0x15;
        puStack_190 = &local_b8;
        local_180 = 0xffffffff;
        uStack_178 = 0xffffffff00000000;
        puStack_160 = local_154;
        local_170 = 0xffffffff;
        local_158 = 0x40;
        local_115 = 0;
        local_154[0] = 0;
        local_100 = 0x40;
        local_bd = 0;
        local_fc[0] = 0;
        puStack_108 = local_fc;
        local_90 = 0;
        local_b8 = 0;
        local_198 = PTR_DAT_04bc0ce8 + 0x10;
        puVar3 = auStack_8e;
        if (auStack_8e <= (undefined1 *)((long)&local_b8 + 2U)) {
          puVar3 = (undefined1 *)((long)&local_b8 + 2U);
        }
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_168 = puVar1;
        local_110 = puVar1;
        memset(puStack_190,0,(ulong)(puVar3 + (-0xe1 - (long)&local_198)) & 0xfffffffffffffff8 | 2);
        FUN_01c0cff4(&local_198,param_2 + 3);
        puStack_1f0 = local_1e4;
        local_1a0 = *(undefined8 *)(puVar6[0x43] + (ulong)(1 < *(uint *)(puVar6 + 0x42)) * 8);
        local_1e8 = 0x40;
        local_1a5 = 0;
        local_1e4[0] = 0;
        pcStack_70 = "MyDesignExchInfoBtn";
        puStack_80 = &DAT_040f6620;
        local_218 = &PTR_LAB_04af7ab8;
        ppuStack_210 = &local_198;
        local_1f8 = puVar1;
        local_88 = puVar2;
        local_78 = puVar2;
        FUN_034630a0(&local_1f8,&local_78,&local_88,&local_218);
      }
    }
    if (*(long *)(param_1 + 0x578) != 0) {
      puStack_190 = (undefined8 *)local_184;
      local_140 = **(undefined8 **)(*(long *)(param_1 + 0x578) + 0x2e0);
      local_188 = 0x40;
      local_145 = 0;
      local_198 = PTR_DAT_04bb2bc0 + 0x10;
      local_88 = PTR_DAT_04bb2020 + 0x10;
      pcStack_70 = "MyDesignExchInfoBtn";
      puStack_80 = (undefined *)param_2[1];
      local_184[0] = 0;
      local_1f8 = PTR_DAT_04bc5058 + 0x10;
      local_78 = local_88;
      FUN_03462c84(&local_198,&local_78,&local_88,&local_1f8);
    }
    if (*(long *)(param_1 + 0x580) != 0) {
      local_140 = **(undefined8 **)(*(long *)(param_1 + 0x580) + 0x2e0);
      local_188 = 0x40;
      puStack_190 = (undefined8 *)local_184;
      local_198 = PTR_DAT_04bb2bc0 + 0x10;
      local_88 = PTR_DAT_04bb2020 + 0x10;
      pcStack_70 = "MyDesignExchInfoBtn";
      puStack_80 = (undefined *)param_2[2];
      local_145 = 0;
      local_184[0] = 0;
      local_1f8 = PTR_DAT_04bc5058 + 0x10;
      local_78 = local_88;
      FUN_03462c84(&local_198,&local_78,&local_88,&local_1f8);
    }
  }
  return;
}


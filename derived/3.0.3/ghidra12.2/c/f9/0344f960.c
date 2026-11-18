
void FUN_0344f960(long param_1,ulong *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined **local_1f0;
  undefined **ppuStack_1e8;
  undefined *local_1d0;
  undefined *puStack_1c8;
  undefined *local_1c0;
  char *pcStack_1b8;
  undefined8 local_1b0;
  undefined1 *local_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [63];
  undefined1 local_15d;
  undefined8 local_158;
  undefined *local_150;
  undefined8 *puStack_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined *local_120;
  undefined1 *puStack_118;
  undefined4 local_110;
  undefined1 local_10c [63];
  undefined1 local_cd;
  undefined *local_c8;
  undefined1 *puStack_c0;
  undefined4 local_b8;
  undefined1 local_b4 [63];
  undefined1 local_75;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_1 != 0) {
    puVar6 = (undefined8 *)**(undefined8 **)(param_1 + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if ((puVar6 != (undefined8 *)0x0) &&
       (uVar5 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58), puVar3 = PTR_DAT_04bb2bc0,
       (uVar5 & 1) != 0)) {
      local_13c = 0;
      local_140 = 0x20;
      local_138 = 0xffffffff;
      uStack_130 = 0xffffffff00000000;
      puStack_148 = &local_70;
      local_128 = 0xffffffff;
      puStack_118 = local_10c;
      local_110 = 0x40;
      local_cd = 0;
      local_10c[0] = 0;
      local_120 = PTR_DAT_04bb2bc0 + 0x10;
      local_b8 = 0x40;
      local_75 = 0;
      local_b4[0] = 0;
      puStack_c0 = local_b4;
      local_150 = PTR_DAT_04bb4e10 + 0x10;
      local_40 = 0;
      uStack_38 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      uStack_68 = 0;
      puVar1 = local_b4 + 0x84;
      if (local_b4 + 0x84 <= (undefined1 *)((long)&local_70 + 2U)) {
        puVar1 = (undefined1 *)((long)&local_70 + 2U);
      }
      local_c8 = local_120;
      memset(puStack_148,0,(size_t)(puVar1 + (-0xe0 - (long)&local_150)));
      uVar5 = *param_2;
      if (uVar5 == 0) {
        FUN_0080e7dc(&local_150);
      }
      else {
        local_1b0 = (undefined *)((ulong)local_1b0._4_4_ << 0x20);
        local_1a8 = (undefined1 *)0;
        if (uVar5 <= DAT_04c88ec8) {
          local_1a8 = (undefined1 *)uVar5;
        }
        FUN_01c15060(&local_150,&local_1b0,&DAT_041697ea);
      }
      local_1b0 = puVar3 + 0x10;
      lVar2 = 0x28;
      if (*(uint *)(puVar6 + 0x42) < 6) {
        lVar2 = 0;
      }
      local_158 = *(undefined8 *)(puVar6[0x43] + lVar2);
      local_1a0 = 0x40;
      local_1a8 = local_19c;
      local_15d = 0;
      local_19c[0] = 0;
      ppuStack_1e8 = &local_150;
      local_1d0 = PTR_DAT_04bb2020 + 0x10;
      pcStack_1b8 = "MyDesignExchInfo";
      puStack_1c8 = &DAT_040c6534;
      local_1f0 = &PTR_LAB_04b2af30;
      local_1c0 = local_1d0;
      FUN_034630a0(&local_1b0,&local_1c0,&local_1d0,&local_1f0);
    }
  }
  return;
}


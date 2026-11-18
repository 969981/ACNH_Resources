
void FUN_0351e7c0(long param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *local_408;
  undefined8 uStack_400;
  undefined *local_3f8;
  undefined2 local_3f0;
  undefined8 local_3ec;
  undefined4 local_3e4;
  undefined *local_3e0;
  undefined8 uStack_3d8;
  undefined4 local_3d0;
  undefined1 local_3cc;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined4 local_3b8;
  undefined *local_3b0;
  undefined1 *puStack_3a8;
  undefined4 local_3a0;
  undefined1 local_39c [63];
  undefined1 local_35d;
  undefined *local_358;
  undefined1 *puStack_350;
  undefined4 local_348;
  undefined1 local_344 [63];
  undefined1 local_305;
  undefined8 local_300;
  undefined *local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined1 local_2e4;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined4 local_2d0;
  undefined *local_2c8;
  undefined1 *puStack_2c0;
  undefined4 local_2b8;
  undefined1 local_2b4 [63];
  undefined1 local_275;
  undefined *local_270;
  undefined1 *puStack_268;
  undefined4 local_260;
  undefined1 local_25c [63];
  undefined1 local_21d;
  undefined8 local_218;
  undefined *puStack_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined1 local_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined *local_1e0;
  undefined1 *local_1d8;
  undefined4 local_1d0;
  undefined1 local_1cc [63];
  undefined1 local_18d;
  undefined *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  undefined1 local_174 [63];
  undefined1 local_135;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined *local_118;
  undefined1 *local_110;
  undefined4 local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  undefined *local_68;
  int local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_48;
  
  puVar4 = (undefined8 *)**(undefined8 **)(*(long *)(param_1 + 0x218) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  if ((puVar4 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc4e58), (uVar3 & 1) != 0)) {
    lVar5 = 0x28;
    if (*(uint *)(puVar4 + 0x42) < 6) {
      lVar5 = 0;
    }
    lVar5 = *(long *)(puVar4[0x43] + lVar5);
    if (lVar5 != 0) {
      local_3ec = 0;
      local_3f0 = 0x100;
      local_3e4 = 0;
      local_3d0 = 0;
      puStack_3a8 = local_39c;
      local_3cc = 0;
      local_3c8 = 0xffffffff;
      uStack_3c0 = 0xffffffff00000000;
      local_3b8 = 0xffffffff;
      local_3a0 = 0x40;
      local_35d = 0;
      local_3b0 = PTR_DAT_04bb2bc0 + 0x10;
      local_39c[0] = 0;
      local_348 = 0x40;
      local_305 = 0;
      local_344[0] = 0;
      puStack_350 = local_344;
      local_3e0 = PTR_DAT_04bb2e00 + 0x10;
      puStack_268 = local_25c;
      local_25c[0] = 0;
      puStack_2c0 = local_2b4;
      local_2b4[0] = 0;
      local_2d0 = 0xffffffff;
      local_1f8 = 0xffffffff;
      local_1e8 = 0xffffffff;
      local_1f0 = 0xffffffff00000000;
      local_2e8 = 0;
      local_2e4 = 0;
      local_2b8 = 0x40;
      local_275 = 0;
      local_260 = 0x40;
      local_21d = 0;
      local_300 = 0;
      local_208 = 0;
      local_200 = 0;
      local_1fc = 0;
      local_1d0 = 0x40;
      local_18d = 0;
      local_178 = 0x40;
      local_135 = 0;
      local_120 = 0;
      local_128 = 0;
      local_130 = 0;
      local_108 = 0x40;
      local_c5 = 0;
      local_b0 = 0x40;
      local_6d = 0;
      local_2e0 = 0xffffffff;
      uStack_2d8 = 0xffffffff00000000;
      local_110 = local_104;
      local_104[0] = 0;
      local_b8 = local_ac;
      local_ac[0] = 0;
      local_1d8 = local_1cc;
      local_1cc[0] = 0;
      local_180 = local_174;
      local_174[0] = 0;
      uStack_3d8 = 0;
      uStack_2f0 = 0;
      local_218 = 0;
      local_60 = *(int *)PTR_DAT_04bc0b30;
      local_5c = 0;
      *(int *)PTR_DAT_04bc0b30 = local_60 + 1;
      local_68 = PTR_DAT_04bc0a78 + 0x10;
      local_3f8 = PTR_DAT_04bc0bf0 + 0x10;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      lVar1 = 0;
      if (param_3 - 1U < 3) {
        lVar1 = (ulong)(param_3 - 1U) + 1;
      }
      local_358 = local_3b0;
      local_2f8 = local_3e0;
      local_2c8 = local_3b0;
      local_270 = local_3b0;
      puStack_210 = local_3e0;
      local_1e0 = local_3b0;
      local_188 = local_3b0;
      local_118 = local_3b0;
      local_c0 = local_3b0;
      if (param_2 == 4) {
        (**(code **)(DAT_056f8190 + 0x18))(&DAT_056f8190);
        puVar4 = &DAT_05767e00;
      }
      else {
        (**(code **)(DAT_056f8190 + 0x18))(&DAT_056f8190);
        puVar4 = &DAT_05767df0;
      }
      local_408 = PTR_DAT_04bb2020 + 0x10;
      uStack_400 = DAT_056f8198;
      FUN_01bea210(&local_3f8,lVar5,&local_408,puVar4);
      FUN_01bb0ec0(&local_68,lVar1,0);
      FUN_01bea9c8(&local_3f8);
      FUN_01be9eb8(&local_3f8);
    }
  }
  return;
}


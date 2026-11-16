
undefined8 FUN_026e5c5c(long param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_390;
  undefined8 *puStack_388;
  undefined4 local_380;
  undefined1 local_37c;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  undefined *local_360;
  undefined1 *puStack_358;
  undefined4 local_350;
  undefined1 local_34c [63];
  undefined1 local_30d;
  undefined *local_308;
  undefined1 *puStack_300;
  undefined4 local_2f8;
  undefined1 local_2f4 [63];
  undefined1 local_2b5;
  undefined8 local_2b0;
  undefined6 uStack_2a8;
  undefined2 local_2a2;
  undefined6 uStack_2a0;
  undefined1 auStack_29a [2];
  undefined4 local_298;
  undefined8 local_294;
  undefined8 local_288;
  undefined1 auStack_280 [16];
  undefined *local_270;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined *local_240;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined *local_210;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined *local_1e0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined *local_1b0;
  undefined8 local_190;
  undefined8 local_188;
  undefined *local_180;
  undefined8 local_160;
  undefined8 local_158;
  undefined *local_150;
  undefined8 local_130;
  undefined8 local_128;
  undefined *local_120;
  undefined8 local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_54;
  
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    uVar6 = 1;
  }
  else {
    FUN_02703058(&local_288);
    uVar6 = 1;
    if (local_288._4_1_ != '\0') {
      local_37c = 0;
      local_380 = 0xb;
      local_378 = 0xffffffff;
      uStack_370 = 0xffffffff00000000;
      puStack_358 = local_34c;
      puStack_388 = &local_2b0;
      local_368 = 0xffffffff;
      local_350 = 0x40;
      local_30d = 0;
      local_34c[0] = 0;
      local_360 = PTR_DAT_04bb2bc0 + 0x10;
      local_2f8 = 0x40;
      local_2b5 = 0;
      local_2f4[0] = 0;
      puStack_300 = local_2f4;
      uStack_2a0 = 0;
      local_390 = PTR_DAT_04bb5128 + 0x10;
      local_2b0 = 0;
      uStack_2a8 = 0;
      local_2a2 = 0;
      puVar1 = auStack_29a;
      if (auStack_29a <= (undefined1 *)((long)&local_2b0 + 2U)) {
        puVar1 = (undefined1 *)((long)&local_2b0 + 2U);
      }
      local_308 = local_360;
      memset(puStack_388,0,(ulong)(puVar1 + (-0xe1 - (long)&local_390)) & 0xfffffffffffffffc | 2);
      local_298 = 2;
      local_294 = CONCAT17(local_294._7_1_,0x1010000);
      memset(auStack_280,0,0x1e0);
      local_250 = 0;
      uStack_248 = 0;
      local_220 = 0;
      uStack_218 = 0;
      local_270 = PTR_DAT_04bb2d80 + 0x10;
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_190 = 0;
      local_188 = 0;
      local_160 = 0;
      local_158 = 0;
      local_130 = 0;
      local_128 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      local_a0 = 0xffffffff;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_288 = PTR_DAT_04bb2d40 + 0x10;
      local_80 = PTR_DAT_04bb2e08 + 0x10;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 1;
      local_54 = 0;
      local_240 = local_270;
      local_210 = local_270;
      local_1e0 = local_270;
      local_1b0 = local_270;
      local_180 = local_270;
      local_150 = local_270;
      local_120 = local_270;
      local_f0 = local_270;
      local_c0 = local_270;
      FUN_006f1854(&local_288,&local_390,param_1 + 0x78);
      (**(code **)(local_390 + 0x30))(&local_390,param_1 + 0x78);
      local_298 = *(undefined4 *)(param_1 + 0x170);
      lVar5 = *(long *)PTR_DAT_04bb30a0;
      if (lVar5 != 0) {
        uVar3 = *(uint *)(lVar5 + 0x65ad0);
        local_288 = (undefined *)CONCAT44(local_288._4_4_,uVar3);
        puVar2 = (undefined8 *)(lVar5 + 0x65838 + (ulong)uVar3 * 0x14c);
        if (1 < uVar3) {
          puVar2 = (undefined8 *)(lVar5 + 0x65838);
        }
        local_294 = *puVar2;
      }
      iVar4 = *(int *)(param_1 + 0x70);
      if (iVar4 == 2) {
        uVar3 = (uint)local_288;
        local_288 = (undefined *)CONCAT44(1,uVar3 & 0xffff0000);
        FUN_01384940(&local_288);
        *(undefined1 *)(*(long *)PTR_DAT_04bb47e0 + 0x64c) = 0;
      }
      else if (iVar4 == 1) {
        FUN_026e36d0(&local_390);
      }
      else if (iVar4 == 0) {
        FUN_026e3250(&local_390);
      }
      uVar6 = 0;
    }
  }
  return uVar6;
}


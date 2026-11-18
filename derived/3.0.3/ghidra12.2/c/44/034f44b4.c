
void FUN_034f44b4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *local_408;
  char *local_400;
  undefined *puStack_3f8;
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
  
  puVar2 = PTR_DAT_04bb2020;
  if (((DAT_057651c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_057651c0), iVar3 != 0)) {
    DAT_057651a0 = puVar2 + 0x10;
    DAT_057651a8 = &DAT_0406e071;
    DAT_057651b8 = &DAT_040bc6d1;
    DAT_057651b0 = DAT_057651a0;
    __cxa_guard_release(&DAT_057651c0);
  }
  if ((*(long *)PTR_DAT_04bb7bc8 == 0) || (*(char *)(*(long *)PTR_DAT_04bb7bc8 + 0x48) != '\0')) {
    uVar7 = 0;
  }
  else {
    uVar7 = (ulong)(*(int *)(param_1 + 0x1cf60) == 2);
  }
  puVar6 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x238) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar4 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58);
  if ((uVar4 & 1) == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  lVar1 = 0x30;
  if (*(uint *)(puVar6 + 0x42) < 7) {
    lVar1 = 0;
  }
  uVar5 = *(undefined8 *)(puVar6[0x43] + lVar1);
  local_3f0 = 0x100;
  local_3ec = 0;
  local_3e4 = 0;
  local_3d0 = 0;
  local_3cc = 0;
  local_3b8 = 0xffffffff;
  local_3c8 = 0xffffffff;
  uStack_3c0 = 0xffffffff00000000;
  local_35d = 0;
  local_3a0 = 0x40;
  local_39c[0] = 0;
  puStack_3a8 = local_39c;
  local_348 = 0x40;
  local_3b0 = PTR_DAT_04bb2bc0 + 0x10;
  local_305 = 0;
  local_344[0] = 0;
  puStack_350 = local_344;
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
  local_3e0 = PTR_DAT_04bb2e00 + 0x10;
  puStack_268 = local_25c;
  local_25c[0] = 0;
  puStack_2c0 = local_2b4;
  local_2b4[0] = 0;
  local_2e0 = 0xffffffff;
  uStack_2d8 = 0xffffffff00000000;
  local_1d8 = local_1cc;
  local_1cc[0] = 0;
  local_110 = local_104;
  local_104[0] = 0;
  local_b8 = local_ac;
  local_180 = local_174;
  local_174[0] = 0;
  local_ac[0] = 0;
  uStack_3d8 = 0;
  uStack_2f0 = 0;
  local_218 = 0;
  local_60 = *(int *)PTR_DAT_04bc0b30;
  local_5c = 0;
  *(int *)PTR_DAT_04bc0b30 = local_60 + 1;
  local_68 = PTR_DAT_04bc0a78 + 0x10;
  local_58 = 0;
  local_50 = 0;
  puStack_3f8 = PTR_DAT_04bc0bf0 + 0x10;
  local_408 = puVar2 + 0x10;
  local_48 = 0;
  local_400 = "WherearenInspect";
  local_358 = local_3b0;
  local_2f8 = local_3e0;
  local_2c8 = local_3b0;
  local_270 = local_3b0;
  puStack_210 = local_3e0;
  local_1e0 = local_3b0;
  local_188 = local_3b0;
  local_118 = local_3b0;
  local_c0 = local_3b0;
  FUN_01bea210(&puStack_3f8,uVar5,&local_408,&DAT_057651a0 + uVar7 * 2);
  local_50 = CONCAT11(local_50._1_1_,1);
  FUN_01bea9c8(&puStack_3f8);
  FUN_01be9eb8(&puStack_3f8);
  return;
}


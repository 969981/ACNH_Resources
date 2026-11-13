
undefined8 FUN_01185f80(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *local_140;
  undefined4 local_138;
  undefined *local_130;
  undefined *puStack_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_11b;
  undefined8 local_114;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  undefined1 *puStack_c0;
  undefined4 local_b8;
  undefined1 local_b4 [127];
  undefined1 local_35;
  
  local_35 = 0;
  local_b8 = 0x80;
  puStack_c0 = local_b4;
  local_b4[0] = 0;
  local_c8 = PTR_DAT_04bb2d88 + 0x10;
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_038d1270(&local_c8,"EventFlow/%s.bfevfl",param_2[1]);
  local_11c = 0;
  local_120 = 0x1010100;
  local_11b = 0x1010101;
  local_10c = 0;
  uStack_100 = 0;
  local_130 = PTR_DAT_04bb2020 + 0x10;
  puStack_128 = PTR_DAT_04bb2120;
  puStack_d0 = PTR_DAT_04bb2120;
  local_140 = PTR_DAT_04bdf0b0 + 0x10;
  uStack_108 = 0x50cc510;
  local_104 = 0;
  local_fc = 0;
  uStack_f0 = 0;
  local_114 = 0;
  local_ec = 0;
  local_e4 = 0;
  local_dc = 0;
  uStack_f8 = (undefined4)param_3;
  local_f4 = (undefined4)((ulong)param_3 >> 0x20);
  local_138 = 2;
  local_d8 = local_130;
  puVar2 = (undefined8 *)FUN_03f2dbac(param_1,&local_c8,&local_140,0);
  if (((DAT_050cc628 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_050cc628), iVar1 != 0)) {
    DAT_050cc620 = PTR_DAT_04bb4448 + 0x10;
    __cxa_guard_release(&DAT_050cc628);
  }
  if ((puVar2 == (undefined8 *)0x0) ||
     (uVar3 = (**(code **)*puVar2)(puVar2,&DAT_050cc620), (uVar3 & 1) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = puVar2[5];
  }
  return uVar4;
}


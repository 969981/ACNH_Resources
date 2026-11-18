
/* WARNING: Removing unreachable block (ram,0x033707e8) */

void FUN_033706c0(undefined **param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *local_158;
  undefined **ppuStack_150;
  undefined **local_148;
  undefined4 local_140;
  undefined *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined *local_120;
  undefined4 local_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined4 local_fb;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined *local_b8;
  undefined **local_b0;
  undefined *local_a8;
  long *local_a0;
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_6c = 0;
  local_78 = PTR_DAT_04bdf0c8 + 0x10;
  local_70 = 1;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  puStack_60 = PTR_DAT_04bdf1d8 + 0x10;
  local_68 = 0;
  plVar2 = *(long **)(param_3 + 8);
  local_a8 = PTR_DAT_04bc9448 + 0x10;
  local_a0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    local_a0 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,auStack_98);
  }
  local_118 = 1;
  uStack_d0 = 0;
  local_cc = 0;
  local_c4 = 0;
  local_100 = 0x1010100;
  local_fb = 0x1010101;
  local_158 = PTR_DAT_04bb2020 + 0x10;
  local_fc = 0;
  local_f4 = 0;
  local_120 = PTR_DAT_04bdf0b0 + 0x10;
  local_ec = 0;
  local_e4 = 0;
  local_dc = 0;
  local_bc = 0;
  puStack_108 = PTR_DAT_04bb2120;
  uVar5 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb2230 + 8) + 0x50);
  uStack_d8 = (undefined4)uVar5;
  local_d4 = (undefined4)((ulong)uVar5 >> 0x20);
  ppuStack_150 = param_1;
  local_110 = local_158;
  local_b8 = local_158;
  local_b0 = param_1;
  FUN_03f2dbac(&local_78,&local_158,&local_120,0);
  uVar3 = FUN_03f2d924(&local_78);
  if ((uVar3 & 1) != 0) {
    puVar4 = (undefined8 *)FUN_03f2d7f0(&local_78);
    if (((*PTR_DAT_04bb2828 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb2820 = PTR_DAT_04bb2830 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2828);
    }
    if ((puVar4 != (undefined8 *)0x0) &&
       (uVar3 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bb2820), (uVar3 & 1) != 0)) {
      uStack_130 = puVar4[1];
      local_128 = *(undefined4 *)(puVar4 + 2);
      local_140 = 1;
      local_148 = &local_138;
      uStack_124 = 0;
      local_138 = PTR_DAT_04bd0e28 + 0x10;
      local_158 = PTR_DAT_04bd0e38 + 0x10;
      ppuStack_150 = &PTR_PTR_04c4b9a0;
      plVar2 = (long *)FUN_038f01ec(&local_158,param_2,0,0x4000);
      if (local_a0 != (long *)0x0) {
        (**(code **)(*local_a0 + 0x20))(local_a0,plVar2,param_2);
      }
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
    }
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 8))();
  }
  FUN_03f2d448(&local_78);
  return;
}


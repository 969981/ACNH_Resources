
void FUN_0344fd30(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined **local_c0;
  undefined8 uStack_b8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  char *pcStack_88;
  undefined *local_80;
  undefined1 *puStack_78;
  undefined4 local_70;
  undefined1 local_6c [63];
  undefined1 local_2d;
  undefined8 local_28;
  
  if (param_1 != 0) {
    puVar3 = (undefined8 *)**(undefined8 **)(param_1 + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if ((puVar3 != (undefined8 *)0x0) &&
       (uVar2 = (**(code **)*puVar3)(puVar3,PTR_DAT_04bc4e58), (uVar2 & 1) != 0)) {
      puStack_78 = local_6c;
      local_28 = *(undefined8 *)(puVar3[0x43] + (ulong)(4 < *(uint *)(puVar3 + 0x42)) * 0x20);
      local_2d = 0;
      local_6c[0] = 0;
      local_70 = 0x40;
      local_80 = PTR_DAT_04bb2bc0 + 0x10;
      local_a0 = PTR_DAT_04bb2020 + 0x10;
      pcStack_88 = "MyDesignExchInfo";
      puStack_98 = &DAT_040f3d6d;
      local_c0 = &PTR_LAB_04b2af58;
      uStack_b8 = param_2;
      local_90 = local_a0;
      FUN_034630a0(&local_80,&local_90,&local_a0,&local_c0);
    }
  }
  return;
}


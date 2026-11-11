
void FUN_003f5ee0(long *param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined **local_88;
  undefined2 local_80;
  long local_78;
  undefined2 *local_70;
  undefined8 local_68;
  
  puVar2 = PTR_DAT_04bc0ec8;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  ppuVar1 = (undefined **)(puVar2 + 0x10);
  param_1[2] = (long)ppuVar1;
  *param_1 = (long)(PTR_DAT_04bd26f8 + 0x10);
  param_1[5] = (long)(param_1 + 3);
  param_1[6] = 0x10;
  FUN_0019d7fc(param_1 + 8,0,0);
  *(undefined2 *)(param_1 + 0x10) = 0x300;
  plVar4 = param_1 + 0x11;
  *plVar4 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xf] = (long)&PTR_LAB_04a42918;
  FUN_01c68940(plVar4,0,0,0);
  *(undefined2 *)(param_1 + 0x15) = 0x300;
  plVar3 = param_1 + 0x16;
  *plVar3 = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x14] = (long)&PTR_LAB_04a42918;
  FUN_01c68940(plVar3,0,0,0);
  puVar2 = PTR_DAT_04bd2700;
  local_70 = &local_80;
  param_1[0x20] = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  local_80 = (ushort)local_80._1_1_ << 8;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0x1b] = 0;
  local_68 = 0x10;
  local_88 = ppuVar1;
  FUN_0018b070(&local_88,&DAT_0407ebb1,0xffffffffffffffff);
  FUN_00189504(param_1 + 2,&local_88);
  local_88 = ppuVar1;
  FUN_0018b1a0(&local_88);
  *(undefined2 *)(param_1 + 7) = 0;
  local_80 = 0x300;
  local_78 = 0;
  local_70 = (undefined2 *)0x0;
  local_68 = 0;
  local_88 = &PTR_LAB_04a42918;
  FUN_01c68940(&local_78,0,0,0);
  *(short *)(param_1 + 0x10) = local_80;
  if ((undefined ***)(param_1 + 0xf) != &local_88) {
    FUN_01c68940(plVar4,local_78,local_70,(long)local_70 - local_78 >> 3);
  }
  local_88 = &PTR_LAB_04a42898;
  if (local_78 != 0) {
    local_70 = (undefined2 *)local_78;
    FUN_00187e4c();
  }
  local_78 = 0;
  local_70 = (undefined2 *)0x0;
  local_80 = 0x300;
  local_68 = 0;
  local_88 = (undefined **)(PTR_DAT_04bc0f00 + 0x10);
  FUN_01c68940(&local_78,0,0,0);
  *(short *)(param_1 + 0x15) = local_80;
  if ((undefined ***)(param_1 + 0x14) != &local_88) {
    FUN_01c68940(plVar3,local_78,local_70,(long)local_70 - local_78 >> 3);
  }
  local_88 = &PTR_LAB_04a42898;
  if (local_78 != 0) {
    local_70 = (undefined2 *)local_78;
    FUN_00187e4c();
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined2 *)((long)param_1 + 0xcc) = 0x5a;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  FUN_01c66e30(param_1 + 0x1b,0,0,0);
  FUN_0019da3c(param_1 + 8);
  return;
}


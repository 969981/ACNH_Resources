
void FUN_01c690b0(long param_1)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined **local_68;
  undefined8 local_60;
  long local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  puVar5 = PTR_DAT_04bc0ec8;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_60 = (undefined *)((ulong)local_60 & 0xffffffffffffff00);
  local_50 = &local_60;
  local_48 = 0x10;
  local_68 = (undefined **)(puVar5 + 0x10);
  FUN_0018b070(&local_68,&DAT_0407ebb1,0xffffffffffffffff);
  FUN_00189504(param_1 + 0x10,&local_68);
  local_68 = (undefined **)(puVar5 + 0x10);
  FUN_0018b1a0(&local_68);
  *(undefined2 *)(param_1 + 0x38) = 0;
  local_60 = (undefined *)CONCAT62(local_60._2_6_,0x300);
  local_58 = 0;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  ppuVar1 = (undefined **)(PTR_DAT_04bc0f00 + 0x10);
  local_68 = ppuVar1;
  FUN_01c68940(&local_58,0,0,0);
  FUN_003fdde4(param_1 + 0x78,&local_68);
  local_68 = &PTR_LAB_04a42898;
  if (local_58 != 0) {
    local_50 = (undefined8 *)local_58;
    FUN_00187e4c();
  }
  local_60 = (undefined *)CONCAT62(local_60._2_6_,0x300);
  local_48 = 0;
  local_58 = 0;
  local_50 = (undefined8 *)0x0;
  local_68 = ppuVar1;
  FUN_01c68940(&local_58,0,0,0);
  FUN_003fdde4(param_1 + 0xa0,&local_68);
  local_68 = &PTR_LAB_04a42898;
  if (local_58 != 0) {
    local_50 = (undefined8 *)local_58;
    FUN_00187e4c();
  }
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined2 *)(param_1 + 0xcc) = 0x5a;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  FUN_01c66e30(param_1 + 0xd8,0,0,0);
  FUN_0019da3c(param_1 + 0x40);
  uVar4 = (ulong)local_60 >> 0x28;
  uVar3 = (ushort)local_60;
  local_68 = (undefined **)(PTR_DAT_04bc0f70 + 0x10);
  local_60._0_5_ = CONCAT14(1,CONCAT22(0xffff,uVar3 & 0xff00));
  local_60 = (undefined *)CONCAT35((int3)uVar4,(undefined5)local_60);
  FUN_003fe544(param_1 + 0x108,&local_68);
  local_68 = (undefined **)&local_60;
  local_60 = (undefined *)0x0;
  local_58 = 0;
  FUN_01c692f0(param_1,&local_68);
  FUN_01c69718(&local_68,local_60);
  puVar2 = *(undefined8 **)(param_1 + 0x118);
  puVar6 = *(undefined8 **)(param_1 + 0x120);
  while (puVar6 != puVar2) {
    puVar6 = puVar6 + -5;
    (**(code **)*puVar6)(puVar6);
  }
  *(undefined8 **)(param_1 + 0x120) = puVar2;
  return;
}


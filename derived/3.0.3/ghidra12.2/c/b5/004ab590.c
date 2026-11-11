
void FUN_004ab590(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1ac)) && (*(long *)(param_1 + 0x1a0) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x1a0),0x10,*(uint *)(param_1 + 0x1ac) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0x80000000;
  FUN_0043f070(param_1 + 0x188);
  FUN_0043f070(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0x160) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x164)) && (*(long *)(param_1 + 0x158) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x158),4,*(uint *)(param_1 + 0x164) & 0x3fffffff);
  }
  puVar2 = (undefined8 *)(param_1 + 0x70);
  *puVar2 = &PTR_LAB_04867970;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0x80000000;
  FUN_00454810(param_1 + 0x100);
  *puVar2 = &PTR_LAB_048679e0;
  FUN_004acce0(param_1 + 0xe0);
  *puVar2 = &PTR_LAB_04867b98;
  FUN_0043f070(param_1 + 200);
  FUN_0043f070(param_1 + 0xb0);
  FUN_0043f070(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0x90) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x94)) && (*(long *)(param_1 + 0x88) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x88),0x18,*(uint *)(param_1 + 0x94) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0x80000000;
  FUN_004866e0(puVar2);
  FUN_00454810(param_1 + 0x18);
  FUN_0043ef10(param_1 + 8);
  return;
}


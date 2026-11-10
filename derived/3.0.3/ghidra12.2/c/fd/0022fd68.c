
void FUN_0022fd68(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_002915e4();
  *param_1 = (long)(PTR_DAT_04bcd2c8 + 0x10);
  FUN_00240814(param_1 + 3);
  puVar1 = PTR_DAT_04bcd2d0 + 0x10;
  puVar2 = PTR_DAT_04bcd2d0 + 0xa8;
  param_1[3] = (long)puVar1;
  param_1[4] = (long)puVar2;
  FUN_00240814(param_1 + 0x120);
  param_1[0x120] = (long)puVar1;
  param_1[0x121] = (long)puVar2;
  FUN_00242804(param_1 + 0x23d);
  FUN_00242804(param_1 + 0x28a);
  FUN_00220ebc(param_1 + 0x2dd);
  FUN_00240814(param_1 + 0x2e3);
  param_1[0x401] = 0;
  param_1[0x2d8] = *(long *)(*(long *)PTR_DAT_04bcb8b8 + 0x178);
  FUN_00240b90(param_1 + 3);
  FUN_00240b90(param_1 + 0x120);
  (**(code **)(param_1[0x23d] + 0x18))(param_1 + 0x23d);
  (**(code **)(param_1[0x28a] + 0x18))(param_1 + 0x28a);
  (**(code **)(*(long *)param_1[0x2d8] + 0x40))();
  FUN_002915fc(param_1);
  param_1[0x2d9] = 0;
  *(undefined4 *)(param_1 + 0x2da) = 0;
  param_1[1] = 0;
  param_1[0x2db] = 0;
  param_1[0x2dc] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 0x400) = 0;
  return;
}


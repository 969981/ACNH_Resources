
void FUN_00df7034(long *param_1)

{
  undefined *puVar1;
  
  (**(code **)(*param_1 + 0x70))();
  if (((int)param_1[0x16] == 1) || ((int)param_1[0x17] == -1)) {
    return;
  }
  puVar1 = PTR_DAT_04bb32e0;
  if (param_1[1] != 0) {
    puVar1 = (undefined *)(param_1[1] + 0x2a8);
  }
  FUN_03459e80((int)param_1[0x17],puVar1);
  return;
}



void FUN_01bee328(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &DAT_04a3d958;
  if (*(char *)((long)param_1 + 0x84) != '\0') {
    FUN_01bc1880(*(long *)PTR_DAT_04bb28f8 + 0x2990,param_1 + 0x10);
  }
  puVar1 = PTR_DAT_04bc0a68;
  *param_1 = &DAT_04a3d400;
  param_1[0xf] = puVar1 + 0x10;
  if ((long *)param_1[0xd] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xd] + 8))();
  }
  if ((long *)param_1[0xc] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc] + 8))();
  }
  if ((long *)param_1[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb] + 8))();
  }
  FUN_003532f4(param_1);
  return;
}


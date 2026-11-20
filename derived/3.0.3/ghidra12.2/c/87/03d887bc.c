
void FUN_03d887bc(long param_1)

{
  long *plVar1;
  
  *(int *)(param_1 + 0x500) = *(int *)(param_1 + 0x500) + 1;
  FUN_03d57b40(*(undefined8 *)(param_1 + 0x448));
  plVar1 = *(long **)(param_1 + 0x418);
  (**(code **)(*plVar1 + 0x10))(plVar1,plVar1 + 1,plVar1 + 2);
  FUN_03d57850(*(undefined8 *)(param_1 + 0x448),1);
  FUN_03d4ad70(*(undefined8 *)(param_1 + 0x440));
  FUN_03d57c90(*(undefined8 *)(param_1 + 0x448),*(undefined8 *)(param_1 + 0x440),0);
  FUN_03d57e00(*(undefined8 *)(param_1 + 0x448),*(undefined8 *)(param_1 + 0x440),0);
  FUN_03d57f70(*(undefined8 *)(param_1 + 0x448));
  return;
}


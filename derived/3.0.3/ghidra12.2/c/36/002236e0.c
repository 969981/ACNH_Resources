
void FUN_002236e0(long param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_2 + 8);
  *param_3 = param_2;
  param_3[1] = lVar1;
  puVar2 = *(undefined8 **)(param_2 + 8);
  *(long **)(param_2 + 8) = param_3;
  *puVar2 = param_3;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}


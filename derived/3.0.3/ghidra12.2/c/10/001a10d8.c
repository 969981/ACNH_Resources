
undefined8 FUN_001a10d8(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = FUN_00188a54();
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    return 1;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return 1;
}



void FUN_03f58ba0(long param_1)

{
  undefined *puVar1;
  
  *(undefined **)(param_1 + 0x38) = PTR_DAT_04bdf1e8 + 0x10;
  puVar1 = PTR_DAT_04bdf328;
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(**(long **)PTR_DAT_04bdf328 + 0x18))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    (**(code **)(**(long **)puVar1 + 0x18))();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}


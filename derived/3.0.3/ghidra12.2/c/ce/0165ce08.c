
void FUN_0165ce08(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *param_1 = (long)&PTR_LAB_049b9ae8;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  puVar2 = PTR_DAT_04bbdaa8;
  puVar1 = PTR_DAT_04bb3048;
  param_1[2] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)(puVar1 + 0x10);
  return;
}


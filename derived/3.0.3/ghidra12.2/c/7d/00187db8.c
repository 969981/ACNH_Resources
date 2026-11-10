
void FUN_00187db8(undefined8 *param_1,long param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_04838ae0;
  if (param_2 == 0) {
    param_1[1] = *(undefined8 *)PTR_stdout_04bcb8e8;
    return;
  }
  return;
}


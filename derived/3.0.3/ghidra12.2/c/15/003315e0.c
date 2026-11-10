
void FUN_003315e0(undefined2 *param_1,undefined4 param_2)

{
  if (*PTR_DAT_04bceed0 != '\0') {
    param_2 = *(undefined4 *)PTR_DAT_04bceed8;
  }
  *param_1 = (short)param_2;
  *(undefined4 *)(param_1 + 2) = param_2;
  param_1[1] = (short)((uint)param_2 >> 0x10);
  return;
}



void FUN_01d6cc7c(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  if (**(long **)PTR_DAT_04bb36f8 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0xffffffff00000000;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    return;
  }
  FUN_01dd18d0(DAT_053807b0,param_1,param_2,param_3);
  return;
}


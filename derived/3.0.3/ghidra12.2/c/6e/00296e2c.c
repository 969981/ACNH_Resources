
void FUN_00296e2c(long *param_1)

{
  long *plVar1;
  
  (**(code **)(*param_1 + 0x78))();
  if ((int *)param_1[0xb] != (int *)0x0) {
    if (*(int *)param_1[0xb] == 1) {
      FUN_00221064();
    }
    param_1[0xb] = 0;
  }
  plVar1 = param_1 + 0xc;
  if ((int)*plVar1 == 1) {
    FUN_00221064(plVar1);
  }
  FUN_00220f24(plVar1);
  *(undefined1 *)(param_1 + 0x13) = 0;
  return;
}


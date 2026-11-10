
void FUN_00268a94(long *param_1)

{
  if ((int *)param_1[0xb] != (int *)0x0) {
    if (*(int *)param_1[0xb] == 1) {
      FUN_00221064();
    }
    param_1[0xb] = 0;
  }
  (**(code **)(*param_1 + 0x38))(param_1);
  param_1[0xc] = 0;
  return;
}


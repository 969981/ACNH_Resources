
void FUN_003e4a04(long *param_1)

{
  (**(code **)(*param_1 + 0x20))();
  if ((char)param_1[0x6d] != '\0') {
    FUN_003dc39c(param_1 + 0x5d);
    *(undefined1 *)(param_1 + 0x6d) = 0;
  }
  FUN_003b8338(param_1);
  return;
}


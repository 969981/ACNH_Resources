
void FUN_003c8f88(undefined8 *param_1)

{
  if (*(char *)(param_1 + 3) != '\0') {
    *(undefined1 *)(param_1 + 3) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


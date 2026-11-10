
void FUN_002aaa08(long param_1,int *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 4);
  if (*param_2 == 3) {
    *(undefined1 *)(param_1 + 0x4c) = 1;
  }
  return;
}



void FUN_038de7e0(long param_1,long *param_2)

{
  if (*(char *)(param_1 + 10) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 9) != '\0') {
    (**(code **)(*param_2 + 8))(param_2,param_1 + 8,1);
  }
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined2 *)(param_1 + 9) = 0x100;
  return;
}


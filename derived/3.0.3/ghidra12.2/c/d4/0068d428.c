
void FUN_0068d428(long *param_1,long param_2)

{
  if (*(long *)(param_2 + 8) != 0 && *(char *)(param_2 + 0x1b) != '\0') {
    FUN_0068c2b0();
    (**(code **)(*param_1 + 0x18))(param_1,*(undefined8 *)(param_2 + 8));
  }
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined1 *)(param_2 + 0x1b) = 0;
  return;
}


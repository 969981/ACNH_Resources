
void FUN_00397a38(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[1];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,0);
    (*(code *)**(undefined8 **)param_1[1])();
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    *param_1 = 0;
  }
  if (param_1[0x20] != 0) {
    FUN_00367b50();
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x20] = 0;
  }
  return;
}


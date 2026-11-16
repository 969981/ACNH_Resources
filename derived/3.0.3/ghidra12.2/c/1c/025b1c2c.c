
void FUN_025b1c2c(long *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x20))();
  if (iVar1 != -1) {
    iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    if (iVar1 < 0xd) goto LAB_025b1c80;
  }
  if (*(int *)((long)param_1 + 0x24) == 0) {
    *(undefined4 *)((long)param_1 + 0x24) = 1;
  }
LAB_025b1c80:
  FUN_02601530(param_1);
  return;
}


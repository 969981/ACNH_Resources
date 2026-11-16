
void FUN_025c7224(long *param_1)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_FUN_04a860a0;
  *param_1 = (long)&PTR_FUN_04a860a0;
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 8))();
    ppuVar2 = (undefined **)*param_1;
  }
  iVar1 = (*(code *)ppuVar2[4])(param_1);
  if (iVar1 != -1) {
    iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    if (iVar1 < 0xd) goto LAB_025c729c;
  }
  if (*(int *)((long)param_1 + 0x24) == 0) {
    *(undefined4 *)((long)param_1 + 0x24) = 1;
  }
LAB_025c729c:
  FUN_02601530(param_1);
  return;
}


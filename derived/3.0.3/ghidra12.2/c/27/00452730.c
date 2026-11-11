
int FUN_00452730(long *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  iVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  return iVar2 + iVar1;
}


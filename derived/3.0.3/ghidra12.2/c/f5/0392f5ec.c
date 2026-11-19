
bool FUN_0392f5ec(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x38))();
  iVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  if (iVar1 == iVar2) {
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
  }
  return iVar1 == iVar2;
}


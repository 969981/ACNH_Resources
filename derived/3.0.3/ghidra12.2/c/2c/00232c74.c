
void FUN_00232c74(undefined8 param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if (param_3 != (long *)0x0) {
    iVar1 = (**(code **)(*param_3 + 0x60))(param_3);
    iVar2 = FUN_002415cc(param_2 + 0x1718);
    if (iVar1 == iVar2) {
      (**(code **)(*param_3 + 0x68))(param_3,param_2 + 0x1718);
      local_40 = 0;
      goto LAB_00232ce8;
    }
  }
  local_40 = 0x10c07;
LAB_00232ce8:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}


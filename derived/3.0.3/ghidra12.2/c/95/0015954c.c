
void FUN_0015954c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined4 local_34;
  
  local_34 = 0;
  iVar1 = FUN_0014b5f8(2,param_1,&local_34);
  if (iVar1 < 1) {
    lVar2 = nnsocketGetHostByNameWithOptions(param_1,param_3,param_4);
    if (lVar2 != 0) {
      FUN_0014b3bc(lVar2,param_2);
    }
  }
  else {
    FUN_0014b4d4(2,&local_34,param_1,param_2);
  }
  return;
}


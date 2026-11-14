
void FUN_01b64670(long *param_1,int *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 local_34;
  
  if (*param_2 == 5) {
    return;
  }
  uVar1 = *(undefined8 *)PTR_DAT_04bb49a0;
  (**(code **)(*param_1 + 0x18))();
  local_34 = FUN_006bd550(param_1[1],0);
  uVar1 = FUN_01b5b4b0(uVar1,&local_34);
  FUN_01b63ca0(param_1,param_2,uVar1,param_3,0);
  return;
}


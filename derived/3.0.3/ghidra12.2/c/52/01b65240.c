
void FUN_01b65240(long *param_1,int *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 local_24;
  
  if (*param_2 == 5) {
    return;
  }
  uVar1 = *(undefined8 *)PTR_DAT_04bb49a0;
  (**(code **)(*param_1 + 0x18))();
  local_24 = FUN_006bd550(param_1[1],0);
  uVar1 = FUN_01b5b4b0(uVar1,&local_24);
  FUN_01b64700(param_1,param_2,param_3,uVar1,param_4,0);
  return;
}


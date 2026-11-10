
void FUN_0030eb60(long param_1,undefined8 param_2,long *param_3)

{
  long ****pppplVar1;
  long ***ppplVar2;
  long ****pppplVar3;
  undefined1 auStack_a8 [112];
  long ****local_38;
  long ****local_30;
  long local_28;
  
  local_38 = (long ****)&local_38;
  local_28 = 0;
  local_30 = local_38;
  FUN_0030f1a0(param_1,&local_38);
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_001b8014(auStack_a8);
    FUN_001f7734(param_1,auStack_a8);
    if (*(char *)(param_1 + 8) == '\0') {
      (**(code **)(*param_3 + 0xd0))(param_3,&local_38,auStack_a8);
      FUN_001fb7e0(param_2,0x8003);
    }
    FUN_001b8504(auStack_a8);
  }
  if (local_28 != 0) {
    ppplVar2 = *local_30;
    ppplVar2[1] = (long **)local_38[1];
    *local_38[1] = (long **)ppplVar2;
    local_28 = 0;
    pppplVar1 = local_30;
    while ((long *****)pppplVar1 != &local_38) {
      pppplVar3 = (long ****)pppplVar1[1];
      (*(code *)*pppplVar1[2])();
      FUN_00187e4c(pppplVar1);
      pppplVar1 = pppplVar3;
    }
  }
  return;
}


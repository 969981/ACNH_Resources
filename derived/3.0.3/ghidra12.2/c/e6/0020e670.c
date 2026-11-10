
uint FUN_0020e670(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                 )

{
  long *****ppppplVar1;
  uint uVar2;
  long ****pppplVar3;
  long *****ppppplVar4;
  long *****local_48;
  long *****local_40;
  long local_38;
  
  local_48 = (long *****)&local_48;
  local_38 = 0;
  local_40 = local_48;
  FUN_00211300(param_1,&local_48);
  if (*(long *)(param_5 + 8) == 0) {
    uVar2 = FUN_002005b0(param_1 + 0x20,param_2,param_3,&local_48,*(long *)(param_1 + 0x10) + 0x18,
                         param_4);
  }
  else {
    uVar2 = FUN_00200e10();
  }
  if (local_38 != 0) {
    pppplVar3 = *local_40;
    pppplVar3[1] = (long ***)local_48[1];
    *local_48[1] = (long ***)pppplVar3;
    local_38 = 0;
    ppppplVar1 = local_40;
    while ((long ******)ppppplVar1 != &local_48) {
      ppppplVar4 = (long *****)ppppplVar1[1];
      (*(code *)*ppppplVar1[2])();
      FUN_00187e4c(ppppplVar1);
      ppppplVar1 = ppppplVar4;
    }
  }
  return uVar2 & 1;
}


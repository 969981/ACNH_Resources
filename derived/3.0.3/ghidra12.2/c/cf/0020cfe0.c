
uint FUN_0020cfe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  uint uVar1;
  long ***ppplVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  long ****local_68;
  long ****local_60;
  long local_58;
  
  local_58 = 0;
  local_68 = (long ****)&local_68;
  local_60 = (long ****)&local_68;
  ppplVar2 = (long ***)FUN_00187df4(0x80);
  *ppplVar2 = (long **)0x0;
  FUN_001b8358(ppplVar2 + 2,param_3);
  *ppplVar2 = (long **)local_68;
  ppplVar2[1] = (long **)&local_68;
  local_68[1] = ppplVar2;
  local_58 = local_58 + 1;
  local_68 = (long ****)ppplVar2;
  uVar1 = FUN_001a5070(param_1,param_2,0,0,&local_68,param_4,param_5,0,param_6);
  if (local_58 != 0) {
    ppplVar2 = *local_60;
    ppplVar2[1] = (long **)local_68[1];
    *local_68[1] = (long **)ppplVar2;
    local_58 = 0;
    if ((long *****)local_60 != &local_68) {
      pppplVar3 = local_60;
      do {
        pppplVar4 = (long ****)pppplVar3[1];
        (*(code *)*pppplVar3[2])();
        FUN_00187e4c(pppplVar3);
        pppplVar3 = pppplVar4;
      } while ((long *****)pppplVar4 != &local_68);
    }
  }
  return uVar1 & 1;
}


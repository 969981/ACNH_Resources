
void FUN_01c08808(long *param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_64;
  long local_60;
  undefined4 local_58;
  undefined *local_50;
  char *local_48;
  
  if ((param_3 != 0) && (plVar4 = *(long **)(param_3 + 0x48), plVar4 != (long *)0x0)) {
    local_50 = PTR_DAT_04bc0cb8 + 0x10;
    local_48 = (char *)CONCAT44(local_48._4_4_,0x18);
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_50);
    local_50 = PTR_DAT_04bb2020 + 0x10;
    local_48 = "WordwrapOn";
    (**(code **)(plVar4[3] + 0x1a0))(&local_60,plVar4[1],&local_50);
    if (local_60 != 0) {
      local_64 = 0;
      plVar4 = *(long **)(param_3 + 0x48);
      uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
      uVar1 = (**(code **)(*param_2 + 0x20))(param_2);
      lVar3 = (**(code **)(*param_1 + 0x18))(param_1);
      local_58 = FUN_006f4a64(param_1);
      local_50 = PTR_DAT_04bc0878 + 0x10;
      local_48 = (char *)CONCAT44(local_48._4_4_,0xd);
      local_60 = lVar3;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_50);
      (**(code **)(plVar4[3] + 0x600))(plVar4[1],&local_64,uVar2,uVar1,&local_60,0,1);
      (**(code **)(*param_2 + 0x30))(param_2,param_1);
      (**(code **)(*param_1 + 0x28))(param_1,param_2);
      (**(code **)(*param_1 + 0x30))(param_1,param_2);
    }
  }
  return;
}


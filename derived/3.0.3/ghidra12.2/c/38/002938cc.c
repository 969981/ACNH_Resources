
void FUN_002938cc(undefined8 param_1,long *param_2,long param_3,long *param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  long *plVar3;
  int *piVar4;
  undefined8 local_50;
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  piVar4 = (int *)&local_50;
  if ((param_3 == 0) || (param_4 == (long *)0x0)) {
    local_50 = local_50 & 0xffffffff00000000;
    local_40 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_50);
    piVar4 = &local_40;
  }
  else {
    (**(code **)(*param_2 + 0x60))(&local_40,param_2,param_4);
    if (local_40 == 0) {
      param_2[0xb] = param_3;
      FUN_00220f78(param_3);
      *(undefined1 *)((long)param_2 + 0x119) = 0;
      *(undefined1 *)((long)param_2 + 0x11c) = 0;
      plVar3 = (long *)(**(code **)(*param_4 + 0x10))(param_4);
      uVar2 = (**(code **)(*plVar3 + 0x18))();
      *(undefined4 *)((long)param_2 + 0x114) = uVar2;
      *(undefined1 *)((long)param_2 + 0x11f) = 0;
      local_50 = (ulong)local_50._4_4_ << 0x20;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_50 + 4),(Result *)&local_24);
      FUN_00229780(param_2 + 0x24,&local_50);
      (**(code **)(*param_2 + 0x10))(param_2,1);
      local_50 = 0;
      FUN_002282f0(&local_50);
      uVar1 = local_50;
      local_50 = local_50 & 0xffffffff00000000;
      local_24 = 0;
      param_2[0x26] = uVar1;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_50 + 4),(Result *)&local_24);
    }
    else {
      piVar4 = &local_40;
    }
  }
  FUN_002296c4(param_1,piVar4);
  return;
}


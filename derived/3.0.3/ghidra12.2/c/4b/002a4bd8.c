
void FUN_002a4bd8(undefined8 param_1,long param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  long *plVar5;
  int local_70;
  ErrorResultVariant aEStack_6c [12];
  int local_60;
  ErrorResultVariant aEStack_5c [12];
  int local_50 [4];
  undefined4 local_34;
  
  piVar4 = &local_70;
  FUN_002aa97c(local_50);
  if (local_50[0] == 0) {
    plVar5 = *(long **)(param_2 + 0x70);
    if (plVar5 == (long *)0x0) {
      local_70 = 0;
      local_60 = 0x10c0c;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_70);
      piVar4 = &local_60;
    }
    else {
      *(undefined4 *)(param_2 + 0x50) = 0;
      *(undefined4 *)(param_2 + 0x58) = 0;
      uVar1 = FUN_002aaa54(param_2);
      uVar2 = FUN_002aaa64(param_2);
      uVar3 = FUN_002aaa28(param_2);
      (**(code **)(*plVar5 + 0x18))(&local_60,plVar5,uVar1,uVar2,uVar3,param_3);
      local_70 = 0;
      local_34 = 0;
      *(undefined4 *)(PTR_DAT_04bccf10 + 0x2b0) = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_34);
    }
  }
  else {
    piVar4 = local_50;
  }
  FUN_002296c4(param_1,piVar4);
  return;
}


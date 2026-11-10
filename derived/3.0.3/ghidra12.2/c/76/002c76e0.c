
void FUN_002c76e0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined4 local_30 [4];
  ulong local_18;
  
  if ((param_1[0x30d] != 0) && (uVar2 = FUN_002c3a0c(), (uVar2 & 1) != 0)) {
    uVar3 = FUN_002aaa64(param_1);
    local_30[0] = (**(code **)(*param_1 + 0x18))(param_1);
    plVar4 = (long *)FUN_002a8480(uVar3,local_30);
    (**(code **)(*(long *)*plVar4 + 0x78))();
    uVar2 = (**(code **)(*(long *)*plVar4 + 0x80))();
    while ((uVar2 & 1) == 0) {
      plVar1 = (long *)0x0;
      if (*(long *)(*plVar4 + 0x38) != 0) {
        plVar1 = (long *)(*plVar4 + 0x38);
      }
      FUN_002c7830(param_1,plVar1);
      (**(code **)(*(long *)*plVar4 + 0x88))();
      uVar2 = (**(code **)(*(long *)*plVar4 + 0x80))();
    }
    local_18 = 0;
    FUN_002282f0(&local_18);
    if ((ulong)param_1[0x2f7] < local_18) {
      lVar5 = (long)DAT_04be24ec;
      plVar4 = (long *)FUN_00228380();
      param_1[0x2f7] = local_18 + *plVar4 * lVar5;
      if (((char)param_1[0x30b] != '\0') && ((ulong)param_1[0x30c] < local_18)) {
        FUN_002c7a50(param_1,param_1 + 0x1a,0,3);
        plVar4 = (long *)FUN_00228380();
        param_1[0x30c] = local_18 + *plVar4 * 15000;
      }
      FUN_002c7bb0(local_30,param_1,&local_18);
    }
  }
  return;
}


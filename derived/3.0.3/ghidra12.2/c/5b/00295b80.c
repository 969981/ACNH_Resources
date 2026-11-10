
void FUN_00295b80(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  (**(code **)(*param_1 + 0xc0))();
  if ((int *)param_1[0xb] != (int *)0x0) {
    if (*(int *)param_1[0xb] == 1) {
      FUN_00221064();
    }
    param_1[0xb] = 0;
  }
  plVar2 = param_1 + 0xc;
  if ((int)*plVar2 == 1) {
    FUN_00221064(plVar2);
  }
  FUN_00220f24(plVar2);
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  local_40 = 0;
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_00229780(param_1 + 0x20,&local_40);
  *(undefined1 *)((long)param_1 + 0xfc) = 0;
  if ((int)param_1[0x17] != 0) {
    plVar2 = param_1 + 0x15;
    if ((long *)param_1[0x16] != plVar2) {
      plVar1 = (long *)param_1[0x16];
      do {
        plVar3 = (long *)plVar1[1];
        *plVar1 = 0;
        plVar1[1] = 0;
        FUN_002236e0(param_1 + 0x18,param_1 + 0x18,
                     (long)*(int *)((long)param_1 + 0xd4) + (long)plVar1);
        plVar1 = plVar3;
      } while (plVar3 != plVar2);
    }
    FUN_002236b0(plVar2);
  }
  return;
}



void FUN_00257e44(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  void *pvVar3;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  int local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  local_34 = 0;
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
  (**(code **)(*param_2 + 0x1d0))(&local_44,param_2);
  FUN_00229780(&local_34,&local_44);
  if (local_34 == 0) {
    if ((long *)param_2[99] != (long *)0x0) {
      (**(code **)(*(long *)param_2[99] + 0x10))();
    }
    if ((long *)param_2[0x62] != (long *)0x0) {
      (**(code **)(*(long *)param_2[0x62] + 0x10))();
    }
    if ((long *)param_2[0x61] != (long *)0x0) {
      (**(code **)(*(long *)param_2[0x61] + 0x10))();
    }
    FUN_002580b4(param_2);
    FUN_0021fef8(param_2 + 0x55);
    FUN_0021fef8(param_2 + 0x59);
    param_2[0x84] = 0;
    pvVar3 = (void *)param_2[0x87];
    *(undefined8 *)((long)param_2 + 0x47c) = 0;
    *(undefined1 *)(param_2 + 0x8a) = 0;
    *(undefined1 *)(param_2 + 0x8e) = 0;
    *(undefined4 *)((long)param_2 + 0x474) = 0;
    *(undefined1 *)(param_2 + 0x8f) = 0;
    *(undefined1 *)((long)param_2 + 0x485) = 0;
    *(undefined1 *)((long)param_2 + 0x48c) = 0;
    uVar2 = (**(code **)(*param_2 + 0xa8))(param_2);
    memset(pvVar3,0,uVar2 & 0xffffffff);
    memset((void *)param_2[0x89],0,(ulong)*(byte *)((long)param_2 + 0x484));
    pvVar3 = (void *)param_2[0x68];
    uVar2 = (**(code **)(*param_2 + 0xa8))(param_2);
    memset(pvVar3,0,uVar2 & 0xffffffff);
    *(undefined4 *)(param_2 + 0x9a) = 0;
    *(undefined4 *)(param_2 + 0x6f) = *(undefined4 *)((long)param_2 + 0x37c);
    uVar1 = (**(code **)(*param_2 + 0x118))(param_2);
    *(undefined4 *)((long)param_2 + 0x37c) = uVar1;
    *(undefined1 *)(param_2 + 0xae) = 0;
    FUN_0025eb74(&local_44,param_2[0xa7]);
    FUN_00229780(&local_34,&local_44);
    if (local_34 == 0) {
      FUN_002211bc(param_2[0xa7],0);
      *(undefined1 *)((long)param_2 + 0x571) = 0;
      FUN_0025f384(&local_44,param_2[0x82]);
      FUN_00229780(&local_34,&local_44);
      if (local_34 == 0) {
        FUN_002211bc(param_2[0x82],0);
        FUN_0025dd1c(&local_44,param_2[0x7f]);
        FUN_00229780(&local_34,&local_44);
        if (local_34 == 0) {
          FUN_002211bc(param_2[0x7f],0);
          local_44 = 0;
          local_24 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
          FUN_002296c4(param_1,&local_44);
          return;
        }
      }
    }
  }
  FUN_002296c4(param_1,&local_34);
  return;
}


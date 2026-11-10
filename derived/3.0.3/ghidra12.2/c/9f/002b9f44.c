
void FUN_002b9f44(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 auStack_3970 [16];
  undefined1 auStack_3960 [16];
  int local_3950;
  ErrorResultVariant aEStack_394c [12];
  ulong local_3940 [1826];
  int local_30 [4];
  
  local_3950 = 0;
  local_3940[0] = local_3940[0] & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_394c,(Result *)local_3940);
  local_3940[0] = 0;
  FUN_002282f0(local_3940);
  *param_1 = local_3940[0];
  *(int *)((long)param_1 + 0xbc) = *(int *)((long)param_1 + 0xbc) + 1;
  if (param_1[0x10] != 0) {
    FUN_002bc100(local_3940,*(undefined8 *)(param_1[0x10] + 0x20));
    FUN_00229780(&local_3950,local_3940);
    if (local_3950 != 0) {
      FUN_002296c4(auStack_3960,&local_3950);
      uVar2 = FUN_0022b418(auStack_3960,(long)param_1 + 0xe4);
      if ((uVar2 & 1) != 0) {
        FUN_00229780((long)param_1 + 0xe4,auStack_3960);
      }
    }
    FUN_002bc100(local_3940,*(undefined8 *)(param_1[0x10] + 0x18));
    FUN_00229780(&local_3950,local_3940);
    if (local_3950 != 0) {
      FUN_002296c4(auStack_3970,&local_3950);
      uVar2 = FUN_0022b418(auStack_3970,(long)param_1 + 0xe4);
      if ((uVar2 & 1) != 0) {
        FUN_00229780((long)param_1 + 0xe4,auStack_3970);
      }
    }
    (**(code **)(*(long *)param_1[9] + 0x40))((long *)param_1[9],param_1);
    (**(code **)(*(long *)param_1[10] + 0x40))((long *)param_1[10],param_1);
    FUN_002ab610(param_1 + 2);
    (**(code **)(*(long *)param_1[9] + 0x48))((long *)param_1[9],param_1);
    (**(code **)(*(long *)param_1[10] + 0x48))((long *)param_1[10],param_1);
    if (((*(char *)((long)param_1 + 0x5a) != '\0') && ((int)param_1[0x15] != 0)) &&
       (param_1[0xf] != 0)) {
      uVar2 = *param_1;
      uVar4 = param_1[0x16];
      plVar3 = (long *)FUN_002283f8();
      lVar1 = 0;
      if (*plVar3 != 0) {
        lVar1 = (long)(uVar2 - uVar4) / *plVar3;
      }
      if (((int)param_1[0x15] <= lVar1) && (FUN_002baf24(local_30,param_1[0xf]), local_30[0] == 0))
      {
        param_1[0x16] = *param_1;
        memcpy(local_3940,(void *)(param_1[0xf] + 0x10),0x3910);
        FUN_002baa44(local_3940,(char)param_1[0x17],*(undefined1 *)((long)param_1 + 0xb9));
        return;
      }
    }
  }
  return;
}


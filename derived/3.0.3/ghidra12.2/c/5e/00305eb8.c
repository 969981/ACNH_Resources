
void FUN_00305eb8(undefined8 param_1,long *param_2,long param_3,int param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *local_98;
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  ErrorResultVariant aEStack_6c [12];
  undefined4 local_54;
  
  uVar4 = FUN_00227acc(param_7);
  if (((param_4 - 0x6dU < 0xfffffff8) || (uVar2 = FUN_00227cb0(param_7), 0x100 < uVar2)) ||
     ((iVar3 = FUN_00227cb0(param_7), iVar3 != 0 && (iVar3 = FUN_00227d94(param_7), iVar3 != 1)))) {
    local_70 = 0x10c07;
  }
  else if (*(int *)((long)param_2 + 0x74) == 1) {
    local_70 = 0x10c08;
  }
  else {
    FUN_001984a0(param_2 + 0xc);
    local_90[0] = 0;
    uVar6 = *(undefined8 *)(*(long *)PTR_DAT_04bcb8d8 + 0x68);
    puVar1 = PTR_DAT_04bc0ec8 + 0x10;
    local_80 = local_90;
    uStack_78 = 0x10;
    local_98 = puVar1;
    FUN_0018b070(&local_98,uVar4,0xffffffffffffffff);
    uVar5 = FUN_00311004(uVar6,param_2 + 0xc,param_4,param_5,param_6,&local_98);
    local_98 = puVar1;
    FUN_0018b1a0(&local_98);
    if ((uVar5 & 1) == 0) {
      local_70 = 0xac5a;
    }
    else {
      param_2[0xb] = param_3;
      FUN_00220f78(param_3);
      (**(code **)(*param_2 + 0x10))(param_2,1);
      local_70 = 0;
      param_2[6] = (long)PTR_LAB_04bcea60;
      param_2[7] = 0;
      param_2[8] = (long)"NexNotificationDataJob::WaitUpdateNotificationData";
    }
  }
  local_54 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_54);
  FUN_002296c4(param_1,&local_70);
  return;
}


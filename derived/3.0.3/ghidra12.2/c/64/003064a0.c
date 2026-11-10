
/* WARNING: Type propagation algorithm not settling */

void FUN_003064a0(undefined8 param_1,long *param_2,long param_3,uint param_4,undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  long ******pppppplVar3;
  long *******ppppppplVar4;
  undefined4 local_70;
  ErrorResultVariant aEStack_6c [12];
  long *******local_60;
  long *******local_58;
  long local_50;
  undefined4 local_44;
  
  local_60 = (long *******)&local_60;
  local_50 = 0;
  local_58 = local_60;
  if (*(int *)((long)param_2 + 0x74) == 1) {
    local_70 = 0x10c08;
  }
  else {
    uVar1 = param_4 & 0xff;
    if ((param_4 & 1) != 0) {
      ppppppplVar4 = (long *******)FUN_00187df4(0x18);
      *(undefined4 *)(ppppppplVar4 + 2) = 0x65;
      *ppppppplVar4 = (long ******)0x0;
      ppppppplVar4[1] = (long ******)&local_60;
      *ppppppplVar4 = (long ******)local_60;
      local_60[1] = (long ******)ppppppplVar4;
      local_50 = local_50 + 1;
      local_60 = ppppppplVar4;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      ppppppplVar4 = (long *******)FUN_00187df4(0x18);
      *(undefined4 *)(ppppppplVar4 + 2) = 0x66;
      *ppppppplVar4 = (long ******)0x0;
      ppppppplVar4[1] = (long ******)&local_60;
      *ppppppplVar4 = (long ******)local_60;
      local_60[1] = (long ******)ppppppplVar4;
      local_50 = local_50 + 1;
      local_60 = ppppppplVar4;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      ppppppplVar4 = (long *******)FUN_00187df4(0x18);
      *(undefined4 *)(ppppppplVar4 + 2) = 0x67;
      *ppppppplVar4 = (long ******)0x0;
      ppppppplVar4[1] = (long ******)&local_60;
      *ppppppplVar4 = (long ******)local_60;
      local_60[1] = (long ******)ppppppplVar4;
      local_50 = local_50 + 1;
      local_60 = ppppppplVar4;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      ppppppplVar4 = (long *******)FUN_00187df4(0x18);
      *(undefined4 *)(ppppppplVar4 + 2) = 0x68;
      *ppppppplVar4 = (long ******)0x0;
      ppppppplVar4[1] = (long ******)&local_60;
      *ppppppplVar4 = (long ******)local_60;
      local_60[1] = (long ******)ppppppplVar4;
      local_50 = local_50 + 1;
      local_60 = ppppppplVar4;
    }
    if ((uVar1 >> 4 & 1) != 0) {
      ppppppplVar4 = (long *******)FUN_00187df4(0x18);
      *(undefined4 *)(ppppppplVar4 + 2) = 0x69;
      *ppppppplVar4 = (long ******)0x0;
      ppppppplVar4[1] = (long ******)&local_60;
      *ppppppplVar4 = (long ******)local_60;
      local_60[1] = (long ******)ppppppplVar4;
      local_50 = local_50 + 1;
      local_60 = ppppppplVar4;
    }
    if ((uVar1 >> 5 & 1) != 0) {
      ppppppplVar4 = (long *******)FUN_00187df4(0x18);
      *(undefined4 *)(ppppppplVar4 + 2) = 0x6a;
      *ppppppplVar4 = (long ******)0x0;
      ppppppplVar4[1] = (long ******)&local_60;
      *ppppppplVar4 = (long ******)local_60;
      local_60[1] = (long ******)ppppppplVar4;
      local_50 = local_50 + 1;
      local_60 = ppppppplVar4;
    }
    if ((uVar1 >> 6 & 1) != 0) {
      ppppppplVar4 = (long *******)FUN_00187df4(0x18);
      *(undefined4 *)(ppppppplVar4 + 2) = 0x6b;
      *ppppppplVar4 = (long ******)0x0;
      ppppppplVar4[1] = (long ******)&local_60;
      *ppppppplVar4 = (long ******)local_60;
      local_60[1] = (long ******)ppppppplVar4;
      local_50 = local_50 + 1;
      local_60 = ppppppplVar4;
    }
    if ((param_4 >> 7 & 1) != 0) {
      ppppppplVar4 = (long *******)FUN_00187df4(0x18);
      *(undefined4 *)(ppppppplVar4 + 2) = 0x6c;
      *ppppppplVar4 = (long ******)0x0;
      ppppppplVar4[1] = (long ******)&local_60;
      *ppppppplVar4 = (long ******)local_60;
      local_60[1] = (long ******)ppppppplVar4;
      local_50 = local_50 + 1;
      local_60 = ppppppplVar4;
    }
    FUN_001984a0(param_2 + 0xc);
    uVar2 = FUN_003112c0(*(undefined8 *)(*(long *)PTR_DAT_04bcb8d8 + 0x68),param_2 + 0xc,param_5,
                         &local_60);
    if ((uVar2 & 1) == 0) {
      local_70 = 0xac5a;
    }
    else {
      param_2[0xb] = param_3;
      FUN_00220f78(param_3);
      (**(code **)(*param_2 + 0x10))(param_2,1);
      local_70 = 0;
      param_2[6] = (long)PTR_FUN_04bcea68;
      param_2[7] = 0;
      param_2[8] = (long)"NexNotificationDataJob::WaitRetrieveNotificationData";
    }
  }
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_44);
  FUN_002296c4(param_1,&local_70);
  if (local_50 != 0) {
    pppppplVar3 = *local_58;
    pppppplVar3[1] = (long *****)local_60[1];
    *local_60[1] = (long *****)pppppplVar3;
    local_50 = 0;
    ppppppplVar4 = local_58;
    while ((long ********)ppppppplVar4 != &local_60) {
      ppppppplVar4 = (long *******)ppppppplVar4[1];
      FUN_00187e4c();
    }
  }
  return;
}


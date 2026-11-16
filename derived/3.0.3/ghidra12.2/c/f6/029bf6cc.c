
void FUN_029bf6cc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                 long param_5,int *param_6,long *param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 *local_90;
  int local_88;
  int *local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined8 uStack_68;
  uint local_60 [4];
  
  local_88 = *param_6;
  local_80 = (int *)(param_5 + 0x38);
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  if (local_88 < *local_80) {
    uStack_78 = *(undefined8 *)(param_1 + 0x81c);
    uStack_68 = *(undefined8 *)(param_1 + 0x81e);
    local_90 = param_1 + 0x80c;
    uStack_b0 = *(undefined8 *)(param_1 + 0x81a);
    local_70 = (ulong)param_4;
    local_c0[0] = *param_1;
    local_60[0] = 0xffffffff;
    local_60[1] = 0;
    local_60[2] = 0;
    local_b8 = *(undefined8 *)(param_1 + 2);
    FUN_029b41c4(*(long *)(param_1 + 0x820) + 0x30,local_60,0,param_3,param_2);
    local_a0 = local_60[2];
    local_60[0] = 0xffffffff;
    lVar4 = *(long *)(param_1 + 0x820);
    local_60[1] = 0;
    local_60[2] = 0;
    FUN_029b41c4(lVar4 + 0x30,local_60,0,param_3,param_2);
    local_60[3] = local_60[0];
    nn::os::LockMutex((MutexType *)(lVar4 + 0x1b20));
    puVar1 = (undefined4 *)(lVar4 + 0x38) + (ulong)local_60[3] * 8;
    if (8 < local_60[3]) {
      puVar1 = (undefined4 *)(lVar4 + 0x38);
    }
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    nn::os::UnlockMutex((MutexType *)(lVar4 + 0x1b20));
    local_9c = param_1[0x818];
    uStack_98 = param_1[0x819];
    local_a8 = uVar3;
    uStack_a4 = uVar2;
    FUN_02a57be0(param_1 + 6,&local_f0,local_c0);
    local_88 = *param_6;
  }
  else {
    uStack_c8 = 0;
    local_d0 = 0;
    local_e8 = 0;
    local_e0 = 0;
  }
  *param_6 = local_88 + param_4;
  *param_7 = *param_7 + local_e0;
  *(undefined8 *)(param_1 + 0x81a) = local_e8;
  *(undefined8 *)(param_1 + 0x81c) = local_d0;
  *(undefined8 *)(param_1 + 0x81e) = uStack_c8;
  return;
}


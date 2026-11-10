
void FUN_003573e0(undefined8 *param_1,float *param_2,long param_3,int param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_28;
  
  if (param_3 == 0) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    return;
  }
  lVar1 = param_3 + param_4;
  local_a8 = (undefined4)param_1[2];
  uStack_a4 = (undefined4)((ulong)param_1[2] >> 0x20);
  uStack_a0 = (undefined4)param_1[3];
  uStack_9c = (undefined4)((ulong)param_1[3] >> 0x20);
  local_88 = param_1[6];
  uStack_80 = param_1[7];
  local_98 = param_1[4];
  uStack_90 = param_1[5];
  uStack_58 = param_1[0xc];
  uStack_68 = param_1[10];
  local_60 = param_1[0xb];
  local_78 = param_1[8];
  local_70 = param_1[9];
  local_b8 = *param_1;
  uStack_b0 = param_1[1];
  (**(code **)(*(long *)param_1[0xb] + 0x60))((long *)param_1[0xb],param_1,param_3,lVar1);
  uStack_a4 = 0;
  uStack_a0 = 0;
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  local_28 = param_3;
  do {
    local_50 = 0;
    local_48 = 0;
    FUN_00357530(&local_b8,&local_50,&local_28,param_4);
    param_4 = (int)lVar1 - (int)local_28;
    fVar2 = (float)local_50;
    if (*param_2 <= (float)local_50) {
      fVar2 = *param_2;
    }
    fVar3 = local_50._4_4_;
    if (param_2[1] <= local_50._4_4_) {
      fVar3 = param_2[1];
    }
    *param_2 = fVar2;
    param_2[1] = fVar3;
    fVar2 = (float)local_48;
    if ((float)local_48 <= param_2[2]) {
      fVar2 = param_2[2];
    }
    fVar3 = local_48._4_4_;
    if (local_48._4_4_ <= param_2[3]) {
      fVar3 = param_2[3];
    }
    param_2[2] = fVar2;
    param_2[3] = fVar3;
  } while (0 < param_4);
  (**(code **)(*(long *)param_1[0xb] + 0x68))((long *)param_1[0xb],param_1,param_3,lVar1);
  thunk_FUN_0035008c(&local_b8);
  return;
}


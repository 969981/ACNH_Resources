
float FUN_003572c0(undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  if (param_2 == 0) {
    return 0.0;
  }
  lVar1 = param_2 + param_3;
  local_b0 = (undefined4)param_1[2];
  uStack_ac = (undefined4)((ulong)param_1[2] >> 0x20);
  uStack_a8 = (undefined4)param_1[3];
  uStack_a4 = (undefined4)((ulong)param_1[3] >> 0x20);
  local_90 = param_1[6];
  uStack_88 = param_1[7];
  local_a0 = param_1[4];
  uStack_98 = param_1[5];
  uStack_60 = param_1[0xc];
  uStack_70 = param_1[10];
  local_68 = param_1[0xb];
  local_80 = param_1[8];
  local_78 = param_1[9];
  local_c0 = *param_1;
  uStack_b8 = param_1[1];
  (**(code **)(*(long *)param_1[0xb] + 0x60))((long *)param_1[0xb],param_1,param_2,lVar1);
  fVar3 = 0.0;
  fVar4 = 0.0;
  uStack_ac = 0;
  uStack_a8 = 0;
  local_48 = param_2;
  do {
    local_58 = 0;
    local_50 = 0;
    FUN_00357530(&local_c0,&local_58,&local_48,param_3);
    param_3 = (int)lVar1 - (int)local_48;
    fVar2 = (float)local_58;
    if (fVar3 <= (float)local_58) {
      fVar2 = fVar3;
    }
    fVar3 = fVar2;
    fVar2 = (float)local_50;
    if ((float)local_50 <= fVar4) {
      fVar2 = fVar4;
    }
    fVar4 = fVar2;
  } while (0 < param_3);
  (**(code **)(*(long *)param_1[0xb] + 0x68))((long *)param_1[0xb],param_1,param_2,lVar1);
  thunk_FUN_0035008c(&local_c0);
  return fVar4 - fVar3;
}


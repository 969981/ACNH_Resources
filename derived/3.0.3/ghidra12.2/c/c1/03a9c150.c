
void FUN_03a9c150(long param_1,uint param_2)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  float __x;
  float fVar7;
  int local_a0;
  undefined4 local_9c;
  long local_98;
  long lStack_90;
  int local_88;
  undefined4 uStack_84;
  long local_80;
  long lStack_78;
  
  if (0 < (int)param_2) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      lVar2 = (*DAT_04c61fd0)(*(undefined8 *)(param_1 + 0x200));
      lVar3 = 0;
      if (*(long *)(param_1 + 0x208) != 0) {
        lVar3 = *(long *)(param_1 + 0x1f0) - *(long *)(*(long *)(param_1 + 0x208) + 0x10);
      }
      pfVar1 = (float *)(lVar2 + lVar3 + lVar4);
      __x = (float)(int)uVar5 * 70.7738;
      fVar7 = (0.5 / (float)(int)param_2) * (float)(int)uVar5;
      fVar6 = sinf(__x);
      *pfVar1 = fVar7 * fVar6;
      fVar6 = cosf(__x);
      pfVar1[2] = 0.0;
      pfVar1[1] = fVar7 * fVar6;
      lVar2 = (*DAT_04c61fd0)(*(undefined8 *)(param_1 + 0x358));
      lVar3 = 0;
      if (*(long *)(param_1 + 0x360) != 0) {
        lVar3 = *(long *)(param_1 + 0x348) - *(long *)(*(long *)(param_1 + 0x360) + 0x10);
      }
      lVar4 = lVar4 + 0xc;
      *(short *)(lVar2 + lVar3 + uVar5 * 2) = (short)uVar5;
      uVar5 = uVar5 + 1;
    } while (param_2 != uVar5);
  }
  local_98 = *(long *)(param_1 + 0x200);
  lStack_90 = param_1 + 0x1e8;
  local_a0 = 0;
  if (*(long *)(param_1 + 0x208) != 0) {
    local_a0 = *(int *)(param_1 + 0x1f0) - *(int *)(*(long *)(param_1 + 0x208) + 0x10);
  }
  local_9c = 0;
  if (local_98 != 0) {
    local_9c = *(undefined4 *)(local_98 + 0x104);
  }
  FUN_0390ebc0(param_1 + 0x220,&local_a0,0xc,(long)(int)param_2 * 0xc);
  *(undefined8 *)(param_1 + 600) = 0x22;
  *(undefined2 *)(param_1 + 0x260) = 1;
  FUN_0390e4c0(param_1 + 8,0,param_1 + 0x220,0);
  FUN_0390e640(param_1 + 8);
  local_80 = *(long *)(param_1 + 0x358);
  local_88 = 0;
  if (*(long *)(param_1 + 0x360) != 0) {
    local_88 = *(int *)(param_1 + 0x348) - *(int *)(*(long *)(param_1 + 0x360) + 0x10);
  }
  if (local_80 == 0) {
    uStack_84 = 0;
  }
  else {
    uStack_84 = *(undefined4 *)(local_80 + 0x104);
  }
  lStack_78 = param_1 + 0x340;
  FUN_03901480(param_1 + 0x378,&local_88,1,param_2);
  *(undefined4 *)(param_1 + 900) = 0;
  return;
}


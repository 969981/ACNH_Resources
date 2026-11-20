
void FUN_03d6e140(long param_1)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined *local_30;
  undefined4 local_28;
  
  iVar1 = *(int *)(param_1 + 0x300);
  fVar3 = (float)iVar1;
  if (*(int *)(param_1 + 0x2fc) + 1 < iVar1) {
    iVar1 = *(int *)(param_1 + 0x2fc) + 1;
  }
  *(int *)(param_1 + 0x2fc) = iVar1;
  fVar3 = (float)iVar1 / fVar3;
  fVar4 = *(float *)(param_1 + 0x2e8);
  fVar7 = (*(float *)(param_1 + 600) + *(float *)(param_1 + 0x270)) - *(float *)(param_1 + 0x2c8);
  fVar5 = (*(float *)(param_1 + 0x25c) + *(float *)(param_1 + 0x274)) - *(float *)(param_1 + 0x2cc);
  *(float *)(param_1 + 0x2ec) = fVar7;
  *(float *)(param_1 + 0x2f8) = fVar3;
  fVar6 = fVar4 - *(float *)(param_1 + 0x2d0);
  *(float *)(param_1 + 0x2f0) = fVar5;
  *(float *)(param_1 + 0x2f4) = fVar6;
  if (1.0 <= fVar3) {
    *(float *)(param_1 + 0x2d4) = fVar7;
    *(float *)(param_1 + 0x2d8) = fVar5;
    *(float *)(param_1 + 0x2dc) = fVar6;
  }
  else {
    *(float *)(param_1 + 0x2d4) =
         *(float *)(param_1 + 0x2e0) + fVar3 * (fVar7 - *(float *)(param_1 + 0x2e0));
    *(float *)(param_1 + 0x2d8) =
         *(float *)(param_1 + 0x2e4) + fVar3 * (fVar5 - *(float *)(param_1 + 0x2e4));
    *(float *)(param_1 + 0x2dc) = fVar4 + fVar3 * (fVar6 - fVar4);
  }
  plVar2 = *(long **)(param_1 + 0x1d0);
  local_30 = PTR_DAT_04bc0cb8 + 0x10;
  local_28 = 8;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30);
  (**(code **)(plVar2[3] + 0x98))(plVar2[1],param_1 + 0x2d4);
  return;
}


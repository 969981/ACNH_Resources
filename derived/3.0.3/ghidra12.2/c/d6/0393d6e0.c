
void FUN_0393d6e0(undefined8 param_1,long *param_2,long param_3,ulong param_4,long *param_5,
                 long param_6)

{
  ulong uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  float fVar6;
  long lVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar8 = 0;
  do {
    FUN_01560750(param_3,param_2[uVar8],0,0);
    uVar1 = uVar8 + 1;
    param_5[uVar8 + 4] = param_3;
    param_3 = param_3 + 0xe0;
    uVar8 = uVar1;
  } while ((param_4 & 0xffffffff) != uVar1);
  lVar7 = *param_2;
  uVar3 = *(ushort *)(lVar7 + 0x30);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  uVar4 = *(ushort *)(lVar7 + 0x32);
  uVar2 = uVar4;
  if (*(short *)(lVar7 + 0x3a) != 3) {
    uVar2 = 1;
  }
  if (uVar2 <= uVar4) {
    uVar2 = uVar4;
  }
  *(float *)(param_5 + 1) = (float)uVar3;
  *(float *)((long)param_5 + 0xc) = (float)uVar2;
  lVar7 = *param_2;
  uVar3 = *(ushort *)(lVar7 + 0x30);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  sVar5 = *(short *)(lVar7 + 0x3a);
  uVar4 = *(ushort *)(lVar7 + 0x32);
  param_5[2] = 0;
  uVar2 = uVar4;
  if (sVar5 != 3) {
    uVar2 = 1;
  }
  if (uVar2 <= uVar4) {
    uVar2 = uVar4;
  }
  *(float *)(param_5 + 3) = (float)uVar3;
  *(float *)((long)param_5 + 0x1c) = (float)uVar2;
  (**(code **)(*param_5 + 0x38))(param_5,param_1);
  if (*(uint *)(param_6 + 0x18) < 6) {
    if ((1 << (ulong)(*(uint *)(param_6 + 0x18) & 0x1f) & 0x39U) == 0) {
      fVar11 = *(float *)(param_5 + 1);
      fVar9 = *(float *)((long)param_5 + 0xc);
    }
    else {
      fVar9 = *(float *)(param_5 + 1);
      fVar11 = *(float *)((long)param_5 + 0xc);
    }
    fVar10 = fVar9;
    fVar6 = 0.0;
    if (fVar9 <= 0.0) {
      fVar10 = 0.0;
      fVar6 = fVar9;
    }
    *(float *)(param_6 + 0x10) = fVar10;
    fVar10 = fVar11;
    fVar9 = 0.0;
    if (fVar11 <= 0.0) {
      fVar10 = 0.0;
      fVar9 = fVar11;
    }
    *(float *)(param_6 + 8) = fVar6;
    *(float *)(param_6 + 0xc) = fVar9;
    *(float *)(param_6 + 0x14) = fVar10;
  }
  FUN_038e77e4(param_6,param_1,param_5);
  return;
}


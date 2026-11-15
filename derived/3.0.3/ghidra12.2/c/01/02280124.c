
undefined8 FUN_02280124(long param_1,float *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_50;
  float fStack_4c;
  float local_48;
  uint local_44;
  float local_40;
  float fStack_3c;
  float local_38;
  
  plVar1 = *(long **)(param_1 + 0x68);
  fVar7 = *param_2;
  fVar6 = param_2[2];
  lVar3 = plVar1[0x4f];
  fVar4 = *(float *)(plVar1 + 0x50);
  local_40 = (float)lVar3;
  fVar8 = SQRT((fVar4 - fVar6) * (fVar4 - fVar6) + (local_40 - fVar7) * (local_40 - fVar7));
  if (0.01 < fVar8) {
    *(byte *)(param_1 + 0x29e) = *(byte *)(param_1 + 0x29e) | 0x80;
    local_50 = 3.36312e-44;
    *(byte *)(param_1 + 0x29f) = *(byte *)(param_1 + 0x29f) | 1;
    fVar7 = *param_2;
    fVar6 = param_2[2];
    fVar8 = SQRT((fVar4 - fVar6) * (fVar4 - fVar6) + (local_40 - fVar7) * (local_40 - fVar7));
  }
  fVar7 = fVar7 - local_40;
  fVar5 = param_2[1];
  *(float *)(param_1 + 0x33c) = fVar8;
  fStack_3c = (float)((ulong)lVar3 >> 0x20);
  fVar6 = fVar6 - fVar4;
  fVar5 = fVar5 - fStack_3c;
  local_40 = *param_2;
  local_38 = param_2[2];
  (**(code **)(*plVar1 + 0x100))(plVar1,&local_40);
  fVar4 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6);
  if (0.0 < fVar4) {
    fVar4 = 0.1 / fVar4;
    fVar7 = fVar7 * fVar4;
    fVar5 = fVar5 * fVar4;
    fVar6 = fVar6 * fVar4;
  }
  local_44 = 0;
  fStack_4c = fVar5 + fStack_3c;
  local_50 = fVar7 + local_40;
  local_48 = fVar6 + local_38;
  FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_50,&local_44);
  uVar2 = 1;
  if ((local_44 < 0x2c) && ((1L << ((ulong)local_44 & 0x3f) & 0x80000001022U) != 0)) {
    if ((*(byte *)(param_1 + 0x29e) >> 6 & 1) == 0) {
      fVar4 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6);
      if (0.0 < fVar4) {
        fVar4 = 0.025 / fVar4;
        fVar7 = fVar7 * fVar4;
        fVar5 = fVar5 * fVar4;
        fVar6 = fVar6 * fVar4;
      }
      if (*(int *)(param_1 + 0x2a4) == 0) {
        *(float *)(param_1 + 0x324) = fVar7;
        *(float *)(param_1 + 0x328) = fVar5;
        *(float *)(param_1 + 0x32c) = fVar6;
        *(byte *)(param_1 + 0x29e) = *(byte *)(param_1 + 0x29e) | 0x40;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


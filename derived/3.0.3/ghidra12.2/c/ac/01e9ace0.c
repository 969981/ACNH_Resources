
uint FUN_01e9ace0(long param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_5c;
  undefined8 local_58;
  
  iVar2 = 0x1f;
  local_58 = 0;
  fVar5 = (float)*(int *)(*(long *)PTR_DAT_04bb5c90 + 0x2c) * 5.0;
  fVar3 = (float)*(int *)(*(long *)PTR_DAT_04bb5c90 + 0x28) * 5.0;
  do {
    local_5c = *(undefined4 *)(*(long *)(param_1 + 8) + 0x230);
    uVar1 = FUN_021feea0((long)&local_58 + 4,&local_58,&local_5c,1,0);
    if ((uVar1 & 1) == 0) goto LAB_01e9adf8;
    iVar2 = iVar2 + -1;
    fVar6 = (float)(int)(((int)((float)(int)fVar3 / 5.0) - (uint)(fVar3 < 0.0)) + local_58._4_4_) *
            5.0 + 2.5;
    fVar4 = (float)(int)(((int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0)) + (int)local_58) *
            5.0 + 2.5;
  } while ((iVar2 != 0) &&
          (fVar7 = fVar6 - *(float *)(param_1 + 0x56ec),
          fVar8 = fVar4 - *(float *)(param_1 + 0x56f4), fVar8 * fVar8 + fVar7 * fVar7 < 25.0));
  *(float *)(param_1 + 0x56ec) = fVar6;
  *(undefined4 *)(param_1 + 0x56f0) = 0;
  *(float *)(param_1 + 0x56f4) = fVar4;
LAB_01e9adf8:
  return uVar1 & 1;
}


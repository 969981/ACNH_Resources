
void FUN_018251bc(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  pfVar4 = (float *)FUN_0252d9bc(0);
  if (pfVar4 != (float *)0x0) {
    iVar6 = *(int *)(param_1 + 0x540);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x540) = 1;
      iVar3 = *(int *)(param_1 + 0x538);
      iVar6 = iVar3;
      if (0 < *(int *)(param_1 + 0x53c)) {
        iVar6 = *(int *)(param_1 + 0x53c);
      }
      if (iVar6 <= iVar3) {
        iVar3 = 0;
      }
      *(int *)(param_1 + 0x53c) = iVar6 + -1;
      pfVar5 = (float *)(*(long *)(param_1 + 0x530) + (long)((iVar6 + -1) - iVar3) * 0xc);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x53c);
      iVar2 = *(int *)(param_1 + 0x538);
      iVar3 = 0;
      if (iVar2 <= iVar1) {
        iVar3 = iVar2;
      }
      pfVar5 = (float *)(*(long *)(param_1 + 0x530) + (long)(iVar1 - iVar3) * 0xc);
      fVar7 = *pfVar5 - *pfVar4;
      fVar8 = pfVar5[2] - pfVar4[2];
      if (fVar8 * fVar8 + fVar7 * fVar7 <= 100.0) {
        return;
      }
      if (iVar2 <= iVar6) {
        iVar6 = iVar6 - (uint)(0 < iVar6);
      }
      *(int *)(param_1 + 0x540) = iVar6 + 1;
      iVar6 = iVar2;
      if (0 < iVar1) {
        iVar6 = iVar1;
      }
      if (iVar6 <= iVar2) {
        iVar2 = 0;
      }
      *(int *)(param_1 + 0x53c) = iVar6 + -1;
      pfVar5 = (float *)(*(long *)(param_1 + 0x530) + (long)((iVar6 + -1) - iVar2) * 0xc);
    }
    pfVar5[2] = 0.0;
    pfVar5[0] = 0.0;
    pfVar5[1] = 0.0;
    *pfVar5 = *pfVar4;
    pfVar5[1] = pfVar4[1];
    pfVar5[2] = pfVar4[2];
  }
  return;
}


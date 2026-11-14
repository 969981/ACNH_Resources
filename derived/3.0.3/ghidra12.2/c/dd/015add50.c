
float FUN_015add50(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_5c [2];
  float local_54;
  
  fVar7 = (float)*(int *)(param_1 + 0xc) * 10.0;
  fVar6 = (float)*(int *)(param_1 + 8) * 10.0;
  fVar9 = fVar7 + 2.5;
  fVar8 = fVar6 + 2.5;
  fVar7 = fVar7 + 10.0 + -2.5;
  fVar6 = fVar6 + 10.0 + -2.5;
  iVar2 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
  iVar4 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
  iVar3 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
  iVar1 = iVar2;
  if (iVar3 <= iVar2) {
    iVar1 = iVar3;
  }
  if (iVar2 <= iVar3) {
    iVar2 = iVar3;
  }
  iVar5 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
  iVar3 = iVar4;
  if (iVar4 <= iVar5) {
    iVar3 = iVar5;
  }
  if (iVar5 <= iVar4) {
    iVar4 = iVar5;
  }
  fVar6 = 100.0;
  if (iVar3 + 1 != iVar4) {
    iVar5 = iVar1;
    do {
      local_5c[0] = (float)iVar5 * 5.0 + 2.5;
      local_54 = (float)iVar4 * 5.0 + 2.5;
      fVar7 = (float)FUN_015cb8d4(local_5c,0);
      if (fVar6 <= fVar7) {
        fVar7 = fVar6;
      }
      fVar6 = fVar7;
      if (iVar5 < iVar2) {
        iVar5 = iVar5 + 1;
      }
      else {
        iVar4 = iVar4 + 1;
        iVar5 = iVar1;
      }
    } while ((iVar1 != iVar5) || (iVar3 + 1 != iVar4));
  }
  return fVar6;
}


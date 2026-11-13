
undefined1 FUN_013d3230(long param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_5c [3];
  
  fVar9 = (float)param_2;
  fVar8 = (float)*(int *)(param_1 + 0xc) * 10.0 + 5.0;
  fVar7 = (float)*(int *)(param_1 + 8) * 10.0 + 5.0;
  fVar11 = fVar8 - fVar9;
  fVar8 = fVar8 + fVar9;
  fVar10 = fVar7 - fVar9;
  fVar7 = fVar7 + fVar9;
  iVar2 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
  iVar5 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  iVar3 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
  iVar1 = iVar2;
  if (iVar3 <= iVar2) {
    iVar1 = iVar3;
  }
  if (iVar2 <= iVar3) {
    iVar2 = iVar3;
  }
  iVar6 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
  iVar3 = iVar5;
  if (iVar5 <= iVar6) {
    iVar3 = iVar6;
  }
  if (iVar6 <= iVar5) {
    iVar5 = iVar6;
  }
  if (iVar3 + 1 != iVar5) {
    iVar6 = iVar1;
    do {
      local_5c[1] = 0.0;
      local_5c[0] = (float)iVar6 * 5.0 + 2.5;
      local_5c[2] = (float)iVar5 * 5.0 + 2.5;
      iVar4 = FUN_01317b90(local_5c,0);
      if ((iVar4 == 0) || (iVar4 == 3)) {
        return 0;
      }
      if (iVar4 == 4) {
        return 0;
      }
      if (iVar6 < iVar2) {
        iVar6 = iVar6 + 1;
      }
      else {
        iVar5 = iVar5 + 1;
        iVar6 = iVar1;
      }
    } while ((iVar1 != iVar6) || (iVar3 + 1 != iVar5));
  }
  return 1;
}


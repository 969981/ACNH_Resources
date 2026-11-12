
float FUN_0094bce0(long param_1,long param_2)

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
  undefined8 *local_60;
  int local_58;
  int iStack_54;
  
  fVar7 = (float)*(int *)(param_2 + 0xc) * 10.0;
  fVar6 = (float)*(int *)(param_2 + 8) * 10.0;
  fVar9 = fVar6 + 2.5;
  fVar8 = fVar7 + 2.5;
  fVar6 = fVar6 + 10.0 + -2.5;
  fVar7 = fVar7 + 10.0 + -2.5;
  iVar2 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
  iVar4 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
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
  if (iVar3 + 1 == iVar4) {
    fVar6 = -500.0;
  }
  else {
    fVar6 = -500.0;
    iVar5 = iVar1;
    do {
      local_60 = &DAT_048f9750;
      local_58 = iVar5;
      iStack_54 = iVar4;
      fVar7 = (float)FUN_00963acc(*(undefined8 *)(param_1 + 0x68),&local_60);
      if (fVar7 <= fVar6) {
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


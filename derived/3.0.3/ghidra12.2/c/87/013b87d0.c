
undefined8 FUN_013b87d0(float *param_1,byte *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_6c [3];
  int local_34;
  
  fVar13 = *param_1 + -10.0;
  fVar10 = *param_1 + 10.0;
  fVar12 = param_1[2] + -10.0;
  fVar11 = param_1[2] + 10.0;
  iVar5 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  iVar6 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  iVar8 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
  iVar9 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  iVar3 = iVar5;
  if (iVar8 <= iVar5) {
    iVar3 = iVar8;
  }
  if (iVar5 <= iVar8) {
    iVar5 = iVar8;
  }
  iVar8 = iVar6;
  if (iVar9 <= iVar6) {
    iVar8 = iVar9;
  }
  if (iVar6 <= iVar9) {
    iVar6 = iVar9;
  }
  local_34 = 0;
  lVar7 = *(long *)PTR_DAT_04bb27c8;
  if (iVar6 + 1 != iVar8) {
    iVar9 = iVar3;
    do {
      local_6c[1] = 0.0;
      local_6c[0] = (float)iVar9 * 5.0 + 2.5;
      local_6c[2] = (float)iVar8 * 5.0 + 2.5;
      FUN_0093a950(lVar7 + 0x28,local_6c,&local_34);
      bVar4 = *param_2;
      bVar1 = (bVar4 & 1) == 0 || local_34 != 1;
      if ((bVar4 >> 2 & 1) != 0) {
        bVar1 = local_34 != 5 && bVar1;
      }
      if ((bVar4 >> 1 & 1) == 0) {
        if (bVar1) {
          return 0;
        }
      }
      else {
        bVar2 = false;
        if (local_34 != 0xc) {
          bVar2 = bVar1;
        }
        if (bVar2) {
          return 0;
        }
      }
      if (iVar9 < iVar5) {
        iVar9 = iVar9 + 1;
      }
      else {
        iVar8 = iVar8 + 1;
        iVar9 = iVar3;
      }
    } while ((iVar3 != iVar9) || (iVar6 + 1 != iVar8));
  }
  return 1;
}



bool FUN_02b29830(long param_1,long param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_8c [2];
  float local_84;
  undefined1 local_78 [4];
  undefined4 local_74;
  
  puVar5 = PTR_DAT_04bb27c8;
  bVar6 = true;
  fVar11 = (float)*(int *)(param_2 + 0xc) * 10.0;
  fVar10 = (float)*(int *)(param_2 + 8) * 10.0;
  fVar13 = fVar11 + 2.5;
  fVar12 = fVar10 + 2.5;
  fVar11 = fVar11 + 10.0 + -2.5;
  fVar10 = fVar10 + 10.0 + -2.5;
  iVar3 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  iVar9 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  iVar4 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
  iVar1 = iVar3;
  if (iVar4 <= iVar3) {
    iVar1 = iVar4;
  }
  if (iVar3 <= iVar4) {
    iVar3 = iVar4;
  }
  iVar8 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  iVar4 = iVar9;
  if (iVar9 <= iVar8) {
    iVar4 = iVar8;
  }
  if (iVar8 <= iVar9) {
    iVar9 = iVar8;
  }
  if (iVar4 + 1 != iVar9) {
    lVar7 = *(long *)PTR_DAT_04bb27c8;
    iVar8 = iVar1;
    do {
      local_8c[0] = (float)iVar8 * 5.0 + 2.5;
      local_84 = (float)iVar9 * 5.0 + 2.5;
      if (((lVar7 == 0) || (*(long *)(lVar7 + 0xa8) == 0)) || (*(char *)(lVar7 + 0x11c8) != '\0')) {
        fVar10 = -500.0;
      }
      else {
        local_78[0] = 0;
        if (DAT_04c487d4 == -1) {
          local_74 = 7;
        }
        else {
          puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
          if (0xff < (uint)(int)DAT_04c487d4) {
            puVar2 = (uint *)PTR_DAT_04bc39f8;
          }
          local_74 = 7;
          if ((*puVar2 & 2) != 0) {
            local_74 = 5;
          }
        }
        fVar10 = (float)FUN_00962700(*(long *)(lVar7 + 0xa8),local_8c,&local_74,1,local_78);
        lVar7 = *(long *)puVar5;
      }
      fVar10 = *(float *)(param_1 + 0x738) - fVar10;
      fVar11 = -fVar10;
      if (0.0 <= fVar10) {
        fVar11 = fVar10;
      }
      bVar6 = fVar11 < 1.25;
      if (!bVar6) {
        return bVar6;
      }
      if (iVar8 < iVar3) {
        iVar8 = iVar8 + 1;
      }
      else {
        iVar9 = iVar9 + 1;
        iVar8 = iVar1;
      }
    } while ((iVar1 != iVar8) || (iVar4 + 1 != iVar9));
  }
  return bVar6;
}


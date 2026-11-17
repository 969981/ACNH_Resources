
float FUN_02b29fb0(long param_1,long param_2)

{
  int iVar1;
  uint *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_8c [2];
  float local_84;
  undefined1 local_78 [4];
  undefined4 local_74;
  
  puVar7 = PTR_DAT_04bb6298;
  puVar6 = PTR_DAT_04bb27c8;
  fVar15 = 0.0;
  fVar12 = (float)*(int *)(param_2 + 0xc) * 10.0;
  fVar11 = (float)*(int *)(param_2 + 8) * 10.0;
  fVar14 = fVar12 + 2.5;
  fVar13 = fVar11 + 2.5;
  fVar12 = fVar12 + 10.0 + -2.5;
  fVar11 = fVar11 + 10.0 + -2.5;
  iVar4 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  iVar10 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  iVar5 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  iVar1 = iVar4;
  if (iVar5 <= iVar4) {
    iVar1 = iVar5;
  }
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  iVar9 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  iVar5 = iVar10;
  if (iVar10 <= iVar9) {
    iVar5 = iVar9;
  }
  if (iVar9 <= iVar10) {
    iVar10 = iVar9;
  }
  if (iVar5 + 1 != iVar10) {
    lVar8 = *(long *)PTR_DAT_04bb27c8;
    iVar9 = iVar1;
    do {
      local_8c[0] = (float)iVar9 * 5.0 + 2.5;
      local_84 = (float)iVar10 * 5.0 + 2.5;
      if (((lVar8 == 0) || (*(long *)(lVar8 + 0xa8) == 0)) || (*(char *)(lVar8 + 0x11c8) != '\0')) {
        fVar11 = -500.0;
      }
      else {
        sVar3 = *(short *)puVar7;
        local_78[0] = 0;
        if (sVar3 == -1) {
          local_74 = 7;
        }
        else {
          puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
          if (0xff < (uint)(int)sVar3) {
            puVar2 = (uint *)PTR_DAT_04bc39f8;
          }
          local_74 = 7;
          if ((*puVar2 & 2) != 0) {
            local_74 = 5;
          }
        }
        fVar11 = (float)FUN_00962700(*(long *)(lVar8 + 0xa8),local_8c,&local_74,1,local_78);
        lVar8 = *(long *)puVar6;
      }
      fVar11 = *(float *)(param_1 + 0x738) - fVar11;
      fVar12 = -fVar11;
      if (0.0 <= fVar11) {
        fVar12 = fVar11;
      }
      if (fVar15 <= fVar12) {
        fVar15 = fVar12;
      }
      if (iVar9 < iVar4) {
        iVar9 = iVar9 + 1;
      }
      else {
        iVar10 = iVar10 + 1;
        iVar9 = iVar1;
      }
    } while ((iVar1 != iVar9) || (iVar5 + 1 != iVar10));
  }
  return fVar15;
}


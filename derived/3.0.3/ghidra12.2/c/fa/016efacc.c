
undefined8 FUN_016efacc(float param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar11 = *(long *)PTR_DAT_04bb2720;
  if (lVar11 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar11 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar11 + 0x338));
      iVar10 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar10 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  if (*(int *)(puVar12 + 7) == -0x17df00c3) {
    fVar13 = param_1 * 0.99;
    if (param_1 * 0.99 < 0.0) {
      fVar13 = 0.0;
    }
    fVar14 = *param_2 - fVar13;
    fVar15 = fVar13 + *param_2;
    fVar16 = param_2[2] - fVar13;
    fVar13 = fVar13 + param_2[2];
    iVar6 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
    iVar7 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
    iVar8 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
    iVar9 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
    iVar10 = iVar7;
    if (iVar8 <= iVar7) {
      iVar10 = iVar8;
    }
    if (iVar7 <= iVar8) {
      iVar7 = iVar8;
    }
    iVar8 = iVar6;
    if (iVar9 <= iVar6) {
      iVar8 = iVar9;
    }
    if (iVar6 <= iVar9) {
      iVar6 = iVar9;
    }
    iVar5 = *(int *)(DAT_05abff60 + 0x50);
    iVar2 = *(int *)(DAT_05abff60 + 0x60);
    iVar3 = *(int *)(DAT_05abff60 + 100);
    iVar4 = *(int *)(DAT_05abff60 + 0x2c);
    iVar9 = iVar5;
    if (iVar2 <= iVar5) {
      iVar9 = iVar2;
    }
    if (iVar5 <= iVar2) {
      iVar5 = iVar2;
    }
    iVar2 = iVar4;
    if (iVar3 <= iVar4) {
      iVar2 = iVar3;
    }
    iVar1 = iVar4;
    if (iVar4 <= iVar3) {
      iVar1 = iVar3;
    }
    if ((((iVar10 < *(int *)(DAT_05abff60 + 0x28)) || (*(int *)(DAT_05abff60 + 0x38) < iVar7)) ||
        (iVar8 < iVar4)) || (*(int *)(DAT_05abff60 + 0x3c) < iVar6)) {
      if (iVar10 < iVar9) {
        return 1;
      }
      if (iVar5 < iVar7) {
        return 1;
      }
      if (iVar8 < iVar2) {
        return 1;
      }
      if (iVar1 < iVar6) {
        return 1;
      }
    }
  }
  return 0;
}


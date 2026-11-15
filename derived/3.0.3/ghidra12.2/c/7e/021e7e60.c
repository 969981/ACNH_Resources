
/* WARNING: Removing unreachable block (ram,0x021e7f28) */
/* WARNING: Removing unreachable block (ram,0x021e7f38) */

undefined8 FUN_021e7e60(float *param_1,float *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_90;
  long lStack_88;
  
  fVar11 = *param_1;
  fVar13 = *param_2;
  fVar12 = param_1[2];
  iVar9 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  iVar10 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  fVar14 = param_2[2];
  iVar2 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  iVar3 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  local_90 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  lStack_88 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  uVar5 = FUN_006f0400(fVar13 - fVar11,fVar14 - fVar12);
  if ((uVar5 < 0x20000001) || ((0x60000000 < uVar5 && (uVar5 + 0x1fffffff >> 0x1e < 3)))) {
    fVar11 = *param_1;
    iVar7 = -1;
    if (iVar9 < iVar3) {
      iVar7 = 1;
    }
    iVar8 = -1;
    if (iVar10 < iVar2) {
      iVar8 = 1;
    }
    if (*param_2 == fVar11) {
      fVar12 = param_1[2];
      fVar13 = 0.0;
    }
    else {
      fVar12 = param_1[2];
      fVar13 = (param_2[2] - fVar12) / (*param_2 - fVar11);
    }
    if (iVar9 != iVar7 + iVar3) {
      bVar1 = iVar9 < iVar3;
      do {
        if (iVar9 == iVar3) {
          fVar14 = param_2[2];
        }
        else {
          fVar14 = fVar12 + ((float)(int)(iVar9 + (uint)bVar1) * 5.0 - fVar11) * fVar13;
        }
        iVar2 = iVar8 + (int)((float)(int)fVar14 / 5.0);
        if (iVar10 != iVar2) {
          do {
            uVar6 = FUN_035aa210(iVar9 + -1,iVar10 + -1,&local_90);
            if (((((uVar6 & 1) != 0) &&
                 (uVar6 = FUN_035aa210(iVar9 + -1,iVar10,&local_90), (uVar6 & 1) != 0)) &&
                (uVar6 = FUN_035aa210(iVar9,iVar10 + -1,&local_90), (uVar6 & 1) != 0)) &&
               (uVar6 = FUN_035aa210(iVar9,iVar10,&local_90), (uVar6 & 1) != 0)) goto LAB_021e81f0;
            iVar10 = iVar10 + iVar8;
          } while (iVar2 != iVar10);
        }
        bVar4 = iVar9 != iVar3;
        iVar9 = iVar9 + iVar7;
        iVar10 = (int)((float)(int)fVar14 / 5.0);
      } while (bVar4);
    }
  }
  else {
    fVar11 = param_1[2];
    iVar7 = -1;
    if (iVar10 < iVar2) {
      iVar7 = 1;
    }
    fVar12 = *param_1;
    iVar8 = -1;
    if (iVar9 < iVar3) {
      iVar8 = 1;
    }
    fVar13 = 0.0;
    if (param_2[2] != fVar11) {
      fVar13 = (*param_2 - fVar12) / (param_2[2] - fVar11);
    }
    if (iVar10 != iVar7 + iVar2) {
      bVar1 = iVar10 < iVar2;
      do {
        if (iVar10 == iVar2) {
          fVar14 = *param_2;
        }
        else {
          fVar14 = fVar12 + ((float)(int)(iVar10 + (uint)bVar1) * 5.0 - fVar11) * fVar13;
        }
        iVar3 = iVar8 + (int)((float)(int)fVar14 / 5.0);
        if (iVar9 != iVar3) {
          do {
            uVar6 = FUN_035aa210(iVar9 + -1,iVar10 + -1,&local_90);
            if ((((uVar6 & 1) != 0) &&
                (uVar6 = FUN_035aa210(iVar9 + -1,iVar10,&local_90), (uVar6 & 1) != 0)) &&
               ((uVar6 = FUN_035aa210(iVar9,iVar10 + -1,&local_90), (uVar6 & 1) != 0 &&
                (uVar6 = FUN_035aa210(iVar9,iVar10,&local_90), (uVar6 & 1) != 0)))) {
LAB_021e81f0:
              *(int *)(param_3 + 8) = iVar9;
              *(int *)(param_3 + 0xc) = iVar10;
              return 1;
            }
            iVar9 = iVar9 + iVar8;
          } while (iVar3 != iVar9);
        }
        bVar4 = iVar10 != iVar2;
        iVar10 = iVar10 + iVar7;
        iVar9 = (int)((float)(int)fVar14 / 5.0);
      } while (bVar4);
    }
  }
  return 0;
}


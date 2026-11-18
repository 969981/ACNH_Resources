
/* WARNING: Removing unreachable block (ram,0x036e7884) */
/* WARNING: Removing unreachable block (ram,0x036e7894) */

void FUN_036e77f0(float *param_1,float *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_80;
  long lStack_78;
  
  lVar8 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar8 == 0) {
    iVar6 = 0;
    iVar5 = 0;
    iVar7 = 0x10;
    iVar9 = 0x10;
  }
  else {
    iVar6 = *(int *)(lVar8 + 0xd88);
    iVar5 = *(int *)(lVar8 + 0xd8c);
    iVar9 = *(int *)(lVar8 + 0xd98);
    iVar7 = *(int *)(lVar8 + 0xd9c);
  }
  iVar1 = iVar6;
  if (iVar9 <= iVar6) {
    iVar1 = iVar9;
  }
  if (iVar6 <= iVar9) {
    iVar6 = iVar9;
  }
  iVar9 = iVar5;
  if (iVar7 <= iVar5) {
    iVar9 = iVar7;
  }
  if (iVar5 <= iVar7) {
    iVar5 = iVar7;
  }
  local_80 = *(undefined8 *)(DAT_0519d040 + 0x1f8);
  lStack_78 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  if (iVar5 + 1 != iVar9) {
    fVar12 = 3.4028235e+38;
    iVar7 = iVar1;
    do {
      fVar13 = (float)iVar7 * 5.0;
      fVar10 = *param_2;
      fVar11 = (float)(int)fVar13 + 5.0;
      bVar2 = false;
      bVar3 = true;
      if ((float)(int)fVar13 <= fVar10) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar10) && !NAN(fVar11)) {
          bVar2 = fVar10 == fVar11;
          bVar3 = fVar11 <= fVar10;
        }
      }
      if (bVar3 && !bVar2) {
LAB_036e791c:
        uVar4 = FUN_035aa210(iVar7 + -1,iVar9 + -1,&local_80);
        if (((((uVar4 & 1) != 0) &&
             (uVar4 = FUN_035aa210(iVar7 + -1,iVar9,&local_80), (uVar4 & 1) != 0)) &&
            (uVar4 = FUN_035aa210(iVar7,iVar9 + -1,&local_80), (uVar4 & 1) != 0)) &&
           (uVar4 = FUN_035aa210(iVar7,iVar9,&local_80), (uVar4 & 1) != 0)) {
          fVar10 = (float)iVar9 * 5.0 - param_2[2];
          fVar10 = fVar10 * fVar10 + (fVar13 - *param_2) * (fVar13 - *param_2);
          if (fVar10 <= fVar12) {
            *param_1 = fVar13;
            param_1[1] = 0.0;
            param_1[2] = (float)iVar9 * 5.0;
            fVar12 = fVar10;
          }
        }
      }
      else {
        fVar10 = param_2[2];
        fVar11 = (float)(int)((float)iVar9 * 5.0) + 5.0;
        bVar2 = false;
        bVar3 = true;
        if ((float)(int)((float)iVar9 * 5.0) <= fVar10) {
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar10) && !NAN(fVar11)) {
            bVar2 = fVar10 == fVar11;
            bVar3 = fVar11 <= fVar10;
          }
        }
        if (bVar3 && !bVar2) goto LAB_036e791c;
      }
      if (iVar7 < iVar6) {
        iVar7 = iVar7 + 1;
      }
      else {
        iVar9 = iVar9 + 1;
        iVar7 = iVar1;
      }
    } while ((iVar1 != iVar7) || (iVar5 + 1 != iVar9));
  }
  return;
}


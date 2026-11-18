
void FUN_03455e58(long param_1,undefined8 param_2)

{
  uint *puVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  
  puVar6 = PTR_DAT_04bb6298;
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar1 >> 3 & 1) != 0) &&
       (pfVar8 = (float *)FUN_0251b3b0(param_2,0), pfVar8 != (float *)0x0)) {
      fVar13 = *pfVar8;
      fVar12 = (float)*(int *)(DAT_050d57c8 + 0x38) * 5.0 + 5.0;
      bVar7 = false;
      if (((float)*(int *)(DAT_050d57c8 + 0x28) * 5.0 <= fVar13) &&
         (bVar7 = false, !NAN(fVar13) && !NAN(fVar12))) {
        bVar7 = fVar13 < fVar12;
      }
      if (bVar7) {
        fVar12 = (float)*(int *)(DAT_050d57c8 + 0x3c) * 5.0 + 5.0;
        fVar13 = pfVar8[2];
        bVar7 = false;
        if (((float)*(int *)(DAT_050d57c8 + 0x2c) * 5.0 <= fVar13) &&
           (bVar7 = false, !NAN(fVar13) && !NAN(fVar12))) {
          bVar7 = fVar13 < fVar12;
        }
        if (bVar7) {
          uVar11 = 5;
          goto LAB_034560ec;
        }
      }
    }
    sVar2 = *(short *)puVar6;
    if (sVar2 != -1) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((((*puVar1 >> 3 & 1) != 0) && (lVar9 = FUN_0251b3b0(param_2,0), lVar9 != 0)) &&
         (uVar10 = FUN_02b60610(), (uVar10 & 1) != 0)) {
        uVar11 = 6;
        goto LAB_034560ec;
      }
      sVar2 = *(short *)puVar6;
      if (sVar2 != -1) {
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
        if (0xff < (uint)(int)sVar2) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if (((*puVar1 >> 3 & 1) != 0) &&
           (pfVar8 = (float *)FUN_0251b3b0(param_2,0), pfVar8 != (float *)0x0)) {
          if ((*(long *)PTR_DAT_04bb27c8 != 0) &&
             ((lVar9 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar9 != 0 &&
              (uVar4 = (int)((float)(int)*pfVar8 / 5.0) - (uint)(*pfVar8 < 0.0), -1 < (int)uVar4))))
          {
            uVar5 = (int)((float)(int)pfVar8[2] / 5.0) - (uint)(pfVar8[2] < 0.0);
            if ((-1 < (int)uVar5) &&
               (uVar4 < *(uint *)(lVar9 + 0x38) && uVar5 < *(uint *)(lVar9 + 0x3c))) {
              uVar3 = uVar4 + *(uint *)(lVar9 + 0x38) * uVar5;
              if ((*(uint *)(lVar9 + 0x68) <= uVar3 || *(long *)(lVar9 + 0x70) == 0) ||
                 ((*(uint *)(*(long *)(lVar9 + 0x70) + (long)(int)uVar3 * 4) >> 3 & 1) == 0))
              goto LAB_0345609c;
LAB_034560e0:
              uVar11 = 7;
              goto LAB_034560ec;
            }
LAB_0345609c:
            if ((-1 < (int)uVar5) &&
               (uVar4 < *(uint *)(lVar9 + 0x38) && uVar5 < *(uint *)(lVar9 + 0x3c))) {
              uVar4 = uVar4 + *(uint *)(lVar9 + 0x38) * uVar5;
              if ((uVar4 < *(uint *)(lVar9 + 0x68) && *(long *)(lVar9 + 0x70) != 0) &&
                 ((*(uint *)(*(long *)(lVar9 + 0x70) + (long)(int)uVar4 * 4) >> 5 & 1) != 0))
              goto LAB_034560e0;
            }
          }
        }
      }
    }
  }
  uVar11 = 1;
LAB_034560ec:
  *(undefined4 *)(param_1 + 0x84) = uVar11;
  *(undefined4 *)(param_1 + 0x48) = 3;
  FUN_03ebb160(param_1,8);
  return;
}


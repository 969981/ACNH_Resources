
void FUN_01872a00(long param_1)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  float fVar16;
  
  uVar11 = FUN_006f0400(*(float *)(param_1 + 0x328) - *(float *)(*(long *)(param_1 + 0x300) + 0x278)
                        ,*(float *)(param_1 + 0x330) -
                         *(float *)(*(long *)(param_1 + 0x300) + 0x280));
  uVar5 = *(uint *)(param_1 + 800);
  if (uVar5 != uVar11) {
    bVar9 = uVar5 < uVar11;
    bVar10 = uVar5 - uVar11 == 0;
    uVar2 = uVar5 - uVar11;
    if (bVar9 || bVar10) {
      uVar2 = uVar11 - uVar5;
    }
    lVar15 = -0x2000000;
    if (!bVar9 && !bVar10) {
      lVar15 = 0x2000000;
    }
    lVar3 = 0x2000000;
    if (!bVar9 && !bVar10) {
      lVar3 = -0x2000000;
    }
    if (uVar2 < 0x80000001) {
      lVar15 = lVar3;
    }
    uVar2 = uVar5 + (int)lVar15;
    if (lVar15 < 1) {
      if (lVar15 < 0) {
        if (uVar2 < uVar5) {
          if (uVar5 < uVar11 || uVar11 < uVar2) goto LAB_01872ab4;
        }
        else if ((uVar11 > uVar5 && uVar11 <= uVar2) && (uVar11 <= uVar5 || uVar2 != uVar11))
        goto LAB_01872ab4;
        goto LAB_01872ab8;
      }
    }
    else {
      if (uVar5 < uVar2) {
        if ((uVar11 < uVar5) || (uVar2 < uVar11)) {
LAB_01872ab4:
          uVar11 = uVar2;
        }
      }
      else if (uVar11 < uVar5 && uVar2 < uVar11) goto LAB_01872ab4;
LAB_01872ab8:
      *(uint *)(param_1 + 800) = uVar11;
    }
  }
  lVar15 = *(long *)(param_1 + 0x3d0);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x2d8) + 0x28))(lVar15 + 0x2d8);
    plVar8 = DAT_0537d558;
    uVar14 = FUN_01d3e29c(*DAT_0537d558 + 8);
    if (((uVar14 & 1) != 0) && (uVar14 = FUN_01d692e8(plVar8[2]), (uVar14 & 1) == 0)) {
      return;
    }
  }
  uVar12 = (**(code **)(*(long *)(param_1 + 0x4b8) + (ulong)*(byte *)(param_1 + 0x4cc) * 8))
                     (param_1 + 0x4b8);
  *(undefined4 *)(param_1 + 0x4c0) = uVar12;
  iVar13 = (**(code **)(*(long *)(param_1 + 0x500) + (ulong)*(byte *)(param_1 + 0x514) * 8))
                     (param_1 + 0x500);
  iVar6 = *(int *)(param_1 + 0x510);
  *(int *)(param_1 + 0x508) = iVar13;
  iVar7 = *(int *)(param_1 + 0x50c);
  iVar4 = iVar7;
  if (iVar7 <= iVar6) {
    iVar4 = iVar6;
    iVar6 = iVar7;
  }
  if ((iVar13 <= iVar6) || (iVar4 <= iVar13)) {
LAB_01872cac:
    if (*(int *)(param_1 + 0x280) == 1) {
      return;
    }
    FUN_03ebb160(param_1 + 0x278,1);
    return;
  }
  iVar6 = *(int *)(param_1 + 0x4c8);
  iVar7 = *(int *)(param_1 + 0x4c4);
  iVar4 = iVar7;
  if (iVar7 <= iVar6) {
    iVar4 = iVar6;
    iVar6 = iVar7;
  }
  if ((*(int *)(param_1 + 0x4c0) <= iVar6) || (iVar4 <= *(int *)(param_1 + 0x4c0)))
  goto LAB_01872cac;
  iVar13 = (**(code **)(*(long *)(param_1 + 0x4d0) + (ulong)*(byte *)(param_1 + 0x4e4) * 8))
                     (param_1 + 0x4d0);
  iVar6 = *(int *)(param_1 + 0x4e0);
  *(int *)(param_1 + 0x4d8) = iVar13;
  iVar7 = *(int *)(param_1 + 0x4dc);
  iVar4 = iVar7;
  if (iVar7 <= iVar6) {
    iVar4 = iVar6;
    iVar6 = iVar7;
  }
  if ((iVar6 < iVar13) && (iVar13 < iVar4)) {
    return;
  }
  lVar15 = *(long *)(param_1 + 0x3d0);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x2d8) + 0x28))(lVar15 + 0x2d8);
    plVar8 = DAT_0537d558;
    uVar14 = FUN_01d3e29c(*DAT_0537d558 + 8);
    if (((uVar14 & 1) != 0) && (uVar14 = FUN_01d692e8(plVar8[2]), (uVar14 & 1) == 0))
    goto LAB_01872ca0;
  }
  uVar5 = *(uint *)(param_1 + 1000);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x3ec);
  uVar5 = uVar5 ^ uVar5 << 0xb;
  *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_1 + 0x3f0);
  uVar2 = *(uint *)(param_1 + 0x3f4);
  uVar11 = uVar5 ^ uVar2;
  *(uint *)(param_1 + 0x3f0) = uVar2;
  uVar5 = uVar5 >> 8 ^ uVar2 >> 0x13 ^ uVar11;
  *(uint *)(param_1 + 0x3f4) = uVar5;
  fVar16 = (float)(uVar5 & 0xffffff);
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar11 >> 0x18) * 0x10);
  *(float *)(param_1 + 0x328) =
       *(float *)(param_1 + 0x334) + (pfVar1[2] + pfVar1[3] * fVar16 * 5.9604645e-08) * 10.0;
  *(float *)(param_1 + 0x330) =
       *(float *)(param_1 + 0x33c) + (*pfVar1 + pfVar1[1] * fVar16 * 5.9604645e-08) * 10.0;
  FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
LAB_01872ca0:
  *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_1 + 0x4dc);
  return;
}


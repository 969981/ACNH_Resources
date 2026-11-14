
void FUN_0187c2a4(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  long *plVar9;
  uint uVar10;
  undefined4 uVar11;
  float *pfVar12;
  undefined4 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  
  lVar17 = *(long *)(param_1 + 0x4b8);
  uVar10 = FUN_006f0400(*(float *)(param_1 + 0x328) - *(float *)(*(long *)(param_1 + 0x300) + 0x278)
                        ,*(float *)(param_1 + 0x330) -
                         *(float *)(*(long *)(param_1 + 0x300) + 0x280));
  pfVar12 = (float *)(**(code **)(*(long *)(lVar17 + 0x128) + 0xf0))(lVar17 + 0x128);
  uVar4 = *(uint *)(param_1 + 800);
  uVar7 = uVar4 - uVar10;
  uVar1 = uVar7;
  if (uVar4 < uVar10 || uVar7 == 0) {
    uVar1 = uVar10 - uVar4;
  }
  lVar2 = 1;
  if (uVar4 >= uVar10 && uVar7 != 0) {
    lVar2 = -1;
  }
  lVar16 = -1;
  if (uVar10 < uVar4) {
    lVar16 = 1;
  }
  if (0x80000000 < uVar1) {
    lVar2 = lVar16;
  }
  lVar16 = 0;
  if (uVar4 != uVar10) {
    lVar16 = lVar2;
  }
  lVar16 = lVar16 * ((long)(*pfVar12 * 11930465.0) & 0xffffffffU);
  uVar1 = uVar4 + (int)lVar16;
  if (lVar16 < 1) {
    if (lVar16 < 0) {
      if (uVar1 < uVar4) {
        if (uVar4 < uVar10) goto LAB_0187c388;
      }
      else if (uVar10 <= uVar4) goto LAB_0187c3b8;
      if (uVar1 <= uVar10) goto LAB_0187c3b8;
LAB_0187c388:
      bVar8 = false;
      *(uint *)(param_1 + 800) = uVar1;
    }
    else {
      if ((int)lVar16 == 0) goto LAB_0187c3bc;
      bVar8 = false;
    }
  }
  else {
    if (uVar4 < uVar1) {
      if (uVar10 < uVar4) goto LAB_0187c388;
LAB_0187c380:
      if (uVar1 < uVar10) goto LAB_0187c388;
    }
    else if (uVar10 < uVar4) goto LAB_0187c380;
LAB_0187c3b8:
    *(uint *)(param_1 + 800) = uVar10;
LAB_0187c3bc:
    puVar13 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0x98) + 0xf0))((long *)(lVar17 + 0x98));
    bVar8 = true;
    *(undefined4 *)(param_1 + 0x308) = *puVar13;
  }
  uVar11 = (**(code **)(*(long *)(param_1 + 0x4d0) + (ulong)*(byte *)(param_1 + 0x4e4) * 8))
                     (param_1 + 0x4d0);
  lVar17 = *(long *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x4d8) = uVar11;
  if (lVar17 != 0) {
    (**(code **)(*(long *)(lVar17 + 0x2d8) + 0x28))(lVar17 + 0x2d8);
    plVar9 = DAT_0537d558;
    uVar14 = FUN_01d3e29c(*DAT_0537d558 + 8);
    if (((uVar14 & 1) != 0) && (uVar14 = FUN_01d692e8(plVar9[2]), (uVar14 & 1) == 0)) {
      if (!bVar8) {
        return;
      }
      fVar18 = *(float *)(*(long *)(param_1 + 0x300) + 0x278) - *(float *)(param_1 + 0x328);
      fVar19 = *(float *)(*(long *)(param_1 + 0x300) + 0x280) - *(float *)(param_1 + 0x330);
      if (*(float *)(param_1 + 0x3ac) < fVar19 * fVar19 + fVar18 * fVar18) {
        return;
      }
      *(undefined4 *)(param_1 + 0x308) = 0;
      return;
    }
    if (((*(long *)(param_1 + 0x3d0) != 0) &&
        (lVar17 = *(long *)(*(long *)(param_1 + 0x3d0) + 0x300), lVar17 != 0)) &&
       (*(float *)(lVar17 + 0x2b8) < *(float *)(lVar17 + 0x2b0))) {
      if (*(int *)(param_1 + 0x280) == 0) {
        return;
      }
      uVar15 = 0;
      goto LAB_0187c4e4;
    }
  }
  if (!bVar8) {
    return;
  }
  iVar5 = *(int *)(param_1 + 0x4e0);
  iVar6 = *(int *)(param_1 + 0x4dc);
  iVar3 = iVar6;
  if (iVar6 <= iVar5) {
    iVar3 = iVar5;
    iVar5 = iVar6;
  }
  if ((iVar5 < *(int *)(param_1 + 0x4d8)) && (*(int *)(param_1 + 0x4d8) < iVar3)) {
    fVar18 = *(float *)(*(long *)(param_1 + 0x300) + 0x278) - *(float *)(param_1 + 0x328);
    fVar19 = *(float *)(*(long *)(param_1 + 0x300) + 0x280) - *(float *)(param_1 + 0x330);
    if (*(float *)(param_1 + 0x3ac) < fVar19 * fVar19 + fVar18 * fVar18 ||
        *(int *)(param_1 + 0x280) == 6) {
      return;
    }
  }
  else if (*(int *)(param_1 + 0x280) == 6) {
    return;
  }
  uVar15 = 6;
LAB_0187c4e4:
  FUN_03ebb160(param_1 + 0x278,uVar15);
  return;
}


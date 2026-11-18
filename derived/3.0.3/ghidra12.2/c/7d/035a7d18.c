
void FUN_035a7d18(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar9 = (uint)*param_2;
  uVar13 = *param_2 - 1;
  uVar2 = *param_1;
  uVar11 = (uint)uVar2;
  iVar7 = *(int *)(param_1 + 6);
  uVar3 = param_2[1];
  uVar10 = (uint)uVar3;
  uVar14 = uVar13 & 0xffff;
  uVar12 = ((uint)uVar2 + iVar7) - 1;
  if (((uVar2 < uVar14 || uVar2 == uVar14) && ((uVar13 & 0xffff) <= (uVar12 & 0xffff))) &&
     (uVar4 = param_1[1], uVar4 <= uVar3)) {
    if (((((uint)uVar3 <= (((uint)uVar4 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
         (iVar5 = uVar14 - uVar2, -1 < iVar5)) &&
        ((iVar5 < iVar7 &&
         ((iVar6 = (uint)uVar3 - (uint)uVar4, -1 < iVar6 && (iVar6 < *(int *)(param_1 + 8))))))) &&
       (*(long *)(param_1 + 0x10) != 0)) {
      lVar8 = *(long *)(param_1 + 0x10) + (long)(iVar5 + iVar6 * iVar7) * 0x28;
      *(byte *)(lVar8 + 4) = *(byte *)(lVar8 + 4) & 0x9d;
      uVar11 = (uint)*param_1;
      iVar7 = *(int *)(param_1 + 6);
      uVar9 = (uint)*param_2;
      uVar10 = (uint)param_2[1];
      uVar12 = ((uint)*param_1 + iVar7) - 1;
    }
  }
  uVar14 = uVar9 + 1 & 0xffff;
  if (((uVar11 <= uVar14) && ((uVar9 + 1 & 0xffff) <= (uVar12 & 0xffff))) &&
     (uVar2 = param_1[1], uVar2 <= uVar10)) {
    if ((((uVar10 <= (((uint)uVar2 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
         (iVar5 = uVar14 - uVar11, -1 < iVar5)) &&
        ((iVar5 < iVar7 && ((iVar6 = uVar10 - uVar2, -1 < iVar6 && (iVar6 < *(int *)(param_1 + 8))))
         ))) && (*(long *)(param_1 + 0x10) != 0)) {
      lVar8 = *(long *)(param_1 + 0x10) + (long)(iVar5 + iVar6 * iVar7) * 0x28;
      *(byte *)(lVar8 + 4) = *(byte *)(lVar8 + 4) & 0x6e;
      uVar11 = (uint)*param_1;
      iVar7 = *(int *)(param_1 + 6);
      uVar9 = (uint)*param_2;
      uVar10 = (uint)param_2[1];
      uVar12 = (uVar11 + iVar7) - 1;
    }
  }
  if ((uVar11 <= uVar9) && (uVar9 <= (uVar12 & 0xffff))) {
    uVar2 = param_1[1];
    uVar14 = uVar10 - 1 & 0xffff;
    if (uVar2 <= uVar14) {
      if (((((uVar14 <= (((uint)uVar2 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
            (iVar5 = uVar9 - uVar11, -1 < iVar5)) && (iVar5 < iVar7)) &&
          ((iVar6 = uVar14 - uVar2, -1 < iVar6 && (iVar6 < *(int *)(param_1 + 8))))) &&
         (*(long *)(param_1 + 0x10) != 0)) {
        lVar8 = *(long *)(param_1 + 0x10) + (long)(iVar5 + iVar6 * iVar7) * 0x28;
        *(byte *)(lVar8 + 4) = *(byte *)(lVar8 + 4) & 0x57;
        uVar11 = (uint)*param_1;
        iVar7 = *(int *)(param_1 + 6);
        uVar9 = (uint)*param_2;
        uVar10 = (uint)param_2[1];
        uVar12 = (uVar11 + iVar7) - 1;
      }
    }
  }
  if ((uVar11 <= uVar9) && (uVar9 <= (uVar12 & 0xffff))) {
    uVar2 = param_1[1];
    uVar14 = uVar10 + 1 & 0xffff;
    if (uVar2 <= uVar14) {
      if ((((uVar14 <= (((uint)uVar2 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
           (iVar5 = uVar9 - uVar11, -1 < iVar5)) && (iVar5 < iVar7)) &&
         (((iVar6 = uVar14 - uVar2, -1 < iVar6 && (iVar6 < *(int *)(param_1 + 8))) &&
          (*(long *)(param_1 + 0x10) != 0)))) {
        lVar8 = *(long *)(param_1 + 0x10) + (long)(iVar5 + iVar6 * iVar7) * 0x28;
        *(byte *)(lVar8 + 4) = *(byte *)(lVar8 + 4) & 0xab;
        uVar11 = (uint)*param_1;
        iVar7 = *(int *)(param_1 + 6);
        uVar9 = (uint)*param_2;
        uVar10 = (uint)param_2[1];
        uVar12 = (uVar11 + iVar7) - 1;
      }
    }
  }
  uVar14 = uVar9 - 1 & 0xffff;
  if ((uVar11 <= uVar14) && ((uVar9 - 1 & 0xffff) <= (uVar12 & 0xffff))) {
    uVar2 = param_1[1];
    uVar13 = uVar10 - 1 & 0xffff;
    if (uVar2 <= uVar13) {
      if ((((uVar13 <= (((uint)uVar2 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
           (iVar5 = uVar14 - uVar11, -1 < iVar5)) && (iVar5 < iVar7)) &&
         (((iVar6 = uVar13 - uVar2, -1 < iVar6 && (iVar6 < *(int *)(param_1 + 8))) &&
          (*(long *)(param_1 + 0x10) != 0)))) {
        lVar8 = *(long *)(param_1 + 0x10) + (long)(iVar5 + iVar6 * iVar7) * 0x28;
        *(byte *)(lVar8 + 4) = *(byte *)(lVar8 + 4) & 0xdf;
        uVar11 = (uint)*param_1;
        iVar7 = *(int *)(param_1 + 6);
        uVar9 = (uint)*param_2;
        uVar10 = (uint)param_2[1];
        uVar12 = (uVar11 + iVar7) - 1;
      }
    }
  }
  uVar14 = uVar9 + 1;
  uVar13 = uVar14 & 0xffff;
  if ((uVar11 <= uVar13) && ((uVar14 & 0xffff) <= (uVar12 & 0xffff))) {
    uVar2 = param_1[1];
    uVar1 = uVar10 + 1 & 0xffff;
    if (uVar2 <= uVar1) {
      if (((((uVar1 <= (((uint)uVar2 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
            (iVar5 = uVar13 - uVar11, -1 < iVar5)) && (iVar5 < iVar7)) &&
          ((iVar6 = uVar1 - uVar2, -1 < iVar6 && (iVar6 < *(int *)(param_1 + 8))))) &&
         (*(long *)(param_1 + 0x10) != 0)) {
        lVar8 = *(long *)(param_1 + 0x10) + (long)(iVar5 + iVar6 * iVar7) * 0x28;
        *(byte *)(lVar8 + 4) = *(byte *)(lVar8 + 4) & 0xef;
        uVar9 = (uint)*param_2;
        uVar11 = (uint)*param_1;
        iVar7 = *(int *)(param_1 + 6);
        uVar10 = (uint)param_2[1];
        uVar14 = uVar9 + 1;
        uVar13 = uVar14 & 0xffff;
        uVar12 = (uVar11 + iVar7) - 1;
      }
    }
  }
  if ((uVar11 <= (uVar14 & 0xffff)) && ((uVar14 & 0xffff) <= (uVar12 & 0xffff))) {
    uVar2 = param_1[1];
    uVar14 = uVar10 - 1 & 0xffff;
    if (uVar2 <= uVar14) {
      if ((((uVar14 <= (((uint)uVar2 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
           (iVar5 = uVar13 - uVar11, -1 < iVar5)) && (iVar5 < iVar7)) &&
         (((iVar6 = uVar14 - uVar2, -1 < iVar6 && (iVar6 < *(int *)(param_1 + 8))) &&
          (*(long *)(param_1 + 0x10) != 0)))) {
        lVar8 = *(long *)(param_1 + 0x10) + (long)(iVar5 + iVar6 * iVar7) * 0x28;
        *(byte *)(lVar8 + 4) = *(byte *)(lVar8 + 4) & 0x7f;
        uVar11 = (uint)*param_1;
        iVar7 = *(int *)(param_1 + 6);
        uVar9 = (uint)*param_2;
        uVar10 = (uint)param_2[1];
        uVar12 = (uVar11 + iVar7) - 1;
      }
    }
  }
  uVar14 = uVar9 - 1 & 0xffff;
  if ((uVar11 <= uVar14) && ((uVar9 - 1 & 0xffff) <= (uVar12 & 0xffff))) {
    uVar2 = param_1[1];
    uVar13 = uVar10 + 1 & 0xffff;
    if (uVar2 <= uVar13) {
      if ((((uVar13 <= (((uint)uVar2 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
           (iVar5 = uVar14 - uVar11, -1 < iVar5)) && (iVar5 < iVar7)) &&
         (((iVar6 = uVar13 - uVar2, -1 < iVar6 && (iVar6 < *(int *)(param_1 + 8))) &&
          (*(long *)(param_1 + 0x10) != 0)))) {
        lVar8 = *(long *)(param_1 + 0x10) + (long)(iVar5 + iVar6 * iVar7) * 0x28;
        *(byte *)(lVar8 + 4) = *(byte *)(lVar8 + 4) & 0xbf;
      }
    }
  }
  return;
}


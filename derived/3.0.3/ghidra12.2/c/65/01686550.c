
void FUN_01686550(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  iVar6 = DAT_05233984;
  iVar5 = DAT_05233980;
  iVar4 = DAT_05233974;
  iVar3 = DAT_05233970;
  iVar12 = *(int *)(param_2 + 0x24);
  uVar11 = *(uint *)(param_2 + 0x10);
  uVar7 = *(uint *)(param_2 + 0x14);
  uVar8 = iVar12 + 1;
  uVar10 = uVar11;
  if (uVar8 != uVar7) {
    uVar13 = uVar11;
    do {
      if ((((iVar3 <= (int)uVar13) && ((int)uVar13 <= iVar5)) && (iVar4 <= (int)uVar7)) &&
         (((int)uVar7 <= iVar6 && (uVar1 = uVar13 + uVar7 * 0x200, uVar1 >> 0x11 == 0)))) {
        lVar2 = (ulong)(uVar1 >> 5) * 4;
        *(uint *)(param_1 + 8 + lVar2) =
             *(uint *)(param_1 + 8 + lVar2) & (1 << (ulong)(uVar13 & 0x1f) ^ 0xffffffffU);
        uVar10 = *(uint *)(param_2 + 0x10);
      }
      if ((int)uVar13 < *(int *)(param_2 + 0x20)) {
        uVar13 = uVar13 + 1;
      }
      else {
        uVar7 = uVar7 + 1;
        uVar13 = uVar10;
      }
    } while (uVar11 != uVar13 || uVar8 != uVar7);
    iVar12 = *(int *)(param_2 + 0x24);
    uVar8 = iVar12 + 1;
    uVar7 = *(uint *)(param_2 + 0x14);
  }
  iVar6 = DAT_05233984;
  iVar5 = DAT_05233980;
  iVar4 = DAT_05233974;
  iVar3 = DAT_05233970;
  uVar11 = uVar10;
  if (uVar8 == uVar7) {
    iVar9 = *(int *)(param_2 + 0x20);
  }
  else {
    uVar13 = uVar10;
    do {
      if (((iVar3 <= (int)uVar13) && ((int)uVar13 <= iVar5)) &&
         ((iVar4 <= (int)uVar7 &&
          (((int)uVar7 <= iVar6 &&
           (uVar1 = (uVar7 & 0x1fffffe) * 0x80 + ((int)uVar13 >> 1), uVar1 >> 0xf == 0)))))) {
        lVar2 = (ulong)(uVar1 >> 5) * 4;
        *(uint *)(param_1 + 0x2e100 + lVar2) =
             *(uint *)(param_1 + 0x2e100 + lVar2) & (1 << (ulong)(uVar13 >> 1 & 0x1f) ^ 0xffffffffU)
        ;
        uVar11 = *(uint *)(param_2 + 0x10);
      }
      iVar9 = *(int *)(param_2 + 0x20);
      if ((int)uVar13 < iVar9) {
        uVar13 = uVar13 + 1;
      }
      else {
        uVar7 = uVar7 + 1;
        uVar13 = uVar11;
      }
    } while (uVar10 != uVar13 || uVar8 != uVar7);
    uVar7 = *(uint *)(param_2 + 0x14);
    iVar12 = *(int *)(param_2 + 0x24);
  }
  iVar6 = DAT_05233984;
  iVar5 = DAT_05233980;
  iVar4 = DAT_05233974;
  iVar3 = DAT_05233970;
  uVar8 = iVar12 + 1;
  if ((iVar9 - uVar11 == 1) && (uVar8 - uVar7 == 2)) {
    if (((DAT_05233970 <= (int)uVar11) &&
        ((((int)uVar11 <= DAT_05233980 && (DAT_05233974 <= (int)uVar7)) &&
         ((int)uVar7 <= DAT_05233984)))) &&
       (uVar8 = (uVar7 & 0x1fffffe) * 0x80 + ((int)uVar11 >> 1), uVar8 >> 0xf == 0)) {
      lVar2 = param_1 + (ulong)(uVar8 >> 5) * 4;
      *(uint *)(lVar2 + 0x15038) =
           *(uint *)(lVar2 + 0x15038) & (1 << (ulong)(uVar11 >> 1 & 0x1f) ^ 0xffffffffU);
      uVar11 = *(uint *)(param_2 + 0x10);
    }
    if (((iVar3 <= (int)uVar11) && ((int)uVar11 <= iVar5)) &&
       ((uVar8 = *(uint *)(param_2 + 0x14), DAT_05233974 <= (int)uVar8 &&
        (((int)uVar8 <= DAT_05233984 &&
         (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)uVar11 >> 1), uVar8 >> 0xf == 0)))))) {
      lVar2 = param_1 + (ulong)(uVar8 >> 5) * 4;
      *(uint *)(lVar2 + 0x14030) =
           *(uint *)(lVar2 + 0x14030) & (1 << (ulong)(uVar11 >> 1 & 0x1f) ^ 0xffffffffU);
      uVar11 = *(uint *)(param_2 + 0x10);
    }
    if ((((iVar3 <= (int)uVar11) && ((int)uVar11 <= iVar5)) &&
        (uVar8 = *(uint *)(param_2 + 0x14), DAT_05233974 <= (int)uVar8)) &&
       (((int)uVar8 <= DAT_05233984 &&
        (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)uVar11 >> 1), uVar8 >> 0xf == 0)))) {
      lVar2 = param_1 + (ulong)(uVar8 >> 5) * 4;
      *(uint *)(lVar2 + 0x18050) =
           *(uint *)(lVar2 + 0x18050) & (1 << (ulong)(uVar11 >> 1 & 0x1f) ^ 0xffffffffU);
      uVar11 = *(uint *)(param_2 + 0x10);
    }
    if (((iVar3 <= (int)uVar11) && ((int)uVar11 <= iVar5)) &&
       ((uVar8 = *(uint *)(param_2 + 0x14), DAT_05233974 <= (int)uVar8 &&
        (((int)uVar8 <= DAT_05233984 &&
         (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)uVar11 >> 1), uVar8 >> 0xf == 0)))))) {
      lVar2 = param_1 + (ulong)(uVar8 >> 5) * 4;
      *(uint *)(lVar2 + 0x16040) =
           *(uint *)(lVar2 + 0x16040) & (1 << (ulong)(uVar11 >> 1 & 0x1f) ^ 0xffffffffU);
      uVar11 = *(uint *)(param_2 + 0x10);
    }
    if ((((iVar3 <= (int)uVar11) && ((int)uVar11 <= iVar5)) &&
        (uVar8 = *(uint *)(param_2 + 0x14), DAT_05233974 <= (int)uVar8)) &&
       (((int)uVar8 <= DAT_05233984 &&
        (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)uVar11 >> 1), uVar8 >> 0xf == 0)))) {
      lVar2 = param_1 + (ulong)(uVar8 >> 5) * 4;
      *(uint *)(lVar2 + 0x17048) =
           *(uint *)(lVar2 + 0x17048) & (1 << (ulong)(uVar11 >> 1 & 0x1f) ^ 0xffffffffU);
      uVar11 = *(uint *)(param_2 + 0x10);
    }
    if (((iVar3 <= (int)uVar11) && ((int)uVar11 <= iVar5)) &&
       ((uVar8 = *(uint *)(param_2 + 0x14), DAT_05233974 <= (int)uVar8 &&
        (((int)uVar8 <= DAT_05233984 &&
         (uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)uVar11 >> 1), uVar8 >> 0xf == 0)))))) {
      lVar2 = param_1 + (ulong)(uVar8 >> 5) * 4;
      *(uint *)(lVar2 + 0x19058) =
           *(uint *)(lVar2 + 0x19058) & (1 << (ulong)(uVar11 >> 1 & 0x1f) ^ 0xffffffffU);
      uVar11 = *(uint *)(param_2 + 0x10);
    }
    if ((int)uVar11 < iVar3) {
      return;
    }
    if (iVar5 < (int)uVar11) {
      return;
    }
    uVar8 = *(uint *)(param_2 + 0x14);
    if ((int)uVar8 < DAT_05233974) {
      return;
    }
    if (DAT_05233984 < (int)uVar8) {
      return;
    }
    uVar8 = (uVar8 & 0x1fffffe) * 0x80 + ((int)uVar11 >> 1);
    if (uVar8 >> 0xf == 0) {
      param_1 = param_1 + (ulong)(uVar8 >> 5) * 4;
      *(uint *)(param_1 + 0x2f108) =
           *(uint *)(param_1 + 0x2f108) & (1 << (ulong)(uVar11 >> 1 & 0x1f) ^ 0xffffffffU);
      return;
    }
    return;
  }
  uVar10 = uVar11;
  if (uVar8 == uVar7) {
    if (uVar8 != uVar7) goto LAB_016869f0;
LAB_01686de8:
    if (uVar8 == uVar7) goto LAB_01686df4;
LAB_01686a98:
    iVar5 = DAT_05233984;
    iVar4 = DAT_05233980;
    iVar3 = DAT_05233974;
    iVar12 = DAT_05233970;
    uVar11 = uVar10;
    uVar13 = uVar10;
    do {
      if ((((iVar12 <= (int)uVar13) && ((int)uVar13 <= iVar4)) && (iVar3 <= (int)uVar7)) &&
         (((int)uVar7 <= iVar5 &&
          (uVar1 = (uVar7 & 0x1fffffe) * 0x80 + ((int)uVar13 >> 1), uVar1 >> 0xf == 0)))) {
        lVar2 = (ulong)(uVar1 >> 5) * 4;
        *(uint *)(param_1 + 0x18050 + lVar2) =
             *(uint *)(param_1 + 0x18050 + lVar2) & (1 << (ulong)(uVar13 >> 1 & 0x1f) ^ 0xffffffffU)
        ;
        uVar11 = *(uint *)(param_2 + 0x10);
        iVar9 = *(int *)(param_2 + 0x20);
      }
      if ((int)uVar13 < iVar9) {
        uVar13 = uVar13 + 1;
      }
      else {
        uVar7 = uVar7 + 1;
        uVar13 = uVar11;
      }
    } while ((uVar10 != uVar13) || (uVar8 != uVar7));
    uVar8 = *(int *)(param_2 + 0x24) + 1;
    uVar7 = *(uint *)(param_2 + 0x14);
    uVar10 = uVar11;
    if (uVar8 != uVar7) goto LAB_01686b3c;
LAB_01686e00:
    if (uVar8 == uVar7) goto LAB_01686e0c;
LAB_01686be8:
    iVar5 = DAT_05233984;
    iVar4 = DAT_05233980;
    iVar3 = DAT_05233974;
    iVar12 = DAT_05233970;
    uVar11 = uVar10;
    uVar13 = uVar10;
    do {
      if ((((iVar12 <= (int)uVar13) && ((int)uVar13 <= iVar4)) && (iVar3 <= (int)uVar7)) &&
         (((int)uVar7 <= iVar5 &&
          (uVar1 = (uVar7 & 0x1fffffe) * 0x80 + ((int)uVar13 >> 1), uVar1 >> 0xf == 0)))) {
        lVar2 = (ulong)(uVar1 >> 5) * 4;
        *(uint *)(param_1 + 0x17048 + lVar2) =
             *(uint *)(param_1 + 0x17048 + lVar2) & (1 << (ulong)(uVar13 >> 1 & 0x1f) ^ 0xffffffffU)
        ;
        uVar11 = *(uint *)(param_2 + 0x10);
        iVar9 = *(int *)(param_2 + 0x20);
      }
      if ((int)uVar13 < iVar9) {
        uVar13 = uVar13 + 1;
      }
      else {
        uVar7 = uVar7 + 1;
        uVar13 = uVar11;
      }
    } while ((uVar10 != uVar13) || (uVar8 != uVar7));
    uVar8 = *(int *)(param_2 + 0x24) + 1;
    uVar7 = *(uint *)(param_2 + 0x14);
    uVar10 = uVar11;
    if (uVar8 == uVar7) {
LAB_01686e18:
      if (uVar8 == uVar7) {
        return;
      }
      goto LAB_01686e24;
    }
  }
  else {
    uVar13 = uVar11;
    do {
      if ((((iVar3 <= (int)uVar13) && ((int)uVar13 <= iVar5)) && (iVar4 <= (int)uVar7)) &&
         (((int)uVar7 <= iVar6 &&
          (uVar1 = (uVar7 & 0x1fffffe) * 0x80 + ((int)uVar13 >> 1), uVar1 >> 0xf == 0)))) {
        lVar2 = (ulong)(uVar1 >> 5) * 4;
        *(uint *)(param_1 + 0x15038 + lVar2) =
             *(uint *)(param_1 + 0x15038 + lVar2) & (1 << (ulong)(uVar13 >> 1 & 0x1f) ^ 0xffffffffU)
        ;
        uVar10 = *(uint *)(param_2 + 0x10);
        iVar9 = *(int *)(param_2 + 0x20);
      }
      if ((int)uVar13 < iVar9) {
        uVar13 = uVar13 + 1;
      }
      else {
        uVar7 = uVar7 + 1;
        uVar13 = uVar10;
      }
    } while ((uVar11 != uVar13) || (uVar8 != uVar7));
    uVar8 = *(int *)(param_2 + 0x24) + 1;
    uVar7 = *(uint *)(param_2 + 0x14);
    if (uVar8 == uVar7) goto LAB_01686de8;
LAB_016869f0:
    iVar5 = DAT_05233984;
    iVar4 = DAT_05233980;
    iVar3 = DAT_05233974;
    iVar12 = DAT_05233970;
    uVar11 = uVar10;
    uVar13 = uVar10;
    do {
      if ((((iVar12 <= (int)uVar13) && ((int)uVar13 <= iVar4)) && (iVar3 <= (int)uVar7)) &&
         (((int)uVar7 <= iVar5 &&
          (uVar1 = (uVar7 & 0x1fffffe) * 0x80 + ((int)uVar13 >> 1), uVar1 >> 0xf == 0)))) {
        lVar2 = (ulong)(uVar1 >> 5) * 4;
        *(uint *)(param_1 + 0x14030 + lVar2) =
             *(uint *)(param_1 + 0x14030 + lVar2) & (1 << (ulong)(uVar13 >> 1 & 0x1f) ^ 0xffffffffU)
        ;
        uVar11 = *(uint *)(param_2 + 0x10);
        iVar9 = *(int *)(param_2 + 0x20);
      }
      if ((int)uVar13 < iVar9) {
        uVar13 = uVar13 + 1;
      }
      else {
        uVar7 = uVar7 + 1;
        uVar13 = uVar11;
      }
    } while ((uVar10 != uVar13) || (uVar8 != uVar7));
    uVar8 = *(int *)(param_2 + 0x24) + 1;
    uVar7 = *(uint *)(param_2 + 0x14);
    uVar10 = uVar11;
    if (uVar8 != uVar7) goto LAB_01686a98;
LAB_01686df4:
    if (uVar8 == uVar7) goto LAB_01686e00;
LAB_01686b3c:
    iVar5 = DAT_05233984;
    iVar4 = DAT_05233980;
    iVar3 = DAT_05233974;
    iVar12 = DAT_05233970;
    uVar11 = uVar10;
    uVar13 = uVar10;
    do {
      if ((((iVar12 <= (int)uVar13) && ((int)uVar13 <= iVar4)) && (iVar3 <= (int)uVar7)) &&
         (((int)uVar7 <= iVar5 &&
          (uVar1 = (uVar7 & 0x1fffffe) * 0x80 + ((int)uVar13 >> 1), uVar1 >> 0xf == 0)))) {
        lVar2 = (ulong)(uVar1 >> 5) * 4;
        *(uint *)(param_1 + 0x16040 + lVar2) =
             *(uint *)(param_1 + 0x16040 + lVar2) & (1 << (ulong)(uVar13 >> 1 & 0x1f) ^ 0xffffffffU)
        ;
        uVar11 = *(uint *)(param_2 + 0x10);
        iVar9 = *(int *)(param_2 + 0x20);
      }
      if ((int)uVar13 < iVar9) {
        uVar13 = uVar13 + 1;
      }
      else {
        uVar7 = uVar7 + 1;
        uVar13 = uVar11;
      }
    } while ((uVar10 != uVar13) || (uVar8 != uVar7));
    uVar8 = *(int *)(param_2 + 0x24) + 1;
    uVar7 = *(uint *)(param_2 + 0x14);
    uVar10 = uVar11;
    if (uVar8 != uVar7) goto LAB_01686be8;
LAB_01686e0c:
    if (uVar8 == uVar7) goto LAB_01686e18;
  }
  iVar5 = DAT_05233984;
  iVar4 = DAT_05233980;
  iVar3 = DAT_05233974;
  iVar12 = DAT_05233970;
  uVar11 = uVar10;
  uVar13 = uVar10;
  do {
    if ((((iVar12 <= (int)uVar13) && ((int)uVar13 <= iVar4)) && (iVar3 <= (int)uVar7)) &&
       (((int)uVar7 <= iVar5 &&
        (uVar1 = (uVar7 & 0x1fffffe) * 0x80 + ((int)uVar13 >> 1), uVar1 >> 0xf == 0)))) {
      lVar2 = (ulong)(uVar1 >> 5) * 4;
      *(uint *)(param_1 + 0x19058 + lVar2) =
           *(uint *)(param_1 + 0x19058 + lVar2) & (1 << (ulong)(uVar13 >> 1 & 0x1f) ^ 0xffffffffU);
      uVar11 = *(uint *)(param_2 + 0x10);
      iVar9 = *(int *)(param_2 + 0x20);
    }
    if ((int)uVar13 < iVar9) {
      uVar13 = uVar13 + 1;
    }
    else {
      uVar7 = uVar7 + 1;
      uVar13 = uVar11;
    }
  } while ((uVar10 != uVar13) || (uVar8 != uVar7));
  uVar8 = *(int *)(param_2 + 0x24) + 1;
  uVar7 = *(uint *)(param_2 + 0x14);
  uVar10 = uVar11;
  if (uVar8 == uVar7) {
    return;
  }
LAB_01686e24:
  iVar5 = DAT_05233984;
  iVar4 = DAT_05233980;
  iVar3 = DAT_05233974;
  iVar12 = DAT_05233970;
  uVar11 = uVar10;
  uVar13 = uVar10;
  do {
    if ((((iVar12 <= (int)uVar13) && ((int)uVar13 <= iVar4)) && (iVar3 <= (int)uVar7)) &&
       (((int)uVar7 <= iVar5 &&
        (uVar1 = (uVar7 & 0x1fffffe) * 0x80 + ((int)uVar13 >> 1), uVar1 >> 0xf == 0)))) {
      lVar2 = (ulong)(uVar1 >> 5) * 4;
      *(uint *)(param_1 + 0x2f108 + lVar2) =
           *(uint *)(param_1 + 0x2f108 + lVar2) & (1 << (ulong)(uVar13 >> 1 & 0x1f) ^ 0xffffffffU);
      uVar11 = *(uint *)(param_2 + 0x10);
      iVar9 = *(int *)(param_2 + 0x20);
    }
    if ((int)uVar13 < iVar9) {
      uVar13 = uVar13 + 1;
    }
    else {
      uVar7 = uVar7 + 1;
      uVar13 = uVar11;
    }
  } while ((uVar10 != uVar13) || (uVar8 != uVar7));
  return;
}


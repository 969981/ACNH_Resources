
/* WARNING: Removing unreachable block (ram,0x01681b3c) */
/* WARNING: Removing unreachable block (ram,0x016819c8) */
/* WARNING: Removing unreachable block (ram,0x01681868) */
/* WARNING: Removing unreachable block (ram,0x0168170c) */
/* WARNING: Removing unreachable block (ram,0x016815b8) */
/* WARNING: Removing unreachable block (ram,0x016815c0) */
/* WARNING: Removing unreachable block (ram,0x01681724) */
/* WARNING: Removing unreachable block (ram,0x01681878) */
/* WARNING: Removing unreachable block (ram,0x016819d8) */
/* WARNING: Removing unreachable block (ram,0x01681b4c) */

char FUN_01681538(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  char cVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  float fVar15;
  float fVar16;
  
  uVar8 = *(uint *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0xc);
  fVar15 = (float)(int)uVar8 * 0.5;
  fVar16 = (float)(int)uVar2 * 0.5;
  uVar12 = 0;
  if (fVar15 != (float)(int)fVar15) {
    uVar12 = (uint)(fVar15 < 0.0);
  }
  uVar13 = 0;
  if (fVar16 != (float)(int)fVar16) {
    uVar13 = (uint)(fVar16 < 0.0);
  }
  iVar3 = (int)fVar15 - uVar12;
  iVar4 = (int)fVar16 - uVar13;
  cVar9 = '\0';
  if (*(long *)(DAT_0519d040 + 0x38) != 0) {
    lVar10 = *(long *)(*(long *)(DAT_0519d040 + 0x38) + 0xb0);
    cVar9 = '\0';
    if (lVar10 != 0) {
      uVar12 = iVar3 - *(int *)(lVar10 + 0x28);
      uVar13 = *(uint *)(lVar10 + 0x18);
      uVar5 = iVar4 - *(int *)(lVar10 + 0x2c);
      if ((uVar12 < uVar13 && uVar5 <= *(uint *)(lVar10 + 0x1c)) &&
          (uVar13 <= uVar12 || *(uint *)(lVar10 + 0x1c) != uVar5)) {
        uVar12 = uVar12 + uVar13 * uVar5;
LAB_0168163c:
        if (*(uint *)(lVar10 + 0x30) <= uVar12) {
          uVar12 = 0;
        }
        puVar11 = (undefined8 *)(*(long *)(lVar10 + 0x38) + (long)(int)uVar12 * 0x68);
      }
      else {
        if (*(char *)(lVar10 + 0x88) != '\0') {
          uVar13 = iVar3 - *(int *)(lVar10 + 0x98);
          uVar12 = *(uint *)(lVar10 + 0xa0);
          uVar5 = iVar4 - *(int *)(lVar10 + 0x9c);
          if ((uVar13 < uVar12 && uVar5 <= *(uint *)(lVar10 + 0xa4)) &&
              (uVar12 <= uVar13 || *(uint *)(lVar10 + 0xa4) != uVar5)) {
            uVar12 = uVar13 + uVar12 * uVar5 + *(int *)(lVar10 + 0x8c);
            goto LAB_0168163c;
          }
        }
        puVar11 = &DAT_051a50f0;
      }
      cVar9 = *(char *)(puVar11 + 2);
    }
  }
  cVar7 = false;
  if (((DAT_05233970 <= (int)uVar8 && (int)uVar8 <= DAT_05233980) &&
      (iVar1 = uVar2 + 2, DAT_05233974 <= iVar1)) && (iVar1 <= DAT_05233984)) {
    uVar12 = (iVar1 * 0x80 & 0xffffff00U) + ((int)uVar8 >> 1);
    if ((uVar12 >> 0xf == 0) &&
       ((*(uint *)(param_2 + (ulong)(uVar12 >> 5) * 4 + 8) >> (ulong)(uVar8 >> 1 & 0x1f) & 1) != 0))
    {
      fVar15 = (float)iVar1 * 0.5;
      uVar12 = 0;
      if (fVar15 != (float)(int)fVar15) {
        uVar12 = (uint)(fVar15 < 0.0);
      }
      if (*(long *)(DAT_0519d040 + 0x38) == 0) {
        cVar7 = '\0';
      }
      else {
        lVar10 = *(long *)(*(long *)(DAT_0519d040 + 0x38) + 0xb0);
        cVar7 = '\0';
        if (lVar10 != 0) {
          uVar13 = iVar3 - *(int *)(lVar10 + 0x28);
          uVar5 = *(uint *)(lVar10 + 0x18);
          uVar6 = ((int)fVar15 - uVar12) - *(int *)(lVar10 + 0x2c);
          if ((uVar13 < uVar5 && uVar6 <= *(uint *)(lVar10 + 0x1c)) &&
              (uVar5 <= uVar13 || *(uint *)(lVar10 + 0x1c) != uVar6)) {
            uVar13 = uVar13 + uVar5 * uVar6;
LAB_016817a0:
            if (*(uint *)(lVar10 + 0x30) <= uVar13) {
              uVar13 = 0;
            }
            puVar11 = (undefined8 *)(*(long *)(lVar10 + 0x38) + (long)(int)uVar13 * 0x68);
          }
          else {
            if (*(char *)(lVar10 + 0x88) != '\0') {
              uVar13 = ((int)fVar15 - uVar12) - *(int *)(lVar10 + 0x9c);
              uVar12 = *(uint *)(lVar10 + 0xa0);
              uVar5 = iVar3 - *(int *)(lVar10 + 0x98);
              if ((uVar5 < uVar12 && uVar13 <= *(uint *)(lVar10 + 0xa4)) &&
                  (uVar12 <= uVar5 || *(uint *)(lVar10 + 0xa4) != uVar13)) {
                uVar13 = uVar5 + uVar12 * uVar13 + *(int *)(lVar10 + 0x8c);
                goto LAB_016817a0;
              }
            }
            puVar11 = &DAT_051a50f0;
          }
          cVar7 = *(char *)(puVar11 + 2);
        }
      }
      cVar7 = cVar9 == cVar7;
    }
    else {
      cVar7 = false;
    }
  }
  uVar12 = uVar8 + 2;
  if (((DAT_05233970 <= (int)uVar12) && ((int)uVar12 <= DAT_05233980)) &&
     ((DAT_05233974 <= (int)uVar2 &&
      ((((int)uVar2 <= DAT_05233984 &&
        (uVar13 = (uVar2 & 0x1fffffe) * 0x80 + ((int)uVar12 >> 1), uVar13 >> 0xf == 0)) &&
       ((*(uint *)(param_2 + (ulong)(uVar13 >> 5) * 4 + 8) >> (ulong)(uVar12 >> 1 & 0x1f) & 1) != 0)
       ))))) {
    fVar15 = (float)(int)uVar12 * 0.5;
    uVar12 = 0;
    if (fVar15 != (float)(int)fVar15) {
      uVar12 = (uint)(fVar15 < 0.0);
    }
    if (*(long *)(DAT_0519d040 + 0x38) == 0) {
      cVar14 = '\0';
    }
    else {
      lVar10 = *(long *)(*(long *)(DAT_0519d040 + 0x38) + 0xb0);
      cVar14 = '\0';
      if (lVar10 != 0) {
        uVar13 = ((int)fVar15 - uVar12) - *(int *)(lVar10 + 0x28);
        uVar5 = *(uint *)(lVar10 + 0x18);
        uVar6 = iVar4 - *(int *)(lVar10 + 0x2c);
        if ((uVar13 < uVar5 && uVar6 <= *(uint *)(lVar10 + 0x1c)) &&
            (uVar5 <= uVar13 || *(uint *)(lVar10 + 0x1c) != uVar6)) {
          uVar13 = uVar13 + uVar5 * uVar6;
LAB_016818fc:
          if (*(uint *)(lVar10 + 0x30) <= uVar13) {
            uVar13 = 0;
          }
          puVar11 = (undefined8 *)(*(long *)(lVar10 + 0x38) + (long)(int)uVar13 * 0x68);
        }
        else if (*(char *)(lVar10 + 0x88) == '\0') {
          puVar11 = &DAT_051a50f0;
        }
        else {
          uVar12 = ((int)fVar15 - uVar12) - *(int *)(lVar10 + 0x98);
          puVar11 = &DAT_051a50f0;
          if ((uVar12 < *(uint *)(lVar10 + 0xa0)) &&
             (uVar13 = iVar4 - *(int *)(lVar10 + 0x9c), uVar13 < *(uint *)(lVar10 + 0xa4))) {
            uVar13 = uVar12 + *(uint *)(lVar10 + 0xa0) * uVar13 + *(int *)(lVar10 + 0x8c);
            goto LAB_016818fc;
          }
        }
        cVar14 = *(char *)(puVar11 + 2);
      }
    }
    cVar7 = cVar7 + (cVar9 == cVar14);
  }
  if (((DAT_05233970 <= (int)uVar8 && (int)uVar8 <= DAT_05233980) &&
      (iVar1 = uVar2 - 2, DAT_05233974 <= iVar1)) &&
     ((iVar1 <= DAT_05233984 &&
      ((uVar12 = (iVar1 * 0x80 & 0xffffff00U) + ((int)uVar8 >> 1), uVar12 >> 0xf == 0 &&
       ((*(uint *)(param_2 + (ulong)(uVar12 >> 5) * 4 + 8) >> (ulong)(uVar8 >> 1 & 0x1f) & 1) != 0))
      )))) {
    fVar15 = (float)iVar1 * 0.5;
    uVar12 = 0;
    if (fVar15 != (float)(int)fVar15) {
      uVar12 = (uint)(fVar15 < 0.0);
    }
    if ((*(long *)(DAT_0519d040 + 0x38) == 0) ||
       (lVar10 = *(long *)(*(long *)(DAT_0519d040 + 0x38) + 0xb0), lVar10 == 0)) {
      cVar14 = '\0';
    }
    else {
      uVar13 = iVar3 - *(int *)(lVar10 + 0x28);
      uVar5 = *(uint *)(lVar10 + 0x18);
      uVar6 = ((int)fVar15 - uVar12) - *(int *)(lVar10 + 0x2c);
      if ((uVar13 < uVar5 && uVar6 <= *(uint *)(lVar10 + 0x1c)) &&
          (uVar5 <= uVar13 || *(uint *)(lVar10 + 0x1c) != uVar6)) {
        uVar13 = uVar13 + uVar5 * uVar6;
LAB_01681a64:
        if (*(uint *)(lVar10 + 0x30) <= uVar13) {
          uVar13 = 0;
        }
        puVar11 = (undefined8 *)(*(long *)(lVar10 + 0x38) + (long)(int)uVar13 * 0x68);
      }
      else if (*(char *)(lVar10 + 0x88) == '\0') {
        puVar11 = &DAT_051a50f0;
      }
      else {
        uVar13 = iVar3 - *(int *)(lVar10 + 0x98);
        puVar11 = &DAT_051a50f0;
        if ((uVar13 < *(uint *)(lVar10 + 0xa0)) &&
           (uVar12 = ((int)fVar15 - uVar12) - *(int *)(lVar10 + 0x9c),
           uVar12 < *(uint *)(lVar10 + 0xa4))) {
          uVar13 = uVar13 + *(uint *)(lVar10 + 0xa0) * uVar12 + *(int *)(lVar10 + 0x8c);
          goto LAB_01681a64;
        }
      }
      cVar14 = *(char *)(puVar11 + 2);
    }
    cVar7 = cVar7 + (cVar9 == cVar14);
  }
  uVar8 = uVar8 - 2;
  if ((int)uVar8 < DAT_05233970) {
    return cVar7;
  }
  if (DAT_05233980 < (int)uVar8) {
    return cVar7;
  }
  if ((int)uVar2 < DAT_05233974) {
    return cVar7;
  }
  if (DAT_05233984 < (int)uVar2) {
    return cVar7;
  }
  uVar12 = (uVar2 & 0x1fffffe) * 0x80 + ((int)uVar8 >> 1);
  if (uVar12 >> 0xf != 0) {
    return cVar7;
  }
  if ((*(uint *)(param_2 + (ulong)(uVar12 >> 5) * 4 + 8) >> (ulong)(uVar8 >> 1 & 0x1f) & 1) == 0) {
    return cVar7;
  }
  fVar15 = (float)(int)uVar8 * 0.5;
  uVar12 = 0;
  if (fVar15 != (float)(int)fVar15) {
    uVar12 = (uint)(fVar15 < 0.0);
  }
  if ((*(long *)(DAT_0519d040 + 0x38) == 0) ||
     (lVar10 = *(long *)(*(long *)(DAT_0519d040 + 0x38) + 0xb0), lVar10 == 0)) {
    cVar14 = '\0';
    goto LAB_01681c00;
  }
  uVar8 = ((int)fVar15 - uVar12) - *(int *)(lVar10 + 0x28);
  uVar2 = *(uint *)(lVar10 + 0x18);
  uVar13 = iVar4 - *(int *)(lVar10 + 0x2c);
  if ((uVar8 < uVar2 && uVar13 <= *(uint *)(lVar10 + 0x1c)) &&
      (uVar2 <= uVar8 || *(uint *)(lVar10 + 0x1c) != uVar13)) {
    uVar8 = uVar8 + uVar2 * uVar13;
LAB_01681bd8:
    if (*(uint *)(lVar10 + 0x30) <= uVar8) {
      uVar8 = 0;
    }
    puVar11 = (undefined8 *)(*(long *)(lVar10 + 0x38) + (long)(int)uVar8 * 0x68);
  }
  else if (*(char *)(lVar10 + 0x88) == '\0') {
    puVar11 = &DAT_051a50f0;
  }
  else {
    uVar12 = ((int)fVar15 - uVar12) - *(int *)(lVar10 + 0x98);
    puVar11 = &DAT_051a50f0;
    if ((uVar12 < *(uint *)(lVar10 + 0xa0)) &&
       (uVar8 = iVar4 - *(int *)(lVar10 + 0x9c), uVar8 < *(uint *)(lVar10 + 0xa4))) {
      uVar8 = uVar12 + *(uint *)(lVar10 + 0xa0) * uVar8 + *(int *)(lVar10 + 0x8c);
      goto LAB_01681bd8;
    }
  }
  cVar14 = *(char *)(puVar11 + 2);
LAB_01681c00:
  return cVar7 + (cVar9 == cVar14);
}


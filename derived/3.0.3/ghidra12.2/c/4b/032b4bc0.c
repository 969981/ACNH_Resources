
void FUN_032b4bc0(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_18;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  bVar5 = FUN_032b26fc(lVar7);
  if (*(char *)(param_1 + 0x98) == '\0') {
    if ((bVar5 & 1) != 0) {
      lVar6 = *(long *)(DAT_05734b90 + 8);
      if (lVar6 != 0) {
        local_18 = 0;
        lVar3 = 0;
        if (*(char *)(lVar6 + 0x38) != '\0') {
          lVar3 = lVar6 + 8;
        }
        FUN_03366350(DAT_05734b90,lVar3,s_Scroll_Limit_04b20a94,0,&local_18,0);
      }
      FUN_032b67c0(*(undefined8 *)(param_1 + 0x30));
    }
  }
  else if ((bVar5 & 1) == 0) {
    FUN_032b68b0(*(undefined8 *)(param_1 + 0x30));
  }
  *(byte *)(param_1 + 0x98) = bVar5 & 1;
  if (*(char *)(*(long *)(param_1 + 0x18) + 0x21d) == '\0') {
    FUN_032b68b0(*(undefined8 *)(param_1 + 0x30));
  }
  iVar4 = *(int *)(lVar7 + 8);
  if (iVar4 == 1) {
    fVar11 = *(float *)(lVar7 + 0x1c);
    fVar8 = *(float *)(lVar7 + 0x24) - fVar11;
    fVar9 = *(float *)(lVar7 + 0x3c) - *(float *)(lVar7 + 0x34);
    fVar10 = *(float *)(lVar7 + 0xc0);
    fVar12 = *(float *)(lVar7 + 0xc4);
    fVar14 = fVar12 + fVar10 + (fVar8 - fVar9);
    fVar13 = 0.0;
    if (0.0 < fVar14) {
      fVar13 = *(float *)(lVar7 + 0x2c);
LAB_032b4cf8:
      fVar13 = (fVar10 + (fVar13 - fVar11)) / fVar14;
    }
LAB_032b4d04:
    fVar9 = fVar9 / (fVar8 + fVar10 + fVar12);
    fVar8 = -((fVar9 * 0.5 + (1.0 - fVar9) * fVar13) * 2.0) - -1.0;
  }
  else {
    if (iVar4 == 0) {
      fVar11 = *(float *)(lVar7 + 0x20);
      fVar8 = *(float *)(lVar7 + 0x28) - fVar11;
      fVar9 = *(float *)(lVar7 + 0x40) - *(float *)(lVar7 + 0x38);
      fVar10 = *(float *)(lVar7 + 0xb8);
      fVar12 = *(float *)(lVar7 + 0xbc);
      fVar14 = fVar12 + fVar10 + (fVar8 - fVar9);
      fVar13 = 0.0;
      if (0.0 < fVar14) {
        fVar13 = *(float *)(lVar7 + 0x30);
        goto LAB_032b4cf8;
      }
      goto LAB_032b4d04;
    }
    fVar9 = 0.0;
    fVar8 = 1.0;
  }
  if (iVar4 == 1) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 0x60);
    fVar11 = fVar9 * *(float *)(*(long *)(*(long *)(param_1 + 0x30) + 0x68) + 0x50);
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 0x10;
    fVar10 = *(float *)(lVar7 + 0x54);
    if (*(float *)(lVar7 + 0x54) <= fVar11) {
      fVar10 = fVar11;
    }
    *(float *)(lVar7 + 0x50) = fVar10;
    lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 0x60);
    *(float *)(lVar7 + 0x30) =
         fVar8 * *(float *)(*(long *)(*(long *)(param_1 + 0x30) + 0x68) + 0x50) * 0.5;
  }
  else {
    if (iVar4 != 0) goto LAB_032b4df0;
    lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 0x60);
    fVar11 = fVar9 * *(float *)(*(long *)(*(long *)(param_1 + 0x30) + 0x68) + 0x54);
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 0x10;
    fVar10 = *(float *)(lVar7 + 0x50);
    if (*(float *)(lVar7 + 0x50) <= fVar11) {
      fVar10 = fVar11;
    }
    *(float *)(lVar7 + 0x54) = fVar10;
    lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 0x60);
    *(float *)(lVar7 + 0x34) =
         fVar8 * *(float *)(*(long *)(*(long *)(param_1 + 0x30) + 0x68) + 0x54) * 0.5;
  }
  *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 0x10;
LAB_032b4df0:
  if (1.0 <= fVar9) {
    lVar7 = *(long *)(param_1 + 0x30);
    *(undefined1 *)(param_1 + 0x9b) = 1;
    if (((*(long *)(lVar7 + 8) != 0) && (**(long **)(lVar7 + 0x40) != 0)) &&
       (lVar6 = *(long *)(lVar7 + 0x28), lVar6 != 0)) {
      uVar1 = crc32b(0xffffffff,0x49,0x4c11db7);
      uVar2 = crc32b(uVar1,0x6e,0x4c11db7);
      do {
        if (*(uint *)(lVar6 + 0x68) == ~uVar2) break;
        lVar6 = *(long *)(lVar6 + 0x10);
      } while (lVar6 != 0);
      if ((**(long **)(lVar7 + 0x40) == lVar6) && (*(char *)(param_1 + 0x9a) != '\0')) {
        FUN_032b6620(lVar7,1);
        return;
      }
    }
  }
  else if ((fVar9 != 0.0) &&
          (*(undefined1 *)(param_1 + 0x9b) = 0, *(char *)(param_1 + 0x9a) != '\0')) {
    FUN_032b64c0(*(undefined8 *)(param_1 + 0x30),0);
    return;
  }
  return;
}


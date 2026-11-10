
void FUN_00370c70(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_88;
  float local_80;
  long local_78;
  
  puVar7 = *(undefined8 **)(param_1 + 0x28);
  puVar1 = (undefined8 *)(param_1 + 0x20);
  if (puVar7 == puVar1) {
    fVar12 = 0.0;
    lVar5 = 0;
    lVar6 = 0;
  }
  else {
    fVar12 = 0.0;
    bVar8 = false;
    lVar5 = 0;
    lVar6 = 0;
    puVar9 = puVar7;
    fVar13 = 0.0;
    if (*(int *)(param_1 + 0xd4) != 1) {
      fVar13 = *(float *)(param_1 + 0x50) * -0.5;
    }
    do {
      local_88 = 0;
      local_80 = 0.0;
      local_78 = 0;
      uVar3 = FUN_00370f20(puVar9 + -1,&local_88);
      if ((uVar3 & 1) != 0) {
        if ((*(char *)(param_1 + 0xdc) != '\0') &&
           (puVar4 = *(undefined8 **)(param_1 + 0x28), puVar4 != puVar1)) {
          iVar2 = *(int *)(param_1 + 0xd4);
          if (iVar2 == 2) {
LAB_00370da4:
            if (puVar4 != puVar9) goto LAB_00370cf0;
          }
          else {
            if (iVar2 != 1) {
              if (iVar2 != 0) goto LAB_00370cf0;
LAB_00370da0:
              puVar4 = (undefined8 *)*puVar1;
              goto LAB_00370da4;
            }
            if (puVar4 != puVar9) goto LAB_00370da0;
          }
          local_88 = local_88 & 0xffffffff00000000;
          local_80 = 0.0;
        }
LAB_00370cf0:
        fVar10 = local_88._4_4_;
        if (!bVar8) {
          fVar10 = -0.0;
        }
        fVar11 = 0.0;
        if (!bVar8) {
          fVar11 = local_88._4_4_;
        }
        if (!bVar8) {
          lVar5 = local_78;
        }
        *(byte *)(puVar9 + 10) = *(byte *)(puVar9 + 10) | 0x10;
        fVar10 = fVar13 + fVar10;
        fVar12 = (fVar12 - fVar11) + (float)local_88 + local_88._4_4_;
        fVar13 = fVar10 + (float)local_88;
        *(float *)(puVar9 + 5) = (fVar10 + (float)local_88 * 0.5) - local_80;
        lVar6 = local_78;
        bVar8 = true;
      }
      puVar4 = puVar9 + 1;
      puVar9 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != puVar1);
    if ((*(int *)(param_1 + 0xd4) == 1) && (puVar7 != puVar1)) {
      do {
        if (((*(byte *)(puVar7 + 10) & 1) != 0) &&
           (uVar3 = FUN_0037ece8(puVar7 + -1), (uVar3 & 1) == 0)) {
          *(byte *)(puVar7 + 10) = *(byte *)(puVar7 + 10) | 0x10;
          *(float *)(puVar7 + 5) = *(float *)(puVar7 + 5) - fVar12 * 0.5;
        }
        puVar7 = (undefined8 *)puVar7[1];
      } while (puVar7 != puVar1);
    }
  }
  if (*(char *)(param_1 + 0xdc) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0xd4) != 1) {
    if (*(int *)(param_1 + 0xd4) != 0) {
      return;
    }
    fVar12 = *(float *)(param_1 + 0x50) - fVar12;
    *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
    *(float *)(lVar6 + 0x50) = fVar12;
    if ((*(byte *)(lVar6 + 0x5b) & 3) != 2) {
      if ((*(byte *)(lVar6 + 0x5b) & 3) != 0) {
        return;
      }
      fVar12 = fVar12 * 0.5;
    }
    *(float *)(lVar6 + 0x30) = fVar12 + *(float *)(lVar6 + 0x30);
    return;
  }
  fVar13 = *(float *)(param_1 + 0x50);
  *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
  fVar13 = (fVar13 - fVar12) * 0.5;
  *(float *)(lVar6 + 0x50) = fVar13;
  fVar12 = fVar13;
  if ((*(byte *)(lVar6 + 0x5b) & 3) != 2) {
    if ((*(byte *)(lVar6 + 0x5b) & 3) != 0) goto LAB_00370ebc;
    fVar12 = fVar13 * 0.5;
  }
  *(float *)(lVar6 + 0x30) = fVar12 + *(float *)(lVar6 + 0x30);
LAB_00370ebc:
  *(float *)(lVar5 + 0x50) = fVar13;
  *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) | 0x10;
  if ((*(byte *)(lVar5 + 0x5b) & 3) != 1) {
    if ((*(byte *)(lVar5 + 0x5b) & 3) != 0) {
      return;
    }
    fVar13 = fVar13 * 0.5;
  }
  *(float *)(lVar5 + 0x30) = *(float *)(lVar5 + 0x30) - fVar13;
  return;
}


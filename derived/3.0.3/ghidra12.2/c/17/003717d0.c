
void FUN_003717d0(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_88;
  float local_80;
  long local_78;
  
  puVar8 = *(undefined8 **)(param_1 + 0x28);
  puVar1 = (undefined8 *)(param_1 + 0x20);
  if (puVar8 == puVar1) {
    fVar13 = 0.0;
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    fVar13 = 0.0;
    bVar9 = false;
    lVar6 = 0;
    lVar7 = 0;
    puVar10 = puVar8;
    fVar14 = 0.0;
    if (*(int *)(param_1 + 0xd4) != 1) {
      fVar14 = *(float *)(param_1 + 0x54) * 0.5;
    }
    do {
      local_88 = 0;
      local_80 = 0.0;
      local_78 = 0;
      uVar4 = FUN_00371a80(puVar10 + -1,&local_88);
      if ((uVar4 & 1) != 0) {
        if ((*(char *)(param_1 + 0xdc) != '\0') &&
           (puVar5 = *(undefined8 **)(param_1 + 0x28), puVar5 != puVar1)) {
          iVar2 = *(int *)(param_1 + 0xd4);
          if (iVar2 == 2) {
LAB_00371904:
            if (puVar5 != puVar10) goto LAB_00371850;
          }
          else {
            if (iVar2 != 1) {
              if (iVar2 != 0) goto LAB_00371850;
LAB_00371900:
              puVar5 = (undefined8 *)*puVar1;
              goto LAB_00371904;
            }
            if (puVar5 != puVar10) goto LAB_00371900;
          }
          local_88 = local_88 & 0xffffffff00000000;
          local_80 = 0.0;
        }
LAB_00371850:
        fVar11 = local_88._4_4_;
        if (!bVar9) {
          fVar11 = 0.0;
        }
        fVar12 = 0.0;
        if (!bVar9) {
          fVar12 = local_88._4_4_;
        }
        if (!bVar9) {
          lVar6 = local_78;
        }
        *(byte *)(puVar10 + 10) = *(byte *)(puVar10 + 10) | 0x10;
        fVar11 = fVar14 - fVar11;
        fVar13 = (fVar13 - fVar12) + (float)local_88 + local_88._4_4_;
        fVar14 = fVar11 - (float)local_88;
        *(float *)((long)puVar10 + 0x2c) = (fVar11 + (float)local_88 * -0.5) - local_80;
        lVar7 = local_78;
        bVar9 = true;
      }
      puVar5 = puVar10 + 1;
      puVar10 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != puVar1);
    if ((*(int *)(param_1 + 0xd4) == 1) && (puVar8 != puVar1)) {
      do {
        if (((*(byte *)(puVar8 + 10) & 1) != 0) &&
           (uVar4 = FUN_0037ece8(puVar8 + -1), (uVar4 & 1) == 0)) {
          *(byte *)(puVar8 + 10) = *(byte *)(puVar8 + 10) | 0x10;
          *(float *)((long)puVar8 + 0x2c) = fVar13 * 0.5 + *(float *)((long)puVar8 + 0x2c);
        }
        puVar8 = (undefined8 *)puVar8[1];
      } while (puVar8 != puVar1);
    }
  }
  if (*(char *)(param_1 + 0xdc) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0xd4) != 1) {
    if (*(int *)(param_1 + 0xd4) != 0) {
      return;
    }
    fVar13 = *(float *)(param_1 + 0x54) - fVar13;
    bVar3 = *(byte *)(lVar7 + 0x5b) >> 2 & 3;
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 0x10;
    *(float *)(lVar7 + 0x54) = fVar13;
    if (bVar3 != 2) {
      if (bVar3 != 0) {
        return;
      }
      fVar13 = fVar13 * 0.5;
    }
    *(float *)(lVar7 + 0x34) = *(float *)(lVar7 + 0x34) - fVar13;
    return;
  }
  fVar14 = *(float *)(param_1 + 0x54);
  bVar3 = *(byte *)(lVar7 + 0x5b) >> 2 & 3;
  *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 0x10;
  fVar14 = (fVar14 - fVar13) * 0.5;
  *(float *)(lVar7 + 0x54) = fVar14;
  fVar13 = fVar14;
  if (bVar3 != 2) {
    if (bVar3 != 0) goto LAB_00371a1c;
    fVar13 = fVar14 * 0.5;
  }
  *(float *)(lVar7 + 0x34) = *(float *)(lVar7 + 0x34) - fVar13;
LAB_00371a1c:
  *(float *)(lVar6 + 0x54) = fVar14;
  *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
  bVar3 = *(byte *)(lVar6 + 0x5b) >> 2 & 3;
  if (bVar3 != 1) {
    if (bVar3 != 0) {
      return;
    }
    fVar14 = fVar14 * 0.5;
  }
  *(float *)(lVar6 + 0x34) = fVar14 + *(float *)(lVar6 + 0x34);
  return;
}



void FUN_03368d70(long param_1)

{
  long *plVar1;
  byte bVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_28 [8];
  undefined *local_20;
  undefined *puStack_18;
  
  if (param_1 != 0) {
    if (*PTR_DAT_04c4b988 == '\0') {
      lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0xf0) + 0x18);
    }
    else {
      local_20 = PTR_DAT_04bc8e68 + 0x10;
      puStack_18 = PTR_DAT_04c4b988;
      lVar4 = FUN_032cb8e0(auStack_28,&local_20,*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0));
    }
    puVar3 = DAT_05734ea0;
    fVar8 = *(float *)(lVar4 + 0x30);
    fVar7 = *(float *)(lVar4 + 0x34);
    if (*(long *)(lVar4 + 0x18) == 0) {
      fVar10 = 0.0;
      fVar9 = 0.0;
    }
    else {
      fVar9 = 0.0;
      fVar10 = 0.0;
      lVar5 = *(long *)(lVar4 + 0x18);
      do {
        bVar2 = *(byte *)(lVar4 + 0x5b) >> 6;
        if (bVar2 == 2) {
          fVar11 = *(float *)(lVar5 + 0x4c) * *(float *)(lVar5 + 0x54) * -0.5;
LAB_03368e50:
          fVar7 = fVar7 + fVar11;
        }
        else if (bVar2 == 1) {
          fVar11 = *(float *)(lVar5 + 0x4c) * *(float *)(lVar5 + 0x54) * 0.5;
          goto LAB_03368e50;
        }
        bVar2 = *(byte *)(lVar4 + 0x5b) >> 4 & 3;
        if (bVar2 == 1) {
          fVar11 = *(float *)(lVar5 + 0x48) * *(float *)(lVar5 + 0x50) * -0.5;
LAB_03368df4:
          fVar8 = fVar8 + fVar11;
        }
        else if (bVar2 == 2) {
          fVar11 = *(float *)(lVar5 + 0x48) * *(float *)(lVar5 + 0x50) * 0.5;
          goto LAB_03368df4;
        }
        fVar9 = fVar9 + fVar8;
        fVar10 = fVar10 + fVar7;
        plVar1 = (long *)(lVar5 + 0x18);
        fVar8 = *(float *)(lVar5 + 0x30);
        fVar7 = *(float *)(lVar5 + 0x34);
        lVar4 = lVar5;
        lVar5 = *plVar1;
      } while (*plVar1 != 0);
    }
    local_20._0_4_ = 2;
    if (*DAT_05734ea0 < 3) {
      local_20._0_4_ = 0;
    }
    pfVar6 = (float *)(*(long *)(DAT_05734ea0 + 2) + (long)(int)local_20 * 0xc);
    *pfVar6 = fVar9 + fVar8;
    pfVar6[1] = fVar10 + fVar7;
    local_20._0_4_ = 2;
    if (*puVar3 < 3) {
      local_20._0_4_ = 0;
    }
    *(undefined1 *)(*(long *)(puVar3 + 2) + (long)(int)local_20 * 0xc + 8) = 1;
  }
  return;
}


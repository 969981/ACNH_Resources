
void FUN_003721b0(long param_1)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_88;
  float local_80;
  long local_78;
  
  plVar7 = *(long **)(param_1 + 0x28);
  plVar1 = (long *)(param_1 + 0x20);
  if (plVar1 == plVar7) {
    fVar13 = 0.0;
    lVar10 = 0;
  }
  else {
    bVar8 = false;
    fVar13 = 0.0;
    lVar10 = 0;
    fVar14 = *(float *)(param_1 + 0x54) * -0.5;
    plVar9 = plVar1;
    do {
      local_88 = 0;
      local_80 = 0.0;
      local_78 = 0;
      uVar4 = FUN_00371a80(*plVar9 + -8,&local_88);
      if ((uVar4 & 1) != 0) {
        plVar5 = (long *)*plVar9;
        if ((*(char *)(param_1 + 0xdc) != '\0') &&
           (plVar6 = *(long **)(param_1 + 0x28), plVar6 != plVar1)) {
          iVar2 = *(int *)(param_1 + 0xd4);
          if (iVar2 == 2) {
LAB_003722d8:
            if (plVar6 != plVar5) goto LAB_00372220;
          }
          else {
            if (iVar2 != 1) {
              if (iVar2 != 0) goto LAB_00372220;
LAB_003722d4:
              plVar6 = (long *)*plVar1;
              goto LAB_003722d8;
            }
            if (plVar6 != plVar5) goto LAB_003722d4;
          }
          local_88 = local_88 & 0xffffffff00000000;
          local_80 = 0.0;
        }
LAB_00372220:
        fVar11 = local_88._4_4_;
        if (!bVar8) {
          fVar11 = -0.0;
        }
        fVar12 = 0.0;
        if (!bVar8) {
          fVar12 = local_88._4_4_;
        }
        *(byte *)(plVar5 + 10) = *(byte *)(plVar5 + 10) | 0x10;
        fVar11 = fVar14 + fVar11;
        fVar13 = (fVar13 - fVar12) + local_88._4_4_ + (float)local_88;
        fVar14 = (float)local_88 + fVar11;
        *(float *)((long)plVar5 + 0x2c) = (fVar11 + (float)local_88 * 0.5) - local_80;
        lVar10 = local_78;
        bVar8 = true;
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != plVar7);
  }
  if (*(char *)(param_1 + 0xdc) != '\0') {
    fVar13 = *(float *)(param_1 + 0x54) - fVar13;
    bVar3 = *(byte *)(lVar10 + 0x5b) >> 2 & 3;
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 0x10;
    *(float *)(lVar10 + 0x54) = fVar13;
    if (bVar3 != 1) {
      if (bVar3 != 0) {
        return;
      }
      fVar13 = fVar13 * 0.5;
    }
    *(float *)(lVar10 + 0x34) = fVar13 + *(float *)(lVar10 + 0x34);
  }
  return;
}


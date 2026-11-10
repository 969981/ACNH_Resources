
void FUN_00371630(long param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  plVar6 = *(long **)(param_1 + 0x28);
  plVar1 = (long *)(param_1 + 0x20);
  if (plVar1 == plVar6) {
    fVar12 = 0.0;
    lVar9 = 0;
  }
  else {
    fVar12 = 0.0;
    bVar7 = false;
    lVar9 = 0;
    fVar13 = *(float *)(param_1 + 0x50) * 0.5;
    plVar8 = plVar1;
    do {
      local_78 = 0;
      local_70 = 0.0;
      local_68 = 0;
      uVar3 = FUN_00370f20(*plVar8 + -8,&local_78);
      if ((uVar3 & 1) != 0) {
        plVar4 = (long *)*plVar8;
        if ((*(char *)(param_1 + 0xdc) != '\0') &&
           (plVar5 = *(long **)(param_1 + 0x28), plVar5 != plVar1)) {
          iVar2 = *(int *)(param_1 + 0xd4);
          if (iVar2 == 2) {
LAB_0037174c:
            if (plVar5 != plVar4) goto LAB_00371694;
          }
          else {
            if (iVar2 != 1) {
              if (iVar2 != 0) goto LAB_00371694;
LAB_00371748:
              plVar5 = (long *)*plVar1;
              goto LAB_0037174c;
            }
            if (plVar5 != plVar4) goto LAB_00371748;
          }
          local_78 = local_78 & 0xffffffff00000000;
          local_70 = 0.0;
        }
LAB_00371694:
        fVar10 = local_78._4_4_;
        if (!bVar7) {
          fVar10 = 0.0;
        }
        fVar11 = 0.0;
        if (!bVar7) {
          fVar11 = local_78._4_4_;
        }
        *(byte *)(plVar4 + 10) = *(byte *)(plVar4 + 10) | 0x10;
        fVar10 = fVar13 - fVar10;
        fVar12 = (fVar12 - fVar11) + local_78._4_4_ + (float)local_78;
        fVar13 = fVar10 - (float)local_78;
        *(float *)(plVar4 + 5) = (fVar10 + (float)local_78 * -0.5) - local_70;
        lVar9 = local_68;
        bVar7 = true;
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != plVar6);
  }
  if (*(char *)(param_1 + 0xdc) != '\0') {
    fVar12 = *(float *)(param_1 + 0x50) - fVar12;
    *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 0x10;
    *(float *)(lVar9 + 0x50) = fVar12;
    if ((*(byte *)(lVar9 + 0x5b) & 3) != 1) {
      if ((*(byte *)(lVar9 + 0x5b) & 3) != 0) {
        return;
      }
      fVar12 = fVar12 * 0.5;
    }
    *(float *)(lVar9 + 0x30) = *(float *)(lVar9 + 0x30) - fVar12;
  }
  return;
}


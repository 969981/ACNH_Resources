
void FUN_032c0870(long param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_8;
  
  plVar2 = *(long **)(param_1 + 0x18);
  local_8 = 0;
  fVar7 = *(float *)(*(long *)(param_1 + 0xf8) + 0x54);
  *(float *)((long)plVar2 + 0x3c) =
       *(float *)(*(long *)(param_1 + 0xf8) + 0x50) + *(float *)((long)plVar2 + 0x34);
  *(float *)(plVar2 + 8) = fVar7 + *(float *)(plVar2 + 7);
  (**(code **)(*plVar2 + 0x30))(plVar2,&local_8);
  lVar3 = *(long *)(param_1 + 0x128);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0xf8);
    fVar7 = *(float *)(lVar3 + 0x34);
    if (*(long *)(lVar3 + 0x18) == 0) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = 0.0;
      lVar4 = lVar3;
      lVar6 = *(long *)(lVar3 + 0x18);
      do {
        bVar1 = *(byte *)(lVar4 + 0x5b) >> 6;
        if (bVar1 == 2) {
          fVar9 = *(float *)(lVar6 + 0x4c) * *(float *)(lVar6 + 0x54) * -0.5;
LAB_032c0960:
          fVar7 = fVar7 + fVar9;
        }
        else if (bVar1 == 1) {
          fVar9 = *(float *)(lVar6 + 0x4c) * *(float *)(lVar6 + 0x54) * 0.5;
          goto LAB_032c0960;
        }
        fVar8 = fVar8 + fVar7;
        fVar7 = *(float *)(lVar6 + 0x34);
        plVar2 = (long *)(lVar6 + 0x18);
        lVar4 = lVar6;
        lVar6 = *plVar2;
      } while (*plVar2 != 0);
    }
    fVar8 = fVar8 + fVar7;
    bVar1 = *(byte *)(lVar3 + 0x5b) >> 2 & 3;
    if (bVar1 == 2) {
      fVar7 = *(float *)(lVar3 + 0x54) * 0.5;
    }
    else {
      if (bVar1 != 1) goto LAB_032c09ec;
      fVar7 = *(float *)(lVar3 + 0x54) * -0.5;
    }
    fVar8 = fVar8 + fVar7;
  }
  else {
    fVar7 = *(float *)(lVar3 + 0x34);
    if (*(long *)(lVar3 + 0x18) == 0) {
      fVar8 = fVar7 + 0.0;
    }
    else {
      fVar8 = 0.0;
      lVar4 = *(long *)(lVar3 + 0x18);
      do {
        bVar1 = *(byte *)(lVar3 + 0x5b) >> 6;
        if (bVar1 == 2) {
          fVar9 = *(float *)(lVar4 + 0x4c) * *(float *)(lVar4 + 0x54) * -0.5;
LAB_032c08e4:
          fVar7 = fVar7 + fVar9;
        }
        else if (bVar1 == 1) {
          fVar9 = *(float *)(lVar4 + 0x4c) * *(float *)(lVar4 + 0x54) * 0.5;
          goto LAB_032c08e4;
        }
        fVar8 = fVar8 + fVar7;
        fVar7 = *(float *)(lVar4 + 0x34);
        plVar2 = (long *)(lVar4 + 0x18);
        lVar3 = lVar4;
        lVar4 = *plVar2;
      } while (*plVar2 != 0);
      fVar8 = fVar8 + fVar7;
    }
  }
LAB_032c09ec:
  lVar3 = *(long *)(param_1 + 0x18);
  *(float *)(param_1 + 0xcc) = fVar8;
  lVar4 = *(long *)(lVar3 + 0x158);
  if (lVar4 != 0) {
    iVar5 = *(int *)(param_1 + 0x1e8) + 1;
    do {
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) break;
      lVar4 = *(long *)(lVar4 + 0x10);
    } while (lVar4 != 0);
  }
  if (*(int *)(lVar3 + 0xac) != 0) {
    fVar7 = *(float *)(lVar4 + 0x1c);
    fVar8 = *(float *)(lVar4 + 0x24);
    *(undefined4 *)(lVar3 + 0x2c) = 0;
    *(undefined8 *)(lVar3 + 0xc) = 0;
    local_8 = CONCAT44(local_8._4_4_,1);
    fVar9 = *(float *)(lVar3 + 0x34);
    *(undefined4 *)(lVar3 + 0x34) = 0;
    fVar7 = (fVar7 + fVar8) * 0.5;
    *(float *)(lVar3 + 0x30) = fVar7;
    *(float *)(lVar3 + 0x40) = fVar7 + (*(float *)(lVar3 + 0x40) - *(float *)(lVar3 + 0x38));
    *(float *)(lVar3 + 0x38) = fVar7;
    *(float *)(lVar3 + 0x3c) = (*(float *)(lVar3 + 0x3c) - fVar9) + 0.0;
    if (*(int *)(lVar3 + 0xac) != 1) {
      *(undefined4 *)(lVar3 + 0xac) = 1;
      if (*(long **)(lVar3 + 0x100) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x100) + 0x20))();
      }
    }
  }
  local_8 = 0;
  FUN_032b4ec0(param_1 + 8,&local_8);
  return;
}


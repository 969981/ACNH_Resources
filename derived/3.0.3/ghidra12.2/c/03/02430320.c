
undefined8 FUN_02430320(long param_1)

{
  float *pfVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  char cVar5;
  uint *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (*(int *)(param_1 + 0x178) == 1) {
    return 0;
  }
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f08d8 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_054f08d8);
      puVar6 = &DAT_054f08d0;
      if (iVar7 != 0) {
        DAT_054f08d0 = 0;
        __cxa_guard_release(&DAT_054f08d8);
      }
    }
    else {
      puVar6 = &DAT_054f08d0;
    }
  }
  else {
    puVar6 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x200);
  }
  if ((*puVar6 & 1) != 0) {
    return 1;
  }
  cVar2 = *(char *)(param_1 + 0x1ca5);
  if ((cVar2 == '\0') || (*(int *)(param_1 + 0x1ca0) <= *(int *)(param_1 + 0x1c98))) {
    pfVar1 = (float *)PTR_DAT_04bc3038;
    if (*(char *)(param_1 + 0x12f8) != '\0') {
      pfVar1 = (float *)(param_1 + 0xeec);
    }
    fVar8 = *pfVar1;
    fVar10 = pfVar1[1];
    bVar3 = false;
    if ((fVar10 == 0.0) && (bVar3 = false, !NAN(fVar8))) {
      bVar3 = fVar8 == 0.0;
    }
    fVar9 = 0.0;
    if (!bVar3) {
      fVar9 = SQRT(fVar10 * fVar10 + fVar8 * fVar8) * 5.0 + 0.0;
    }
    if (*(char *)(param_1 + 0x17ac) == '\0') {
      if ((*(uint *)(param_1 + 0xed4) & 8) != 0) {
        fVar9 = fVar9 + 6.0;
      }
      if ((*(uint *)(param_1 + 0xed4) & 0x10) != 0) {
        fVar9 = fVar9 + 6.0;
      }
      if ((*(uint *)(param_1 + 0xed4) & 0x20) != 0) {
        fVar9 = fVar9 + 6.0;
      }
      if ((*(uint *)(param_1 + 0xed4) & 0x40) != 0) {
        fVar9 = fVar9 + 6.0;
      }
      if ((*(uint *)(param_1 + 0xed4) & 0x800) != 0) {
        fVar9 = fVar9 + 6.0;
      }
      if ((*(uint *)(param_1 + 0xed4) & 0x1000) != 0) {
        fVar9 = fVar9 + 6.0;
      }
      if ((*(uint *)(param_1 + 0xed4) & 0x4000) != 0) {
        fVar9 = fVar9 + 6.0;
      }
      if ((*(uint *)(param_1 + 0xed4) & 0x2000) != 0) {
        fVar9 = fVar9 + 6.0;
      }
    }
    cVar5 = *(char *)(param_1 + 0x1c85);
    *(float *)(param_1 + 0x1cb0) = fVar9 / 7.2000003 + 1.0;
    if ((cVar5 != '\0') && (*(int *)(param_1 + 0x1c80) <= *(int *)(param_1 + 0x1c78))) {
      return 1;
    }
    if (0.0 < fVar9) {
      for (iVar7 = (int)fVar9; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*(char *)(param_1 + 0x1c85) != '\0') {
          uVar4 = (**(code **)(*(long *)(param_1 + 0x1c70) + (ulong)*(byte *)(param_1 + 0x1c84) * 8)
                  )(param_1 + 0x1c70);
          *(undefined4 *)(param_1 + 0x1c78) = uVar4;
        }
      }
      *(undefined8 *)(param_1 + 0x1c98) = 0;
      *(undefined2 *)(param_1 + 0x1ca4) = 0x100;
      *(undefined4 *)(param_1 + 0x1ca0) = 2;
      goto LAB_024306c4;
    }
  }
  else {
    cVar5 = *(char *)(param_1 + 0x1c85);
    if ((cVar5 != '\0') && (*(int *)(param_1 + 0x1c80) <= *(int *)(param_1 + 0x1c78))) {
      return 1;
    }
  }
  if (cVar5 != '\0') {
    uVar4 = (**(code **)(*(long *)(param_1 + 0x1c70) + (ulong)*(byte *)(param_1 + 0x1c84) * 8))
                      (param_1 + 0x1c70);
    cVar2 = *(char *)(param_1 + 0x1ca5);
    *(undefined4 *)(param_1 + 0x1c78) = uVar4;
  }
  if (cVar2 == '\0') {
    return 0;
  }
LAB_024306c4:
  uVar4 = (**(code **)(*(long *)(param_1 + 0x1c90) + (ulong)*(byte *)(param_1 + 0x1ca4) * 8))
                    (param_1 + 0x1c90);
  *(undefined4 *)(param_1 + 0x1c98) = uVar4;
  return 0;
}



float FUN_003cf8f0(long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  if (*(char *)(param_1 + 0x102) == '\x02') {
    return 0.0;
  }
  if ((*(long *)(param_1 + 0x1c0) == 0) || (uVar4 = FUN_003c04a4(0), (uVar4 & 1) == 0)) {
    bVar2 = 0;
    bVar1 = 0;
  }
  else {
    iVar3 = (**(code **)(**(long **)(param_1 + 0x138) + 0x10))();
    if (0 < iVar3) {
      lVar7 = 0;
      do {
        plVar5 = (long *)FUN_003c0450(*(undefined8 *)(param_1 + 0x1c0));
        if ((lVar7 < (int)plVar5[1]) && (*(char *)(*plVar5 + lVar7) != '\0')) {
          bVar2 = 1;
          goto LAB_003cf994;
        }
        lVar7 = lVar7 + 1;
        iVar3 = (**(code **)(**(long **)(param_1 + 0x138) + 0x10))();
      } while (lVar7 < iVar3);
    }
    bVar2 = 0;
LAB_003cf994:
    bVar1 = 1;
  }
  fVar8 = 1.0;
  if (!(bool)(bVar2 & bVar1)) {
    fVar8 = *(float *)(param_1 + 0x120);
  }
  fVar8 = fVar8 * *(float *)(*(long *)(param_1 + 0x20) + 0x4c);
  if (*(int *)(param_1 + 0x14c) < *(int *)(param_1 + 0x148)) {
    fVar8 = fVar8 * (*(float *)(param_1 + 0x140) +
                    ((*(float *)(param_1 + 0x144) - *(float *)(param_1 + 0x140)) *
                    (float)*(int *)(param_1 + 0x14c)) / (float)*(int *)(param_1 + 0x148));
    iVar3 = *(int *)(param_1 + 0xc4);
    iVar6 = *(int *)(param_1 + 200);
    if (iVar6 < iVar3) goto LAB_003cfa38;
LAB_003cf9f4:
    fVar8 = fVar8 * *(float *)(param_1 + 0xc0);
    iVar3 = *(int *)(param_1 + 0xd4);
    iVar6 = *(int *)(param_1 + 0xd8);
    if (iVar6 < iVar3) goto LAB_003cfa64;
LAB_003cfa08:
    fVar8 = fVar8 * *(float *)(param_1 + 0xd0);
    iVar3 = *(int *)(param_1 + 0xe4);
    iVar6 = *(int *)(param_1 + 0xe8);
    if (iVar3 <= iVar6) {
LAB_003cfa1c:
      fVar9 = *(float *)(param_1 + 0xe0);
      goto LAB_003cfaac;
    }
  }
  else {
    fVar8 = fVar8 * *(float *)(param_1 + 0x144);
    iVar3 = *(int *)(param_1 + 0xc4);
    iVar6 = *(int *)(param_1 + 200);
    if (iVar3 <= iVar6) goto LAB_003cf9f4;
LAB_003cfa38:
    fVar8 = fVar8 * (*(float *)(param_1 + 0xbc) +
                    ((*(float *)(param_1 + 0xc0) - *(float *)(param_1 + 0xbc)) * (float)iVar6) /
                    (float)iVar3);
    iVar3 = *(int *)(param_1 + 0xd4);
    iVar6 = *(int *)(param_1 + 0xd8);
    if (iVar3 <= iVar6) goto LAB_003cfa08;
LAB_003cfa64:
    fVar8 = fVar8 * (*(float *)(param_1 + 0xcc) +
                    ((*(float *)(param_1 + 0xd0) - *(float *)(param_1 + 0xcc)) * (float)iVar6) /
                    (float)iVar3);
    iVar3 = *(int *)(param_1 + 0xe4);
    iVar6 = *(int *)(param_1 + 0xe8);
    if (iVar3 <= iVar6) goto LAB_003cfa1c;
  }
  fVar9 = *(float *)(param_1 + 0xdc) +
          ((*(float *)(param_1 + 0xe0) - *(float *)(param_1 + 0xdc)) * (float)iVar6) / (float)iVar3;
LAB_003cfaac:
  return fVar8 * fVar9 * *(float *)(param_1 + 0x68) * *(float *)(param_1 + 0xa0);
}



/* WARNING: Removing unreachable block (ram,0x014b8d14) */
/* WARNING: Removing unreachable block (ram,0x014b8f08) */
/* WARNING: Removing unreachable block (ram,0x014b8f28) */
/* WARNING: Removing unreachable block (ram,0x014b8d34) */
/* WARNING: Removing unreachable block (ram,0x014b8d74) */
/* WARNING: Removing unreachable block (ram,0x014b8f68) */

undefined8 FUN_014b8cc8(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (((*(float *)(param_1 + 0x194) < *(float *)(param_1 + 0x188)) ||
      (*(float *)(param_1 + 0x198) < *(float *)(param_1 + 0x18c))) ||
     (*(float *)(param_1 + 0x19c) < *(float *)(param_1 + 400))) {
    if (((((*(float *)(param_1 + 8) <= *(float *)(param_1 + 0x14)) &&
          (*(float *)(param_1 + 0xc) <= *(float *)(param_1 + 0x18))) &&
         ((*(float *)(param_1 + 0x10) <= *(float *)(param_1 + 0x1c) &&
          ((*(int *)(param_1 + 0x30) <= *(int *)(param_2 + 0x10) &&
           (*(int *)(param_2 + 0x20) <= *(int *)(param_1 + 0x40))))))) &&
        (*(int *)(param_1 + 0x34) <= *(int *)(param_2 + 0x14))) &&
       (*(int *)(param_2 + 0x24) <= *(int *)(param_1 + 0x44))) {
      return 1;
    }
    return 0;
  }
  if (*(float *)(param_1 + 0x14) < *(float *)(param_1 + 8)) {
    return 0;
  }
  if (*(float *)(param_1 + 0x18) < *(float *)(param_1 + 0xc)) {
    return 0;
  }
  if (*(float *)(param_1 + 0x1c) < *(float *)(param_1 + 0x10)) {
    return 0;
  }
  iVar1 = *(int *)(param_2 + 0x10);
  iVar2 = *(int *)(param_1 + 0x30);
  if ((((iVar2 <= iVar1) && (*(int *)(param_2 + 0x20) <= *(int *)(param_1 + 0x40))) &&
      (*(int *)(param_1 + 0x34) <= *(int *)(param_2 + 0x14))) &&
     (*(int *)(param_2 + 0x24) <= *(int *)(param_1 + 0x44))) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 0x1b0);
  iVar4 = *(int *)(param_2 + 0x20);
  if (((iVar3 <= iVar1) && (iVar4 <= *(int *)(param_1 + 0x1c0))) &&
     ((*(int *)(param_1 + 0x1b4) <= *(int *)(param_2 + 0x14) &&
      (*(int *)(param_2 + 0x24) <= *(int *)(param_1 + 0x1c4))))) {
    return 1;
  }
  iVar5 = *(int *)(param_1 + 0x40);
  if (iVar5 < iVar1) {
    return 0;
  }
  if (iVar4 < iVar2) {
    return 0;
  }
  iVar6 = *(int *)(param_1 + 0x44);
  iVar7 = *(int *)(param_2 + 0x14);
  if (iVar6 < iVar7) {
    return 0;
  }
  iVar8 = *(int *)(param_2 + 0x24);
  iVar9 = *(int *)(param_1 + 0x34);
  if (iVar8 < iVar9) {
    return 0;
  }
  iVar10 = *(int *)(param_1 + 0x1c0);
  if (iVar10 < iVar1) {
    return 0;
  }
  if (iVar4 < iVar3) {
    return 0;
  }
  iVar11 = *(int *)(param_1 + 0x1c4);
  if (iVar11 < iVar7) {
    return 0;
  }
  iVar12 = *(int *)(param_1 + 0x1b4);
  if (iVar8 < iVar12) {
    return 0;
  }
  if ((iVar1 < iVar2) || (iVar7 < iVar9)) {
    if (iVar1 < iVar3) {
      return 0;
    }
    if (iVar7 < iVar12) {
      return 0;
    }
    if (iVar2 <= iVar1) goto LAB_014b8e88;
LAB_014b8e90:
    if (iVar1 < iVar3) {
      return 0;
    }
    if (iVar11 < iVar8) {
      return 0;
    }
  }
  else {
LAB_014b8e88:
    if (iVar6 < iVar8) goto LAB_014b8e90;
  }
  if ((iVar5 < iVar4) || (iVar7 < iVar9)) {
    if (iVar10 < iVar4) {
      return 0;
    }
    if (iVar7 < iVar12) {
      return 0;
    }
    if (iVar5 < iVar4) goto LAB_014b8ed8;
  }
  if (iVar8 <= iVar6) {
    return 1;
  }
LAB_014b8ed8:
  if (iVar10 < iVar4) {
    return 0;
  }
  if (iVar11 < iVar8) {
    return 0;
  }
  return 1;
}


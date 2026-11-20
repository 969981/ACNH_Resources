
void FUN_03fe9444(long *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  
  lVar7 = *param_1;
  piVar2 = (int *)((long)param_1 + 0x34e08c);
  piVar9 = (int *)(lVar7 + 0x1c);
  if ((int)param_1[0x69c18] < *piVar9) {
    *(undefined2 *)((long)param_1 + 0x34e0ac) = 0;
    piVar6 = piVar9;
  }
  else {
    piVar6 = (int *)(lVar7 + 0x20);
    if ((int)param_1[0x69c18] < *piVar6) {
      *(undefined2 *)((long)param_1 + 0x34e0ac) = 1;
    }
    else {
      *(undefined2 *)((long)param_1 + 0x34e0ac) = 2;
      piVar6 = (int *)(lVar7 + 0x28);
    }
  }
  *(int *)(param_1 + 0x69c16) = *piVar6;
  piVar6 = (int *)((long)param_1 + (ulong)*(ushort *)(param_1 + 0x69c15) * 4 + 0x34e080);
  if (*piVar6 == 3) {
    *piVar6 = *piVar2;
  }
  cVar5 = *(char *)((long)param_1 + 0x34e12d);
  if (cVar5 != '\0') {
    iVar3 = (int)param_1[0x69c28];
    *(int *)(param_1 + 0x69c14) = iVar3;
    if ((*(char *)((long)param_1 + 0x34e12c) == '\0') ||
       ((*(int *)((long)param_1 + 0x34e144) == (int)*(short *)((long)param_1 + 0x34e122) &&
        ((int)param_1[0x69c18] < iVar3)))) {
      iVar4 = *piVar9;
      if (iVar3 < iVar4) {
        uVar8 = 2;
        *piVar2 = 0;
        *(undefined2 *)(param_1 + 0x69c15) = 2;
      }
      else {
        bVar1 = *(int *)(lVar7 + 0x20) <= iVar3;
        if (bVar1) {
          iVar10 = 2;
          *(undefined2 *)(param_1 + 0x69c15) = 1;
        }
        else {
          *(undefined2 *)(param_1 + 0x69c15) = 0;
          iVar10 = 1;
        }
        uVar8 = (ulong)bVar1;
        *piVar2 = iVar10;
      }
      *(undefined4 *)((long)param_1 + uVar8 * 4 + 0x34e080) = 3;
      if ((iVar3 < iVar4) ||
         (*(int *)((long)param_1 + uVar8 * 4 + 0x34e094) <= (int)param_1[0x69c18] &&
          (int)param_1[0x69c18] < iVar3)) {
        *(int *)(param_1 + 0x69c16) = iVar3;
        *(undefined2 *)((long)param_1 + 0x34e0ac) = 3;
      }
    }
  }
  if (((*(short *)((long)param_1 + 0x3c) == 0) && (*(byte *)((long)param_1 + 0x44) < 3)) &&
     ((int)param_1[8] <= (int)param_1[0x69c16])) {
    *(int *)(param_1 + 0x69c16) = (int)param_1[8];
    *(uint *)(param_1 + 0x69c12) = (uint)*(ushort *)((long)param_1 + 0x34e0ac);
    *(undefined2 *)((long)param_1 + 0x34e0ac) = 4;
  }
  if ((cVar5 == '\0') && (*(char *)((long)param_1 + 0x34e12c) == '\0')) {
    *(byte *)((long)param_1 + 0x38a44c) = *(byte *)((long)param_1 + 0x38a44c) & 0x9f;
    return;
  }
  return;
}


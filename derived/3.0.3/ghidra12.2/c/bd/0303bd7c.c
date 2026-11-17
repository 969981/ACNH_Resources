
long * FUN_0303bd7c(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  
  if (param_1 == (long *)0x0) {
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = 0;
    return param_2;
  }
  cVar4 = (char)param_2[4];
  cVar5 = (char)param_1[4];
  if (cVar4 == '\0' && cVar5 == '\0') {
    if (param_2[5] == param_1[5]) goto LAB_0303bde4;
    if ((ulong)param_2[5] < (ulong)param_1[5]) goto LAB_0303be0c;
    goto LAB_0303be24;
  }
  if ((cVar4 != '\0') != (cVar5 != '\0')) {
    if ((cVar5 == '\0') || (cVar4 != '\0')) goto LAB_0303be24;
LAB_0303be0c:
    lVar7 = FUN_0303bd7c(param_1[1],param_2);
    param_1[1] = lVar7;
    goto LAB_0303bec4;
  }
LAB_0303bde4:
  if ((int)param_2[6] == (int)param_1[6]) {
    if (*(int *)((long)param_2 + 0x34) < *(int *)((long)param_1 + 0x34)) goto LAB_0303be0c;
  }
  else if ((int)param_2[6] < (int)param_1[6]) goto LAB_0303be0c;
LAB_0303be24:
  if (cVar5 == '\0' && cVar4 == '\0') {
    if (param_1[5] == param_2[5]) goto LAB_0303be70;
    if ((ulong)param_1[5] < (ulong)param_2[5]) goto LAB_0303be4c;
LAB_0303be90:
    if (param_1 != param_2) {
      param_2[2] = param_1[2];
      param_2[1] = param_1[1];
      param_2[3] = param_1[3];
      (**(code **)(*param_1 + 0x10))(param_1);
      param_1 = param_2;
    }
  }
  else {
    if ((cVar4 != '\0') == (cVar5 != '\0')) {
LAB_0303be70:
      iVar2 = (int)param_1[6];
      iVar3 = (int)param_2[6];
      bVar6 = SBORROW4(iVar2,iVar3);
      iVar1 = iVar2 - iVar3;
      if (iVar2 == iVar3) {
        bVar6 = SBORROW4(*(int *)((long)param_1 + 0x34),*(int *)((long)param_2 + 0x34));
        iVar1 = *(int *)((long)param_1 + 0x34) - *(int *)((long)param_2 + 0x34);
      }
      if (iVar1 < 0 == bVar6) goto LAB_0303be90;
    }
    else if ((cVar4 == '\0') || (cVar5 != '\0')) goto LAB_0303be90;
LAB_0303be4c:
    lVar7 = FUN_0303bd7c(param_1[2],param_2);
    param_1[2] = lVar7;
  }
LAB_0303bec4:
  plVar11 = (long *)param_1[2];
  if (((plVar11 == (long *)0x0) || ((*(byte *)(plVar11 + 3) & 1) != 0)) ||
     ((param_1[1] != 0 && ((*(byte *)(param_1[1] + 0x18) & 1) == 0)))) {
    plVar8 = (long *)param_1[1];
    plVar11 = param_1;
  }
  else {
    param_1[2] = plVar11[1];
    plVar11[1] = (long)param_1;
    plVar11[3] = param_1[3];
    param_1[3] = 0;
    plVar8 = (long *)plVar11[1];
  }
  if (plVar8 != (long *)0x0) {
    uVar9 = plVar8[3];
    plVar10 = plVar8;
    if ((((uVar9 & 1) == 0) && (plVar8[1] != 0)) && ((*(byte *)(plVar8[1] + 0x18) & 1) == 0)) {
      plVar11[1] = plVar8[2];
      plVar8[2] = (long)plVar11;
      plVar8[3] = plVar11[3];
      plVar11[3] = 0;
      plVar10 = (long *)plVar8[1];
      if (plVar10 == (long *)0x0) {
        return plVar8;
      }
      uVar9 = plVar10[3];
      plVar11 = plVar8;
    }
    if ((((uVar9 & 1) == 0) && (plVar11[2] != 0)) && ((*(byte *)(plVar11[2] + 0x18) & 1) == 0)) {
      plVar11[3] = plVar11[3] ^ 1;
      plVar10[3] = plVar10[3] ^ 1;
      *(ulong *)(plVar11[2] + 0x18) = *(ulong *)(plVar11[2] + 0x18) ^ 1;
    }
  }
  return plVar11;
}


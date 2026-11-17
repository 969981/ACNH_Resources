
/* WARNING: Type propagation algorithm not settling */

long * FUN_0303bfc0(long *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  char cVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  
  cVar5 = *param_2;
  cVar9 = (char)param_1[4];
  if (cVar5 == '\0' && cVar9 == '\0') {
    if (*(ulong *)(param_2 + 8) == param_1[5]) goto LAB_0303c010;
    if ((ulong)param_1[5] <= *(ulong *)(param_2 + 8)) goto LAB_0303c118;
    goto LAB_0303c038;
  }
  if ((cVar5 != '\0') == (cVar9 != '\0')) {
LAB_0303c010:
    if (*(int *)(param_2 + 0x10) == (int)param_1[6]) {
      if (*(int *)((long)param_1 + 0x34) <= *(int *)(param_2 + 0x14)) goto LAB_0303c118;
    }
    else if ((int)param_1[6] <= *(int *)(param_2 + 0x10)) goto LAB_0303c118;
LAB_0303c038:
    lVar6 = param_1[1];
    if (((lVar6 == 0) || ((*(byte *)(lVar6 + 0x18) & 1) != 0)) &&
       ((*(long *)(lVar6 + 8) == 0 || ((*(byte *)(*(long *)(lVar6 + 8) + 0x18) & 1) != 0)))) {
      param_1[3] = param_1[3] ^ 1;
      *(ulong *)(lVar6 + 0x18) = *(ulong *)(lVar6 + 0x18) ^ 1;
      *(ulong *)(param_1[2] + 0x18) = *(ulong *)(param_1[2] + 0x18) ^ 1;
      lVar6 = param_1[2];
      plVar12 = *(long **)(lVar6 + 8);
      if ((plVar12 != (long *)0x0) && ((*(byte *)(plVar12 + 3) & 1) == 0)) {
        *(long *)(lVar6 + 8) = plVar12[2];
        plVar12[2] = lVar6;
        plVar12[3] = *(long *)(lVar6 + 0x18);
        *(undefined8 *)(lVar6 + 0x18) = 0;
        param_1[2] = (long)plVar12;
        param_1[2] = plVar12[1];
        plVar12[1] = (long)param_1;
        plVar12[3] = param_1[3];
        param_1[3] = 0;
        plVar12[3] = plVar12[3] ^ 1;
        *(ulong *)(plVar12[1] + 0x18) = *(ulong *)(plVar12[1] + 0x18) ^ 1;
        *(ulong *)(plVar12[2] + 0x18) = *(ulong *)(plVar12[2] + 0x18) ^ 1;
        param_1 = plVar12;
      }
    }
    lVar6 = FUN_0303bfc0(param_1[1]);
    param_1[1] = lVar6;
    plVar12 = (long *)param_1[2];
    goto joined_r0x0303c4a4;
  }
  if ((cVar9 != '\0') && (cVar5 == '\0')) goto LAB_0303c038;
LAB_0303c118:
  plVar12 = (long *)param_1[1];
  if ((plVar12 == (long *)0x0) || ((*(byte *)(plVar12 + 3) & 1) != 0)) {
    if (!(cVar5 != '\0' || cVar9 != '\0')) goto LAB_0303c150;
LAB_0303c174:
    if ((cVar9 != '\0') == (cVar5 != '\0')) goto LAB_0303c198;
    if ((cVar9 == '\0') || (cVar5 != '\0')) goto LAB_0303c1c0;
  }
  else {
    param_1[1] = plVar12[2];
    plVar12[2] = (long)param_1;
    plVar12[3] = param_1[3];
    param_1[3] = 0;
    cVar5 = *param_2;
    cVar9 = (char)plVar12[4];
    param_1 = plVar12;
    if (!(cVar5 == '\0' && cVar9 == '\0')) goto LAB_0303c174;
LAB_0303c150:
    if (*(ulong *)(param_2 + 8) != param_1[5]) {
      if ((ulong)param_1[5] <= *(ulong *)(param_2 + 8)) goto LAB_0303c1c0;
      goto LAB_0303c234;
    }
LAB_0303c198:
    if (*(int *)(param_2 + 0x10) == (int)param_1[6]) {
      if (*(int *)((long)param_1 + 0x34) <= *(int *)(param_2 + 0x14)) goto LAB_0303c1c0;
    }
    else if ((int)param_1[6] <= *(int *)(param_2 + 0x10)) {
LAB_0303c1c0:
      if (cVar5 == '\0' && cVar9 == '\0') {
        if (param_1[5] == *(ulong *)(param_2 + 8)) goto LAB_0303c1fc;
        if (*(ulong *)(param_2 + 8) <= (ulong)param_1[5]) goto LAB_0303c22c;
      }
      else if ((cVar9 != '\0') == (cVar5 != '\0')) {
LAB_0303c1fc:
        if ((int)param_1[6] == *(int *)(param_2 + 0x10)) {
          if (*(int *)(param_2 + 0x14) <= *(int *)((long)param_1 + 0x34)) goto LAB_0303c22c;
        }
        else if (*(int *)(param_2 + 0x10) <= (int)param_1[6]) goto LAB_0303c22c;
      }
      else {
        if ((cVar5 != '\0') && (cVar9 == '\0')) goto LAB_0303c234;
LAB_0303c22c:
        if (param_1[2] == 0) {
          (**(code **)(*param_1 + 0x10))(param_1);
          return (long *)0x0;
        }
      }
    }
  }
LAB_0303c234:
  lVar6 = param_1[2];
  if (((lVar6 == 0) || ((*(byte *)(lVar6 + 0x18) & 1) != 0)) &&
     ((*(long *)(lVar6 + 8) == 0 || ((*(byte *)(*(long *)(lVar6 + 8) + 0x18) & 1) != 0)))) {
    param_1[3] = param_1[3] ^ 1;
    *(ulong *)(param_1[1] + 0x18) = *(ulong *)(param_1[1] + 0x18) ^ 1;
    *(ulong *)(param_1[2] + 0x18) = *(ulong *)(param_1[2] + 0x18) ^ 1;
    plVar12 = (long *)param_1[1];
    if ((plVar12[1] != 0) && ((*(byte *)(plVar12[1] + 0x18) & 1) == 0)) {
      param_1[1] = plVar12[2];
      plVar12[2] = (long)param_1;
      plVar12[3] = param_1[3];
      param_1[3] = 0;
      plVar12[3] = plVar12[3] ^ 1;
      *(ulong *)(plVar12[1] + 0x18) = *(ulong *)(plVar12[1] + 0x18) ^ 1;
      *(ulong *)(plVar12[2] + 0x18) = *(ulong *)(plVar12[2] + 0x18) ^ 1;
      param_1 = plVar12;
    }
  }
  cVar5 = *param_2;
  cVar9 = (char)param_1[4];
  if (cVar5 == '\0' && cVar9 == '\0') {
    if (*(ulong *)(param_2 + 8) == param_1[5]) goto LAB_0303c320;
    if ((ulong)param_1[5] <= *(ulong *)(param_2 + 8)) goto LAB_0303c350;
    goto LAB_0303c378;
  }
  if ((cVar5 != '\0') == (cVar9 != '\0')) {
LAB_0303c320:
    if (*(int *)(param_2 + 0x10) == (int)param_1[6]) {
      if (*(int *)((long)param_1 + 0x34) <= *(int *)(param_2 + 0x14)) goto LAB_0303c350;
    }
    else if ((int)param_1[6] <= *(int *)(param_2 + 0x10)) goto LAB_0303c350;
  }
  else {
    if ((cVar9 != '\0') && (cVar5 == '\0')) goto LAB_0303c378;
LAB_0303c350:
    if (!(cVar9 != '\0' || cVar5 != '\0')) {
      if (param_1[5] == *(ulong *)(param_2 + 8)) {
LAB_0303c3a0:
        iVar2 = (int)param_1[6];
        iVar3 = *(int *)(param_2 + 0x10);
        bVar4 = SBORROW4(iVar2,iVar3);
        iVar1 = iVar2 - iVar3;
        if (iVar2 == iVar3) {
          bVar4 = SBORROW4(*(int *)((long)param_1 + 0x34),*(int *)(param_2 + 0x14));
          iVar1 = *(int *)((long)param_1 + 0x34) - *(int *)(param_2 + 0x14);
        }
        if (iVar1 < 0 != bVar4) goto LAB_0303c378;
      }
      else if ((ulong)param_1[5] < *(ulong *)(param_2 + 8)) goto LAB_0303c378;
LAB_0303c3c0:
      plVar8 = (long *)param_1[2];
      plVar12 = plVar8;
      do {
        plVar7 = plVar12;
        plVar12 = (long *)plVar7[1];
      } while ((long *)plVar7[1] != (long *)0x0);
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
      }
      else {
        iVar1 = (int)plVar7[6];
        iVar2 = *(int *)((long)plVar7 + 0x34);
        if ((char)plVar7[4] == '\0') {
          uVar10 = plVar7[5];
          do {
            while ((char)plVar8[4] != '\0') {
LAB_0303c580:
              plVar8 = (long *)plVar8[1];
              if (plVar8 == (long *)0x0) goto LAB_0303c474;
            }
            uVar11 = plVar8[5];
            if (uVar10 != uVar11) {
              if (uVar10 < uVar11) goto LAB_0303c580;
              if (uVar11 < uVar10) goto LAB_0303c5e0;
              break;
            }
            iVar3 = (int)plVar8[6];
            if (iVar1 == iVar3) {
              if (iVar2 < *(int *)((long)plVar8 + 0x34)) goto LAB_0303c580;
              if (*(int *)((long)plVar8 + 0x34) < iVar2) goto LAB_0303c5e0;
              break;
            }
            if (iVar1 < iVar3) goto LAB_0303c580;
            if (iVar1 <= iVar3) break;
LAB_0303c5e0:
            plVar8 = (long *)plVar8[2];
          } while (plVar8 != (long *)0x0);
        }
        else {
          do {
            while ((char)plVar8[4] == '\0') {
LAB_0303c3fc:
              plVar8 = (long *)plVar8[2];
              if (plVar8 == (long *)0x0) goto LAB_0303c474;
            }
            iVar3 = (int)plVar8[6];
            if (iVar1 == iVar3) {
              if (iVar2 < *(int *)((long)plVar8 + 0x34)) goto LAB_0303c434;
              if (*(int *)((long)plVar8 + 0x34) < iVar2) goto LAB_0303c3fc;
              break;
            }
            if (iVar3 <= iVar1) {
              if (iVar3 < iVar1) goto LAB_0303c3fc;
              break;
            }
LAB_0303c434:
            plVar8 = (long *)plVar8[1];
          } while (plVar8 != (long *)0x0);
        }
      }
LAB_0303c474:
      lVar6 = FUN_0303c5f0();
      plVar8[2] = lVar6;
      plVar8[1] = param_1[1];
      plVar8[3] = param_1[3];
      (**(code **)(*param_1 + 0x10))(param_1);
      plVar12 = (long *)plVar8[2];
      param_1 = plVar8;
      goto joined_r0x0303c4a4;
    }
    if ((cVar5 != '\0') == (cVar9 != '\0')) goto LAB_0303c3a0;
    if ((cVar5 == '\0') || (cVar9 != '\0')) goto LAB_0303c3c0;
  }
LAB_0303c378:
  lVar6 = FUN_0303bfc0(param_1[2]);
  param_1[2] = lVar6;
  plVar12 = (long *)param_1[2];
joined_r0x0303c4a4:
  if ((plVar12 == (long *)0x0) || ((*(byte *)(plVar12 + 3) & 1) != 0)) {
    plVar8 = (long *)param_1[1];
  }
  else {
    param_1[2] = plVar12[1];
    plVar12[1] = (long)param_1;
    plVar12[3] = param_1[3];
    param_1[3] = 0;
    plVar8 = (long *)plVar12[1];
    param_1 = plVar12;
  }
  if (plVar8 != (long *)0x0) {
    uVar10 = plVar8[3];
    plVar12 = plVar8;
    if ((uVar10 & 1) == 0) {
      if ((plVar8[1] != 0) && ((*(byte *)(plVar8[1] + 0x18) & 1) == 0)) {
        param_1[1] = plVar8[2];
        plVar8[2] = (long)param_1;
        plVar8[3] = param_1[3];
        param_1[3] = 0;
        plVar12 = (long *)plVar8[1];
        if (plVar12 == (long *)0x0) {
          return plVar8;
        }
        uVar10 = plVar12[3];
        param_1 = plVar8;
      }
    }
    if ((((uVar10 & 1) == 0) && (param_1[2] != 0)) && ((*(byte *)(param_1[2] + 0x18) & 1) == 0)) {
      param_1[3] = param_1[3] ^ 1;
      plVar12[3] = plVar12[3] ^ 1;
      *(ulong *)(param_1[2] + 0x18) = *(ulong *)(param_1[2] + 0x18) ^ 1;
    }
  }
  return param_1;
}


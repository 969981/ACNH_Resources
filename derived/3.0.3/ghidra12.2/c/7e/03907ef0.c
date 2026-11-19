
int FUN_03907ef0(long param_1,uint param_2,long param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined **local_f8;
  long local_f0;
  int local_e8 [34];
  
  if (param_5 == -1) {
    iVar11 = *(int *)(param_1 + 0x20);
    memset(local_e8,0,(long)iVar11 << 2);
    lVar10 = *(long *)(param_1 + 0x28);
  }
  else {
    iVar11 = *(int *)(param_1 + 0x20);
    if (iVar11 == 0) {
      return 0;
    }
    lVar10 = *(long *)(param_1 + 0x28);
    iVar7 = 0;
    piVar8 = local_e8;
    do {
      uVar4 = *(ushort *)(lVar10 + (long)iVar7 * 0x38 + 0x30);
      iVar14 = 0;
      if (uVar4 != 0) {
        iVar14 = param_5 / (int)(uint)uVar4;
      }
      *piVar8 = iVar14;
      param_5 = param_5 - iVar14 * (uint)uVar4;
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar11 != iVar7);
  }
  if (iVar11 == 0) {
    return 0;
  }
  if (0 < (int)param_2) {
    lVar17 = 0;
    iVar7 = 0;
LAB_03907ff0:
    uVar18 = 0;
    plVar15 = (long *)(lVar10 + (long)iVar7 * 0x38);
    do {
      local_f0 = *(long *)(param_3 + uVar18 * 8);
      local_f8 = &PTR_LAB_048f9770;
      (**(code **)(*plVar15 + 0x18))(plVar15);
      (**(code **)(*plVar15 + 0x18))(plVar15);
      lVar12 = plVar15[1];
      (*(code *)local_f8[3])(&local_f8);
      if (lVar12 == local_f0) {
LAB_039080e0:
        lVar12 = lVar10 + (long)iVar7 * 0x38;
        uVar3 = *(uint *)(lVar12 + 0x20);
        if (uVar3 != 0) {
          lVar12 = *(long *)(lVar12 + 0x28);
          iVar14 = 0;
          uVar16 = 0;
          lVar19 = *(long *)(param_4 + uVar18 * 8);
          goto LAB_03908128;
        }
        break;
      }
      uVar9 = 0;
      bVar6 = true;
      do {
        lVar12 = plVar15[1] + 1 + uVar9;
        lVar19 = local_f0 + 1 + uVar9;
        cVar5 = *(char *)(lVar12 + -1);
        if (cVar5 != *(char *)(lVar19 + -1)) break;
        if (cVar5 == '\0') {
          if (bVar6) goto LAB_039080e0;
          break;
        }
        cVar5 = *(char *)(plVar15[1] + 1 + uVar9);
        if (cVar5 != *(char *)(local_f0 + 1 + uVar9)) break;
        if (cVar5 == '\0') goto LAB_039080e0;
        cVar5 = *(char *)(lVar12 + 1);
        if (cVar5 != *(char *)(lVar19 + 1)) break;
        if (cVar5 == '\0') goto LAB_039080e0;
        bVar6 = uVar9 < 0x7fffe;
        uVar9 = uVar9 + 3;
      } while (uVar9 != 0x80001);
      uVar18 = uVar18 + 1;
    } while (uVar18 != param_2);
    goto LAB_03907fd8;
  }
LAB_0390820c:
  iVar14 = 0;
  iVar7 = 0;
  piVar8 = local_e8;
  do {
    iVar14 = iVar14 + *piVar8 * (uint)*(ushort *)(lVar10 + (long)iVar7 * 0x38 + 0x30);
    iVar7 = iVar7 + 1;
    piVar8 = piVar8 + 1;
  } while (iVar11 != iVar7);
  return iVar14;
LAB_03908128:
  do {
    plVar15 = (long *)(lVar12 + ((long)((ulong)uVar16 << 0x20) >> 0x1c));
    local_f8 = &PTR_LAB_048f9770;
    local_f0 = lVar19;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    lVar13 = plVar15[1];
    (*(code *)local_f8[3])(&local_f8);
    if (lVar13 == local_f0) {
LAB_03907fd0:
      local_e8[lVar17] = iVar14;
      break;
    }
    uVar18 = 0;
    bVar6 = true;
    lVar13 = plVar15[1] + 1;
    do {
      lVar1 = lVar13 + uVar18;
      lVar2 = local_f0 + 1 + uVar18;
      cVar5 = *(char *)(lVar1 + -1);
      if (cVar5 != *(char *)(lVar2 + -1)) break;
      if (cVar5 == '\0') {
        if (bVar6) goto LAB_03907fd0;
        break;
      }
      cVar5 = *(char *)(lVar13 + uVar18);
      if (cVar5 != *(char *)(local_f0 + 1 + uVar18)) break;
      if (cVar5 == '\0') goto LAB_03907fd0;
      cVar5 = *(char *)(lVar1 + 1);
      if (cVar5 != *(char *)(lVar2 + 1)) break;
      if (cVar5 == '\0') goto LAB_03907fd0;
      bVar6 = uVar18 < 0x7fffe;
      uVar18 = uVar18 + 3;
    } while (uVar18 != 0x80001);
    uVar16 = uVar16 + 1;
    iVar14 = iVar14 + 1;
  } while (uVar3 != uVar16);
LAB_03907fd8:
  iVar7 = iVar7 + 1;
  lVar17 = lVar17 + 1;
  if (iVar11 == iVar7) goto LAB_039081fc;
  goto LAB_03907ff0;
LAB_039081fc:
  iVar11 = *(int *)(param_1 + 0x20);
  if (iVar11 == 0) {
    return 0;
  }
  lVar10 = *(long *)(param_1 + 0x28);
  goto LAB_0390820c;
}


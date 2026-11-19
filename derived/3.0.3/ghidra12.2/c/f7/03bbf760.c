
void FUN_03bbf760(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  FUN_03bbfaf0(param_1,0);
  FUN_03bbfaf0(param_1,1);
  FUN_03bbfaf0(param_1,2);
  FUN_03bbfaf0(param_1,3);
  FUN_03bbfaf0(param_1,4);
  plVar9 = *(long **)(param_1 + 200);
  plVar10 = (long *)PTR_DAT_04bc3ee8;
  if (plVar9 != (long *)0x0) {
    lVar12 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x28);
    lVar1 = lVar12 + 0x48;
    if (*(long *)(lVar12 + 0x50) == lVar1) {
LAB_03bbf920:
      *(undefined8 *)(param_1 + 0x88) = 0;
LAB_03bbf924:
      **(undefined1 **)(*(long *)(param_1 + 200) + 8) = 0;
LAB_03bbf930:
      iVar7 = -1;
    }
    else {
      lVar14 = (long)*(int *)(lVar12 + 0x5c);
      lVar13 = *(long *)(lVar12 + 0x50) - lVar14;
      while( true ) {
        plVar10 = (long *)(lVar13 + 8);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        (**(code **)(*plVar10 + 0x18))(plVar10);
        lVar11 = *(long *)(lVar13 + 0x10);
        (**(code **)(*plVar9 + 0x18))(plVar9);
        if (lVar11 == plVar9[1]) break;
        uVar8 = 0;
        lVar11 = plVar9[1] + 1;
        bVar6 = true;
        lVar2 = *(long *)(lVar13 + 0x10) + 1;
        do {
          lVar3 = lVar2 + uVar8;
          lVar4 = lVar11 + uVar8;
          cVar5 = *(char *)(lVar3 + -1);
          if (cVar5 != *(char *)(lVar4 + -1)) break;
          if (cVar5 == '\0') {
            if (bVar6) {
LAB_03bbf8dc:
              *(long *)(param_1 + 0x88) = lVar13;
              if (lVar13 != 0) goto LAB_03bbf8e4;
              goto LAB_03bbf924;
            }
            break;
          }
          cVar5 = *(char *)(lVar2 + uVar8);
          if (cVar5 != *(char *)(lVar11 + uVar8)) break;
          if (cVar5 == '\0') goto LAB_03bbf8dc;
          cVar5 = *(char *)(lVar3 + 1);
          if (cVar5 != *(char *)(lVar4 + 1)) break;
          if (cVar5 == '\0') goto LAB_03bbf8dc;
          bVar6 = uVar8 < 0x7fffe;
          uVar8 = uVar8 + 3;
        } while (uVar8 != 0x80001);
        lVar13 = *(long *)(lVar13 + lVar14 + 8) - lVar14;
        if (lVar13 == lVar1 - lVar14) goto LAB_03bbf920;
      }
      *(long *)(param_1 + 0x88) = lVar13;
LAB_03bbf8e4:
      lVar14 = *(long *)(lVar12 + 0x50);
      if (lVar14 == lVar1) goto LAB_03bbf930;
      iVar7 = 0;
      do {
        if (lVar14 == *(int *)(lVar12 + 0x5c) + lVar13) goto LAB_03bbf934;
        lVar14 = *(long *)(lVar14 + 8);
        iVar7 = iVar7 + 1;
      } while (lVar14 != lVar1);
      iVar7 = -1;
    }
LAB_03bbf934:
    plVar10 = &DAT_05aebb78;
    *(int *)(param_1 + 0xec) = iVar7;
  }
  plVar9 = *(long **)(param_1 + 0xd0);
  if (plVar9 == (long *)0x0) {
    return;
  }
  lVar12 = *(long *)(*plVar10 + 0x28);
  lVar1 = lVar12 + 0x68;
  if (*(long *)(lVar12 + 0x70) == lVar1) {
LAB_03bbfaa0:
    *(undefined8 *)(param_1 + 0x90) = 0;
LAB_03bbfaa4:
    **(undefined1 **)(*(long *)(param_1 + 0xd0) + 8) = 0;
  }
  else {
    lVar14 = (long)*(int *)(lVar12 + 0x7c);
    lVar13 = *(long *)(lVar12 + 0x70) - lVar14;
    while( true ) {
      plVar10 = (long *)(lVar13 + 8);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      lVar11 = *(long *)(lVar13 + 0x10);
      (**(code **)(*plVar9 + 0x18))(plVar9);
      if (lVar11 == plVar9[1]) break;
      uVar8 = 0;
      lVar11 = plVar9[1] + 1;
      bVar6 = true;
      lVar2 = *(long *)(lVar13 + 0x10) + 1;
      do {
        lVar3 = lVar2 + uVar8;
        lVar4 = lVar11 + uVar8;
        cVar5 = *(char *)(lVar3 + -1);
        if (cVar5 != *(char *)(lVar4 + -1)) break;
        if (cVar5 == '\0') {
          if (bVar6) {
LAB_03bbfa5c:
            *(long *)(param_1 + 0x90) = lVar13;
            if (lVar13 != 0) goto LAB_03bbfa64;
            goto LAB_03bbfaa4;
          }
          break;
        }
        cVar5 = *(char *)(lVar2 + uVar8);
        if (cVar5 != *(char *)(lVar11 + uVar8)) break;
        if (cVar5 == '\0') goto LAB_03bbfa5c;
        cVar5 = *(char *)(lVar3 + 1);
        if (cVar5 != *(char *)(lVar4 + 1)) break;
        if (cVar5 == '\0') goto LAB_03bbfa5c;
        bVar6 = uVar8 < 0x7fffe;
        uVar8 = uVar8 + 3;
      } while (uVar8 != 0x80001);
      lVar13 = *(long *)(lVar13 + lVar14 + 8) - lVar14;
      if (lVar13 == lVar1 - lVar14) goto LAB_03bbfaa0;
    }
    *(long *)(param_1 + 0x90) = lVar13;
LAB_03bbfa64:
    lVar14 = *(long *)(lVar12 + 0x70);
    if (lVar14 != lVar1) {
      iVar7 = 0;
      do {
        if (lVar14 == *(int *)(lVar12 + 0x7c) + lVar13) goto LAB_03bbfab4;
        lVar14 = *(long *)(lVar14 + 8);
        iVar7 = iVar7 + 1;
      } while (lVar14 != lVar1);
      iVar7 = -1;
      goto LAB_03bbfab4;
    }
  }
  iVar7 = -1;
LAB_03bbfab4:
  *(int *)(param_1 + 0xf0) = iVar7;
  return;
}


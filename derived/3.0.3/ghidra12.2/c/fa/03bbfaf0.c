
void FUN_03bbfaf0(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  plVar1 = (long *)(param_1 + 0xa0);
  plVar12 = plVar1 + param_2;
  if (4 < param_2) {
    plVar12 = plVar1;
  }
  if (*plVar12 == 0) {
    return;
  }
  lVar15 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x28);
  uVar11 = (ulong)param_2;
  lVar2 = lVar15 + 0x28;
  if (4 < param_2) {
    uVar11 = 0;
  }
  if (*(long *)(lVar15 + 0x30) == lVar2) {
LAB_03bbfcc0:
    puVar6 = (undefined8 *)(param_1 + 0x60) + param_2;
    if (4 < param_2) {
      puVar6 = (undefined8 *)(param_1 + 0x60);
    }
    *puVar6 = 0;
LAB_03bbfcd8:
    uVar11 = (ulong)param_2;
    if (4 < param_2) {
      uVar11 = 0;
    }
    **(undefined1 **)(plVar1[uVar11] + 8) = 0;
  }
  else {
    lVar17 = (long)*(int *)(lVar15 + 0x3c);
    plVar12 = (long *)plVar1[uVar11];
    lVar16 = *(long *)(lVar15 + 0x30) - lVar17;
    while( true ) {
      plVar13 = (long *)(lVar16 + 8);
      (**(code **)(*plVar13 + 0x18))(plVar13);
      (**(code **)(*plVar13 + 0x18))(plVar13);
      lVar14 = *(long *)(lVar16 + 0x10);
      (**(code **)(*plVar12 + 0x18))(plVar12);
      if (lVar14 == plVar12[1]) break;
      uVar11 = 0;
      lVar14 = plVar12[1] + 1;
      bVar9 = true;
      lVar3 = *(long *)(lVar16 + 0x10) + 1;
      do {
        lVar4 = lVar3 + uVar11;
        lVar5 = lVar14 + uVar11;
        cVar8 = *(char *)(lVar4 + -1);
        if (cVar8 != *(char *)(lVar5 + -1)) break;
        if (cVar8 == '\0') {
          if (bVar9) {
LAB_03bbfc60:
            plVar12 = (long *)(param_1 + 0x60) + param_2;
            if (4 < param_2) {
              plVar12 = (long *)(param_1 + 0x60);
            }
            *plVar12 = lVar16;
            if (lVar16 != 0) goto LAB_03bbfc7c;
            goto LAB_03bbfcd8;
          }
          break;
        }
        cVar8 = *(char *)(lVar3 + uVar11);
        if (cVar8 != *(char *)(lVar14 + uVar11)) break;
        if (cVar8 == '\0') goto LAB_03bbfc60;
        cVar8 = *(char *)(lVar4 + 1);
        if (cVar8 != *(char *)(lVar5 + 1)) break;
        if (cVar8 == '\0') goto LAB_03bbfc60;
        bVar9 = uVar11 < 0x7fffe;
        uVar11 = uVar11 + 3;
      } while (uVar11 != 0x80001);
      lVar16 = *(long *)(lVar16 + lVar17 + 8) - lVar17;
      if (lVar16 == lVar2 - lVar17) goto LAB_03bbfcc0;
    }
    plVar1 = (long *)(param_1 + 0x60) + param_2;
    if (4 < param_2) {
      plVar1 = (long *)(param_1 + 0x60);
    }
    *plVar1 = lVar16;
LAB_03bbfc7c:
    lVar17 = *(long *)(lVar15 + 0x30);
    if (lVar17 != lVar2) {
      iVar10 = 0;
      do {
        if (lVar17 == *(int *)(lVar15 + 0x3c) + lVar16) goto LAB_03bbfcf4;
        lVar17 = *(long *)(lVar17 + 8);
        iVar10 = iVar10 + 1;
      } while (lVar17 != lVar2);
      iVar10 = -1;
      goto LAB_03bbfcf4;
    }
  }
  iVar10 = -1;
LAB_03bbfcf4:
  piVar7 = (int *)(param_1 + 0xd8) + param_2;
  if (4 < param_2) {
    piVar7 = (int *)(param_1 + 0xd8);
  }
  *piVar7 = iVar10;
  return;
}


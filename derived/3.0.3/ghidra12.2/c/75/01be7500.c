
bool FUN_01be7500(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  iVar4 = (int)param_1[2];
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    lVar10 = *param_1;
    iVar3 = iVar5;
    if (0 < *(int *)((long)param_1 + 0xc)) {
      iVar3 = *(int *)((long)param_1 + 0xc);
    }
    *(int *)((long)param_1 + 0xc) = iVar3 + -1;
    *(int *)(param_1 + 2) = iVar4 + 1;
    iVar2 = iVar5;
    if (iVar3 <= iVar5) {
      iVar2 = 0;
    }
    plVar9 = (long *)(param_2 + 8);
    iVar2 = (iVar3 + -1) - iVar2;
    lVar11 = lVar10 + (long)iVar2 * 0xc0;
    pvVar7 = *(void **)(lVar11 + 0x10);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    pvVar8 = *(void **)(param_2 + 0x10);
    if (pvVar7 != pvVar8) {
      (**(code **)(*(long *)(param_2 + 8) + 0x18))(plVar9);
      lVar6 = 0;
      do {
        if (*(char *)(*(long *)(param_2 + 0x10) + lVar6) == '\0') goto LAB_01be75ec;
        lVar1 = *(long *)(param_2 + 0x10) + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_01be75ec;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_01be75ec;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_01be75ec:
      iVar3 = (int)lVar6;
      if (*(int *)(lVar11 + 0x18) <= (int)lVar6) {
        iVar3 = *(int *)(lVar11 + 0x18) + -1;
      }
      memcpy(pvVar7,pvVar8,(long)iVar3);
      *(undefined1 *)((long)pvVar7 + (long)iVar3) = 0;
    }
    pvVar7 = *(void **)(lVar11 + 0x68);
    plVar9 = (long *)(param_2 + 0x60);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    pvVar8 = *(void **)(param_2 + 0x68);
    if (pvVar7 != pvVar8) {
      (**(code **)(*(long *)(param_2 + 0x60) + 0x18))(plVar9);
      lVar6 = 0;
      do {
        if (*(char *)(*(long *)(param_2 + 0x68) + lVar6) == '\0') goto LAB_01be768c;
        lVar1 = *(long *)(param_2 + 0x68) + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_01be768c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_01be768c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_01be768c:
      iVar3 = (int)lVar6;
      if (*(int *)(lVar11 + 0x70) <= (int)lVar6) {
        iVar3 = *(int *)(lVar11 + 0x70) + -1;
      }
      memcpy(pvVar7,pvVar8,(long)iVar3);
      *(undefined1 *)((long)pvVar7 + (long)iVar3) = 0;
    }
    *(undefined4 *)(lVar10 + (long)iVar2 * 0xc0 + 0xb8) = *(undefined4 *)(param_2 + 0xb8);
  }
  return iVar4 < iVar5;
}


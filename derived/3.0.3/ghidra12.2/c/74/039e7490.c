
undefined8 FUN_039e7490(long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  
  iVar4 = *(int *)(param_1 + 0x610);
  if (iVar4 != 0) {
    lVar11 = *(long *)(param_1 + 0x618);
    iVar12 = 0;
    do {
      lVar6 = (long)*(char *)(lVar11 + (long)iVar12 * 0x168 + 0x160);
      if (lVar6 != -1) {
        lVar10 = lVar11 + (long)iVar12 * 0x168;
        lVar6 = *(long *)(param_1 + 0x168) + lVar6 * 0x100;
        pvVar8 = *(void **)(lVar10 + 0xa0);
        plVar1 = (long *)(lVar6 + 0x700);
        (**(code **)(*(long *)(lVar6 + 0x700) + 0x18))(plVar1);
        pvVar9 = *(void **)(lVar6 + 0x708);
        if (pvVar8 != pvVar9) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
          lVar7 = 0;
          do {
            if (*(char *)(*(long *)(lVar6 + 0x708) + lVar7) == '\0') goto LAB_039e75bc;
            lVar2 = *(long *)(lVar6 + 0x708) + lVar7;
            if (*(char *)(lVar2 + 1) == '\0') {
              lVar7 = lVar7 + 1;
              goto LAB_039e75bc;
            }
            if (*(char *)(lVar2 + 2) == '\0') {
              lVar7 = lVar7 + 2;
              goto LAB_039e75bc;
            }
            lVar7 = lVar7 + 3;
          } while (lVar7 != 0x80001);
          lVar7 = 0;
LAB_039e75bc:
          iVar5 = *(int *)(lVar10 + 0xa8);
          iVar3 = (int)lVar7;
          if (iVar5 <= (int)lVar7) {
            iVar3 = iVar5 + -1;
          }
          memcpy(pvVar8,pvVar9,(long)iVar3);
          *(undefined1 *)((long)pvVar8 + (long)iVar3) = 0;
        }
      }
      lVar6 = (long)*(char *)(lVar11 + (long)iVar12 * 0x168 + 0x161);
      if (lVar6 != -1) {
        lVar10 = lVar11 + (long)iVar12 * 0x168;
        lVar6 = *(long *)(param_1 + 0x168) + lVar6 * 0x100;
        pvVar8 = *(void **)(lVar10 + 0xf0);
        plVar1 = (long *)(lVar6 + 0x700);
        (**(code **)(*(long *)(lVar6 + 0x700) + 0x18))(plVar1);
        pvVar9 = *(void **)(lVar6 + 0x708);
        if (pvVar8 != pvVar9) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
          lVar7 = 0;
          do {
            if (*(char *)(*(long *)(lVar6 + 0x708) + lVar7) == '\0') goto LAB_039e74dc;
            lVar2 = *(long *)(lVar6 + 0x708) + lVar7;
            if (*(char *)(lVar2 + 1) == '\0') {
              lVar7 = lVar7 + 1;
              goto LAB_039e74dc;
            }
            if (*(char *)(lVar2 + 2) == '\0') {
              lVar7 = lVar7 + 2;
              goto LAB_039e74dc;
            }
            lVar7 = lVar7 + 3;
          } while (lVar7 != 0x80001);
          lVar7 = 0;
LAB_039e74dc:
          iVar5 = *(int *)(lVar10 + 0xf8);
          iVar3 = (int)lVar7;
          if (iVar5 <= (int)lVar7) {
            iVar3 = iVar5 + -1;
          }
          memcpy(pvVar8,pvVar9,(long)iVar3);
          *(undefined1 *)((long)pvVar8 + (long)iVar3) = 0;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar4 != iVar12);
  }
  return 1;
}


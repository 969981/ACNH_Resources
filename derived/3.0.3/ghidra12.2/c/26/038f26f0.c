
undefined8 FUN_038f26f0(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  void *__src;
  void *pvVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  
  plVar10 = *(long **)(param_1 + 0xa0);
  if (plVar10 != (long *)(param_1 + 0x98)) {
    plVar8 = plVar10 + -6;
    do {
      (**(code **)(plVar10[-6] + 0x18))(plVar8);
      (**(code **)(plVar10[-6] + 0x18))(plVar8);
      lVar12 = plVar8[1];
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = param_2[1];
      if (lVar12 == lVar6) {
LAB_038f280c:
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar6 = 0;
        goto LAB_038f2824;
      }
      uVar7 = 0;
      bVar5 = true;
      do {
        lVar12 = plVar8[1] + 2 + uVar7;
        cVar3 = *(char *)(lVar12 + -2);
        if (cVar3 != *(char *)(lVar6 + uVar7)) break;
        if (cVar3 == '\0') {
          if (bVar5) goto LAB_038f280c;
          break;
        }
        cVar3 = *(char *)(lVar12 + -1);
        if (cVar3 != *(char *)(lVar6 + uVar7 + 1)) break;
        if (cVar3 == '\0') goto LAB_038f280c;
        cVar3 = *(char *)(plVar8[1] + 2 + uVar7);
        if (cVar3 != *(char *)(lVar6 + uVar7 + 2)) break;
        if (cVar3 == '\0') goto LAB_038f280c;
        bVar5 = uVar7 < 0x7fffe;
        uVar7 = uVar7 + 3;
      } while (uVar7 != 0x80001);
      plVar10 = (long *)plVar10[1];
      plVar8 = plVar10 + -6;
    } while (plVar8 != (long *)(param_1 + 0x68));
  }
  return 0;
  while( true ) {
    lVar12 = param_3[1] + lVar6;
    if (*(char *)(lVar12 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_038f2868;
    }
    if (*(char *)(lVar12 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_038f2868;
    }
    lVar6 = lVar6 + 3;
    if (lVar6 == 0x80001) break;
LAB_038f2824:
    if (*(char *)(param_3[1] + lVar6) == '\0') goto LAB_038f2868;
  }
  lVar6 = 0;
LAB_038f2868:
  (**(code **)(plVar8[3] + 0x18))(plVar8 + 3);
  pvVar9 = (void *)plVar8[4];
  lVar12 = 0;
  do {
    uVar11 = (uint)lVar6;
    if (*(char *)((long)pvVar9 + lVar12) == '\0') {
LAB_038f28c0:
      if ((int)uVar11 < (int)lVar12) goto LAB_038f28c8;
      goto LAB_038f293c;
    }
    if (*(char *)((long)pvVar9 + lVar12 + 1) == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_038f28c0;
    }
    if (*(char *)((long)pvVar9 + lVar12 + 2) == '\0') {
      if ((int)lVar12 + 2 <= (int)uVar11) goto LAB_038f293c;
      goto LAB_038f28c8;
    }
    lVar12 = lVar12 + 3;
  } while (lVar12 != 0x80001);
  if (uVar11 < 0x80000000) {
LAB_038f293c:
    if (*plVar10 != 0) {
      *(long *)(*plVar10 + 8) = plVar10[1];
    }
    if ((long *)plVar10[1] != (long *)0x0) {
      *(long *)plVar10[1] = *plVar10;
    }
    *plVar10 = 0;
    plVar10[1] = 0;
    puVar1 = PTR_DAT_04bc9388 + 0x10;
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
    plVar8[3] = (long)puVar1;
    puVar4 = PTR_DAT_04bb2698;
    pvVar9 = (void *)plVar8[4];
    if (pvVar9 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar9);
      }
      else {
        plVar10 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,pvVar9);
        }
      }
    }
    pvVar9 = (void *)plVar8[1];
    *plVar8 = (long)puVar1;
    if (pvVar9 != (void *)0x0) {
      if (*(long *)puVar4 == 0) {
        free(pvVar9);
      }
      else {
        plVar10 = (long *)FUN_038cb610(*(long *)puVar4,pvVar9);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,pvVar9);
        }
      }
    }
    *plVar8 = *(long *)(param_1 + 0xb0);
    *(long **)(param_1 + 0xb0) = plVar8;
    FUN_038f2500(param_1,param_2,param_3,param_4);
  }
  else {
LAB_038f28c8:
    (**(code **)(*param_3 + 0x18))(param_3);
    __src = (void *)param_3[1];
    if (pvVar9 != __src) {
      if ((int)uVar11 < 0) {
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar6 = 0;
        do {
          if (*(char *)(param_3[1] + lVar6) == '\0') goto LAB_038f2a28;
          lVar12 = param_3[1] + lVar6;
          if (*(char *)(lVar12 + 1) == '\0') {
            lVar6 = lVar6 + 1;
            goto LAB_038f2a28;
          }
          if (*(char *)(lVar12 + 2) == '\0') {
            lVar6 = lVar6 + 2;
            goto LAB_038f2a28;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        lVar6 = 0;
      }
LAB_038f2a28:
      iVar2 = (int)lVar6;
      if ((int)plVar8[5] <= (int)lVar6) {
        iVar2 = (int)plVar8[5] + -1;
      }
      memcpy(pvVar9,__src,(long)iVar2);
      *(undefined1 *)((long)pvVar9 + (long)iVar2) = 0;
    }
  }
  return 1;
}


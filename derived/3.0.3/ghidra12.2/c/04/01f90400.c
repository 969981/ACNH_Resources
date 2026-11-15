
long FUN_01f90400(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  void *pvVar9;
  uint uVar10;
  void *pvVar11;
  long *plVar12;
  long lVar13;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (0 < *(int *)(lVar7 + 0x1c)) {
    uVar10 = 0;
    do {
      uVar2 = uVar10;
      if (*(uint *)(lVar7 + 0x38) <= uVar10) {
        uVar2 = 0;
      }
      plVar12 = (long *)(*(long *)(lVar7 + 0x40) + (ulong)uVar2 * 0x10);
      (**(code **)(*plVar12 + 0x18))(plVar12);
      (**(code **)(*plVar12 + 0x18))(plVar12);
      lVar13 = plVar12[1];
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar7 = param_2[1];
      if (lVar13 == lVar7) {
LAB_01f9052c:
        if (((uVar10 == *(uint *)(*(long *)(param_1 + 0x10) + 8)) &&
            ((*(byte *)(param_1 + 0x18) >> 3 & 1) == 0)) && ((char)param_2[0x24] == '\0')) {
          *(uint *)(param_1 + 0xd0) = uVar10;
          bVar6 = *(byte *)(param_1 + 0x18) & 0xf9 | 4;
          goto LAB_01f90568;
        }
        *(uint *)(param_1 + 0xd0) = uVar10;
        break;
      }
      uVar8 = 0;
      bVar5 = true;
      lVar13 = plVar12[1] + 2;
      do {
        lVar1 = lVar13 + uVar8;
        cVar4 = *(char *)(lVar1 + -2);
        if (cVar4 != *(char *)(lVar7 + uVar8)) break;
        if (cVar4 == '\0') {
          if (bVar5) goto LAB_01f9052c;
          break;
        }
        cVar4 = *(char *)(lVar1 + -1);
        if (cVar4 != *(char *)(lVar7 + uVar8 + 1)) break;
        if (cVar4 == '\0') goto LAB_01f9052c;
        cVar4 = *(char *)(lVar13 + uVar8);
        if (cVar4 != *(char *)(lVar7 + uVar8 + 2)) break;
        if (cVar4 == '\0') goto LAB_01f9052c;
        bVar5 = uVar8 < 0x7fffe;
        uVar8 = uVar8 + 3;
      } while (uVar8 != 0x80001);
      lVar7 = *(long *)(param_1 + 0x10);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < *(int *)(lVar7 + 0x1c));
  }
  bVar6 = *(byte *)(param_1 + 0x18) | 2;
LAB_01f90568:
  *(byte *)(param_1 + 0x18) = bVar6;
  pvVar9 = *(void **)(param_1 + 0x118);
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar11 = (void *)param_2[1];
  if (pvVar9 != pvVar11) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = 0;
    do {
      if (*(char *)(param_2[1] + lVar7) == '\0') goto LAB_01f9062c;
      lVar13 = param_2[1] + lVar7;
      if (*(char *)(lVar13 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01f9062c;
      }
      if (*(char *)(lVar13 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01f9062c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01f9062c:
    iVar3 = (int)lVar7;
    if (*(int *)(param_1 + 0x120) <= (int)lVar7) {
      iVar3 = *(int *)(param_1 + 0x120) + -1;
    }
    memcpy(pvVar9,pvVar11,(long)iVar3);
    *(undefined1 *)((long)pvVar9 + (long)iVar3) = 0;
  }
  pvVar9 = *(void **)(param_1 + 0x150);
  plVar12 = param_2 + 7;
  (**(code **)(*plVar12 + 0x18))(plVar12);
  pvVar11 = (void *)param_2[8];
  if (pvVar9 != pvVar11) {
    (**(code **)(param_2[7] + 0x18))(plVar12);
    lVar7 = 0;
    do {
      if (*(char *)(param_2[8] + lVar7) == '\0') goto LAB_01f906cc;
      lVar13 = param_2[8] + lVar7;
      if (*(char *)(lVar13 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01f906cc;
      }
      if (*(char *)(lVar13 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01f906cc;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01f906cc:
    iVar3 = (int)lVar7;
    if (*(int *)(param_1 + 0x158) <= (int)lVar7) {
      iVar3 = *(int *)(param_1 + 0x158) + -1;
    }
    memcpy(pvVar9,pvVar11,(long)iVar3);
    *(undefined1 *)((long)pvVar9 + (long)iVar3) = 0;
  }
  pvVar9 = *(void **)(param_1 + 0x188);
  plVar12 = param_2 + 0xe;
  (**(code **)(*plVar12 + 0x18))(plVar12);
  pvVar11 = (void *)param_2[0xf];
  if (pvVar9 != pvVar11) {
    (**(code **)(param_2[0xe] + 0x18))(plVar12);
    lVar7 = 0;
    do {
      if (*(char *)(param_2[0xf] + lVar7) == '\0') goto LAB_01f9076c;
      lVar13 = param_2[0xf] + lVar7;
      if (*(char *)(lVar13 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01f9076c;
      }
      if (*(char *)(lVar13 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01f9076c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01f9076c:
    iVar3 = (int)lVar7;
    if (*(int *)(param_1 + 400) <= (int)lVar7) {
      iVar3 = *(int *)(param_1 + 400) + -1;
    }
    memcpy(pvVar9,pvVar11,(long)iVar3);
    *(undefined1 *)((long)pvVar9 + (long)iVar3) = 0;
  }
  pvVar9 = *(void **)(param_1 + 0x1e0);
  plVar12 = param_2 + 0x19;
  (**(code **)(*plVar12 + 0x18))(plVar12);
  pvVar11 = (void *)param_2[0x1a];
  if (pvVar9 != pvVar11) {
    (**(code **)(param_2[0x19] + 0x18))(plVar12);
    lVar7 = 0;
    do {
      if (*(char *)(param_2[0x1a] + lVar7) == '\0') goto LAB_01f9080c;
      lVar13 = param_2[0x1a] + lVar7;
      if (*(char *)(lVar13 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01f9080c;
      }
      if (*(char *)(lVar13 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01f9080c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01f9080c:
    iVar3 = (int)lVar7;
    if (*(int *)(param_1 + 0x1e8) <= (int)lVar7) {
      iVar3 = *(int *)(param_1 + 0x1e8) + -1;
    }
    memcpy(pvVar9,pvVar11,(long)iVar3);
    *(undefined1 *)((long)pvVar9 + (long)iVar3) = 0;
  }
  *(short *)(param_1 + 0x230) = (short)param_2[0x24];
  FUN_00b12060(param_1 + 0x238,param_2 + 0x25);
  return param_1 + 0x110;
}


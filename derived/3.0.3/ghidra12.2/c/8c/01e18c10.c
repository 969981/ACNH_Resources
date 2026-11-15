
void FUN_01e18c10(long *param_1,long *param_2,long *param_3,void *param_4)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  void *__dest;
  void *__src;
  long *plVar8;
  
  if ((param_1[4] == 0) || (*(char *)param_2[1] == '\0')) {
    return;
  }
  iVar4 = (int)param_1[2];
  iVar5 = (int)param_1[5];
  if (iVar5 <= iVar4) {
    lVar6 = *param_1;
    if (iVar4 < 1) {
      lVar6 = 0;
    }
    plVar8 = (long *)0x0;
    if (lVar6 != 0) {
      plVar8 = (long *)(lVar6 + -0x880);
    }
    if (plVar8[0x110] != 0) {
      *(long *)(plVar8[0x110] + 8) = plVar8[0x111];
    }
    if ((long *)plVar8[0x111] != (long *)0x0) {
      *(long *)plVar8[0x111] = plVar8[0x110];
    }
    plVar8[0x110] = 0;
    plVar8[0x111] = 0;
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    *plVar8 = param_1[3];
    param_1[3] = (long)plVar8;
    iVar4 = (int)param_1[2];
    iVar5 = (int)param_1[5];
  }
  if (iVar4 < iVar5) {
    plVar8 = (long *)param_1[3];
    if (plVar8 != (long *)0x0) {
      param_1[3] = *plVar8;
    }
    *(undefined1 *)((long)plVar8 + 0x24) = 0;
    *(undefined4 *)(plVar8 + 4) = 0x300;
    plVar8[2] = (long)&DAT_04a5caa8;
    plVar8[3] = (long)plVar8 + 0x24;
    *(undefined1 *)((long)plVar8 + 0x323) = 0;
    *(undefined8 *)((long)plVar8 + 0x355) = 0;
    *(undefined8 *)((long)plVar8 + 0x35d) = 0;
    *(undefined8 *)((long)plVar8 + 0x365) = 0;
    *(undefined8 *)((long)plVar8 + 0x36d) = 0;
    *(undefined8 *)((long)plVar8 + 0x375) = 0;
    *(undefined8 *)((long)plVar8 + 0x37d) = 0;
    *(undefined8 *)((long)plVar8 + 0x385) = 0;
    *(undefined8 *)((long)plVar8 + 0x38d) = 0;
    *(undefined8 *)((long)plVar8 + 0x395) = 0;
    *(undefined8 *)((long)plVar8 + 0x39d) = 0;
    *(undefined8 *)((long)plVar8 + 0x3a5) = 0;
    *(undefined8 *)((long)plVar8 + 0x3ad) = 0;
    *(undefined8 *)((long)plVar8 + 0x3b5) = 0;
    *(undefined8 *)((long)plVar8 + 0x3bd) = 0;
    *(undefined8 *)((long)plVar8 + 0x3c5) = 0;
    *(undefined8 *)((long)plVar8 + 0x3cd) = 0;
    *(undefined8 *)((long)plVar8 + 0x3d5) = 0;
    *(undefined4 *)((long)plVar8 + 0x3dd) = 0;
    memset((void *)((long)plVar8 + 0x469),0,0x408);
    plVar1 = plVar8 + 0x110;
    *plVar1 = 0;
    plVar8[0x111] = 0;
    puVar7 = (undefined8 *)param_1[1];
    param_1[1] = (long)plVar1;
    *plVar1 = (long)param_1;
    plVar8[0x111] = (long)puVar7;
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = plVar1;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  else {
    plVar8 = (long *)0x0;
  }
  __dest = (void *)plVar8[3];
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_01e18e1c;
      lVar2 = param_2[1] + lVar6;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01e18e1c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01e18e1c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01e18e1c:
    iVar4 = (int)lVar6;
    if ((int)plVar8[4] <= (int)lVar6) {
      iVar4 = (int)plVar8[4] + -1;
    }
    memcpy(__dest,__src,(long)iVar4);
    *(undefined1 *)((long)__dest + (long)iVar4) = 0;
  }
  (**(code **)(plVar8[2] + 0x18))();
  uVar3 = FUN_006bd550(plVar8[3],0);
  *(undefined4 *)plVar8 = uVar3;
  plVar8[1] = *param_3;
  memcpy(plVar8 + 0x65,param_4,0x558);
  return;
}


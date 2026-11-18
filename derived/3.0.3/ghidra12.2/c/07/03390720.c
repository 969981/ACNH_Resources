
void FUN_03390720(undefined8 param_1,void *param_2)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  void *__dest;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  iVar4 = FUN_00b08880(param_2,0,0);
  iVar5 = 0;
  while ((&DAT_05739dc8)[(long)iVar5 * 0x4a] != iVar4) {
    iVar5 = iVar5 + 1;
    if (iVar5 == 0x4f) {
      return;
    }
  }
  lVar6 = (long)iVar5;
  (**(code **)(&DAT_05739dc0)[lVar6 * 0x25])(&DAT_05739dc0 + lVar6 * 0x25);
  lVar7 = (&DAT_05739ee0)[lVar6 * 0x25];
  plVar1 = &DAT_05739e08 + lVar6 * 0x25;
  if (lVar7 != 0) {
    (&DAT_05739ee0)[lVar6 * 0x25] = 0;
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 8) = (&DAT_05739e10)[lVar6 * 0x25];
    }
    if ((long *)(&DAT_05739e10)[lVar6 * 0x25] != (long *)0x0) {
      *(long *)(&DAT_05739e10)[lVar6 * 0x25] = *plVar1;
    }
    *plVar1 = 0;
    (&DAT_05739e10)[lVar6 * 0x25] = 0;
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  (&DAT_05739ee0)[lVar6 * 0x25] = &DAT_05739da8;
  lVar7 = (long)DAT_05739da8;
  plVar2 = plVar1;
  *plVar1 = (long)DAT_05739da8;
  DAT_05739da8 = plVar2;
  (&DAT_05739e10)[lVar6 * 0x25] = &DAT_05739da8;
  if (lVar7 != 0) {
    *(long **)(lVar7 + 8) = plVar1;
  }
  if (DAT_05739db8 < 0) {
    plVar1 = (long *)0x0;
  }
  bVar3 = DAT_05739db8 == -1;
  DAT_05739db8 = DAT_05739db8 + 1;
  if (bVar3) {
    return;
  }
  __dest = (void *)plVar1[3];
  if (__dest != param_2) {
    lVar6 = 0;
    do {
      if (*(char *)((long)param_2 + lVar6) == '\0') goto LAB_03390890;
      if (*(char *)((long)param_2 + lVar6 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_03390890;
      }
      if (*(char *)((long)param_2 + lVar6 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_03390890;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_03390890:
    iVar4 = (int)lVar6;
    if ((int)plVar1[4] <= (int)lVar6) {
      iVar4 = (int)plVar1[4] + -1;
    }
    memcpy(__dest,param_2,(long)iVar4);
    *(undefined1 *)((long)__dest + (long)iVar4) = 0;
  }
  lVar6 = 0;
  iVar4 = 0;
  do {
    if (*(char *)((long)iVar5 * 0x128 + 0x5739dcd + (long)iVar4) != '\0') {
      *(undefined2 *)((long)plVar1 + lVar6 + 0x68) = 1;
    }
    lVar6 = lVar6 + 2;
    iVar4 = iVar4 + 1;
  } while (lVar6 != 0x6a);
  return;
}


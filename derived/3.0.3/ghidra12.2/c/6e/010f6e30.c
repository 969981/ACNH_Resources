
long * FUN_010f6e30(long *param_1,long *param_2,long *param_3)

{
  void *__dest;
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 *__src;
  void *__src_00;
  undefined **local_a8;
  undefined1 *puStack_a0;
  int local_98;
  undefined1 auStack_94 [63];
  undefined1 local_55;
  
  puVar2 = PTR_DAT_04bb2f70;
  if ((int)param_1[3] < *(int *)((long)param_1 + 0x1c)) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      param_1[1] = *plVar6;
    }
    FUN_010f7200(plVar6,param_1,param_2,param_3);
    *(int *)(param_1 + 3) = (int)param_1[3] + 1;
    lVar4 = FUN_010f7460(param_1,*param_1,plVar6);
    *param_1 = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 1;
    return plVar6 + 0xf;
  }
  local_98 = 0x40;
  local_55 = 0;
  local_a8 = (undefined **)(PTR_DAT_04bb2f70 + 0x10);
  puStack_a0 = auStack_94;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (undefined1 *)param_2[1];
  if (auStack_94 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_010f6f5c;
      lVar5 = param_2[1] + lVar4;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_010f6f5c;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_010f6f5c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_010f6f5c:
    iVar3 = (int)lVar4;
    if (local_98 <= (int)lVar4) {
      iVar3 = local_98 + -1;
    }
    memcpy(auStack_94,__src,(long)iVar3);
    auStack_94[iVar3] = 0;
  }
  lVar4 = *param_1;
  local_a8 = &PTR_LAB_048fb9f8;
  while( true ) {
    while( true ) {
      if (lVar4 == 0) {
        return (long *)0x0;
      }
      iVar3 = FUN_010f70d0(&local_a8,lVar4 + 0x20);
      if (-1 < iVar3) break;
      lVar4 = *(long *)(lVar4 + 8);
    }
    if (iVar3 == 0) break;
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  plVar6 = (long *)(lVar4 + 0x78);
  (**(code **)*plVar6)(plVar6);
  __dest = (void *)(lVar4 + 0x8c);
  *(undefined1 *)(lVar4 + 0xcb) = 0;
  *(undefined4 *)(lVar4 + 0x88) = 0x40;
  *plVar6 = (long)(puVar2 + 0x10);
  *(void **)(lVar4 + 0x80) = __dest;
  (**(code **)(*param_3 + 0x18))(param_3);
  __src_00 = (void *)param_3[1];
  if (__dest != __src_00) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar5 = 0;
    do {
      if (*(char *)(param_3[1] + lVar5) == '\0') goto LAB_010f707c;
      lVar1 = param_3[1] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_010f707c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_010f707c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_010f707c:
    iVar3 = (int)lVar5;
    if (*(int *)(lVar4 + 0x88) <= (int)lVar5) {
      iVar3 = *(int *)(lVar4 + 0x88) + -1;
    }
    memcpy(__dest,__src_00,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  }
  *plVar6 = (long)&PTR_LAB_048fb9f8;
  return plVar6;
}



void FUN_03a174e0(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  void *__dest;
  void *__src;
  
  lVar6 = param_2[1];
  plVar7 = (long *)param_1[1];
  __dest = (void *)param_1[0x48];
  (**(code **)(param_2[0x47] + 0x18))(param_2 + 0x47);
  __src = (void *)param_2[0x48];
  if (__dest != __src) {
    (**(code **)(param_2[0x47] + 0x18))(param_2 + 0x47);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[0x48] + lVar4) == '\0') goto LAB_03a1758c;
      lVar5 = param_2[0x48] + lVar4;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_03a1758c;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_03a1758c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_03a1758c:
    iVar1 = (int)lVar4;
    if ((int)param_1[0x49] <= (int)lVar4) {
      iVar1 = (int)param_1[0x49] + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  }
  lVar5 = param_1[0x25];
  lVar4 = param_1[0x26];
  iVar1 = (**(code **)(*param_1 + 0xb0))(param_1);
  iVar2 = (**(code **)(*param_2 + 0xb0))(param_2);
  if (iVar1 == iVar2) {
    for (; lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar6);
      plVar7 = (long *)plVar7[2];
    }
  }
  else if (lVar6 != 0) {
    if (plVar7 == (long *)0x0) {
      do {
        lVar6 = *(long *)(lVar6 + 0x10);
      } while (lVar6 != 0);
    }
    else {
      do {
        plVar8 = plVar7;
        do {
          uVar3 = (**(code **)(*plVar8 + 0x10))(plVar8,lVar6);
          if ((uVar3 & 1) != 0) break;
          plVar8 = (long *)plVar8[2];
        } while (plVar8 != (long *)0x0);
        lVar6 = *(long *)(lVar6 + 0x10);
      } while (lVar6 != 0);
    }
  }
  param_1[0x25] = lVar5;
  *(int *)(param_1 + 0x26) = (int)lVar4;
  return;
}


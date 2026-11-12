
void FUN_00764d50(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  long *plVar5;
  void *__dest;
  char *pcVar6;
  void *__src;
  
  plVar5 = *(long **)(param_1 + 0x90);
  if (*(char *)plVar5[1] == '\0') {
    plVar5 = *(long **)(param_1 + 0x98);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    pcVar6 = (char *)plVar5[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if (pcVar6 == pcVar3) {
      return;
    }
    pcVar6 = (char *)plVar5[1];
    if (*pcVar6 == *pcVar3) {
      if (*pcVar6 == '\0') {
        return;
      }
      lVar4 = 0;
      while ((lVar4 != 0x80000 && (pcVar6[lVar4 + 1] == pcVar3[lVar4 + 1]))) {
        if (pcVar6[lVar4 + 1] == '\0') {
          return;
        }
        lVar1 = lVar4 + 2;
        if (pcVar6[lVar1] != pcVar3[lVar4 + 2]) break;
        lVar4 = lVar4 + 2;
        if (pcVar6[lVar1] == '\0') {
          return;
        }
      }
    }
    __dest = *(void **)(param_1 + 0x40);
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (void *)param_2[1];
    if (__dest == __src) {
      return;
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_00764fac;
      lVar1 = param_2[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') goto LAB_00764fa0;
      if (*(char *)(lVar1 + 2) == '\0') goto LAB_00764fa8;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
  }
  else {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    pcVar6 = (char *)plVar5[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar3 = (char *)param_2[1];
    if (pcVar6 == pcVar3) {
      return;
    }
    pcVar6 = (char *)plVar5[1];
    if (*pcVar6 == *pcVar3) {
      if (*pcVar6 == '\0') {
        return;
      }
      lVar4 = 0;
      while ((lVar4 != 0x80000 && (pcVar6[lVar4 + 1] == pcVar3[lVar4 + 1]))) {
        if (pcVar6[lVar4 + 1] == '\0') {
          return;
        }
        lVar1 = lVar4 + 2;
        if (pcVar6[lVar1] != pcVar3[lVar4 + 2]) break;
        lVar4 = lVar4 + 2;
        if (pcVar6[lVar1] == '\0') {
          return;
        }
      }
    }
    __dest = *(void **)(param_1 + 0x40);
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (void *)param_2[1];
    if (__dest == __src) {
      return;
    }
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_00764fac;
      lVar1 = param_2[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') goto LAB_00764fa0;
      if (*(char *)(lVar1 + 2) == '\0') goto LAB_00764fa8;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
  }
  lVar4 = 0;
LAB_00764fac:
  iVar2 = (int)lVar4;
  if (*(int *)(param_1 + 0x48) <= (int)lVar4) {
    iVar2 = *(int *)(param_1 + 0x48) + -1;
  }
  memcpy(__dest,__src,(long)iVar2);
  *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  return;
LAB_00764fa0:
  lVar4 = lVar4 + 1;
  goto LAB_00764fac;
LAB_00764fa8:
  lVar4 = lVar4 + 2;
  goto LAB_00764fac;
}


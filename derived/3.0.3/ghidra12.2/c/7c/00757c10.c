
void FUN_00757c10(long *param_1,long *param_2)

{
  void *__dest;
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  void *__src;
  long *plVar5;
  long *plVar6;
  
  if ((int)param_1[2] < (int)param_1[5]) {
    plVar5 = (long *)param_1[3];
    if (plVar5 != (long *)0x0) {
      param_1[3] = *plVar5;
    }
    __dest = (void *)((long)plVar5 + 0x14);
    *(undefined4 *)(plVar5 + 2) = 0x80;
    puVar3 = PTR_DAT_04bb2e90;
    *(undefined1 *)((long)plVar5 + 0x93) = 0;
    *plVar5 = (long)(puVar3 + 0x10);
    plVar5[1] = (long)__dest;
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (void *)param_2[1];
    if (__dest != __src) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar4 = 0;
      do {
        if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_00757cec;
        lVar1 = param_2[1] + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_00757cec;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_00757cec;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_00757cec:
      iVar2 = (int)lVar4;
      if ((int)plVar5[2] <= (int)lVar4) {
        iVar2 = (int)plVar5[2] + -1;
      }
      memcpy(__dest,__src,(long)iVar2);
      *(undefined1 *)((long)__dest + (long)iVar2) = 0;
    }
    *plVar5 = (long)&DAT_048fc708;
    lVar4 = param_2[0x13];
    plVar6 = plVar5 + 0x14;
    *plVar6 = 0;
    plVar5[0x15] = 0;
    *(int *)(plVar5 + 0x13) = (int)lVar4;
    lVar4 = *param_1;
    *param_1 = (long)plVar6;
    *plVar6 = lVar4;
    plVar5[0x15] = (long)param_1;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar6;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}

